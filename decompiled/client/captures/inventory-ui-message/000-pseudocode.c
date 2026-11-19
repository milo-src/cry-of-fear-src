
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ff40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined *puVar13;
  byte *pbVar14;
  uint uVar15;
  bool bVar16;
  float10 fVar17;
  size_t _Count;
  char local_108 [128];
  char local_88 [128];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_4,param_3);
  iVar3 = FUN_100808b0();
  iVar4 = FUN_100808b0();
  _Count = 0x80;
  pcVar5 = (char *)FUN_10080a60();
  _strncpy(local_88,pcVar5,_Count);
  iVar6 = FUN_100808b0();
  iVar7 = FUN_100808b0();
  iVar8 = FUN_100808b0();
  pcVar5 = local_88;
  iVar9 = FUN_1006cdd0(iVar3);
  iVar9 = iVar9 - (int)pcVar5;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar5[iVar9 + -1] = cVar2;
  } while (cVar2 != '\0');
  if ((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x1404) != 0)) {
    cVar2 = (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x168) + 0x28))();
    if (iVar6 == 0) {
      if (cVar2 == '\0') {
        (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x168) + 0x24))(1);
      }
      cVar2 = (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x16c) + 0x28))();
      if (cVar2 == '\0') {
        (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x16c) + 0x24))(1);
      }
      cVar2 = (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x170) + 0x28))();
      if (cVar2 == '\0') {
        (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x170) + 0x24))(1);
      }
      if (*(int *)(*(int *)(DAT_101b2600 + 0x1404) + 0x1a4) == 1) {
        iVar6 = **(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x150);
        uVar10 = FUN_10008640("gfx/vgui/640_inventory.tga");
        (**(code **)(iVar6 + 0x1fc))(uVar10);
        *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1404) + 0x1a4) = 0;
      }
    }
    else {
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x168) + 0x24))(0);
      }
      cVar2 = (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x16c) + 0x28))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x16c) + 0x24))(0);
      }
      cVar2 = (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x170) + 0x28))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x170) + 0x24))(0);
      }
      if (*(int *)(*(int *)(DAT_101b2600 + 0x1404) + 0x1a4) == 0) {
        iVar6 = **(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x150);
        uVar10 = FUN_10008640("gfx/vgui/640_inventory_three.tga");
        (**(code **)(iVar6 + 0x1fc))(uVar10);
        *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1404) + 0x1a4) = 1;
      }
    }
    if (iVar4 != 0) {
      FUN_10043990();
    }
    if (iVar3 != 0) {
      pcVar11 = (char *)FUN_1006cdd0(iVar3);
      pcVar5 = pcVar11 + 1;
      do {
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      if ((uint)((int)pcVar11 - (int)pcVar5) < 2) {
        (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x11c + iVar3 * 4) + 0x1fc))(0);
      }
      else {
        iVar4 = **(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x11c + iVar3 * 4);
        uVar10 = FUN_1006cdd0(iVar3);
        uVar10 = FUN_1006ee90("inventory_picture",uVar10);
        uVar10 = FUN_10008640(uVar10);
        (**(code **)(iVar4 + 0x1fc))(uVar10);
        pbVar12 = (byte *)FUN_1006ee90("nice_name",local_88);
        if (pbVar12 != (byte *)0x0) {
          pbVar14 = &DAT_1014eecc;
          do {
            bVar1 = *pbVar12;
            bVar16 = bVar1 < *pbVar14;
            if (bVar1 != *pbVar14) {
LAB_100702a0:
              uVar15 = -(uint)bVar16 | 1;
              goto LAB_100702a5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar12[1];
            bVar16 = bVar1 < pbVar14[1];
            if (bVar1 != pbVar14[1]) goto LAB_100702a0;
            pbVar12 = pbVar12 + 2;
            pbVar14 = pbVar14 + 2;
          } while (bVar1 != 0);
          uVar15 = 0;
LAB_100702a5:
          uVar10 = FUN_1006ee90("nice_name",local_88);
          puVar13 = &DAT_1014eee8;
          if (uVar15 == 0) {
            puVar13 = &DAT_1014eedc;
          }
          FUN_1000c900(local_108,puVar13,uVar10);
          if ((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x142c) != 0)) {
            fVar17 = (float10)(*DAT_101b26e0)();
            *(int *)(*(int *)(DAT_101b2600 + 0x142c) + 0xc0) = (int)(fVar17 + (float10)4.0);
            if (iVar7 == 0) {
              pcVar5 = local_108;
              pcVar11 = (char *)(*(int *)(DAT_101b2600 + 0x142c) + 0xd4);
              do {
                cVar2 = *pcVar5;
                pcVar5 = pcVar5 + 1;
                *pcVar11 = cVar2;
                pcVar11 = pcVar11 + 1;
              } while (cVar2 != '\0');
              *(undefined4 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xf18) = 0x437f0000;
              *(undefined1 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xf1c) = 0;
              *(undefined1 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xf1d) = 0;
              *(undefined4 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xf20) = 0;
              *(undefined4 *)(*(int *)(DAT_101b2600 + 0x142c) + 0xbc) = 5;
            }
          }
        }
      }
    }
    iVar3 = 1;
    iVar4 = 0x120;
    if (iVar8 == 0) {
      do {
        pbVar12 = (byte *)FUN_1006cdd0(iVar3);
        pcVar5 = "inventoryitems/weapons/weapon_glocktac.txt";
        do {
          bVar1 = *pcVar5;
          bVar16 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_100706f0:
            uVar15 = -(uint)bVar16 | 1;
            goto LAB_100706f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar5[1];
          bVar16 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_100706f0;
          pcVar5 = pcVar5 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        uVar15 = 0;
LAB_100706f5:
        if (uVar15 == 0) {
          pcVar5 = (char *)FUN_1006cdd0(iVar3);
          builtin_strncpy(pcVar5,"inventoryitems/weapons/weapon_glock.txt",0x28);
          iVar6 = **(int **)(iVar4 + *(int *)(DAT_101b2600 + 0x1404));
          uVar10 = FUN_1006cdd0(iVar3);
          uVar10 = FUN_1006ee90("inventory_picture",uVar10);
          uVar10 = FUN_10008640(uVar10);
          (**(code **)(iVar6 + 0x1fc))(uVar10);
        }
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
      } while (iVar4 < 0x135);
      pbVar12 = &DAT_1018d024;
      pcVar5 = "inventoryitems/weapons/weapon_glocktac.txt";
      do {
        bVar1 = *pcVar5;
        bVar16 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_100707b2:
          uVar15 = -(uint)bVar16 | 1;
          goto LAB_100707b7;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar5[1];
        bVar16 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_100707b2;
        pcVar5 = pcVar5 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      uVar15 = 0;
LAB_100707b7:
      if (uVar15 == 0) {
        DAT_1018d024 = 'i';
        DAT_1018d025 = 'n';
        DAT_1018d026 = 'v';
        DAT_1018d027 = 'e';
        uRam1018d028._0_1_ = 'n';
        uRam1018d028._1_1_ = 't';
        uRam1018d028._2_1_ = 'o';
        uRam1018d028._3_1_ = 'r';
        uRam1018d02c._0_1_ = 'y';
        uRam1018d02c._1_1_ = 'i';
        uRam1018d02c._2_1_ = 't';
        uRam1018d02c._3_1_ = 'e';
        uRam1018d030._0_1_ = 'm';
        uRam1018d030._1_1_ = 's';
        uRam1018d030._2_1_ = '/';
        uRam1018d030._3_1_ = 'w';
        DAT_1018d034 = 'e';
        DAT_1018d034_1._0_1_ = 'a';
        DAT_1018d034_1._1_1_ = 'p';
        DAT_1018d034_1._2_1_ = 'o';
        uRam1018d038._0_1_ = 'n';
        uRam1018d038._1_1_ = 's';
        uRam1018d038._2_1_ = '/';
        uRam1018d038._3_1_ = 'w';
        uRam1018d03c._0_1_ = 'e';
        uRam1018d03c._1_1_ = 'a';
        uRam1018d03c._2_1_ = 'p';
        uRam1018d03c._3_1_ = 'o';
        uRam1018d040._0_1_ = 'n';
        uRam1018d040._1_1_ = '_';
        uRam1018d040._2_1_ = 'g';
        uRam1018d040._3_1_ = 'l';
        _DAT_1018d044 = 0x7478742e6b636f;
        iVar3 = **(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x138);
        uVar10 = FUN_1006ee90("inventory_picture",&DAT_1018d024);
        uVar10 = FUN_10008640(uVar10);
        (**(code **)(iVar3 + 0x1fc))(uVar10);
      }
      pbVar12 = &DAT_1018d0a4;
      pcVar5 = "inventoryitems/weapons/weapon_glocktac.txt";
      do {
        bVar1 = *pcVar5;
        bVar16 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_10070860:
          uVar15 = -(uint)bVar16 | 1;
          goto LAB_10070865;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar5[1];
        bVar16 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_10070860;
        pcVar5 = pcVar5 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      uVar15 = 0;
LAB_10070865:
      if (uVar15 == 0) {
        DAT_1018d0a4 = 'i';
        DAT_1018d0a5 = 'n';
        DAT_1018d0a6 = 'v';
        DAT_1018d0a7 = 'e';
        uRam1018d0a8._0_1_ = 'n';
        uRam1018d0a8._1_1_ = 't';
        uRam1018d0a8._2_1_ = 'o';
        uRam1018d0a8._3_1_ = 'r';
        uRam1018d0ac._0_1_ = 'y';
        uRam1018d0ac._1_1_ = 'i';
        uRam1018d0ac._2_1_ = 't';
        uRam1018d0ac._3_1_ = 'e';
        uRam1018d0b0._0_1_ = 'm';
        uRam1018d0b0._1_1_ = 's';
        uRam1018d0b0._2_1_ = '/';
        uRam1018d0b0._3_1_ = 'w';
        DAT_1018d0b4 = 'e';
        DAT_1018d0b4_1._0_1_ = 'a';
        DAT_1018d0b4_1._1_1_ = 'p';
        DAT_1018d0b4_1._2_1_ = 'o';
        uRam1018d0b8._0_1_ = 'n';
        uRam1018d0b8._1_1_ = 's';
        uRam1018d0b8._2_1_ = '/';
        uRam1018d0b8._3_1_ = 'w';
        uRam1018d0bc._0_1_ = 'e';
        uRam1018d0bc._1_1_ = 'a';
        uRam1018d0bc._2_1_ = 'p';
        uRam1018d0bc._3_1_ = 'o';
        uRam1018d0c0._0_1_ = 'n';
        uRam1018d0c0._1_1_ = '_';
        uRam1018d0c0._2_1_ = 'g';
        uRam1018d0c0._3_1_ = 'l';
        _DAT_1018d0c4 = 0x7478742e6b636f;
        iVar3 = **(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x13c);
        uVar10 = FUN_1006ee90("inventory_picture",&DAT_1018d0a4);
        uVar10 = FUN_10008640(uVar10);
        (**(code **)(iVar3 + 0x1fc))(uVar10);
      }
      pbVar12 = &DAT_1018d0a4;
      pcVar5 = "inventoryitems/weapons/weapon_glocktac.txt";
      do {
        bVar1 = *pcVar5;
        bVar16 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_10070904:
          uVar15 = -(uint)bVar16 | 1;
          goto LAB_10070909;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar5[1];
        bVar16 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_10070904;
        pcVar5 = pcVar5 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      uVar15 = 0;
LAB_10070909:
      if (uVar15 != 0) goto LAB_1007097e;
      _DAT_1018d144 = 0x7478742e6b636f;
    }
    else {
      do {
        pbVar12 = (byte *)FUN_1006cdd0(iVar3);
        pcVar5 = "inventoryitems/weapons/weapon_glock.txt";
        do {
          bVar1 = *pcVar5;
          bVar16 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_10070410:
            uVar15 = -(uint)bVar16 | 1;
            goto LAB_10070415;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar5[1];
          bVar16 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_10070410;
          pcVar5 = pcVar5 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        uVar15 = 0;
LAB_10070415:
        if (uVar15 == 0) {
          pcVar5 = (char *)FUN_1006cdd0(iVar3);
          builtin_strncpy(pcVar5,"inventoryitems/weapons/weapon_glocktac.txt",0x2b);
          iVar6 = **(int **)(iVar4 + *(int *)(DAT_101b2600 + 0x1404));
          uVar10 = FUN_1006cdd0(iVar3);
          uVar10 = FUN_1006ee90("inventory_picture",uVar10);
          uVar10 = FUN_10008640(uVar10);
          (**(code **)(iVar6 + 0x1fc))(uVar10);
        }
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
      } while (iVar4 < 0x135);
      pbVar12 = &DAT_1018d024;
      pcVar5 = "inventoryitems/weapons/weapon_glock.txt";
      do {
        bVar1 = *pcVar5;
        bVar16 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_100704e6:
          uVar15 = -(uint)bVar16 | 1;
          goto LAB_100704eb;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar5[1];
        bVar16 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_100704e6;
        pcVar5 = pcVar5 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      uVar15 = 0;
LAB_100704eb:
      if (uVar15 == 0) {
        _DAT_1018d04c = 0x7478;
        DAT_1018d024 = 'i';
        DAT_1018d025 = 'n';
        DAT_1018d026 = 'v';
        DAT_1018d027 = 'e';
        uRam1018d028._0_1_ = 'n';
        uRam1018d028._1_1_ = 't';
        uRam1018d028._2_1_ = 'o';
        uRam1018d028._3_1_ = 'r';
        uRam1018d02c._0_1_ = 'y';
        uRam1018d02c._1_1_ = 'i';
        uRam1018d02c._2_1_ = 't';
        uRam1018d02c._3_1_ = 'e';
        uRam1018d030._0_1_ = 'm';
        uRam1018d030._1_1_ = 's';
        uRam1018d030._2_1_ = '/';
        uRam1018d030._3_1_ = 'w';
        DAT_1018d04e = 0;
        DAT_1018d034 = 'e';
        DAT_1018d034_1._0_1_ = 'a';
        DAT_1018d034_1._1_1_ = 'p';
        DAT_1018d034_1._2_1_ = 'o';
        uRam1018d038._0_1_ = 'n';
        uRam1018d038._1_1_ = 's';
        uRam1018d038._2_1_ = '/';
        uRam1018d038._3_1_ = 'w';
        uRam1018d03c._0_1_ = 'e';
        uRam1018d03c._1_1_ = 'a';
        uRam1018d03c._2_1_ = 'p';
        uRam1018d03c._3_1_ = 'o';
        uRam1018d040._0_1_ = 'n';
        uRam1018d040._1_1_ = '_';
        uRam1018d040._2_1_ = 'g';
        uRam1018d040._3_1_ = 'l';
        _DAT_1018d044 = 0x742e6361746b636f;
        iVar3 = **(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x138);
        uVar10 = FUN_1006ee90("inventory_picture",&DAT_1018d024);
        uVar10 = FUN_10008640(uVar10);
        (**(code **)(iVar3 + 0x1fc))(uVar10);
      }
      pbVar12 = &DAT_1018d0a4;
      pcVar5 = "inventoryitems/weapons/weapon_glock.txt";
      do {
        bVar1 = *pcVar5;
        bVar16 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_100705b0:
          uVar15 = -(uint)bVar16 | 1;
          goto LAB_100705b5;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar5[1];
        bVar16 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_100705b0;
        pcVar5 = pcVar5 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      uVar15 = 0;
LAB_100705b5:
      if (uVar15 == 0) {
        _DAT_1018d0cc = 0x7478;
        DAT_1018d0a4 = 'i';
        DAT_1018d0a5 = 'n';
        DAT_1018d0a6 = 'v';
        DAT_1018d0a7 = 'e';
        uRam1018d0a8._0_1_ = 'n';
        uRam1018d0a8._1_1_ = 't';
        uRam1018d0a8._2_1_ = 'o';
        uRam1018d0a8._3_1_ = 'r';
        uRam1018d0ac._0_1_ = 'y';
        uRam1018d0ac._1_1_ = 'i';
        uRam1018d0ac._2_1_ = 't';
        uRam1018d0ac._3_1_ = 'e';
        uRam1018d0b0._0_1_ = 'm';
        uRam1018d0b0._1_1_ = 's';
        uRam1018d0b0._2_1_ = '/';
        uRam1018d0b0._3_1_ = 'w';
        DAT_1018d0ce = 0;
        DAT_1018d0b4 = 'e';
        DAT_1018d0b4_1._0_1_ = 'a';
        DAT_1018d0b4_1._1_1_ = 'p';
        DAT_1018d0b4_1._2_1_ = 'o';
        uRam1018d0b8._0_1_ = 'n';
        uRam1018d0b8._1_1_ = 's';
        uRam1018d0b8._2_1_ = '/';
        uRam1018d0b8._3_1_ = 'w';
        uRam1018d0bc._0_1_ = 'e';
        uRam1018d0bc._1_1_ = 'a';
        uRam1018d0bc._2_1_ = 'p';
        uRam1018d0bc._3_1_ = 'o';
        uRam1018d0c0._0_1_ = 'n';
        uRam1018d0c0._1_1_ = '_';
        uRam1018d0c0._2_1_ = 'g';
        uRam1018d0c0._3_1_ = 'l';
        _DAT_1018d0c4 = 0x742e6361746b636f;
        iVar3 = **(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x13c);
        uVar10 = FUN_1006ee90("inventory_picture",&DAT_1018d0a4);
        uVar10 = FUN_10008640(uVar10);
        (**(code **)(iVar3 + 0x1fc))(uVar10);
      }
      pbVar12 = &DAT_1018d124;
      pcVar5 = "inventoryitems/weapons/weapon_glock.txt";
      do {
        bVar1 = *pcVar5;
        bVar16 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_10070670:
          uVar15 = -(uint)bVar16 | 1;
          goto LAB_10070675;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar5[1];
        bVar16 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_10070670;
        pcVar5 = pcVar5 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      uVar15 = 0;
LAB_10070675:
      if (uVar15 != 0) goto LAB_1007097e;
      _DAT_1018d14c = 0x7478;
      DAT_1018d14e = 0;
      _DAT_1018d144 = 0x742e6361746b636f;
    }
    uRam1018d140._0_1_ = 'n';
    uRam1018d140._1_1_ = '_';
    uRam1018d140._2_1_ = 'g';
    uRam1018d140._3_1_ = 'l';
    uRam1018d13c._0_1_ = 'e';
    uRam1018d13c._1_1_ = 'a';
    uRam1018d13c._2_1_ = 'p';
    uRam1018d13c._3_1_ = 'o';
    uRam1018d138._0_1_ = 'n';
    uRam1018d138._1_1_ = 's';
    uRam1018d138._2_1_ = '/';
    uRam1018d138._3_1_ = 'w';
    DAT_1018d134 = 'e';
    DAT_1018d134_1._0_1_ = 'a';
    DAT_1018d134_1._1_1_ = 'p';
    DAT_1018d134_1._2_1_ = 'o';
    uRam1018d130._0_1_ = 'm';
    uRam1018d130._1_1_ = 's';
    uRam1018d130._2_1_ = '/';
    uRam1018d130._3_1_ = 'w';
    uRam1018d12c._0_1_ = 'y';
    uRam1018d12c._1_1_ = 'i';
    uRam1018d12c._2_1_ = 't';
    uRam1018d12c._3_1_ = 'e';
    uRam1018d128._0_1_ = 'n';
    uRam1018d128._1_1_ = 't';
    uRam1018d128._2_1_ = 'o';
    uRam1018d128._3_1_ = 'r';
    DAT_1018d124 = 'i';
    DAT_1018d125 = 'n';
    DAT_1018d126 = 'v';
    DAT_1018d127 = 'e';
    iVar3 = **(int **)(*(int *)(DAT_101b2600 + 0x1404) + 0x144);
    uVar10 = FUN_1006ee90("inventory_picture",&DAT_1018d124);
    uVar10 = FUN_10008640(uVar10);
    (**(code **)(iVar3 + 0x1fc))(uVar10);
  }
LAB_1007097e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

