
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008edf0(void)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  
  iVar2 = (*DAT_10545834)();
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x30) + 0x2f8);
  }
  else {
    uVar3 = 5;
  }
  if ((*(float *)(DAT_104cd508 + 0xc) == 0.0) || (*(float *)(DAT_104cd538 + 0xc) == 0.0)) {
    (*DAT_10545844)(uVar3);
  }
  else {
    FUN_100687d0(uVar3);
  }
  fVar1 = *(float *)(*(int *)(in_ECX + 0x2c) + 0xc);
  if (fVar1 == 2.0) {
    (*DAT_10545820)();
  }
  else if (fVar1 == 3.0) {
    (*DAT_10545818)();
  }
  else {
    iVar2 = 0;
    if (0 < *(int *)(*(int *)(in_ECX + 0x44) + 0xcc)) {
      do {
        if ((*(float *)(DAT_104cd508 + 0xc) == 0.0) || (*(float *)(DAT_104cd538 + 0xc) == 0.0)) {
          (*DAT_10545800)(iVar2,in_ECX + 0x48,in_ECX + 0x4c);
        }
        else {
          FUN_10068770(iVar2);
        }
        if (*(int *)(in_ECX + 0x18) != 0) {
          *(undefined4 *)(*(int *)(in_ECX + 0x30) + 0xb90) = 0;
        }
        (*DAT_10545858)(uVar3);
        if ((*(float *)(DAT_104cd508 + 0xc) == 0.0) || (*(float *)(DAT_104cd538 + 0xc) == 0.0)) {
          (*DAT_10545814)();
        }
        else {
          FUN_10065ef0();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(*(int *)(in_ECX + 0x44) + 0xcc));
    }
  }
  iVar2 = *(int *)(in_ECX + 0x2c);
  if (*(float *)(iVar2 + 0xc) == 4.0) {
    (**(code **)(DAT_101b2750 + 4))(5);
    (*DAT_10545818)();
    (**(code **)(DAT_101b2750 + 4))(0);
    iVar2 = *(int *)(in_ECX + 0x2c);
  }
  if (*(float *)(iVar2 + 0xc) == 5.0) {
    (*DAT_1054581c)();
  }
  if ((*(float *)(DAT_104cd508 + 0xc) != 0.0) && (*(float *)(DAT_104cd538 + 0xc) != 0.0)) {
    FUN_10067850();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1008efd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10545848)();
  return;
}

