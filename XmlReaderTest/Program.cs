using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Xml;
using Microsoft.Xna.Framework;


namespace XmlReaderTest
{
    class Program
    {
        public bool Flagged = false;



        static void Main(string[] args)
        {
            var list = new List<Program>();
            list.Add(new Program());
            list.Add(new Program());
            list.Add(new Program());
            list.Add(new Program());
            list.Add(new Program());
            
            foreach (var s in list.Distinct())
            {
                s.Flagged=true;
                
            }
            Console.ReadLine();

//            var rand = new Random();
//            var rect = new List<Rectangle>();
//            var position = new List<Vector2>();
//            var rectForMat = new List<Rectangle>();
//            var origin = new List<Vector2>();
//            var rotation = new List<float>();
//            for (int i = 0; i < 1000; i++)
//            {
//                rectForMat.Add(new Rectangle(0,0,rand.Next(100),rand.Next(100)));
//                position.Add(new Vector2(rand.Next(100),rand.Next(100)));
//                rect.Add(new Rectangle(rand.Next(100),rand.Next(100),rand.Next(100),rand.Next(100)));
//                origin.Add(new Vector2(rand.Next(100),rand.Next(100)));
//                rotation.Add(rand.Next((int) (MathHelper.TwoPi*1000f))/1000f);
//            }
//            long ticksForMine = 0;
//            long ticksForMat = 0;
////            var position = new Vector2(56, 24);
////            var list = new List<TimeSpan>();
//            for (int i = 0; i < 1000; i++)
//            {
//
//                long time = DateTime.Now.Ticks;
//                // Build the block's transform
//                Matrix transform =
//                    Matrix.CreateTranslation(new Vector3(-origin[i], 0.0f)) *
//                    // Matrix.CreateScale(block.Scale) *  would go here
//                    Matrix.CreateRotationZ(rotation[i]) *
//                    Matrix.CreateTranslation(new Vector3(position[i], 0.0f));
//                var newRect = CalculateBoundingRectangle(rectForMat[i], transform);
//                ticksForMat += (DateTime.Now.Ticks - time);
//
//                time = DateTime.Now.Ticks;
//                var newrect = BoundingRectWithRotation(rect[i], origin[i], rotation[i]);
//                ticksForMine += (DateTime.Now.Ticks - time);
//            }
//            var mat = ticksForMat / 1000;
//            var mine = ticksForMine / 1000;
//
//
//            Console.WriteLine(mat);
//            Console.WriteLine(mine);
//            Console.ReadLine();

        }


        /// <summary>
        /// Calculates an axis aligned rectangle which fully contains an arbitrarily
        /// transformed axis aligned rectangle.
        /// </summary>
        /// <param name="rectangle">Original bounding rectangle.</param>
        /// <param name="transform">World transform of the rectangle.</param>
        /// <returns>A new rectangle which contains the trasnformed rectangle.</returns>
        public static Rectangle CalculateBoundingRectangle(Rectangle rectangle,
                                                           Matrix transform)
        {
            // Get all four corners in local space
            Vector2 leftTop = new Vector2(rectangle.Left, rectangle.Top);
            Vector2 rightTop = new Vector2(rectangle.Right, rectangle.Top);
            Vector2 leftBottom = new Vector2(rectangle.Left, rectangle.Bottom);
            Vector2 rightBottom = new Vector2(rectangle.Right, rectangle.Bottom);

            // Transform all four corners into work space
            Vector2.Transform(ref leftTop, ref transform, out leftTop);
            Vector2.Transform(ref rightTop, ref transform, out rightTop);
            Vector2.Transform(ref leftBottom, ref transform, out leftBottom);
            Vector2.Transform(ref rightBottom, ref transform, out rightBottom);

            // Find the minimum and maximum extents of the rectangle in world space
            Vector2 min = Vector2.Min(Vector2.Min(leftTop, rightTop),
                                      Vector2.Min(leftBottom, rightBottom));
            Vector2 max = Vector2.Max(Vector2.Max(leftTop, rightTop),
                                      Vector2.Max(leftBottom, rightBottom));

            // Return that as a rectangle
            return new Rectangle((int)min.X, (int)min.Y,
                                 (int)(max.X - min.X), (int)(max.Y - min.Y));
        }

        /// <summary>
        /// returns a rectangle that would fit the given rectangle were that rectangle to be rotated the given theta about given orgin
        /// </summary>
        /// <returns></returns>
        public static Rectangle BoundingRectWithRotation(Rectangle rectToFit, Vector2 orgin, float theta)
        {
            var points = new Vector2[4];
            points[0] = rotate_point(new Vector2(rectToFit.Left, rectToFit.Top), orgin, theta);
            points[1] = rotate_point(new Vector2(rectToFit.Right, rectToFit.Top), orgin, theta);
            points[2] = rotate_point(new Vector2(rectToFit.Left, rectToFit.Bottom), orgin, theta);
            points[3] = rotate_point(new Vector2(rectToFit.Right, rectToFit.Bottom), orgin, theta);
            float newTop = points[0].Y;
            float newBottom = points[0].Y;
            float newLeft = points[0].X;
            float newRight = points[0].X;
            foreach (Vector2 point in points)
            {
                newTop = point.Y < newTop ? point.Y : newTop;
                newBottom = point.Y > newBottom ? point.Y : newBottom;
                newLeft = point.X < newLeft ? point.X : newLeft;
                newRight = point.X > newRight ? point.X : newRight;
            }
            return new Rectangle((int)newLeft, (int)newTop, (int)(newRight - newLeft), (int)(newBottom - newTop));

        }

        public static Vector2 rotate_point(Vector2 PointToRotate, Vector2 Origin, float angle)
        {
            float sinTheta = (float)Math.Sin(angle);
            float cosTheta = (float)Math.Cos(angle);

            // translate point back to origin:
            PointToRotate.X -= Origin.X;
            PointToRotate.Y -= Origin.Y;

            // Which One Is Correct:
            // This?
            float xnew = PointToRotate.X * cosTheta - PointToRotate.Y * sinTheta;
            float ynew = PointToRotate.X * sinTheta + PointToRotate.Y * cosTheta;
            // Or This?
            //            float xnew = PointToRotate.X * cosTheta + PointToRotate.Y * sinTheta;
            //            float ynew = -PointToRotate.X * sinTheta + PointToRotate.Y * cosTheta;

            // translate point back:
            //            PointToRotate.X = xnew + Origin.X;
            //            PointToRotate.Y = ynew + Origin.Y;
            return new Vector2(xnew + Origin.X, ynew + Origin.Y);

        }

//        static void Main(string[] args)
//        {
//            var frameWidth = 5;
//            var grid = new int[5,5];
//            
//            var rect = new Rectangle(2, 4, 12, 5);
//            
//            for (int i = (int)Math.Floor((double) rect.Top/frameWidth); i < (int)Math.Ceiling((double) rect.Bottom/frameWidth); i++)
//            {
//                for (int j = (int)Math.Floor((double)rect.Left/frameWidth); j < (int)Math.Ceiling((double)rect.Right/frameWidth); j++)
//                {
//                    grid[j, i] = 1;
//                }
//            }
//            for (int i = 0; i < 5; i++)
//            {
//                for (int j = 0; j < 5; j++)
//                {
//                    Console.Write(grid[j,i] + " ");
//                }
//                Console.Write("\n");
//            }
//            Console.ReadLine();
//
//        }
//        static private float _frameRate;
//        static protected int FrameRate { get { return (int) (_frameRate*60f); } 
//        set { _frameRate = value/60f; } }
    }
}
