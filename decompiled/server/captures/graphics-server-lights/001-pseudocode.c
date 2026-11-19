
/* public: void __thiscall CFlashlight::TurnOn(void) */

void __thiscall CFlashlight::TurnOn(CFlashlight *this)

{
  uint uVar1;
  
                    /* 0x40190  349  ?TurnOn@CFlashlight@@QAEXXZ */
  if (*(int *)(*(int *)(this + 0x160) + 0x1ea8) == 0) {
    FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),1,"items/flashlight1.wav",0x3f800000,
                 0x3f4ccccd,0,100);
    *(uint *)(*(int *)(this + 0x160) + 0x1ea8) =
         (uint)(*(int *)(*(int *)(this + 0x160) + 0x1ea8) == 0);
    uVar1 = *(uint *)(*(int *)(this + 0x160) + 0x5d0);
    if ((uVar1 & 8) == 0) {
      *(uint *)(*(int *)(this + 0x160) + 0x5d0) = uVar1 | 8;
    }
  }
  return;
}

