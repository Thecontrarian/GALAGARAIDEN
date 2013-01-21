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
            FrameRate = 60;
            Console.WriteLine(_frameRate);
            Console.WriteLine(FrameRate);
            FrameRate = 30;
            Console.WriteLine(_frameRate);
            Console.WriteLine(FrameRate);
            FrameRate = 15;
            Console.WriteLine(_frameRate);
            Console.WriteLine(FrameRate);
            FrameRate = 1;
            Console.WriteLine(_frameRate);
            Console.WriteLine(FrameRate);

            Console.ReadLine();

        }
        static private float _frameRate;
        static protected int FrameRate { get { return (int) (_frameRate*60f); } 
        set { _frameRate = value/60f; } }
    }
}
