
void FUN_100ae850(void)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  int in_stack_00000010;
  
  fVar2 = (float10)FUN_10094510(&stack0x00000004);
  if ((0.001 < (double)fVar2) ||
     (fVar2 = (float10)FUN_10094510(&DAT_10559620), 0.001 < (double)fVar2)) {
    iVar1 = in_stack_00000010;
    FUN_10094770(&stack0x00000004,*(undefined4 *)(in_stack_00000010 + 0x3c),&DAT_10559620,
                 &stack0x00000004);
    fVar3 = 1.0 - *(float *)(iVar1 + 0x3c) * 9.0;
    fVar4 = 0.0;
    if (0.0 <= fVar3) {
      fVar4 = fVar3;
    }
    FUN_10094880(&DAT_10559620,fVar4,&DAT_10559620);
    fVar3 = *(float *)(iVar1 + 0x3c) * 65.0;
    fVar4 = 0.0;
    if (0.0 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar3 = 2.0;
    if (fVar4 <= 2.0) {
      fVar3 = fVar4;
    }
    FUN_10094770(&DAT_10559620,-fVar3,&stack0x00000004,&DAT_10559620);
    fVar4 = -89.0;
    if (-89.0 <= DAT_105595b4) {
      fVar4 = DAT_105595b4;
    }
    fVar3 = -89.0;
    if (-89.0 <= DAT_105595bc) {
      fVar3 = DAT_105595bc;
    }
    DAT_105595b4 = 89.0;
    if (fVar4 <= 89.0) {
      DAT_105595b4 = fVar4;
    }
    fVar4 = -179.0;
    if (-179.0 <= DAT_105595b8) {
      fVar4 = DAT_105595b8;
    }
    DAT_105595bc = 89.0;
    if (fVar3 <= 89.0) {
      DAT_105595bc = fVar3;
    }
    DAT_105595b8 = 179.0;
    if (fVar4 <= 179.0) {
      DAT_105595b8 = fVar4;
    }
  }
  return;
}

