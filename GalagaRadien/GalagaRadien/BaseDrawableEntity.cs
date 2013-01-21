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
        }}
        protected float AngleInDeg
        {
            get { return MathHelper.ToDegrees(angleInRad) ; }
            set { AngleInRad = MathHelper.ToRadians(value); }
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
