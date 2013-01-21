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
    public class MousePos : BaseDrawableEntity
    {
        public MousePos(Game game)
            : base(game)
        {
            // TODO: Construct any child components here
        }

        public MousePos()
        {
            
        }

        /// <summary>
        /// Allows the game component to perform any initialization it needs to before starting
        /// to run.  This is where it can query for any required services and load content.
        /// </summary>
        public override void Initialize()
        {
            // TODO: Add your initialization code here

            base.Initialize();
        }

        /// <summary>
        /// Allows the game component to update itself.
        /// </summary>
        /// <param name="gameTime">Provides a snapshot of timing values.</param>
        public override void Update(GameTime gameTime)
        {
            // TODO: Add your update code here

            base.Update(gameTime);
        }

        public override void Draw(GameTime gameTime)
        {
            MouseState mouseState = Mouse.GetState();
            spriteBatch.DrawString(watch.font,
                mouseState.X + ", " + mouseState.Y,
                new Vector2(mouseState.X / 2f + 5f, mouseState.Y / 2f + 5f),
                Color.White,
                0f,
                Vector2.Zero,
                .5f,
                SpriteEffects.None,
                1);
            base.Draw(gameTime);
        }
    }
}
