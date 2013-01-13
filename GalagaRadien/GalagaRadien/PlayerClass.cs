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
    public class PlayerClass : Microsoft.Xna.Framework.DrawableGameComponent
    {
        private double timePassed = 0;
        private AtlasHandler atlasHandler;
        private SpriteBatch spriteBatch;
        private Random random;
        private XnaUtility.Debug.XnaWatch watch;

        public static readonly List<IGameComponent> RecycleBin = new List<IGameComponent>();
        protected Vector2 Pos;
        protected Vector2 Origin;
        protected Vector2 Velocity;
        private KeyboardState LastKBState;
        private KeyboardState CurrentKBState;
        public bool Alive { get; protected set; }
        public float Angle { get; protected set; }
        private float timeInSeconds;
        private double sqrtVelY;
        private double sqrtVelX;

        public PlayerClass(Game game)
            : base(game)
        {
            // TODO: Construct any child components here
        }

        /// <summary>
        /// Allows the game component to perform any initialization it needs to before starting
        /// to run.  This is where it can query for any required services and load content.
        /// </summary>
        public override void Initialize()
        {
            atlasHandler = (AtlasHandler)Game.Services.GetService(typeof(AtlasHandler));
            watch = (XnaWatch)Game.Services.GetService(typeof(XnaWatch));
            random = (Random) Game.Services.GetService(typeof (Random));
            spriteBatch = (SpriteBatch)Game.Services.GetService(typeof(SpriteBatch));
            Origin = new Vector2((float) atlasHandler.Dictionary["pull_var3_frame1"].Width/2f,
                                 (float) atlasHandler.Dictionary["pull_var3_frame1"].Height/2f);
            maxVelocity = 1000;
            increment = 7000;
            buffMultiplier = 3;
            watch.AddToWatch(new WatchItem("maxVelocity", () => maxVelocity));
            watch.AddToWatch(new WatchItem("buffMultiplier", () => buffMultiplier));
            watch.AddToWatch(new WatchItem("increment", () => increment));
            watch.AddToWatch(new WatchItem("VelocityX", () => Velocity.X));
            watch.AddToWatch(new WatchItem("VelocityY", () => Velocity.Y));
            watch.AddToWatch(new WatchItem("Pos", () => Pos));
            watch.AddToWatch(new WatchItem("TimeAsInt", () => timeInSeconds));
            watch.AddToWatch(new WatchItem("SqrtVelX", () => sqrtVelX));
            watch.AddToWatch(new WatchItem("SqrtVelY", () => sqrtVelY));
            CurrentKBState = Keyboard.GetState();
            base.Initialize();
        }

		private void HandleInput(GameTime gameTime)
		{
		    LastKBState = CurrentKBState;
		    CurrentKBState = Keyboard.GetState();
		    timeInSeconds = (float)gameTime.ElapsedGameTime.TotalSeconds;

			//buffMultiplierX = 5;// (Velocity.X / maxVelocity * 100) + 1;
			//if (buffMultiplierX < 1) buffMultiplierX = 1;
			if ((CurrentKBState.IsKeyDown(Keys.Left) ||
                CurrentKBState.IsKeyDown(Keys.A))&& Velocity.X >= -maxVelocity)
			{
			    Velocity.X -= (Velocity.X > 0 ? increment*buffMultiplier : increment)*timeInSeconds;

			}
	 
			else if ((CurrentKBState.IsKeyDown(Keys.Right) ||
                CurrentKBState.IsKeyDown(Keys.D))&& Velocity.X <= maxVelocity)
			{
			    Velocity.X += (Velocity.X < 0 ? increment*buffMultiplier : increment)*timeInSeconds;
			}
			
			else if (Velocity.X > 0)
			{
			    Velocity.X -= increment*timeInSeconds;
			}
			
			else if (Velocity.X < 0)
			{
			    Velocity.X += increment*timeInSeconds;
			}
			
			//buffMultiplierY = (Velocity.Y / maxVelocity*100) + 1;
			//if (buffMultiplierY < 1) buffMultiplierY = 1;
			if ((CurrentKBState.IsKeyDown(Keys.Up) ||
                CurrentKBState.IsKeyDown(Keys.W)) && Velocity.Y >= -maxVelocity)
			{
			    Velocity.Y -= (Velocity.Y > 0 ? increment*buffMultiplier : increment)*timeInSeconds;
			}
	 
			else if ((CurrentKBState.IsKeyDown(Keys.Down) ||
                CurrentKBState.IsKeyDown(Keys.S)) && Velocity.Y <= maxVelocity)
			{
			    Velocity.Y += (Velocity.Y < 0 ? increment*buffMultiplier : increment)*timeInSeconds;
			}
			
			else if (Velocity.Y > 0) 
			{
				//if (Velocity.Y < 1) Velocity.Y = 1
                Velocity.Y -= increment * timeInSeconds;
			}
			
			else if (Velocity.Y < 0) 
			{
                Velocity.Y += increment * timeInSeconds;
			}
			
//			if (kbState.IsKeyDown(Keys.E)) 
//			{
//				mode = (mode + 1) % 3;
//			}
//			if (kbState.IsKeyDown(Keys.SPACE)) 
//			{
//				fireGun();
//				
//			}
//			if (kbState.IsKeyDown(Keys.L)) 
//			{
//				(FP.world.create(EnemyShip) as EnemyShip).setInit();
//			}
//			
			//DEBUG
			if (CurrentKBState.ClickPress(LastKBState,Keys.D1)) 
			{
				maxVelocity -= 10;
			}
			if (CurrentKBState.ClickPress(LastKBState,Keys.D2)) 
			{
				maxVelocity += 10;
			}
			if (CurrentKBState.ClickPress(LastKBState,Keys.D3)) 
			{
				increment-=100;
			}
			if (CurrentKBState.ClickPress(LastKBState,Keys.D4)) 
			{
				increment+=100;
//				(graphic as Spritemap).angle = ((graphic as Spritemap).angle  + 30) % 360;
			}
			if (CurrentKBState.ClickPress(LastKBState,Keys.D5)) 
			{
				buffMultiplier -= 1;
//				(graphic as Spritemap).randFrame();
			}
			if (CurrentKBState.ClickPress(LastKBState,Keys.D6)) 
			{
				buffMultiplier += 1;
			}
		}

        protected int buffMultiplier { get; set; }

        protected int increment { get; set; }

        protected int maxVelocity { get; set; }

        /// <summary>
        /// Allows the game component to update itself.
        /// </summary>
        /// <param name="gameTime">Provides a snapshot of timing values.</param>
        public override void Update(GameTime gameTime)
        {
            // TODO: Add your update code here
            timePassed += Game.TargetElapsedTime.TotalSeconds;
//            if (timePassed > 10)
//            {
//                Game.Components.Remove(this);
//            }
            HandleInput(gameTime);
            if (Velocity.X > -1 && Velocity.X < 1)
            {
                Velocity.X = 0;
            }
            if (Velocity.Y > -1 && Velocity.Y < 1)
            {
                Velocity.Y = 0;
            }
            sqrtVelY = 1 - (0.5*Math.Pow(Velocity.Y/1000, 2));
            sqrtVelX = 1 - (0.5*Math.Pow(Velocity.X/1000, 2));
			var xCircle = Velocity.X * Math.Sqrt(sqrtVelY)*timeInSeconds;
			var yCircle = Velocity.Y * Math.Sqrt(sqrtVelX)*timeInSeconds;
            Pos.X += (float)(xCircle);
            Pos.Y += (float)(yCircle);

            base.Update(gameTime);
        }

        /// <summary>
        /// Called when the DrawableGameComponent needs to be drawn. Override this method with component-specific drawing code. Reference page contains links to related conceptual articles.
        /// </summary>
        /// <param name="gameTime">Time passed since the last call to Draw.</param>
        public override void Draw(GameTime gameTime)
        {
            spriteBatch.Draw(
                atlasHandler.Texture,
                Pos/2,
                atlasHandler.Dictionary["pull_var3_frame1"],
                Color.White, 
                Angle/360f*MathHelper.TwoPi,
                Origin,
                1f,
                SpriteEffects.None,
                1);
            base.Draw(gameTime);
        }

        /// <summary>
        /// Called when graphics resources need to be loaded. Override this method to load any component-specific graphics resources.
        /// </summary>
        protected override void LoadContent()
        {
            base.LoadContent();
        }

        /// <summary>
        /// Called when graphics resources need to be unloaded. Override this method to unload any component-specific graphics resources.
        /// </summary>
        protected override void UnloadContent()
        {
            base.UnloadContent();
        }
    }
}
