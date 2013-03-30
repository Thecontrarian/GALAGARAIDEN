using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;

namespace GalagaRadien
{
    class Arm1ProtoRight : BaseDrawableEntity
    {
        public Arm2ProtoRight Plugin;
        public Vector2 PluginVect;
        public Vector2 ReletivePos;
        public float ReletiveAngle;
        public Arm1ProtoRight(Game game)
            : base(game)
        {
        }

        public Arm1ProtoRight()
        {
        }

        public override void Initialize()
        {
            base.Initialize();
            AddFrames("push_missile_frame5");
            Origin = new Vector2(Frames[0].Width / 2f, 0);
            PluginVect = new Vector2(Frames[0].Width / 2f, Frames[0].Height*2);
            Plugin = new Arm2ProtoRight(Game);
            Plugin.Initialize();
//            Game.Components.Add(Plugin);
            Plugin.ReletivePos = PluginVect + Pos;
            Plugin.ReletiveAngle= AngleInRad;
//            Pos = new Vector2(WidthOfGame / 2, HeightOfGame / 2);
        }

        public override void Update(GameTime gameTime)
        {
            KeyboardState kb = Keyboard.GetState();
            if (kb.IsKeyDown(Keys.D))
            {
                AngleInDeg -= 1;
            }
            else if (kb.IsKeyDown(Keys.S))
            {
                AngleInDeg += 1;
            }
            
            Plugin.ReletivePos = rotate_point(PluginVect, Origin, ReletiveAngle+AngleInRad) + ReletivePos - Origin;
            Plugin.ReletiveAngle = AngleInRad + ReletiveAngle;
            Plugin.Update(gameTime);
            base.Update(gameTime);
        }

        public override void Draw(GameTime gameTime)
        {
            spriteBatch.Draw(atlasHandler.Texture, ReletivePos/2, Frames[0], Color.White, ReletiveAngle + AngleInRad, Origin, 1f, SpriteEffects.None, 1f);
            Plugin.Draw(gameTime);
            base.Draw(gameTime);
        }

        protected override void LoadContent()
        {
            
            base.LoadContent();
        }
    }
}
