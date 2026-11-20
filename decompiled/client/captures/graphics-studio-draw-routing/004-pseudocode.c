
void FUN_1008f0b0(void)

{
  int iVar1;
  int *in_ECX;
  
  (*DAT_1054584c)();
  (*DAT_10545838)(0);
  if (*(int *)(in_ECX[0xc] + 0x304) == 0x13) {
    *(undefined4 *)(in_ECX[0xc] + 0x304) = 0;
    (**(code **)(*in_ECX + 0x4c))();
    iVar1 = (*DAT_10545850)();
    if (iVar1 == 0) {
      (**(code **)(DAT_101b2750 + 4))(5);
    }
    (*DAT_10545838)(2);
    (**(code **)(DAT_101b2750 + 0x2c))(in_ECX[0x16],0);
    *(undefined4 *)(in_ECX[0xc] + 0x304) = 0x13;
    (**(code **)(*in_ECX + 0x4c))();
    iVar1 = (*DAT_10545850)();
    if (iVar1 == 0) {
      (**(code **)(DAT_101b2750 + 4))(0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1008f145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x4c))();
  return;
}

