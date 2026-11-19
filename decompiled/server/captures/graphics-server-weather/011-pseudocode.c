
/* public: void __thiscall CCofStressTest::TurnOnWater(void) */

void __thiscall CCofStressTest::TurnOnWater(CCofStressTest *this)

{
                    /* 0xa1c70  352  ?TurnOnWater@CCofStressTest@@QAEXXZ */
  (*DAT_10223034)("cg_water",0x3f800000);
  (**(code **)(*(int *)this + 8))(0x40a00000);
  *(code **)(this + 0x78) = ReportEffect;
  return;
}

