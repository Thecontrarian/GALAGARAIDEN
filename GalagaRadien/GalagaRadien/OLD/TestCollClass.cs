using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;

namespace GalagaRadien
{
    class TestCollClass : BaseCollidableEntity
    {
        public string index;
        public TestCollClass(Game game) : base(game)
        {
        }

        public TestCollClass()
        {
        }

        public override void Initialize()
        {
            base.Initialize();
            AxisList.Add(this);
            Pos.X = random.Next(WidthOfGame);
            Pos.Y = random.Next(HeightOfGame)+50;
            AngleInDeg = 0;
            CollideType = CollideTypes.EnemyShips;
            CollideAgainstTypes.Add(CollideTypes.EnemyShips);
            SortAxisList();
        }

        public override void Update(GameTime gameTime)
        {
            AngleInDeg += 2;
            base.Update(gameTime);
        }

        public override void Draw(GameTime gameTime)
        {
            StandardDraw();
//            spriteBatch.DrawString(watch.font,index,Pos/2,Color.White);
            base.Draw(gameTime);
        }

        protected override void LoadContent()
        {
            AddFrames("BuruEnemy_1a_frame1");
            Origin = new Vector2(Frames[0].Width / 4, Frames[0].Height / 4);
            base.LoadContent();
        }
    }
}
