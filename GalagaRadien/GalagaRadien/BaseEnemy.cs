using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Xml;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Graphics;
using XnaUtility;

namespace GalagaRadien
{
    class BaseEnemy : BaseDrawableEntity
    {
        private TimeSpan timeSinceSpawn;
        private Curve curveX = new Curve();
        private Curve curveY = new Curve();
        private float span = 5f;
        private KeyboardState KBState;
        private KeyboardState prevKBState;
        private MouseState mouseState;
        private MouseState prevMouseState;

        public BaseEnemy(Game game) : base(game)
        {
        }
        public BaseEnemy()
        {
            
        }

        public override void Initialize()
        {
            base.Initialize();

            InitializeCurves();
            
            timeSinceSpawn = new TimeSpan(0,0,0);
            Pos = new Vector2();
        }

        private void InitializeCurves()
        {
            curveX.Keys.Add(new CurveKey(0, 0));
            curveY.Keys.Add(new CurveKey(0, 0));
            curveX.Keys.Add(new CurveKey(span/3f, 30));
            curveY.Keys.Add(new CurveKey(span/3f, HeightOfGame - 30));
            curveX.Keys.Add(new CurveKey(2*span/3f, WidthOfGame - 30));
            curveY.Keys.Add(new CurveKey(2*span/3f, 30));
            curveX.Keys.Add(new CurveKey(span, WidthOfGame));
            curveY.Keys.Add(new CurveKey(span, HeightOfGame));
            var lastOrDefault = curveX.Keys.LastOrDefault();
            span = lastOrDefault != null ? lastOrDefault.Position : 1f;
            lastOrDefault = curveY.Keys.LastOrDefault();
            if (lastOrDefault != null && lastOrDefault.Position > span)
            {
                span = lastOrDefault.Position;
            }
        }

        public override void Update(GameTime gameTime)
        {
            timeSinceSpawn += gameTime.ElapsedGameTime;

            prevMouseState = mouseState;
            mouseState = Mouse.GetState();
            prevKBState = KBState;
            KBState = Keyboard.GetState();
            if (KBState.ClickPress(prevKBState,Keys.L))
            {
            }
//
//            if (mouseState.LeftButton == ButtonState.Pressed &&
//                prevMouseState.LeftButton == ButtonState.Released)
//            {
//                if (KBState.ClickPress(lastKeyboardState,Keys.LeftShift))
//                {
//                    curveX.Keys.Clear();
//                    curveY.Keys.Clear();
//                    span = -1f;
//                }
//                span++;
//                curveX.Keys.Add(new CurveKey(span,mouseState.X));
//                curveY.Keys.Add(new CurveKey(span,mouseState.Y));
//                InitializePoints();
//            }



            Pos.X = curveX.Evaluate((float) timeSinceSpawn.TotalSeconds%span);
            Pos.Y = curveY.Evaluate((float) timeSinceSpawn.TotalSeconds%span);
            base.Update(gameTime);
            
        }

        public override void Draw(GameTime gameTime)
        {
            spriteBatch.Draw(atlasHandler.Texture,Pos/2,Frames[0],Color.White,
                (float)Math.Atan2(
                Pos.Y - curveY.Evaluate(((float)timeSinceSpawn.TotalSeconds % span) + 0.0001f),
                Pos.X - curveX.Evaluate(((float)timeSinceSpawn.TotalSeconds % span) + 0.0001f))+MathHelper.PiOver2
                ,new Vector2(Frames[0].Width/2,Frames[0].Height/2),1f,SpriteEffects.None, 1f );
            base.Draw(gameTime);
        }

        protected override void LoadContent()
        {
            Frames.Add(atlasHandler.Dictionary["GraaEnemy_1d_frame1"]);
            base.LoadContent();
        }

        protected override void UnloadContent()
        {
            base.UnloadContent();
        }
    }
}
