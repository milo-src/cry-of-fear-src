
void FUN_1006a6f0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_14;
  
  iVar4 = (*DAT_101b26dc)(0);
  iVar4 = *(int *)(iVar4 + 0xb94);
  if (iVar4 != 0) {
    FUN_1007d4d0("Sorting textures by detail texture id...");
    iVar1 = *(int *)(iVar4 + 0x174);
    if (1 < *(int *)(iVar4 + 0x170)) {
      local_14 = 0;
      puVar6 = (undefined4 *)(iVar1 + 4);
      do {
        uVar2 = *puVar6;
        for (iVar7 = local_14; -1 < iVar7; iVar7 = iVar7 + -1) {
          uVar3 = *(undefined4 *)(iVar1 + iVar7 * 4);
          iVar5 = FUN_100693d0(uVar3,uVar2);
          if (iVar5 == 0) break;
          ((undefined4 *)(iVar1 + 4))[iVar7] = uVar3;
        }
        *(undefined4 *)(iVar1 + 4 + iVar7 * 4) = uVar2;
        puVar6 = puVar6 + 1;
        iVar7 = local_14 + 2;
        local_14 = local_14 + 1;
      } while (iVar7 < *(int *)(iVar4 + 0x170));
    }
    FUN_1007d4d0(&DAT_1014b0f0);
  }
  return;
}

