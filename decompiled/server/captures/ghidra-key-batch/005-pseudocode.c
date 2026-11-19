
void FUN_1004e160(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  float10 fVar3;
  
  iVar1 = in_ECX[1];
  if (*(int *)(iVar1 + 0x1d8) == 0) {
    (*DAT_1022303c)(4,"CoF: Key with no item .txt at %f %f %f!\n",(double)*(float *)(iVar1 + 8),
                    (double)*(float *)(iVar1 + 0xc),(double)*(float *)(iVar1 + 0x10));
    *(undefined4 *)(in_ECX[1] + 0x1c0) = 0;
    FUN_10119900();
    iVar1 = in_ECX[1];
  }
  *(undefined4 *)(iVar1 + 0x160) = 99;
  iVar1 = *(int *)(in_ECX[1] + 0xb8);
  while (iVar1 == 0) {
    FUN_1004dbf0("3dmdl",*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0x1d8));
    uVar2 = (*DAT_10223054)();
    *(undefined4 *)(in_ECX[1] + 0xb8) = uVar2;
    iVar1 = *(int *)(in_ECX[1] + 0xb8);
  }
  (**(code **)(*in_ECX + 0x30))();
  iVar1 = in_ECX[1];
  if (*(int *)(iVar1 + 0xb8) == 0) {
    (*DAT_1022303c)(4,"CoF: Key with no model at %f %f %f!\n",(double)*(float *)(iVar1 + 8),
                    (double)*(float *)(iVar1 + 0xc),(double)*(float *)(iVar1 + 0x10));
    *(undefined4 *)(in_ECX[1] + 0x1c0) = 0;
    FUN_10119900();
  }
  else {
    (*DAT_10222f50)(*(undefined4 *)(iVar1 + 0x20c),
                    *(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 0xb8));
  }
  FUN_10119fe0();
  *(undefined4 *)(in_ECX[1] + 0x10c) = 2;
  *(undefined4 *)(in_ECX[1] + 0x108) = 6;
  FUN_100180e0();
  in_ECX[0x20] = (int)CKeyitemModel::KeyitemUse;
  if (((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) &&
     (fVar3 = (float10)(*DAT_1022302c)(), (float)fVar3 != 4.0)) {
    *(undefined4 *)(in_ECX[1] + 0x1c0) = 0;
    FUN_10119900();
  }
  if ((*(byte *)(in_ECX[1] + 0x1a4) & 2) != 0) {
    *(undefined4 *)(in_ECX[1] + 0x248) = 3;
  }
  return;
}

