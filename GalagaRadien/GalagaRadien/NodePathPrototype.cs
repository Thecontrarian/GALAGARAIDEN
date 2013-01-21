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
        private Rectangle Speck = new Rectangle(112, 62, 1, 1);
        private float angleToTarget;
        private int currentNodeIndex;
        private KeyboardState keyboard;
        private KeyboardState prevKeyboard;
        private float distance;
        private int[,] grid;
        private int framesize = 50;
        private List<int[]> currentCellsOccupied = new List<int[]>();
        private string currentCellsOccupiedString;
        private Rectangle rect;

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
            grid = new int[WidthOfGame/framesize,HeightOfGame/framesize];
            Pos = new Vector2(200,200);
            currentNodeIndex = 0;
            AngleInRad = 0;
//            watch.AddToWatch(new WatchItem("GridSize", () =>
//                                                           new {
//                                                               GridWide,
//                                                               GridHigh
//                                                           }));
//            watch.AddToWatch(new WatchItem("Pos", () => Pos));
//            watch.AddToWatch(new WatchItem("Rect", () => rect));
//            watch.AddToWatch(new WatchItem("TopLeft", () => new Vector2(Frames[0].Left, Frames[0].Top)));
//            watch.AddToWatch(new WatchItem("Current Cells Occupied", () => currentCellsOccupiedString));
//            watch.AddToWatch(new WatchItem("Angle", () => AngleInDeg));
//            watch.AddToWatch(new WatchItem("Angle To Target", () => angleToTarget));
//            watch.AddToWatch(new WatchItem("distance", () => distance));
//            
        }

        public override void Update(GameTime gameTime)
        {
            currentCellsOccupied.Clear();
            currentCellsOccupiedString = "";
            grid = new int[GridWide, GridHigh];
//            rect = new Rectangle((int) ((int) Pos.X/2 -Origin.X), (int) ((int) Pos.Y/2 -Origin.Y), Frames[0].Width, Frames[0].Height);
            rect = BoundingRect;
            for (int i = (int)Math.Floor((double)(rect.Top*2) / framesize); i < (int)Math.Ceiling((double)(rect.Bottom*2) / framesize); i++)
            {
                for (int j = (int)Math.Floor((double)(rect.Left*2) / framesize); j < (int)Math.Ceiling((double)(rect.Right*2) / framesize); j++)
                {
                    if (j >= 0 && j < GridWide && i >= 0 && i < GridHigh)
                    {
                        grid[j, i] = 1;
                        currentCellsOccupied.Add(new[]{j,i});
                        currentCellsOccupiedString += "(" + j + "," + i + "), ";
                    }
                    
                }
            }
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
            UtilityMethods.MoveVector2WASD(ref Pos, ref BoundingRect);

//            MouseState mouse = Mouse.GetState();
//            pathNodes[4] = new Vector2(mouse.X,mouse.Y);
            angleToTarget = MathHelper.ToDegrees((float) (Math.Atan2(
                pathNodes[currentNodeIndex].Y - Pos.Y,
                                                                         pathNodes[currentNodeIndex].X - Pos.X)));
//                pathNodes[currentNodeIndex].Y - Pos.Y,
//                                                                         pathNodes[currentNodeIndex].X - Pos.X)));
//            angleToTarget = angleToTarget-AngleInDeg;
//            angleToTarget -= 90f;
//            if (angleToTarget < -180f)
//            {
//                angleToTarget += 360f;
//            }
//            else if (angleToTarget > 180f)
//            {
//                angleToTarget -= 360f;
//            }
//            if (angleToTarget < 0f)
//            {
//                AngleInDeg -= 1f;
//            }
//            else if (angleToTarget > 0f)
//            {
//                AngleInDeg += 1f;
//            }
//            sqrtVelY = 1 - (0.5 * Math.Pow(Velocity.Y / 1000, 2));
//            sqrtVelX = 1 - (0.5 * Math.Pow(Velocity.X / 1000, 2));
//            var xCircle = Velocity.X * Math.Sqrt(sqrtVelY) * timeInSeconds;
//            var yCircle = Velocity.Y * Math.Sqrt(sqrtVelX) * timeInSeconds;
//            Pos.X += (float)(xCircle);
//            Pos.Y += (float)(yCircle);
            var angle = AngleToVector(AngleInRad);
//            Pos += angle*3;
            base.Update(gameTime);
        }

        

        public Vector2 AngleToVector(float angle)
        {
            return new Vector2((float)-Math.Sin(angle), (float)Math.Cos(angle));
        }
        public override void Draw(GameTime gameTime)
        {

            //path nodes
            foreach (var pathNode in pathNodes)
            {
                var color = pathNode == pathNodes[currentNodeIndex] ? Color.Red : Color.White;
                spriteBatch.Draw(atlasHandler.Texture,pathNode/2,Speck,color,0f,Vector2.Zero, 2f,SpriteEffects.None, 1 );
            }

            //collision grid
            for (int i = 1; i < GridHigh; i++)
            {
                spriteBatch.Draw(atlasHandler.Texture, (new Vector2(WidthOfGame/2f,framesize*i) ) / 2, Speck, Color.CornflowerBlue, 0f, new Vector2(.5f,.5f), new Vector2(WidthOfGame/2f,.5f), SpriteEffects.None, 1);
            }
            for (int i = 1; i < GridWide; i++)
            {
                spriteBatch.Draw(atlasHandler.Texture, (new Vector2(framesize*i,HeightOfGame/2f) ) / 2, Speck, Color.CornflowerBlue, 0f, new Vector2(.5f,.5f), new Vector2(.5f,HeightOfGame/2f), SpriteEffects.None, 1);
            }

            foreach (int[] cellCoords in currentCellsOccupied)
            {
                spriteBatch.Draw(atlasHandler.Texture, new Vector2(cellCoords[0]*framesize,cellCoords[1]*framesize)/2, Speck, Color.Blue, 0f, new Vector2(0f), new Vector2(framesize, framesize)/2, SpriteEffects.None, 1f);
                
            }

            //rectangle of sprite
//            spriteBatch.Draw(atlasHandler.Texture, Pos / 2f, Speck, Color.White, 0f, new Vector2(.5f, .5f), new Vector2(Frames[0].Width, Frames[0].Height), SpriteEffects.None, 1f);
            
            //sprite
            spriteBatch.Draw(atlasHandler.Texture, BoundingRect, Speck, Color.White, 0f, new Vector2(0, 0), SpriteEffects.None, 1f);
            spriteBatch.Draw(atlasHandler.Texture,Pos/2,Frames[0],Color.White,AngleInRad,Origin,1f,SpriteEffects.None, 1f);

            base.Draw(gameTime);
        }

        protected override void LoadContent()
        {
            AddFrames("BuruEnemy_1a_frame1");
            Origin = new Vector2(Frames[0].Width/4,Frames[0].Height/4);
//            Origin = new Vector2(0,0);
            base.LoadContent();
        }

        public int GridWide { get { return grid.GetLength(0); } }
        public int GridHigh { get { return grid.GetLength(1); } }
    }
}


//if the grid contains >1 collideable entities,
//take first entity in grid, check intersect with all collidable entities in all cells it occupies, storing colliding pairs in seperate list.
//remove entity from all cells it occupies
//take next entity in grid and check intersect with all collidable entities in all cells it occupies, storing colliding pairs in seperate list.
//remove it from all cells it occupies
//this way only potential collides get tested, and of those potential pairs, each gets tested once.