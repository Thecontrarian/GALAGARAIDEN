using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;

namespace GalagaRadien 
{
    class Joint1Proto : BaseDrawableEntity
    {
        public Arm1ProtoLeft PluginLeft;
        public Vector2 PluginVectLeft;
        public Arm1ProtoRight PluginRight;
        public Vector2 PluginVectRight;
        public Joint1Proto(Game game) : base(game)
        {
        }

        public Joint1Proto()
        {
        }

        public override void Initialize()
        {
            base.Initialize();
            Pos = new Vector2(WidthOfGame/2,HeightOfGame/2);
            AddFrames("BuruEnemy_1a_frame1");
            Origin = new Vector2(Frames[0].Width / 2f, Frames[0].Height / 2f);
            //Right Arm
            PluginVectRight = new Vector2(Frames[0].Width / 2f - 6, Frames[0].Height / 2f + 15);
            PluginRight = new Arm1ProtoRight(Game);
            PluginRight.Initialize();
            //            Game.Components.Add(Plugin);
            PluginRight.ReletivePos = PluginVectRight + Pos;
            PluginRight.ReletiveAngle = AngleInRad;

            //Left Arm
            PluginVectLeft = new Vector2(Frames[0].Width / 2f + 6, Frames[0].Height / 2f + 15);
            PluginLeft = new Arm1ProtoLeft(Game);
            PluginLeft.Initialize();
            //            Game.Components.Add(Plugin);
            PluginLeft.ReletivePos = PluginVectLeft + Pos;
            PluginLeft.ReletiveAngle = AngleInRad;

            AngleInDeg = 180;


        }

        public override void Update(GameTime gameTime)
        {
            KeyboardState kb = Keyboard.GetState();
            if (kb.IsKeyDown(Keys.M))
            {
                AngleInDeg += 1;
            }
            else if (kb.IsKeyDown(Keys.C))
            {
                AngleInDeg -= 1;
            }
            
            PluginRight.ReletivePos = rotate_point(PluginVectRight, Origin, AngleInRad) + Pos -Origin;
            PluginRight.ReletiveAngle = AngleInRad;
            PluginRight.Update(gameTime);

            PluginLeft.ReletivePos = rotate_point(PluginVectLeft, Origin, AngleInRad) + Pos -Origin;
            PluginLeft.ReletiveAngle = AngleInRad;
            PluginLeft.Update(gameTime);
            
            base.Update(gameTime);
        }

        public override void Draw(GameTime gameTime)
        {
            spriteBatch.Draw(atlasHandler.Texture,Pos/2,Frames[0],Color.White,AngleInRad,Origin,1f,SpriteEffects.None, 1f);
            PluginRight.Draw(gameTime);
            PluginLeft.Draw(gameTime);
            base.Draw(gameTime);
        }

        protected override void LoadContent()
        {
            
            base.LoadContent();
        }
    }
}
