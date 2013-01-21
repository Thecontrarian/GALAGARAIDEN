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
        
        static void Main(string[] args)
        {
            var frameWidth = 5;
            var grid = new int[5,5];
            
            var rect = new Rectangle(2, 4, 12, 5);
            
            for (int i = (int)Math.Floor((double) rect.Top/frameWidth); i < (int)Math.Ceiling((double) rect.Bottom/frameWidth); i++)
            {
                for (int j = (int)Math.Floor((double)rect.Left/frameWidth); j < (int)Math.Ceiling((double)rect.Right/frameWidth); j++)
                {
                    grid[j, i] = 1;
                }
            }
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    Console.Write(grid[j,i] + " ");
                }
                Console.Write("\n");
            }
            Console.ReadLine();

        }
        static private float _frameRate;
        static protected int FrameRate { get { return (int) (_frameRate*60f); } 
        set { _frameRate = value/60f; } }
    }
}
