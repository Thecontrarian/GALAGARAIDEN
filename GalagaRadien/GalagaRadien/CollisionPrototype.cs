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
    class CollisionPrototype : BaseDrawableEntity
    {
        private List<Vector2> pathNodes = new List<Vector2>();
        private Rectangle Speck = new Rectangle(112, 62, 1, 1);
        private float angleToTarget;
        private int currentNodeIndex;
        private KeyboardState keyboard;
        private KeyboardState prevKeyboard;
        private float distance;
        private List<int>[,] grid;
        private int framesize = 50;
        private List<int[]> currentCellsOccupied = new List<int[]>();
        private string currentCellsOccupiedString;
        private Rectangle rect;
        private bool isColliding = false;
        private Vector2 someVect;
        private Texture2D tex;

        public CollisionPrototype(Game game) : base(game)
        {
        }
        public CollisionPrototype()
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
            grid = new List<int>[WidthOfGame/framesize,HeightOfGame/framesize];
            Pos = new Vector2(200,200);
            tex = new Texture2D(device,1,1);
            currentNodeIndex = 0;
            AngleInRad = 0;
//            watch.AddToWatch(new WatchItem("Pos", () => Pos));
            watch.AddToWatch(new WatchItem("vect", () => someVect));
            watch.AddToWatch(new WatchItem("Current Cells Occupied", () => currentCellsOccupiedString));
//            watch.AddToWatch(new WatchItem("Angle", () => AngleInDeg));
//            watch.AddToWatch(new WatchItem("Angle To Target", () => angleToTarget));
            watch.AddToWatch(new WatchItem("distance", () => distance));
            watch.AddToWatch(new WatchItem("isColliding", () => isColliding));
            watch.AddToWatch(new WatchItem("Test", () => test));
//            
        }

        public override void Update(GameTime gameTime)
        {
            prevKeyboard = keyboard;
            keyboard = Keyboard.GetState();

            if (keyboard.IsKeyDown(Keys.Left))
            {
                AngleInDeg = AngleInDeg + 1;
            }
            else if (keyboard.IsKeyDown(Keys.Right))
            {
                AngleInDeg = AngleInDeg - 1;
            }
            if (keyboard.ClickPress(prevKeyboard,Keys.H))
            {
                test = !test;
            }
            UtilityMethods.MoveVector2WASD(ref Pos, ref BoundingRect);

            currentCellsOccupied.Clear();
            currentCellsOccupiedString = "";
            grid = new List<int>[GridWide, GridHigh];
            rect = BoundingRect;
            for (int i = (int)Math.Floor((double)(rect.Top * 2) / framesize); i < (int)Math.Ceiling((double)(rect.Bottom * 2) / framesize); i++)
            {
                for (int j = (int)Math.Floor((double)(rect.Left * 2) / framesize); j < (int)Math.Ceiling((double)(rect.Right * 2) / framesize); j++)
                {
                    if (j >= 0 && j < GridWide && i >= 0 && i < GridHigh)
                    {
                        if (grid[j, i] == null)
                        {
                            grid[j, i] = new List<int>();
                        }
                        grid[j, i].Add(1);
                        //                        currentCellsOccupied.Add(new[]{j,i});
                        //                        currentCellsOccupiedString += "(" + j + "," + i + "), ";
                    }

                }
            }
            rect = new Rectangle((int)(WidthOfGame / 4 - Origin.X), (int)(HeightOfGame / 4 - Origin.Y), Frames[0].Width, Frames[0].Height);
            for (int i = (int)Math.Floor((double)(rect.Top * 2) / framesize); i < (int)Math.Ceiling((double)(rect.Bottom * 2) / framesize); i++)
            {
                for (int j = (int)Math.Floor((double)(rect.Left * 2) / framesize); j < (int)Math.Ceiling((double)(rect.Right * 2) / framesize); j++)
                {
                    if (j >= 0 && j < GridWide && i >= 0 && i < GridHigh)
                    {
                        if (grid[j, i] == null)
                        {
                            grid[j, i] = new List<int>();
                        }
                        grid[j, i].Add(2);
                    }
                    currentCellsOccupiedString += "(" + j + "," + i + "), ";
                    currentCellsOccupied.Add(new[] { j, i });
                }
            }


            someVect = new Vector2();
            isColliding = false;
            for (int i = 0; i < GridHigh; i++)
            {
                for (int j = 0; j < GridWide; j++)
                {
                    if (grid[j, i] == null)
                    {
                        grid[j, i] = new List<int>();
                    }
                    if (grid[j, i].Count < 2)
                    {
                        continue;
                    }
                    var mat1 = UtilityMethods.Get2DTransformationMatrix(-Origin, AngleInRad, 2f, Pos);
                    var mat2 = UtilityMethods.Get2DTransformationMatrix(-Origin, null, 2f,
                                                                        new Vector2(WidthOfGame / 2, HeightOfGame / 2));
//                    Matrix mat1 =
//                    Matrix.CreateTranslation(new Vector3(-Origin, 0.0f)) *
//                         Matrix.CreateScale(2f) *//  would go here
//                    Matrix.CreateRotationZ(AngleInRad) *
//                    Matrix.CreateTranslation(new Vector3(Pos, 0.0f));
//
//                    Matrix mat2 =
//                    Matrix.CreateTranslation(new Vector3(-Origin, 0.0f)) *
//                         Matrix.CreateScale(2f) *// would go here
////                    Matrix.CreateRotationZ(AngleInRad) *
//                    Matrix.CreateTranslation(new Vector3(new Vector2(WidthOfGame / 2, HeightOfGame / 2), 0.0f));
                    isColliding = UtilityMethods.TexturesCollide(ColorArrays[0], mat1, ColorArrays[0], mat2);
//                    isColliding = IntersectPixels(mat1, 20, 25, ColorArrays[0], mat2, 20, 25, ColorArrays[0]);
//                    isColliding = someVect != new Vector2(-1, -1);
                }
            }

           
            base.Update(gameTime);
        }

        



        public Vector2 AngleToVector(float angle)
        {
            return new Vector2((float)-Math.Sin(angle), (float)Math.Cos(angle));
        }
        public override void Draw(GameTime gameTime)
        {

//            //collision grid
//            for (int i = 1; i < GridHigh; i++)
//            {
//                spriteBatch.Draw(atlasHandler.Texture, (new Vector2(WidthOfGame/2f,framesize*i) ) / 2, Speck, Color.CornflowerBlue, 0f, new Vector2(.5f,.5f), new Vector2(WidthOfGame/2f,.5f), SpriteEffects.None, 1);
//            }
//            for (int i = 1; i < GridWide; i++)
//            {
//                spriteBatch.Draw(atlasHandler.Texture, (new Vector2(framesize*i,HeightOfGame/2f) ) / 2, Speck, Color.CornflowerBlue, 0f, new Vector2(.5f,.5f), new Vector2(.5f,HeightOfGame/2f), SpriteEffects.None, 1);
//            }
//
//            foreach (int[] cellCoords in currentCellsOccupied)
//            {
//                spriteBatch.Draw(atlasHandler.Texture, new Vector2(cellCoords[0]*framesize,cellCoords[1]*framesize)/2, Speck, Color.Blue, 0f, new Vector2(0f), new Vector2(framesize, framesize)/2, SpriteEffects.None, 1f);
//                
//            }

            //rectangle of sprite
//            spriteBatch.Draw(atlasHandler.Texture, Pos / 2f, Speck, Color.White, 0f, new Vector2(.5f, .5f), new Vector2(Frames[0].Width, Frames[0].Height), SpriteEffects.None, 1f);
            
            //sprite
            spriteBatch.Draw(atlasHandler.Texture, BoundingRect, Speck, Color.White, 0f, new Vector2(0, 0), SpriteEffects.None, 1f);
            spriteBatch.Draw(atlasHandler.Texture, rect, Speck, Color.White, 0f, new Vector2(0, 0), SpriteEffects.None, 1f);
            spriteBatch.Draw(atlasHandler.Texture,Pos/2,Frames[0],Color.White,AngleInRad,Origin,1f,SpriteEffects.None, 1f);
            spriteBatch.Draw(atlasHandler.Texture,new Vector2(WidthOfGame/2,HeightOfGame/2)/2,Frames[0], Color.White,0f,Origin,1f,SpriteEffects.None, 1);
            spriteBatch.Draw(tex,new Vector2(110,100), Color.White );
            
            base.Draw(gameTime);
        }

        protected override void LoadContent()
        {
            AddFrames("BuruEnemy_1a_frame1");
            Origin = new Vector2(Frames[0].Width/4,Frames[0].Height/4);
//            Origin = new Vector2(0,0);
            base.LoadContent();
        }


        /// <summary>
        /// Determines if there is overlap of the non-transparent pixels
        /// between two sprites.
        /// </summary>
        /// <param name="rectangleA">Bounding rectangle of the first sprite</param>
        /// <param name="dataA">Pixel data of the first sprite</param>
        /// <param name="rectangleB">Bouding rectangle of the second sprite</param>
        /// <param name="dataB">Pixel data of the second sprite</param>
        /// <returns>True if non-transparent pixels overlap; false otherwise</returns>
        public static bool IntersectPixels(Rectangle rectangleA, Color[] dataA,
                                           Rectangle rectangleB, Color[] dataB)
        {
            // Find the bounds of the rectangle intersection
            int top = Math.Max(rectangleA.Top, rectangleB.Top);
            int bottom = Math.Min(rectangleA.Bottom, rectangleB.Bottom);
            int left = Math.Max(rectangleA.Left, rectangleB.Left);
            int right = Math.Min(rectangleA.Right, rectangleB.Right);

            // Check every point within the intersection bounds
            for (int y = top; y < bottom; y++)
            {
                for (int x = left; x < right; x++)
                {
                    // Get the color of both pixels at this point
                    Color colorA = dataA[(x - rectangleA.Left) +
                                         (y - rectangleA.Top) * rectangleA.Width];
                    Color colorB = dataB[(x - rectangleB.Left) +
                                         (y - rectangleB.Top) * rectangleB.Width];

                    // If both pixels are not completely transparent,
                    if (colorA.A != 0 && colorB.A != 0)
                    {
                        // then an intersection has been found
                        return true;
                    }
                }
            }

            // No intersection found
            return false;
        }


        /// <summary>
        /// Determines if there is overlap of the non-transparent pixels between two
        /// sprites.
        /// </summary>
        /// <param name="transformA">World transform of the first sprite.</param>
        /// <param name="widthA">Width of the first sprite's texture.</param>
        /// <param name="heightA">Height of the first sprite's texture.</param>
        /// <param name="dataA">Pixel color data of the first sprite.</param>
        /// <param name="transformB">World transform of the second sprite.</param>
        /// <param name="widthB">Width of the second sprite's texture.</param>
        /// <param name="heightB">Height of the second sprite's texture.</param>
        /// <param name="dataB">Pixel color data of the second sprite.</param>
        /// <returns>True if non-transparent pixels overlap; false otherwise</returns>
        public static bool IntersectPixels(
                            Matrix transformA, int widthA, int heightA, Color[] dataA,
                            Matrix transformB, int widthB, int heightB, Color[] dataB)
        {
            // Calculate a matrix which transforms from A's local space into
            // world space and then into B's local space
            Matrix transformAToB = transformA * Matrix.Invert(transformB);

            // When a point moves in A's local space, it moves in B's local space with a
            // fixed direction and distance proportional to the movement in A.
            // This algorithm steps through A one pixel at a time along A's X and Y axes
            // Calculate the analogous steps in B:
            Vector2 stepX = Vector2.TransformNormal(Vector2.UnitX, transformAToB);
            Vector2 stepY = Vector2.TransformNormal(Vector2.UnitY, transformAToB);

            // Calculate the top left corner of A in B's local space
            // This variable will be reused to keep track of the start of each row
            Vector2 yPosInB = Vector2.Transform(Vector2.Zero, transformAToB);

            // For each row of pixels in A
            for (int yA = 0; yA < heightA; yA++)
            {
                // Start at the beginning of the row
                Vector2 posInB = yPosInB;

                // For each pixel in this row
                for (int xA = 0; xA < widthA; xA++)
                {
                    // Round to the nearest pixel
                    int xB = (int)Math.Round(posInB.X);
                    int yB = (int)Math.Round(posInB.Y);

                    // If the pixel lies within the bounds of B
                    if (0 <= xB && xB < widthB &&
                        0 <= yB && yB < heightB)
                    {
                        // Get the colors of the overlapping pixels
                        Color colorA = dataA[xA + yA * widthA];
                        Color colorB = dataB[xB + yB * widthB];

                        // If both pixels are not completely transparent,
                        if (colorA.A != 0 && colorB.A != 0)
                        {
                            // then an intersection has been found
                            return true;
                        }
                    }

                    // Move to the next pixel in the row
                    posInB += stepX;
                }

                // Move to the next row
                yPosInB += stepY;
            }

            // No intersection found
            return false;
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