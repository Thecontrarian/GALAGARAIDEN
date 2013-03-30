using System;
using System.Collections.Generic;
using System.Diagnostics.Eventing.Reader;
using System.Linq;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Audio;
using Microsoft.Xna.Framework.Content;
using Microsoft.Xna.Framework.GamerServices;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Media;
using XnaUtility.Debug;
using XnaUtility;


namespace GalagaRadien
{
    /// <summary>
    /// This is a game component that implements IUpdateable.
    /// </summary>
    public class BaseEntity : Microsoft.Xna.Framework.DrawableGameComponent
    {
        protected Random random;
        protected XnaUtility.Debug.XnaWatch watch;
        protected GraphicsDevice device;
        public static readonly List<BaseEntity> RecycleBin = new List<BaseEntity>();
        protected int WidthOfGame;
        protected int HeightOfGame;

        public BaseEntity(Game game)
            : base(game)
        {
            // TODO: Construct any child components here
        }

        public BaseEntity()
            : this(XnaUtility.UtilityMethods.CurrentGame)
        {
            
        }

        /// <summary>
        /// Allows the game component to perform any initialization it needs to before starting
        /// to run.  This is where it can query for any required services and load content.
        /// </summary>
        public override void Initialize()
        {
            watch = (XnaWatch)Game.Services.GetService(typeof(XnaWatch));
            random = (Random)Game.Services.GetService(typeof(Random));
            device = Game.GraphicsDevice;
            HeightOfGame = device.PresentationParameters.BackBufferHeight;
            WidthOfGame = device.PresentationParameters.BackBufferWidth;
            base.Initialize();
        }

        public void Recycle()
        {
            if (!Game.Components.Contains(this)) return;
            Game.Components.Remove(this);
            RecycleBin.Add(this);
        }

        public static BaseEntity GetOfType(Type type)
        {
            BaseEntity First = RecycleBin.FirstOfType(type) as BaseEntity;
            if(First == null)
            {
                var constructorInfo = type.GetConstructor(new Type[0]);
                if (constructorInfo != null)
                    return constructorInfo.Invoke(new object[]{}) as BaseEntity;
                throw new EventLogInvalidDataException("Type specified has no zero-arg constructor.");
            }
            RecycleBin.Remove(First);
            if (First is BaseDrawableEntity)
                (First as BaseDrawableEntity).AnimTime = 0;
            return First;
        }

        /// <summary>
        /// Method that gets called everytime an object of this class gets returned
        /// to the game from the recycle bin. Should be overloaded. Should include things like return health to full.
        /// The purpose of of this method in combonation with the recycle and create methods are reuse objects in 
        /// memory but give the illusion of a new instance.
        /// </summary>
        protected void Refresh()
        {
        }
    }
}
