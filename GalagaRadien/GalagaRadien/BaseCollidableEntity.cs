using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;
using XnaUtility;

namespace GalagaRadien
{
    public enum CollideTypes
    {
        EnemyShips,
        EnemyBullets,
        FriendlyShips,
        FriendlyBullets
    };
    class BaseCollidableEntity : BaseDrawableEntity
    {
        public bool Checked = false;
        public static List<BaseCollidableEntity> AxisList = new List<BaseCollidableEntity>();
        public static Point GridSize;
        public static Point FrameSize;
        public List<Point> CurrentlyOccupying = new List<Point>();
        protected CollideTypes CollideType;
        protected List<CollideTypes> CollideAgainstTypes = new List<CollideTypes>();
        public BaseCollidableEntity(Game game) : base(game)
        {
        }

        public BaseCollidableEntity()
        {
        }

        public static void SortAxisList()
        {
            int i, j;

            for (i = 0; i < AxisList.Count; i++)
            {
                var selected = AxisList[i];
                j = i - 1;
                while ((j > -1) && (AxisList[j].BoundingRect.Left > selected.BoundingRect.Left))
                {
                    AxisList[j+1] = AxisList[j];
                    j--;
                }
                AxisList[j + 1] = selected;
            }
        }

        public static List<Tuple<BaseCollidableEntity, BaseCollidableEntity>> TestColls()
        {
            var list = AxisList;
            var activeList = new List<BaseCollidableEntity>();
            var hits = new List<Tuple<BaseCollidableEntity, BaseCollidableEntity>>();
            activeList.Add(list[0]);
            for (int i = 1; i < list.Count; i++)
            {
                var selected = list[i];
                var count = activeList.Count;
                for (int j = 0; j < activeList.Count; j++)
                {
                    var entity = activeList[j];
                    if (!selected.CollideAgainstTypes.Contains(entity.CollideType) || !entity.CollideAgainstTypes.Contains(selected.CollideType))
                    {
                    }
                    else if (selected.BoundingRect.Left > entity.BoundingRect.Right)
                    {
                        activeList.Remove(entity);
                        j--;
//                        count--;
                    }
                    else if (selected.BoundingRect.Bottom > entity.BoundingRect.Top &&
                        selected.BoundingRect.Top < entity.BoundingRect.Bottom)
                    {
                        if (CheckPixelColls(selected,entity))
                        {
                            hits.Add(new Tuple<BaseCollidableEntity, BaseCollidableEntity>(selected,entity));
                        }
                    }
                    
                }
                activeList.Add(selected);
            }
            return hits;
        }

        public static bool CheckPixelColls(BaseCollidableEntity C1, BaseCollidableEntity C2)
        {
            var C1mat = UtilityMethods.Get2DTransformationMatrix(-C1.Origin, C1.AngleInRad, 2f, C1.Pos);
            var C2mat = UtilityMethods.Get2DTransformationMatrix(-C2.Origin, C2.AngleInRad, 2f, C2.Pos);
            return UtilityMethods.TexturesCollide(C1.ColorArrays[C1.CurrentFrameIndex], C1mat,
                C2.ColorArrays[C2.CurrentFrameIndex], C2mat);
        }

//        public void FillCurrentlyOccupying()
//        {
//            CurrentlyOccupying.Clear();
//            for (var i = (int)Math.Floor((double)(BoundingRect.Top * 2) / FrameSize.Y); i < (int)Math.Ceiling((double)(BoundingRect.Bottom * 2) / FrameSize.Y); i++)
//            {
//                for (var j = (int)Math.Floor((double)(BoundingRect.Left * 2) / FrameSize.X); j < (int)Math.Ceiling((double)(BoundingRect.Right * 2) / FrameSize.X); j++)
//                {
//                    if (j >= 0 && j < GridSize.X && i >= 0 && i < GridSize.Y)
//                    {
//                        CurrentlyOccupying.Add(new Point(j,i));
//                    }
//
//                }
//            }
//        }

    }
}
