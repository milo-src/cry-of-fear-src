
/* public: void __thiscall CEnvFog::TurnOff(void) */

void __thiscall CEnvFog::TurnOff(CEnvFog *this)

{
  uint *puVar1;
  int iVar2;
  
                    /* 0xa17d0  346  ?TurnOff@CEnvFog@@QAEXXZ */
  *(uint *)(*(int *)(this + 4) + 0x1a4) = *(uint *)(*(int *)(this + 4) + 0x1a4) & 0xfffffffe;
  if (*(float *)(this + 0xe8) != 0.0) {
    puVar1 = (uint *)(*(int *)(this + 4) + 0x1a4);
    *puVar1 = *puVar1 | 0x8000;
    iVar2 = *(int *)(this + 4);
    FUN_1009b650(*(undefined4 *)(iVar2 + 0x154),*(undefined4 *)(iVar2 + 0x158),
                 *(undefined4 *)(iVar2 + 0x15c),(int)-*(float *)(this + 0xe8),
                 *(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xe0));
    (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0xe8));
    *(code **)(this + 0x78) = FadeOutDone;
    return;
  }
  puVar1 = (uint *)(*(int *)(this + 4) + 0x1a4);
  *puVar1 = *puVar1 & 0xffff7fff;
  FUN_1009b650((undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c,0,0,0);
  FUN_10017ad0();
  return;
}

