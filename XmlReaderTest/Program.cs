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
            var reader = new XmlTextReader("X.xml");
            var curve = new Curve();
            while (reader.Read())
            {
                switch (reader.Name)
                {
                    case "PreLoop":
                        {
                            reader.Read();
                            CurveLoopType preLoop;
                            Enum.TryParse(reader.Value, true, out preLoop);
                            curve.PreLoop = preLoop;
                            reader.Read();
                        }
                        break;
                    case "PostLoop":
                        {
                            reader.Read();
                            CurveLoopType postLoop;
                            Enum.TryParse(reader.Value, true, out postLoop);
                            curve.PostLoop = postLoop;
                            reader.Read();
                        }
                        break;
                    case "Keys":
                        {
                            reader.Read();
                            var str = reader.Value;
                            var keys = str.Split(' ');
                            for (int i = 0; i < (keys.Count()/5); i++)
                            {
                                CurveContinuity continuity;
                                Enum.TryParse(keys[i*5 + 4], out continuity);
                                curve.Keys.Add(new CurveKey(
                                                   float.Parse(keys[i * 5]),
                                                   float.Parse(keys[i * 5 + 1]),
                                                   float.Parse(keys[i * 5 + 2]),
                                                   float.Parse(keys[i * 5 + 3]),
                                                   continuity));
                            }
                            reader.Read();
                        }
                        break;
                }
            }
            reader.Close();
        }
    }
}
