
void FUN_100f1f30(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *in_ECX;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  uint local_8;
  
  piVar5 = (int *)(*DAT_10223068)(1);
  if (piVar5 == (int *)0x0) {
    return;
  }
  for (piVar6 = (int *)FUN_10118460(0,"cof_survivalmode"); piVar6 != (int *)0x0;
      piVar6 = (int *)FUN_10118460(piVar6,"cof_survivalmode")) {
    if (*(int *)(piVar6[1] + 0x24c) == 0) {
      (**(code **)(*piVar6 + 0xe8))();
    }
    in_ECX[0xfd] = 0x1010101;
    in_ECX[0xfe] = 0x1010101;
    in_ECX[0xff] = 0x1010101;
    in_ECX[0x100] = 0x1010101;
    in_ECX[0x101] = 0x1010101;
    in_ECX[0x102] = 0x1010101;
    in_ECX[0x103] = 0x1010101;
    in_ECX[0x104] = 0x1010101;
  }
  if ((DAT_10222ee4 != (int *)0x0) && (iVar7 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar7 != 0)) {
    for (piVar6 = (int *)FUN_10118460(0,"cof_bosshealthbar"); piVar6 != (int *)0x0;
        piVar6 = (int *)FUN_10118460(piVar6,"cof_bosshealthbar")) {
      if (*(int *)(piVar6[1] + 0x248) != 0) {
        (**(code **)(*piVar6 + 0xe8))();
      }
    }
  }
  for (piVar6 = (int *)FUN_10118460(0,"lol_giver"); piVar6 != (int *)0x0;
      piVar6 = (int *)FUN_10118460(piVar6,"lol_giver")) {
    (**(code **)(*piVar6 + 0xe8))();
  }
  for (iVar7 = FUN_10118460(0,"cof_serversettings"); iVar7 != 0;
      iVar7 = FUN_10118460(iVar7,"cof_serversettings")) {
    FUN_100f4050(0x21);
    in_ECX[0x940] = in_ECX[0x940] | 8;
    FUN_100deff0(0);
  }
  iVar7 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc),"game_menu");
  if (iVar7 == 0) {
    pcVar11 = "c_unlockables";
    pbVar10 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc));
    do {
      bVar1 = *pbVar10;
      bVar12 = bVar1 < (byte)*pcVar11;
      if (bVar1 != *pcVar11) {
LAB_100f20f0:
        uVar8 = -(uint)bVar12 | 1;
        goto LAB_100f20f5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar10[1];
      bVar12 = bVar1 < (byte)pcVar11[1];
      if (bVar1 != pcVar11[1]) goto LAB_100f20f0;
      pbVar10 = pbVar10 + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_100f20f5:
    if (uVar8 != 0) goto LAB_100f24df;
  }
  cVar2 = FUN_100dd000(1,0,0);
  local_8 = (uint)(cVar2 != '\0');
  cVar2 = FUN_100dd000(2,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 2;
  }
  cVar2 = FUN_100dd000(4,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 4;
  }
  cVar2 = FUN_100dd000(8,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 8;
  }
  cVar2 = FUN_100dd000(0x10,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x10;
  }
  cVar2 = FUN_100dd000(0x20,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x20;
  }
  cVar2 = FUN_100dd000(0x40,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x40;
  }
  cVar2 = FUN_100dd000(0x80,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x80;
  }
  cVar2 = FUN_100dd000(0x100,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x100;
  }
  cVar2 = FUN_100dd000(0x200,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x200;
  }
  cVar2 = FUN_100dd000(0x400,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x400;
  }
  cVar2 = FUN_100dd000(0x800,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x800;
  }
  cVar2 = FUN_100dd000(0x1000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x1000;
  }
  cVar2 = FUN_100dd000(0x2000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x2000;
  }
  cVar2 = FUN_100dd000(0x4000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x4000;
  }
  cVar2 = FUN_100dd000(0x8000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x8000;
  }
  cVar2 = FUN_100dd000(0x10000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x10000;
  }
  cVar2 = FUN_100dd000(0x20000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x20000;
  }
  cVar2 = FUN_100dd000(0x40000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x40000;
  }
  cVar2 = FUN_100dd000(0x80000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x80000;
  }
  cVar2 = FUN_100dd000(0x100000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x100000;
  }
  cVar2 = FUN_100dd000(0x200000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x200000;
  }
  cVar2 = FUN_100dd000(0x400000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x400000;
  }
  cVar2 = FUN_100dd000(0x800000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x800000;
  }
  cVar2 = FUN_100dd000(0x1000000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x1000000;
  }
  cVar2 = FUN_100dd000(0x2000000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x2000000;
  }
  cVar2 = FUN_100dd000(0x4000000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x4000000;
  }
  cVar2 = FUN_100dd000(0x8000000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x8000000;
  }
  cVar2 = FUN_100dd000(0x10000000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x10000000;
  }
  cVar2 = FUN_100dd000(0x20000000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x20000000;
  }
  cVar2 = FUN_100dd000(0x40000000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x40000000;
  }
  cVar2 = FUN_100dd000(0x80000000,0,0);
  if (cVar2 != '\0') {
    local_8 = local_8 | 0x80000000;
  }
  cVar2 = FUN_100dd000(0,1,0);
  cVar3 = FUN_100dd000(0,0,1);
  (*DAT_10223000)(1,DAT_102266a0,0,*(undefined4 *)(in_ECX[1] + 0x20c));
  (*DAT_10223014)(local_8);
  (*DAT_10223008)(cVar2 != '\0');
  (*DAT_10223008)(cVar3 != '\0');
  (*DAT_10223004)();
LAB_100f24df:
  for (iVar7 = FUN_10118460(0,"cof_unlockables"); iVar7 != 0;
      iVar7 = FUN_10118460(iVar7,"cof_unlockables")) {
    FUN_100f4050(0xbc);
    in_ECX[0x940] = in_ECX[0x940] | 8;
    FUN_100deff0(0);
  }
  for (iVar7 = FUN_10118460(0,"cof_difficultysettings"); iVar7 != 0;
      iVar7 = FUN_10118460(iVar7,"cof_difficultysettings")) {
    cVar2 = FUN_100dd000(1,0,0);
    uVar8 = (uint)(cVar2 != '\0');
    cVar2 = FUN_100dd000(2,0,0);
    if (cVar2 != '\0') {
      uVar8 = uVar8 | 2;
    }
    cVar2 = FUN_100dd000(4,0,0);
    if (cVar2 != '\0') {
      uVar8 = uVar8 | 4;
    }
    cVar2 = FUN_100dd000(8,0,0);
    if (cVar2 != '\0') {
      uVar8 = uVar8 | 8;
    }
    cVar2 = FUN_100dd000(0x10,0,0);
    if (cVar2 != '\0') {
      uVar8 = uVar8 | 0x10;
    }
    cVar2 = FUN_100dd000(0,1,0);
    cVar3 = FUN_100dd000(0,0,1);
    cVar4 = FUN_100dd000(0x20,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x20;
    }
    cVar4 = FUN_100dd000(0x40,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x40;
    }
    cVar4 = FUN_100dd000(0x80,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x80;
    }
    cVar4 = FUN_100dd000(0x100,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x100;
    }
    cVar4 = FUN_100dd000(0x200,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x200;
    }
    cVar4 = FUN_100dd000(0x400,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x400;
    }
    cVar4 = FUN_100dd000(0x800,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x800;
    }
    cVar4 = FUN_100dd000(0x1000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x1000;
    }
    cVar4 = FUN_100dd000(0x2000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x2000;
    }
    cVar4 = FUN_100dd000(0x4000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x4000;
    }
    cVar4 = FUN_100dd000(0x8000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x8000;
    }
    cVar4 = FUN_100dd000(0x10000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x10000;
    }
    cVar4 = FUN_100dd000(0x20000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x20000;
    }
    cVar4 = FUN_100dd000(0x40000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x40000;
    }
    cVar4 = FUN_100dd000(0x80000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x80000;
    }
    cVar4 = FUN_100dd000(0x100000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x100000;
    }
    cVar4 = FUN_100dd000(0x200000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x200000;
    }
    cVar4 = FUN_100dd000(0x400000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x400000;
    }
    cVar4 = FUN_100dd000(0x800000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x800000;
    }
    cVar4 = FUN_100dd000(0x1000000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x1000000;
    }
    cVar4 = FUN_100dd000(0x2000000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x2000000;
    }
    cVar4 = FUN_100dd000(0x4000000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x4000000;
    }
    cVar4 = FUN_100dd000(0x8000000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x8000000;
    }
    cVar4 = FUN_100dd000(0x10000000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x10000000;
    }
    cVar4 = FUN_100dd000(0x20000000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x20000000;
    }
    cVar4 = FUN_100dd000(0x40000000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x40000000;
    }
    cVar4 = FUN_100dd000(0x80000000,0,0);
    if (cVar4 != '\0') {
      uVar8 = uVar8 | 0x80000000;
    }
    (*DAT_10223000)(1,DAT_102266a0,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223014)(uVar8);
    (*DAT_10223008)(cVar2 != '\0');
    (*DAT_10223008)(cVar3 != '\0');
    (*DAT_10223004)();
    FUN_100f4050(0x20);
    in_ECX[0x940] = in_ECX[0x940] | 8;
    FUN_100deff0(0);
  }
  for (iVar7 = FUN_10118460(0,"cof_loadgame"); iVar7 != 0;
      iVar7 = FUN_10118460(iVar7,"cof_loadgame")) {
    (*DAT_10223000)(1,DAT_102265d4,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223008)(1);
    (*DAT_10223020)("nothing");
    (*DAT_10223004)();
  }
  iVar7 = FUN_10118460(0,"cof_gamemenu");
  iVar9 = DAT_10223188;
  while (DAT_10223188 = iVar9, iVar7 != 0) {
    (*DAT_10223000)(1,DAT_102265d8,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223004)();
    iVar7 = FUN_10118460(iVar7,"cof_gamemenu");
    iVar9 = DAT_10223188;
  }
  iVar7 = 1;
  if (1 < *(int *)(iVar9 + 0x94)) {
    do {
      if ((*piVar5 == 0) && ((int *)piVar5[0x1f] != (int *)0x0)) {
        (**(code **)(*(int *)piVar5[0x1f] + 0x118))();
        iVar9 = DAT_10223188;
      }
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 0xcb;
    } while (iVar7 < *(int *)(iVar9 + 0x94));
  }
  if (in_ECX[0x17b] == 0) {
    in_ECX[0x1e] = 0;
    (**(code **)(*in_ECX + 8))(0);
  }
  else {
    (**(code **)(*in_ECX + 8))(0x3f000000);
    in_ECX[0x1e] = (int)CBasePlayer::PlayNewDoorSound;
    (*DAT_10223034)("v_dark",0x3f800000);
  }
  FUN_10119810();
  return;
}

