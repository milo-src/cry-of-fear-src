
/* public: void __thiscall CEnvFog::TurnOn(void) */

void __thiscall CEnvFog::TurnOn(CEnvFog *this)

{
  uint *puVar1;
  int iVar2;
  
                    /* 0xa1980  348  ?TurnOn@CEnvFog@@QAEXXZ */
  *(uint *)(*(int *)(this + 4) + 0x1a4) = *(uint *)(*(int *)(this + 4) + 0x1a4) | 1;
  if (*(float *)(this + 0xe4) != 0.0) {
    puVar1 = (uint *)(*(int *)(this + 4) + 0x1a4);
    *puVar1 = *puVar1 | 0x8000;
    iVar2 = *(int *)(this + 4);
    FUN_1009b650(*(undefined4 *)(iVar2 + 0x154),*(undefined4 *)(iVar2 + 0x158),
                 *(undefined4 *)(iVar2 + 0x15c),(int)*(float *)(this + 0xe4),
                 *(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xe0));
    (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0xe4));
    *(code **)(this + 0x78) = FadeInDone;
    return;
  }
  puVar1 = (uint *)(*(int *)(this + 4) + 0x1a4);
  *puVar1 = *puVar1 & 0xffff7fff;
  iVar2 = *(int *)(this + 4);
  FUN_1009b650(*(undefined4 *)(iVar2 + 0x154),*(undefined4 *)(iVar2 + 0x158),
               *(undefined4 *)(iVar2 + 0x15c),0,*(undefined4 *)(this + 0xdc),
               *(undefined4 *)(this + 0xe0));
  if (*(float *)(this + 0xec) != 0.0) {
    (**(code **)(*(int *)this + 8))(*(float *)(this + 0xec));
    *(code **)(this + 0x78) = TurnOff;
  }
  return;
}

