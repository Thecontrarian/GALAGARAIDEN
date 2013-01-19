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
        protected List<Rectangle> Frames = new List<Rectangle>();
        protected float _angle;
        protected float Angle
        {
            get { return _angle/MathHelper.TwoPi*360; }
            set { _angle = value/360*MathHelper.TwoPi; }
        }

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
            return First;
        }
        /// <summary>
        /// Resets position and stops all movement.
        /// </summary>
        /// <param name="pos">Location to reset position to.</param>
        protected void Reset(Vector2 pos)
        {
            Pos = pos;
            Velocity = new Vector2();
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


    }
}
