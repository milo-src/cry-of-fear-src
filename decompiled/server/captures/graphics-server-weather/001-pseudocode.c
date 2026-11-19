
/* public: void __thiscall CEnvFog::FadeInDone(void) */

void __thiscall CEnvFog::FadeInDone(CEnvFog *this)

{
  int iVar1;
  
                    /* 0x94790  113  ?FadeInDone@CEnvFog@@QAEXXZ */
  *(uint *)(*(int *)(this + 4) + 0x1a4) = *(uint *)(*(int *)(this + 4) + 0x1a4) & 0xffff7fff;
  iVar1 = *(int *)(this + 4);
  FUN_1009b650(*(undefined4 *)(iVar1 + 0x154),*(undefined4 *)(iVar1 + 0x158),
               *(undefined4 *)(iVar1 + 0x15c),0,*(undefined4 *)(this + 0xdc),
               *(undefined4 *)(this + 0xe0));
  if (*(float *)(this + 0xec) != 0.0) {
    (**(code **)(*(int *)this + 8))(*(float *)(this + 0xec));
    *(code **)(this + 0x78) = TurnOff;
  }
  return;
}

