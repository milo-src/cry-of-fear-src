
void FUN_10059e30(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  FUN_1007d4d0("Marking faces...");
  iVar2 = (*DAT_101b26dc)(0);
  iVar2 = *(int *)(iVar2 + 0xb94);
  if (iVar2 != 0) {
    iVar6 = 0;
    if (0 < *(int *)(iVar2 + 0xb0)) {
      local_8 = 0;
      do {
        iVar5 = *(int *)(iVar2 + 0xb4) + local_8;
        uVar1 = *(uint *)(iVar5 + 8);
        uVar4 = uVar1 & 0xfffff9ff;
        *(uint *)(iVar5 + 8) = uVar4;
        if (((((uVar1 & 0x14) == 0) && (iVar3 = FUN_1005a0e0(iVar5,0x3d), iVar3 != -1)) &&
            (iVar3 = FUN_1005a0e0(iVar5,0x3e), iVar3 != -1)) &&
           ((iVar3 = FUN_1005a0e0(iVar5,0x3f), iVar3 != -1 &&
            (iVar3 = *(int *)(*(int *)(iVar5 + 0x2c) + 0x24), *(int *)(iVar3 + 0x24) == -0x29a)))) {
          iVar3 = *(int *)(iVar3 + 0x2c);
          if (*(int *)(iVar3 + 0x10) != 0) {
            uVar4 = uVar4 | 0x200;
            *(uint *)(iVar5 + 8) = uVar4;
          }
          if ((*(int *)(iVar3 + 0x18) != 0) ||
             ((*(int *)(iVar3 + 0x1c) != 0 && (*(int *)(iVar3 + 0x10) != 0)))) {
            *(uint *)(iVar5 + 8) = uVar4 | 0x400;
          }
        }
        iVar6 = iVar6 + 1;
        local_8 = local_8 + 0x5c;
      } while (iVar6 < *(int *)(iVar2 + 0xb0));
    }
    FUN_1007d4d0(&DAT_1014b0f0);
  }
  return;
}

