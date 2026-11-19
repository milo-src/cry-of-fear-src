
/* public: void __thiscall CEnvFog::FadeOutDone(void) */

void __thiscall CEnvFog::FadeOutDone(CEnvFog *this)

{
                    /* 0x94810  114  ?FadeOutDone@CEnvFog@@QAEXXZ */
  *(uint *)(*(int *)(this + 4) + 0x1a4) = *(uint *)(*(int *)(this + 4) + 0x1a4) & 0xffff7fff;
  FUN_1009b650((undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c,0,0,0);
  return;
}

