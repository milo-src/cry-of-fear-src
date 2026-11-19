
void FUN_10038a10(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  pcVar6 = "maps/c_nightmare.bsp";
  pbVar3 = (byte *)(*DAT_101b2730)();
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10038a40:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_10038a45;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10038a40;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10038a45:
  if (uVar4 == 0) {
    cVar2 = (**(code **)(**(int **)(in_ECX + 0xff0) + 0x28))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(in_ECX + 0xff0) + 0x24))(0);
    }
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x1004) + 0x28))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(in_ECX + 0x1004) + 0x24))(0);
    }
    cVar2 = (**(code **)(**(int **)(in_ECX + 0xfc8) + 0x28))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(in_ECX + 0xfc8) + 0x24))(0);
    }
    cVar2 = (**(code **)(**(int **)(in_ECX + 0xfcc) + 0x28))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(in_ECX + 0xfcc) + 0x24))(0);
    }
    cVar2 = (**(code **)(**(int **)(in_ECX + 0xfd0) + 0x28))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(in_ECX + 0xfd0) + 0x24))(0);
    }
    cVar2 = (**(code **)(**(int **)(in_ECX + 0xfd8) + 0x28))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(in_ECX + 0xfd8) + 0x24))(0);
    }
    cVar2 = (**(code **)(**(int **)(in_ECX + 0xfdc) + 0x28))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(in_ECX + 0xfdc) + 0x24))(0);
    }
    cVar2 = (**(code **)(**(int **)(in_ECX + 0xfe0) + 0x28))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(in_ECX + 0xfe0) + 0x24))(0);
      return;
    }
  }
  else {
    if ((*(float *)(DAT_1018d1f4 + 0xc) == 0.0) || ((DAT_1018d1dc & 0xc) != 0)) {
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xff0) + 0x28))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(in_ECX + 0xff0) + 0x24))(0);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0x1004) + 0x28))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(in_ECX + 0x1004) + 0x24))(0);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0x3a4) + 0x28))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(in_ECX + 0x3a4) + 0x24))(0);
      }
      puVar7 = (undefined4 *)(in_ECX + 0x2ec);
      iVar5 = 0x20;
      do {
        cVar2 = (**(code **)(*(int *)*puVar7 + 0x28))();
        if (cVar2 != '\0') {
          (**(code **)(*(int *)*puVar7 + 0x24))(0);
        }
        puVar7 = puVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      cVar2 = (**(code **)(**(int **)(in_ECX + 0x380) + 0x28))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(in_ECX + 0x380) + 0x24))(0);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xfc8) + 0x28))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(in_ECX + 0xfc8) + 0x24))(0);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xfcc) + 0x28))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(in_ECX + 0xfcc) + 0x24))(0);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xfd0) + 0x28))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(in_ECX + 0xfd0) + 0x24))(0);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xfd8) + 0x28))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(in_ECX + 0xfd8) + 0x24))(0);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xfdc) + 0x28))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(in_ECX + 0xfdc) + 0x24))(0);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xfe0) + 0x28))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(in_ECX + 0xfe0) + 0x24))(0);
      }
    }
    if ((DAT_1018d1dc == 0) && (*(float *)(DAT_1018d1f4 + 0xc) != 0.0)) {
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xff0) + 0x28))();
      if ((cVar2 == '\0') && (*(char *)(in_ECX + 0xff4) != '\0')) {
        (**(code **)(**(int **)(in_ECX + 0xff0) + 0x24))(1);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0x1004) + 0x28))();
      if ((cVar2 == '\0') && (*(char *)(in_ECX + 0x1008) != '\0')) {
        (**(code **)(**(int **)(in_ECX + 0x1004) + 0x24))(1);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xfc8) + 0x28))();
      if (cVar2 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0xfc8) + 0x24))(1);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xfcc) + 0x28))();
      if (cVar2 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0xfcc) + 0x24))(1);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xfd0) + 0x28))();
      if (cVar2 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0xfd0) + 0x24))(1);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xfd8) + 0x28))();
      if (cVar2 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0xfd8) + 0x24))(1);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xfdc) + 0x28))();
      if (cVar2 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0xfdc) + 0x24))(1);
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0xfe0) + 0x28))();
      if (cVar2 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0xfe0) + 0x24))(1);
      }
    }
  }
  return;
}

