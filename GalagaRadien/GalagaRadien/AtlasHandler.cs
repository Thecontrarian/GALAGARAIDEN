using System;
using System.Collections.Generic;
using System.Linq;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Audio;
using Microsoft.Xna.Framework.Content;
using Microsoft.Xna.Framework.GamerServices;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Media;


namespace GalagaRadien
{
    /// <summary>
    /// This is a game component that implements IUpdateable.
    /// </summary>
    public class AtlasHandler : Microsoft.Xna.Framework.GameComponent
    {
        public Dictionary<string, Rectangle> Dictionary { get; private set; }
        public Texture2D Texture { get; private set; }
        private readonly string tex;
        private readonly string dict;
        public AtlasHandler(Game game, string texName, string dictName)
            : base(game)
        {
            tex = texName;
            dict = dictName;
        }

        /// <summary>
        /// Allows the game component to perform any initialization it needs to before starting
        /// to run.  This is where it can query for any required services and load content.
        /// </summary>
        public override void Initialize()
        {
            Texture = Game.Content.Load<Texture2D>(tex);
            Dictionary = Game.Content.Load<Dictionary<string, Rectangle>>(dict);
            base.Initialize();
        }
    }
}
