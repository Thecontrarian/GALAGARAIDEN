using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;

namespace GalagaRadien.TypeSpecs
{
    enum EntrySide
    {
        Left,
        Right,
        Top
    }

    enum ProceedCondition
    {
        AllDead
    }
    class WingSpec : ITypeSpec
    {
        public WingSpec( string typeSpecName, EntrySide entrySide, List<string> contents, ProceedCondition proceedCondition)
        {
            Base = typeof(Wing);
            TypeSpecName = typeSpecName;
            ProceedCondition = proceedCondition;
            EntrySide = entrySide;
            Contents = contents;
            
        }

        public List<string> Contents { get; private set; }
        public Type Base { get; private set; }
        public string TypeSpecName { get; private set; }
        public EntrySide EntrySide { get; private set; }
        public ProceedCondition ProceedCondition { get; private set; }
    }
}
