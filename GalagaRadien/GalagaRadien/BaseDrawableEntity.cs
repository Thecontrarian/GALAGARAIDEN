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
    public class BaseDrawableEntity : BaseEntity
    {
        protected AtlasHandler atlasHandler;
        protected SpriteBatch spriteBatch;
        protected Vector2 Pos;
        protected Vector2 Origin;
        protected Vector2 Velocity;
        protected float Speed;
        protected List<Rectangle> Frames = new List<Rectangle>();
        protected List<Color[,]> ColorArrays = new List<Color[,]>();
        protected int CurrentFrameIndex = 0;
        public Rectangle BoundingRect;
        protected bool test;
        private float angleInRad;

        protected float AngleInRad{
        get { return angleInRad; }
        set
        {
            angleInRad = value;
            while (angleInRad > MathHelper.Pi)
            {
                angleInRad -= MathHelper.TwoPi;
            }
            while (angleInRad < -MathHelper.Pi)
            {
                angleInRad += MathHelper.TwoPi;
            }
            if (angleInRad % MathHelper.TwoPi !=  0)
            {
                BoundingRect = BoundingRectWithRotation(
                    new Rectangle(
                        (int) ((int) Pos.X/2f - Origin.X),
                        (int) ((int) Pos.Y/2f - Origin.Y), 
                        Frames[CurrentFrameIndex].Width,
                        Frames[CurrentFrameIndex].Height),
                    Pos/2,
                    angleInRad);
            }
            else
            {
                BoundingRect = new Rectangle(
                    (int) ((int) Pos.X/2f - Origin.X), 
                    (int) ((int) Pos.Y/2f - Origin.Y),
                    Frames[CurrentFrameIndex].Width,
                    Frames[CurrentFrameIndex].Height);
            }
//            Matrix transform =
//                Matrix.CreateTranslation(new Vector3(-Origin, 0.0f)) *
//                // Matrix.CreateScale(block.Scale) *  would go here
//                Matrix.CreateRotationZ(angleInRad) *
//                Matrix.CreateTranslation(new Vector3(Pos/2, 0.0f));
//            BoundingRect = CalculateBoundingRectangle(new Rectangle(0,0,Frames[CurrentFrameIndex].Width,Frames[CurrentFrameIndex].Height), transform);
        }}

        protected float AngleInDeg
        {
            get { return MathHelper.ToDegrees(angleInRad) ; }
            set { AngleInRad = MathHelper.ToRadians(value); }
        }

        public float AnimTime;

        public BaseDrawableEntity(Game game)
            : base(game)
        {
            // TODO: Construct any child components here
        }

        public BaseDrawableEntity()
        {
        
        }

        /// <summary>
        /// Allows the game component to perform any initialization it needs to before starting
        /// to run.  This is where it can query for any required services and load content.
        /// </summary>
        public override void Initialize()
        {
            atlasHandler = (AtlasHandler)Game.Services.GetService(typeof(AtlasHandler));
            spriteBatch = (SpriteBatch)Game.Services.GetService(typeof(SpriteBatch));
            base.Initialize();
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
                ColorArrays.Add(atlasHandler.DictOfColorArray[frame]);
            }
        }

        protected void HandleAnimation(GameTime gameTime)
        {
            
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

        /// <summary>
        /// Calculates an axis aligned rectangle which fully contains an arbitrarily
        /// transformed axis aligned rectangle.
        /// </summary>
        /// <param name="rectangle">Original bounding rectangle.</param>
        /// <param name="transform">World transform of the rectangle.</param>
        /// <returns>A new rectangle which contains the trasnformed rectangle.</returns>
        public static Rectangle CalculateBoundingRectangle(Rectangle rectangle,
                                                           Matrix transform)
        {
            // Get all four corners in local space
            Vector2 leftTop = new Vector2(rectangle.Left, rectangle.Top);
            Vector2 rightTop = new Vector2(rectangle.Right, rectangle.Top);
            Vector2 leftBottom = new Vector2(rectangle.Left, rectangle.Bottom);
            Vector2 rightBottom = new Vector2(rectangle.Right, rectangle.Bottom);

            // Transform all four corners into work space
            Vector2.Transform(ref leftTop, ref transform, out leftTop);
            Vector2.Transform(ref rightTop, ref transform, out rightTop);
            Vector2.Transform(ref leftBottom, ref transform, out leftBottom);
            Vector2.Transform(ref rightBottom, ref transform, out rightBottom);

            // Find the minimum and maximum extents of the rectangle in world space
            Vector2 min = Vector2.Min(Vector2.Min(leftTop, rightTop),
                                      Vector2.Min(leftBottom, rightBottom));
            Vector2 max = Vector2.Max(Vector2.Max(leftTop, rightTop),
                                      Vector2.Max(leftBottom, rightBottom));

            // Return that as a rectangle
            return new Rectangle((int)min.X, (int)min.Y,
                                 (int)(max.X - min.X), (int)(max.Y - min.Y));
        }
        protected void StandardDraw()
        {
            spriteBatch.Draw(atlasHandler.Texture, Pos / 2, Frames[CurrentFrameIndex], Color.White, AngleInRad, Origin, 1f, SpriteEffects.None, 1f);
        }
    }
}
