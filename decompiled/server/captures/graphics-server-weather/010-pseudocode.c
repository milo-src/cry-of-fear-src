
/* public: void __thiscall CCofStressTest::TurnOnDynLight(void) */

void __thiscall CCofStressTest::TurnOnDynLight(CCofStressTest *this)

{
                    /* 0xa1c40  351  ?TurnOnDynLight@CCofStressTest@@QAEXXZ */
  (*DAT_10223034)("gl_dynlight",0x3f800000);
  (**(code **)(*(int *)this + 8))(0x40a00000);
  *(code **)(this + 0x78) = ReportEffect;
  return;
}

