using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;

namespace GalagaRadien
{
    class BaseEnemy : BaseDrawableEntity
    {
        private TimeSpan timeSinceSpawn;
        private Curve curveX = new Curve();
        private Curve curveY = new Curve();
        private float span = 5f;
        public BaseEnemy(Game game) : base(game)
        {
        }
        public BaseEnemy()
        {
            
        }

        public override void Initialize()
        {
            base.Initialize();
            curveX.Keys.Add(new CurveKey(0,0));
            curveY.Keys.Add(new CurveKey(0,0));
            curveX.Keys.Add(new CurveKey(span/3f, 30));
            curveY.Keys.Add(new CurveKey(span/3f, HeightOfGame-30));
            curveX.Keys.Add(new CurveKey(2*span/3f, WidthOfGame-30));
            curveY.Keys.Add(new CurveKey(2*span/3f, 30));
            curveX.Keys.Add(new CurveKey(span, WidthOfGame));
            curveY.Keys.Add(new CurveKey(span, HeightOfGame));
            timeSinceSpawn = new TimeSpan(0,0,0);
            Pos = new Vector2();
        }

        public override void Update(GameTime gameTime)
        {
            timeSinceSpawn += gameTime.ElapsedGameTime;
            Pos.X = curveX.Evaluate((float) timeSinceSpawn.TotalSeconds%span);
            Pos.Y = curveY.Evaluate((float) timeSinceSpawn.TotalSeconds%span);
            base.Update(gameTime);
        }

        public override void Draw(GameTime gameTime)
        {
            spriteBatch.Draw(atlasHandler.Texture,Pos/2,Frames[0],Color.White);
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
