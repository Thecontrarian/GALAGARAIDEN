using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Audio;
using Microsoft.Xna.Framework.Content;
using Microsoft.Xna.Framework.GamerServices;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Media;
using XnaUtility;
using XnaUtility.Debug;

namespace GalagaRadien
{
    abstract public class DrawableEntity : IDrawable, IUpdateable
    {
        
        /// <summary>
        /// Draws the IDrawable. Reference page contains links to related conceptual articles.
        /// </summary>
        /// <param name="gameTime">Snapshot of the game's timing state.</param>
        public void Draw(GameTime gameTime)
        {
            
        }

        /// <summary>
        /// Indicates whether IDrawable.Draw should be called in Game.Draw for this game component.
        /// </summary>
        public bool Visible { get; private set; }

        /// <summary>
        /// The order in which to draw this object relative to other objects. Objects with a lower value are drawn first.
        /// </summary>
        public int DrawOrder { get; private set; }
        public event EventHandler<EventArgs> VisibleChanged;
        public event EventHandler<EventArgs> DrawOrderChanged;

        /// <summary>
        /// Called when the game component should be updated.
        /// </summary>
        /// <param name="gameTime">Snapshot of the game's timing state.</param>
        public void Update(GameTime gameTime)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Indicates whether the game component's Update method should be called in Game.Update.
        /// </summary>
        public bool Enabled { get; private set; }

        /// <summary>
        /// Indicates when the game component should be updated relative to other game components. Lower values are updated first.
        /// </summary>
        public int UpdateOrder { get; private set; }
        public event EventHandler<EventArgs> EnabledChanged;
        public event EventHandler<EventArgs> UpdateOrderChanged;
    }
}
