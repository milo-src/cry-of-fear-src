
undefined4 FUN_100c3e50(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = param_1[0x18];
  if ((char)uVar1 < '\0') {
    uVar4 = uVar1 & 0xffffff7f;
    param_1[0x18] = uVar4;
    if ((uVar1 & 0x800) != 0) {
      param_1[0x18] = uVar1 & 0xfffff77f;
      (**(code **)*param_1)();
      uVar4 = param_1[0x18];
    }
    if ((uVar4 & 0x400) != 0) {
      iVar2 = param_1[1];
      param_1[0x18] = uVar4 & 0xfffffbff;
      iVar3 = *(int *)(param_1[7] + 4);
      (*DAT_1022303c)(1,
                      "DesiredInfo: pos %f %f %f, vel %f %f %f. Child pos %f %f %f, vel %f %f %f\n\n"
                      ,(double)*(float *)(iVar2 + 8),(double)*(float *)(iVar2 + 0xc),
                      (double)*(float *)(iVar2 + 0x10),(double)*(float *)(iVar2 + 0x20),
                      (double)*(float *)(iVar2 + 0x24),(double)*(float *)(iVar2 + 0x28),
                      (double)*(float *)(iVar3 + 8),(double)*(float *)(iVar3 + 0xc),
                      (double)*(float *)(iVar3 + 0x10),(double)*(float *)(iVar3 + 0x20),
                      (double)*(float *)(iVar3 + 0x24),(double)*(float *)(iVar3 + 0x28));
      uVar4 = param_1[0x18];
    }
    if ((uVar4 & 0x200) != 0) {
      param_1[0x18] = uVar4 & 0xfffffdff;
      FUN_100c41b0();
      uVar4 = param_1[0x18];
    }
    if ((uVar4 & 0x100) != 0) {
      param_1[0x18] = uVar4 & 0xfffffeff;
      (**(code **)(*param_1 + 0xe0))();
    }
    return 1;
  }
  return 0;
}

