using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;

namespace GalagaRadien
{
    class Arm2ProtoLeft : BaseDrawableEntity
    {
        public Vector2 ReletivePos;
        public float ReletiveAngle;
        public Arm2ProtoLeft(Game game)
            : base(game)
        {
        }

        public Arm2ProtoLeft()
        {
        }

        public override void Initialize()
        {
            base.Initialize();
//            Pos = new Vector2(WidthOfGame / 2, HeightOfGame / 2);
            AddFrames("push_missile_frame5");
            Origin = new Vector2(Frames[0].Width / 2f, 0);
        }

        public override void Update(GameTime gameTime)
        {
            var speed = 2;
            KeyboardState kb = Keyboard.GetState();
            if (kb.IsKeyDown(Keys.E))
            {
                AngleInDeg += speed;
            }
            else if (kb.IsKeyDown(Keys.W))
            {
                AngleInDeg -= speed;
            }

            base.Update(gameTime);
        }

        public override void Draw(GameTime gameTime)
        {
            spriteBatch.Draw(atlasHandler.Texture, ReletivePos/2, Frames[0], Color.White, ReletiveAngle + AngleInRad, Origin, 1f, SpriteEffects.None, 1f);
            base.Draw(gameTime);
        }

        protected override void LoadContent()
        {
            base.LoadContent();
        }
    }
}
