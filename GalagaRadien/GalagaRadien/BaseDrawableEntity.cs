using System;
using System.Collections.Generic;
using System.Linq;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Audio;
using Microsoft.Xna.Framework.Content;
using Microsoft.Xna.Framework.GamerServices;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Media;
using XnaUtility.Debug;
using XnaUtility;


namespace GalagaRadien
{
    /// <summary>
    /// This is a game component that implements IUpdateable.
    /// </summary>
    public class BaseDrawableEntity : Microsoft.Xna.Framework.DrawableGameComponent
    {
        protected AtlasHandler atlasHandler;
        protected SpriteBatch spriteBatch;
        protected Random random;
        protected XnaUtility.Debug.XnaWatch watch;
        protected GraphicsDevice device;
        public static readonly List<BaseDrawableEntity> RecycleBin = new List<BaseDrawableEntity>();
        protected Vector2 Pos;
        protected Vector2 Origin;
        protected Vector2 Velocity;
        protected float Speed;
        protected List<Rectangle> Frames = new List<Rectangle>();
        protected int CurrentFrameIndex = 0;
        protected Rectangle BoundingRect;
        private float angleInRad;
        protected float AngleInRad{
        get { return angleInRad; }
        set
        {
            angleInRad = value;
            if (value%MathHelper.TwoPi !=  0)
            {
                BoundingRect = BoundingRectWithRotation(
                    new Rectangle((int) ((int) Pos.X/2f - Origin.X), (int) ((int) Pos.Y/2f - Origin.Y), Frames[0].Width,
                                  Frames[0].Height),
                    Pos/2,
                    value);
            }
            else
            {
                BoundingRect = new Rectangle((int) ((int) Pos.X/2f - Origin.X), (int) ((int) Pos.Y/2f - Origin.Y),
                                             Frames[0].Width,
                                             Frames[0].Height);
            }
            while (angleInRad > MathHelper.Pi)
            {
                angleInRad -= MathHelper.TwoPi;
            }
            while (angleInRad < -MathHelper.Pi)
            {
                angleInRad += MathHelper.TwoPi;
            }
        }}
        protected float AngleInDeg
        {
            get { return MathHelper.ToDegrees(angleInRad) ; }
            set { AngleInRad = MathHelper.ToRadians(value); }
        }
        //http://stackoverflow.com/questions/3162643/proper-trigonometry-for-rotating-a-point-around-the-origin
        public Vector2 rotate_point(Vector2 PointToRotate, Vector2 Origin, float angle)
        {
            float sinTheta = (float)Math.Sin(angle);
            float cosTheta = (float)Math.Cos(angle);

            // translate point back to origin:
            PointToRotate.X -= Origin.X;
            PointToRotate.Y -= Origin.Y;

            // Which One Is Correct:
            // This?
                        float xnew = PointToRotate.X * cosTheta - PointToRotate.Y * sinTheta;
                        float ynew = PointToRotate.X * sinTheta + PointToRotate.Y * cosTheta;
            // Or This?
//            float xnew = PointToRotate.X * cosTheta + PointToRotate.Y * sinTheta;
//            float ynew = -PointToRotate.X * sinTheta + PointToRotate.Y * cosTheta;

            // translate point back:
            //            PointToRotate.X = xnew + Origin.X;
            //            PointToRotate.Y = ynew + Origin.Y;
            return new Vector2(xnew + Origin.X, ynew + Origin.Y);

        }
        /// <summary>
        /// returns a rectangle that would fit the given rectangle were that rectangle to be rotated the given theta about given orgin
        /// </summary>
        /// <returns></returns>
        public Rectangle BoundingRectWithRotation(Rectangle rectToFit, Vector2 orgin, float theta)
        {
            var points = new Vector2[4];
            points[0] = rotate_point(new Vector2(rectToFit.Left, rectToFit.Top), orgin, theta);
            points[1] = rotate_point(new Vector2(rectToFit.Right, rectToFit.Top), orgin, theta);
            points[2] = rotate_point(new Vector2(rectToFit.Left, rectToFit.Bottom), orgin, theta);
            points[3] = rotate_point(new Vector2(rectToFit.Right, rectToFit.Bottom), orgin, theta);
            float newTop = points[0].Y;
            float newBottom = points[0].Y;
            float newLeft = points[0].X;
            float newRight = points[0].X;
            foreach (Vector2 point in points)
            {
                newTop = point.Y < newTop ? point.Y : newTop;
                newBottom = point.Y > newBottom ? point.Y : newBottom;
                newLeft = point.X < newLeft ? point.X : newLeft;
                newRight = point.X > newRight ? point.X : newRight;
            }
            return new Rectangle((int)newLeft, (int)newTop, (int)(newRight - newLeft), (int)(newBottom - newTop));

        }
        protected float AnimTime;
        protected int WidthOfGame;
        protected int HeightOfGame;
        public BaseDrawableEntity(Game game)
            : base(game)
        {
            // TODO: Construct any child components here
        }
        public BaseDrawableEntity()
            : this(XnaUtility.UtilityMethods.CurrentGame)
        {
            
        }
        /// <summary>
        /// Allows the game component to perform any initialization it needs to before starting
        /// to run.  This is where it can query for any required services and load content.
        /// </summary>
        public override void Initialize()
        {
            atlasHandler = (AtlasHandler)Game.Services.GetService(typeof(AtlasHandler));
            watch = (XnaWatch)Game.Services.GetService(typeof(XnaWatch));
            random = (Random)Game.Services.GetService(typeof(Random));
            spriteBatch = (SpriteBatch)Game.Services.GetService(typeof(SpriteBatch));
            device = Game.GraphicsDevice;
            HeightOfGame = device.PresentationParameters.BackBufferHeight;
            WidthOfGame = device.PresentationParameters.BackBufferWidth;
            base.Initialize();
        }

        public void Recycle()
        {
            if (!Game.Components.Contains(this)) return;
            Game.Components.Remove(this);
            RecycleBin.Add(this);
        }

        public static T Create<T>() where T : BaseDrawableEntity, new()
        {
            T First = RecycleBin.OfType<T>().FirstOrDefault();
            if(First == null){return new T();}
            RecycleBin.Remove(First);
            First.AnimTime = 0;
            First.Refresh();
            return First;
        }
        /// <summary>
        /// Method that gets called everytime an object of this class gets returned
        /// to the game from the recycle bin. Should be overloaded. Should include things like return health to full.
        /// The purpose of of this method in combonation with the recycle and create methods are reuse objects in 
        /// memory but give the illusion of a new instance.
        /// </summary>
        protected void Refresh()
        {
        }


        /// <summary>
        /// Adds a list of Rectangles cooresponding to sprites in atlasHander.Texture for the purpose of animation.
        /// </summary>
        /// <param name="frames">A list of strings corresponding to Rectangles in atlasHandler.Dictionary.</param>
        protected void AddFrames(params string[] frames)
        {
            foreach (var frame in frames)
            {
                Frames.Add(atlasHandler.Dictionary[frame]);
            }
        }
        protected void HandleAnimation(GameTime gameTime)
        {
            
        }
    }
}
