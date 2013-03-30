using System;
using System.Text;
using System.Collections.Generic;
using System.Linq;
using GalagaRadien;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using Xunit;
using Shouldly;

namespace GalagaRadienTests
{
    public class UnitTest1
    {
        [Fact]
        public void TestGetOfType()
        {
            BaseEntity.GetOfType(typeof(Wing)).ShouldBeTypeOf<Wing>();
        }
    }
}
