
void FUN_1009e640(void)

{
  int iVar1;
  int *in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*in_ECX + 0x30))();
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),
                  *(int *)(in_ECX[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98));
  FUN_10119fe0();
  if (*(int *)(in_ECX[1] + 0xb8) != 0) {
    iVar1 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0xb8),"skogsris");
    if (iVar1 != 0) {
      *(undefined4 *)(in_ECX[1] + 0x160) = 0x5e;
    }
  }
  iVar1 = in_ECX[1];
  if ((*(byte *)(iVar1 + 0x1a4) & 4) != 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 3;
    local_10 = 0x41200000;
    local_c = 0x41200000;
    local_8 = 0x41200000;
    local_1c = 0xc1200000;
    local_18 = 0xc1200000;
    local_14 = 0xc1200000;
    FUN_1011a030(in_ECX[1],&local_1c,&local_10);
    iVar1 = in_ECX[1];
  }
  if ((*(byte *)(iVar1 + 0x1a4) & 2) != 0) {
    *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) + 1.0;
    (*DAT_10222fb0)(*(undefined4 *)(in_ECX[1] + 0x20c));
    iVar1 = in_ECX[1];
  }
  if ((*(int *)(iVar1 + 0x160) == 0) && (*(int *)(iVar1 + 0xb8) != 0)) {
    iVar1 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 0xb8),"obbsror");
    if (iVar1 == 0) {
      *(undefined4 *)(in_ECX[1] + 0x160) = 0x5c;
    }
  }
  FUN_1000eb70(0,*(undefined4 *)(in_ECX[1] + 600));
  FUN_1000eb70(1,*(undefined4 *)(in_ECX[1] + 0x25c));
  FUN_1000eb70(2,*(undefined4 *)(in_ECX[1] + 0x260));
  FUN_1000eb70(3,*(undefined4 *)(in_ECX[1] + 0x264));
  FUN_1009bed0();
  (**(code **)(*in_ECX + 8))(0x3dcccccd);
  iVar1 = (*DAT_102230b0)(0,8);
  in_ECX[0x42] = iVar1;
  iVar1 = (*DAT_102230b0)(0,8);
  in_ECX[0x43] = iVar1;
  if (in_ECX[0x41] != 0) {
    FUN_1000eb40(1,in_ECX[0x42]);
    FUN_1000eb40(2,in_ECX[0x43]);
  }
  return;
}

