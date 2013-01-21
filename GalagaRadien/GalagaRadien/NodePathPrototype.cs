using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using XnaUtility.Debug;
using XnaUtility;

namespace GalagaRadien
{
    class NodePathPrototype : BaseDrawableEntity
    {
        private List<Vector2> pathNodes = new List<Vector2>();
        private Rectangle whiteSpeck = new Rectangle(112, 62, 2, 2);
        private float angleToTarget;
        private int currentNodeIndex;
        private KeyboardState keyboard;
        private KeyboardState prevKeyboard;
        private float distance;

        public NodePathPrototype(Game game) : base(game)
        {
        }
        public NodePathPrototype()
        {
            
        }


        public override void Initialize()
        {
            base.Initialize();
            pathNodes.Add(new Vector2(100,100));
            pathNodes.Add(new Vector2(WidthOfGame-100,100));
            pathNodes.Add(new Vector2(WidthOfGame-100,HeightOfGame-100));
            pathNodes.Add(new Vector2(100,HeightOfGame-100));
            pathNodes.Add(new Vector2(WidthOfGame/2,HeightOfGame/2));
            Pos = new Vector2(200,200);
            currentNodeIndex = 0;
            AngleInRad = 0;
            watch.AddToWatch(new WatchItem("Angle", () => AngleInDeg));
            watch.AddToWatch(new WatchItem("Angle To Target", () => angleToTarget));
            watch.AddToWatch(new WatchItem("distance", () => distance));
            
        }

        public override void Update(GameTime gameTime)
        {
            prevKeyboard = keyboard;
            keyboard = Keyboard.GetState();
            
            distance = Vector2.Distance(pathNodes[currentNodeIndex], Pos);
            if (keyboard.ClickPress(prevKeyboard,Keys.Space) || distance < 60)
            {
                ++currentNodeIndex;
                currentNodeIndex %= pathNodes.Count;
            }

            if (keyboard.IsKeyDown(Keys.Left))
            {
                AngleInDeg = AngleInDeg + 1;
//                while (AngleInRad>MathHelper.TwoPi)
//                {
//                    AngleInRad -= MathHelper.TwoPi;
//                }
            }
            else if (keyboard.IsKeyDown(Keys.Right))
            {
                AngleInDeg = AngleInDeg - 1;
//                while (AngleInRad<0)
//                {
//                    AngleInRad += MathHelper.TwoPi;
//                }

            }
//            MouseState mouse = Mouse.GetState();
//            pathNodes[4] = new Vector2(mouse.X,mouse.Y);
            angleToTarget = MathHelper.ToDegrees((float) (Math.Atan2(
                pathNodes[currentNodeIndex].Y - Pos.Y,
                                                                         pathNodes[currentNodeIndex].X - Pos.X)));
//                pathNodes[currentNodeIndex].Y - Pos.Y,
//                                                                         pathNodes[currentNodeIndex].X - Pos.X)));
            angleToTarget = angleToTarget-AngleInDeg;
            angleToTarget -= 90f;
            if (angleToTarget < -180f)
            {
                angleToTarget += 360f;
            }
            else if (angleToTarget > 180f)
            {
                angleToTarget -= 360f;
            }
            if (angleToTarget < 0f)
            {
                AngleInDeg -= 1f;
            }
            else if (angleToTarget > 0f)
            {
                AngleInDeg += 1f;
            }
//            sqrtVelY = 1 - (0.5 * Math.Pow(Velocity.Y / 1000, 2));
//            sqrtVelX = 1 - (0.5 * Math.Pow(Velocity.X / 1000, 2));
//            var xCircle = Velocity.X * Math.Sqrt(sqrtVelY) * timeInSeconds;
//            var yCircle = Velocity.Y * Math.Sqrt(sqrtVelX) * timeInSeconds;
//            Pos.X += (float)(xCircle);
//            Pos.Y += (float)(yCircle);
            var angle = AngleToVector(AngleInRad);
            Pos += angle*3;
            base.Update(gameTime);
        }
        public Vector2 AngleToVector(float angle)
        {
            return new Vector2((float)-Math.Sin(angle), (float)Math.Cos(angle));
        }
        public override void Draw(GameTime gameTime)
        {
            foreach (var pathNode in pathNodes)
            {
                var color = pathNode == pathNodes[currentNodeIndex] ? Color.Red : Color.White;
                spriteBatch.Draw(atlasHandler.Texture,pathNode/2,whiteSpeck,color);
            }
            spriteBatch.Draw(atlasHandler.Texture,Pos/2,Frames[0],Color.White,AngleInRad,Origin,1f,SpriteEffects.None, 1f);
            base.Draw(gameTime);
        }

        protected override void LoadContent()
        {
            AddFrames("BuruEnemy_1a_frame1");
            Origin = new Vector2(Frames[0].Width/2,Frames[0].Height/2);
//            Origin = new Vector2(0,0);
            base.LoadContent();
        }
    }
}


//_moveX += x;
//			_moveY += y;
//			x = Math.round(_moveX);
//			y = Math.round(_moveY);
//			_moveX -= x;
//			_moveY -= y;
//			if (solidType)
//			{
//				var sign:int, e:Entity;
//				if (x != 0)
//				{
//					if (sweep || collideTypes(solidType, this.x + x, this.y))
//					{
//						sign = x > 0 ? 1 : -1;
//						while (x != 0)
//						{
//							if ((e = collideTypes(solidType, this.x + sign, this.y)))
//							{
//								if (moveCollideX(e)) break;
//								else this.x += sign;
//							}
//							else this.x += sign;
//							x -= sign;
//						}
//					}
//					else this.x += x;
//				}
//				if (y != 0)
//				{
//					if (sweep || collideTypes(solidType, this.x, this.y + y))
//					{
//						sign = y > 0 ? 1 : -1;
//						while (y != 0)
//						{
//							if ((e = collideTypes(solidType, this.x, this.y + sign)))
//							{
//								if (moveCollideY(e)) break;
//								else this.y += sign;
//							}
//							else this.y += sign;
//							y -= sign;
//						}
//					}
//					else this.y += y;
//				}
//			}
//			else
//			{
//				this.x += x;
//				this.y += y;
//			}