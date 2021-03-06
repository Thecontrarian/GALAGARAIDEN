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
using XnaUtility;
using XnaUtility.Debug;

namespace GalagaRadien
{
    /// <summary>
    /// This is the main type for your game
    /// </summary>
    public class Game1 : Microsoft.Xna.Framework.Game
    {
        private Random random = new Random();
        private GraphicsDeviceManager graphics;
        private SpriteBatch spriteBatch;
        private XnaWatch watch;
        private AtlasHandler atlasHandler;
        private double timePassed;
        private double frameRate;
        private Matrix scale;
        private BaseDrawableEntity a;
        private BaseEnemy b;
        private BaseDrawableEntity c;
        private BaseDrawableEntity test;
        private KeyboardState current;
        private KeyboardState last;
        private int Width;
        private int Height;
        private string str;
        private int count = 0;

        public Game1()
        {
            XnaUtility.UtilityMethods.CurrentGame = this;
            
            graphics = new GraphicsDeviceManager(this);
            Content.RootDirectory = "Content";
            
            atlasHandler = new AtlasHandler(this, "MASTER GAIDEN SHEET", "MASTER GAIDEN SHEET DICT");
            Components.Add(atlasHandler);
            Services.AddService(typeof(AtlasHandler), atlasHandler);
            Services.AddService(typeof(Random),random);
            watch = new XnaWatch(this,Color.White);
            Components.Add(watch);
            Services.AddService(typeof(XnaWatch), watch);
            graphics.PreferredBackBufferHeight = 750;
            graphics.PreferredBackBufferWidth = 900;
            this.IsMouseVisible = true;
            graphics.ApplyChanges();
            Width = graphics.PreferredBackBufferWidth;
            Height = graphics.PreferredBackBufferHeight;


        }

        /// <summary>
        /// Allows the game to perform any initialization it needs to before starting to run.
        /// This is where it can query for any required services and load any non-graphic
        /// related content.  Calling base.Initialize will enumerate through any components
        /// and initialize them as well.
        /// </summary>
        protected override void Initialize()
        {
            // TODO: Add your initialization logic here
            spriteBatch = new SpriteBatch(GraphicsDevice);
            Services.AddService(typeof(SpriteBatch), spriteBatch);
            scale = Matrix.CreateScale(2f,2f,1f);
            base.Initialize();
        }

        /// <summary>
        /// LoadContent will be called once per game and is the place to load
        /// all of your content.
        /// </summary>
        protected override void LoadContent()
        {
            // TODO: use this.Content to load your game content here
        }

        /// <summary>
        /// UnloadContent will be called once per game and is the place to unload
        /// all content.
        /// </summary>
        protected override void UnloadContent()
        {
            // TODO: Unload any non ContentManager content here
        }

        /// <summary>
        /// Allows the game to run logic such as updating the world,
        /// checking for collisions, gathering input, and playing audio.
        /// </summary>
        /// <param name="gameTime">Provides a snapshot of timing values.</param>
        protected override void Update(GameTime gameTime)
        {
            // Allows the game to exit
            if (GamePad.GetState(PlayerIndex.One).Buttons.Back == ButtonState.Pressed ||
                Keyboard.GetState().IsKeyDown(Keys.Escape))
                this.Exit();
            // TODO: Add your update logic here
            last = current;
            current = Keyboard.GetState();
            base.Update(gameTime);
        }

        /// <summary>
        /// This is called when the game should draw itself.
        /// </summary>
        /// <param name="gameTime">Provides a snapshot of timing values.</param>
        protected override void Draw(GameTime gameTime)
        {
            GraphicsDevice.Clear(Color.Black);
            frameRate = 1 / (float)gameTime.ElapsedGameTime.TotalSeconds;
            // TODO: Add your drawing code here
            spriteBatch.Begin(SpriteSortMode.Deferred, null,SamplerState.PointClamp,null,null,null,scale);
            base.Draw(gameTime);
            spriteBatch.End();
        }
    }
}
