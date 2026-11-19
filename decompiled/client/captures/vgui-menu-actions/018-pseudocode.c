
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100314a0(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  int *piVar7;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  
  iVar2 = (*DAT_101b26d4)();
  switch(param_1) {
  case 1:
    pcVar8 = "maps/c_loadgame.bsp";
    pbVar3 = (byte *)(*DAT_101b2730)();
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100314f0:
        uVar4 = -(uint)bVar9 | 1;
        goto LAB_100314f5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100314f0;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100314f5:
    if (uVar4 == 0) {
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      pcVar8 = "closegame";
LAB_10031616:
      (*DAT_101b2654)(pcVar8);
      if (iVar2 != 0) {
        (**(code **)(DAT_101b2758 + 4))
                  (0xffffffff,iVar2 + 0x2c0,0,"save/save_no.wav",0x3f800000,0x3f4ccccd,0,100);
        return;
      }
    }
    else {
      uVar5 = (*DAT_101b2730)("game_menu");
      iVar6 = FUN_100d3cf0(uVar5);
      if (iVar6 == 0) {
        uVar5 = (*DAT_101b2730)("difficulty_");
        iVar6 = FUN_100d3cf0(uVar5);
        if (iVar6 != 0) {
LAB_10031661:
          if (DAT_10542a68 != 0) {
            (**(code **)(*in_ECX + 0x24))(0);
            FUN_100aaad0();
            (*DAT_101b2658)("map c_game_menu1");
            return;
          }
          (**(code **)(*in_ECX + 0x24))(0);
          FUN_100aaad0();
          (*DAT_101b2658)("disconnect");
          return;
        }
        uVar5 = (*DAT_101b2730)("server_");
        iVar6 = FUN_100d3cf0(uVar5);
        if (iVar6 != 0) goto LAB_10031661;
        uVar5 = (*DAT_101b2730)("unlockables");
        iVar6 = FUN_100d3cf0(uVar5);
        if (iVar6 != 0) goto LAB_10031661;
        iVar6 = FUN_10078830();
        if (iVar6 == 0) {
          (**(code **)(*in_ECX + 0x24))(0);
          FUN_100aaad0();
          pcVar8 = "unfreeze 666";
          goto LAB_10031616;
        }
        (**(code **)(*in_ECX + 0x24))(0);
        FUN_100aaad0();
        if (DAT_101b2600 == 0) {
          return;
        }
        piVar7 = *(int **)(DAT_101b2600 + 0x1474);
      }
      else {
        (**(code **)(*in_ECX + 0x24))(0);
        FUN_100aaad0();
        if (DAT_101b2600 == 0) {
          return;
        }
        piVar7 = *(int **)(DAT_101b2600 + 0x1468);
      }
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x24))(1);
        FUN_100aaad0();
        return;
      }
    }
    break;
  case 2:
    fVar10 = (float10)(*DAT_101b26e0)();
    if ((float)fVar10 < (float)in_ECX[0x39]) {
      if (in_ECX[0x5e] == 0) {
        (**(code **)(*in_ECX + 0x24))(0);
        FUN_100aaad0();
        (*DAT_101b2654)("unfreezesave 1024 1");
        fVar10 = (float10)(*DAT_101b26e0)();
        _DAT_1018a3e4 = 1;
        DAT_1018a3dc = 1;
        _DAT_1018a3e0 = (float)(fVar10 + (float10)3.25);
        FUN_10032340("saveinfo1.cof");
      }
      else {
        iVar2 = (*DAT_101b2744)("SAVE/saveinfo1.cof",5);
        if (iVar2 != 0) {
          (**(code **)(*in_ECX + 0x24))(0);
          FUN_100aaad0();
          (*DAT_101b2654)("unfreeze 1024");
          uVar5 = (*DAT_101b2730)("game_menu");
          iVar6 = FUN_100d3cf0(uVar5);
          if (iVar6 != 0) {
            FUN_1007fc10(0);
          }
          (*DAT_101b274c)(iVar2);
          (*DAT_101b2654)("cofload 1");
        }
      }
    }
    fVar10 = (float10)(*DAT_101b26e0)();
    in_ECX[0x39] = (int)(float)(fVar10 + (float10)0.5);
    return;
  case 3:
    fVar10 = (float10)(*DAT_101b26e0)();
    if ((float)fVar10 < (float)in_ECX[0x3a]) {
      if (in_ECX[0x5e] == 0) {
        (**(code **)(*in_ECX + 0x24))(0);
        FUN_100aaad0();
        (*DAT_101b2654)("unfreezesave 1024 2");
        fVar10 = (float10)(*DAT_101b26e0)();
        _DAT_1018a3e4 = 2;
        DAT_1018a3dc = 1;
        _DAT_1018a3e0 = (float)(fVar10 + (float10)3.25);
        FUN_10032340("saveinfo2.cof");
      }
      else {
        iVar2 = (*DAT_101b2744)("SAVE/saveinfo2.cof",5);
        if (iVar2 != 0) {
          (**(code **)(*in_ECX + 0x24))(0);
          FUN_100aaad0();
          (*DAT_101b2654)("unfreeze 1024");
          uVar5 = (*DAT_101b2730)("game_menu");
          iVar6 = FUN_100d3cf0(uVar5);
          if (iVar6 != 0) {
            FUN_1007fc10(0);
          }
          (*DAT_101b274c)(iVar2);
          (*DAT_101b2654)("cofload 2");
        }
      }
    }
    fVar10 = (float10)(*DAT_101b26e0)();
    in_ECX[0x3a] = (int)(float)(fVar10 + (float10)0.5);
    return;
  case 4:
    fVar10 = (float10)(*DAT_101b26e0)();
    if ((float)fVar10 < (float)in_ECX[0x3b]) {
      if (in_ECX[0x5e] == 0) {
        (**(code **)(*in_ECX + 0x24))(0);
        FUN_100aaad0();
        (*DAT_101b2654)("unfreezesave 1024 3");
        fVar10 = (float10)(*DAT_101b26e0)();
        _DAT_1018a3e4 = 3;
        DAT_1018a3dc = 1;
        _DAT_1018a3e0 = (float)(fVar10 + (float10)3.25);
        FUN_10032340("saveinfo3.cof");
      }
      else {
        iVar2 = (*DAT_101b2744)("SAVE/saveinfo3.cof",5);
        if (iVar2 != 0) {
          (**(code **)(*in_ECX + 0x24))(0);
          FUN_100aaad0();
          (*DAT_101b2654)("unfreeze 1024");
          uVar5 = (*DAT_101b2730)("game_menu");
          iVar6 = FUN_100d3cf0(uVar5);
          if (iVar6 != 0) {
            FUN_1007fc10(0);
          }
          (*DAT_101b274c)(iVar2);
          (*DAT_101b2654)("cofload 3");
        }
      }
    }
    fVar10 = (float10)(*DAT_101b26e0)();
    in_ECX[0x3b] = (int)(float)(fVar10 + (float10)0.5);
    return;
  case 5:
    fVar10 = (float10)(*DAT_101b26e0)();
    if ((float)fVar10 < (float)in_ECX[0x3c]) {
      if (in_ECX[0x5e] == 0) {
        (**(code **)(*in_ECX + 0x24))(0);
        FUN_100aaad0();
        (*DAT_101b2654)("unfreezesave 1024 4");
        fVar10 = (float10)(*DAT_101b26e0)();
        _DAT_1018a3e4 = 4;
        DAT_1018a3dc = 1;
        _DAT_1018a3e0 = (float)(fVar10 + (float10)3.25);
        FUN_10032340("saveinfo4.cof");
      }
      else {
        iVar2 = (*DAT_101b2744)("SAVE/saveinfo4.cof",5);
        if (iVar2 != 0) {
          (**(code **)(*in_ECX + 0x24))(0);
          FUN_100aaad0();
          (*DAT_101b2654)("unfreeze 1024");
          uVar5 = (*DAT_101b2730)("game_menu");
          iVar6 = FUN_100d3cf0(uVar5);
          if (iVar6 != 0) {
            FUN_1007fc10(0);
          }
          (*DAT_101b274c)(iVar2);
          (*DAT_101b2654)("cofload 4");
        }
      }
    }
    fVar10 = (float10)(*DAT_101b26e0)();
    in_ECX[0x3c] = (int)(float)(fVar10 + (float10)0.5);
    return;
  case 6:
    fVar10 = (float10)(*DAT_101b26e0)();
    if ((float)fVar10 < (float)in_ECX[0x3d]) {
      if (in_ECX[0x5e] == 0) {
        (**(code **)(*in_ECX + 0x24))(0);
        FUN_100aaad0();
        (*DAT_101b2654)("unfreezesave 1024 5");
        fVar10 = (float10)(*DAT_101b26e0)();
        _DAT_1018a3e4 = 5;
        DAT_1018a3dc = 1;
        _DAT_1018a3e0 = (float)(fVar10 + (float10)3.25);
        FUN_10032340("saveinfo5.cof");
      }
      else {
        iVar2 = (*DAT_101b2744)("SAVE/saveinfo5.cof",5);
        if (iVar2 != 0) {
          (**(code **)(*in_ECX + 0x24))(0);
          FUN_100aaad0();
          (*DAT_101b2654)("unfreeze 1024");
          uVar5 = (*DAT_101b2730)("game_menu");
          iVar6 = FUN_100d3cf0(uVar5);
          if (iVar6 != 0) {
            FUN_1007fc10(0);
          }
          (*DAT_101b274c)(iVar2);
          (*DAT_101b2654)("cofload 5");
        }
      }
    }
    fVar10 = (float10)(*DAT_101b26e0)();
    in_ECX[0x3d] = (int)(float)(fVar10 + (float10)0.5);
  }
  return;
}

