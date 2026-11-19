
void FUN_10026e70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  char *pcVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  undefined2 *puVar22;
  float10 fVar23;
  undefined *puVar24;
  undefined4 local_30c;
  char local_308 [256];
  char local_208 [255];
  undefined1 uStack_109;
  undefined8 local_108;
  undefined4 local_100;
  undefined2 local_fc;
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x1488) == 0) goto LAB_10028ef3;
  *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1488) + 0xcc) = 0;
  DAT_101b27bc = 0;
  *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1cc) = 0;
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1d0) = 0;
  (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x228) + 0x24))(0);
  (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x22c) + 0x24))(0);
  (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x230) + 0x24))(0);
  (**(code **)(**(int **)(DAT_101b2600 + 0x1488) + 0x24))(1);
  iVar5 = FUN_100808b0();
  bVar3 = false;
  if (iVar5 != 0) {
    pcVar6 = (char *)FUN_10080a60();
    pcVar16 = pcVar6;
    do {
      cVar1 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar16[(int)(local_308 + (0xff - (int)pcVar6))] = cVar1;
    } while (cVar1 != '\0');
    iVar7 = FUN_100d3cf0(local_208,"coconc.txt");
    if (((((iVar7 == 0) && (iVar7 = FUN_100d3cf0(local_208,"conclusion1.txt"), iVar7 == 0)) &&
         (iVar7 = FUN_100d3cf0(local_208,"conclusion2.txt"), iVar7 == 0)) &&
        ((iVar7 = FUN_100d3cf0(local_208,"conclusion3.txt"), iVar7 == 0 &&
         (iVar7 = FUN_100d3cf0(local_208,"conclusion4.txt"), iVar7 == 0)))) &&
       (iVar7 = FUN_100d3cf0(local_208,"docconc.txt"), iVar7 == 0)) {
      uVar8 = (*DAT_101b2724)();
      iVar7 = FUN_100d3cf0(local_208,uVar8);
      if (iVar7 == 0) {
        pcVar6 = (char *)(*DAT_101b2724)();
        pcVar16 = pcVar6;
        do {
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar16[(int)(local_308 + (-1 - (int)pcVar6))] = cVar1;
        } while (cVar1 != '\0');
        pcVar16 = local_208;
        do {
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar1 != '\0');
        uVar17 = (int)pcVar16 - (int)local_208;
        pcVar16 = (char *)((int)&local_30c + 3);
        do {
          pcVar6 = pcVar16 + 1;
          pcVar16 = pcVar16 + 1;
        } while (*pcVar6 != '\0');
        pcVar6 = local_208;
        for (uVar15 = uVar17 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar16 = pcVar16 + 4;
        }
        pcVar18 = local_308;
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar16 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar16 = pcVar16 + 1;
        }
        pcVar16 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
        do {
          cVar1 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          *pcVar16 = cVar1;
          pcVar16 = pcVar16 + 1;
        } while (cVar1 != '\0');
      }
      else {
        pcVar16 = local_208;
        pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
        do {
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
      }
    }
    else {
      pcVar16 = local_208;
      bVar3 = true;
      pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
      do {
        cVar1 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
    }
    fVar23 = (float10)(*DAT_101b2644)("cof_subtitlelanguage");
    local_30c = (float)fVar23;
    if (bVar3) goto LAB_1002716a;
    goto switchD_10027176_default;
  }
  pcVar16 = (char *)FUN_10080a60();
  pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
  do {
    cVar1 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  fVar23 = (float10)(*DAT_101b2644)("cof_subtitlelanguage");
  local_30c = (float)fVar23;
LAB_1002716a:
  switch((int)local_30c) {
  case 2:
    iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"coconc.txt");
    if (iVar7 == 0) {
      iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion1.txt");
      if (iVar7 == 0) {
        iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion2.txt");
        if (iVar7 == 0) {
          iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion3.txt");
          if (iVar7 == 0) {
            iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion4.txt");
            if (iVar7 == 0) {
              iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"docconc.txt");
              if (iVar7 != 0) {
                pcVar16 = (char *)(*DAT_101b2724)();
                pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
                do {
                  cVar1 = *pcVar16;
                  pcVar16 = pcVar16 + 1;
                  *pcVar6 = cVar1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 != '\0');
                puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
                do {
                  pcVar16 = (char *)((int)puVar20 + 1);
                  puVar20 = (undefined4 *)((int)puVar20 + 1);
                } while (*pcVar16 != '\0');
                pcVar16 = "/txtfiles/languages/dutch/docconc.txt";
                for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar20 = *(undefined4 *)pcVar16;
                  pcVar16 = pcVar16 + 4;
                  puVar20 = puVar20 + 1;
                }
                *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
              }
            }
            else {
              pcVar16 = (char *)(*DAT_101b2724)();
              pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
              do {
                cVar1 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                *pcVar6 = cVar1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 != '\0');
              puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
              do {
                pcVar16 = (char *)((int)puVar20 + 1);
                puVar20 = (undefined4 *)((int)puVar20 + 1);
              } while (*pcVar16 != '\0');
              pcVar16 = "/txtfiles/languages/dutch/conclusion4.txt";
              for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar20 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                puVar20 = puVar20 + 1;
              }
              *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
            }
          }
          else {
            pcVar16 = (char *)(*DAT_101b2724)();
            pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
            do {
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar6 = cVar1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
            do {
              pcVar16 = (char *)((int)puVar20 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            } while (*pcVar16 != '\0');
            pcVar16 = "/txtfiles/languages/dutch/conclusion3.txt";
            for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar20 = *(undefined4 *)pcVar16;
              pcVar16 = pcVar16 + 4;
              puVar20 = puVar20 + 1;
            }
            *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
          }
        }
        else {
          pcVar16 = (char *)(*DAT_101b2724)();
          pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
          do {
            cVar1 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            *pcVar6 = cVar1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
          do {
            pcVar16 = (char *)((int)puVar20 + 1);
            puVar20 = (undefined4 *)((int)puVar20 + 1);
          } while (*pcVar16 != '\0');
          pcVar16 = "/txtfiles/languages/dutch/conclusion2.txt";
          for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar20 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            puVar20 = puVar20 + 1;
          }
          *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
        }
      }
      else {
        pcVar16 = (char *)(*DAT_101b2724)();
        pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
        do {
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
        do {
          pcVar16 = (char *)((int)puVar20 + 1);
          puVar20 = (undefined4 *)((int)puVar20 + 1);
        } while (*pcVar16 != '\0');
        pcVar16 = "/txtfiles/languages/dutch/conclusion1.txt";
        for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar20 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          puVar20 = puVar20 + 1;
        }
        *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
      }
    }
    else {
      pcVar16 = (char *)(*DAT_101b2724)();
      pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
      do {
        cVar1 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
      do {
        pcVar16 = (char *)((int)puVar20 + 1);
        puVar20 = (undefined4 *)((int)puVar20 + 1);
      } while (*pcVar16 != '\0');
      pcVar16 = "/txtfiles/languages/dutch/docconc.txt";
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar20 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        puVar20 = puVar20 + 1;
      }
      *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
    }
    break;
  case 3:
    iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"coconc.txt");
    if (iVar7 == 0) {
      iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion1.txt");
      if (iVar7 == 0) {
        iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion2.txt");
        if (iVar7 == 0) {
          iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion3.txt");
          if (iVar7 == 0) {
            iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion4.txt");
            if (iVar7 == 0) {
              iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"docconc.txt");
              if (iVar7 != 0) {
                pcVar16 = (char *)(*DAT_101b2724)();
                pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
                do {
                  cVar1 = *pcVar16;
                  pcVar16 = pcVar16 + 1;
                  *pcVar6 = cVar1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 != '\0');
                puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
                do {
                  pcVar16 = (char *)((int)puVar20 + 1);
                  puVar20 = (undefined4 *)((int)puVar20 + 1);
                } while (*pcVar16 != '\0');
                pcVar16 = "/txtfiles/languages/french/docconc.txt";
                for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar20 = *(undefined4 *)pcVar16;
                  pcVar16 = pcVar16 + 4;
                  puVar20 = puVar20 + 1;
                }
                *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
                *(char *)((int)puVar20 + 2) = pcVar16[2];
              }
            }
            else {
              pcVar16 = (char *)(*DAT_101b2724)();
              pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
              do {
                cVar1 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                *pcVar6 = cVar1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 != '\0');
              puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
              do {
                pcVar16 = (char *)((int)puVar20 + 1);
                puVar20 = (undefined4 *)((int)puVar20 + 1);
              } while (*pcVar16 != '\0');
              pcVar16 = "/txtfiles/languages/french/conclusion4.txt";
              for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar20 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                puVar20 = puVar20 + 1;
              }
              *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
              *(char *)((int)puVar20 + 2) = pcVar16[2];
            }
          }
          else {
            pcVar16 = (char *)(*DAT_101b2724)();
            pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
            do {
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar6 = cVar1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
            do {
              pcVar16 = (char *)((int)puVar20 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            } while (*pcVar16 != '\0');
            pcVar16 = "/txtfiles/languages/french/conclusion3.txt";
            for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar20 = *(undefined4 *)pcVar16;
              pcVar16 = pcVar16 + 4;
              puVar20 = puVar20 + 1;
            }
            *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
            *(char *)((int)puVar20 + 2) = pcVar16[2];
          }
        }
        else {
          pcVar16 = (char *)(*DAT_101b2724)();
          pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
          do {
            cVar1 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            *pcVar6 = cVar1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
          do {
            pcVar16 = (char *)((int)puVar20 + 1);
            puVar20 = (undefined4 *)((int)puVar20 + 1);
          } while (*pcVar16 != '\0');
          pcVar16 = "/txtfiles/languages/french/conclusion2.txt";
          for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar20 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            puVar20 = puVar20 + 1;
          }
          *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
          *(char *)((int)puVar20 + 2) = pcVar16[2];
        }
      }
      else {
        pcVar16 = (char *)(*DAT_101b2724)();
        pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
        do {
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
        do {
          pcVar16 = (char *)((int)puVar20 + 1);
          puVar20 = (undefined4 *)((int)puVar20 + 1);
        } while (*pcVar16 != '\0');
        pcVar16 = "/txtfiles/languages/french/conclusion1.txt";
        for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar20 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          puVar20 = puVar20 + 1;
        }
        *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
        *(char *)((int)puVar20 + 2) = pcVar16[2];
      }
    }
    else {
      pcVar16 = (char *)(*DAT_101b2724)();
      pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
      do {
        cVar1 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
      do {
        pcVar16 = (char *)((int)puVar20 + 1);
        puVar20 = (undefined4 *)((int)puVar20 + 1);
      } while (*pcVar16 != '\0');
      pcVar16 = "/txtfiles/languages/french/docconc.txt";
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar20 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        puVar20 = puVar20 + 1;
      }
      *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
      *(char *)((int)puVar20 + 2) = pcVar16[2];
    }
    break;
  case 4:
    iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"coconc.txt");
    if (iVar7 == 0) {
      iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion1.txt");
      if (iVar7 == 0) {
        iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion2.txt");
        if (iVar7 == 0) {
          iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion3.txt");
          if (iVar7 == 0) {
            iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion4.txt");
            if (iVar7 == 0) {
              iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"docconc.txt");
              if (iVar7 != 0) {
                pcVar16 = (char *)(*DAT_101b2724)();
                pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
                do {
                  cVar1 = *pcVar16;
                  pcVar16 = pcVar16 + 1;
                  *pcVar6 = cVar1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 != '\0');
                puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
                do {
                  pcVar16 = (char *)((int)puVar20 + 1);
                  puVar20 = (undefined4 *)((int)puVar20 + 1);
                } while (*pcVar16 != '\0');
                pcVar16 = "/txtfiles/languages/german/docconc.txt";
                for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar20 = *(undefined4 *)pcVar16;
                  pcVar16 = pcVar16 + 4;
                  puVar20 = puVar20 + 1;
                }
                *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
                *(char *)((int)puVar20 + 2) = pcVar16[2];
              }
            }
            else {
              pcVar16 = (char *)(*DAT_101b2724)();
              pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
              do {
                cVar1 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                *pcVar6 = cVar1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 != '\0');
              puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
              do {
                pcVar16 = (char *)((int)puVar20 + 1);
                puVar20 = (undefined4 *)((int)puVar20 + 1);
              } while (*pcVar16 != '\0');
              pcVar16 = "/txtfiles/languages/german/conclusion4.txt";
              for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar20 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                puVar20 = puVar20 + 1;
              }
              *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
              *(char *)((int)puVar20 + 2) = pcVar16[2];
            }
          }
          else {
            pcVar16 = (char *)(*DAT_101b2724)();
            pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
            do {
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar6 = cVar1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
            do {
              pcVar16 = (char *)((int)puVar20 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            } while (*pcVar16 != '\0');
            pcVar16 = "/txtfiles/languages/german/conclusion3.txt";
            for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar20 = *(undefined4 *)pcVar16;
              pcVar16 = pcVar16 + 4;
              puVar20 = puVar20 + 1;
            }
            *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
            *(char *)((int)puVar20 + 2) = pcVar16[2];
          }
        }
        else {
          pcVar16 = (char *)(*DAT_101b2724)();
          pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
          do {
            cVar1 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            *pcVar6 = cVar1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
          do {
            pcVar16 = (char *)((int)puVar20 + 1);
            puVar20 = (undefined4 *)((int)puVar20 + 1);
          } while (*pcVar16 != '\0');
          pcVar16 = "/txtfiles/languages/german/conclusion2.txt";
          for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar20 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            puVar20 = puVar20 + 1;
          }
          *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
          *(char *)((int)puVar20 + 2) = pcVar16[2];
        }
      }
      else {
        pcVar16 = (char *)(*DAT_101b2724)();
        pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
        do {
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
        do {
          pcVar16 = (char *)((int)puVar20 + 1);
          puVar20 = (undefined4 *)((int)puVar20 + 1);
        } while (*pcVar16 != '\0');
        pcVar16 = "/txtfiles/languages/german/conclusion1.txt";
        for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar20 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          puVar20 = puVar20 + 1;
        }
        *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
        *(char *)((int)puVar20 + 2) = pcVar16[2];
      }
    }
    else {
      pcVar16 = (char *)(*DAT_101b2724)();
      pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
      do {
        cVar1 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
      do {
        pcVar16 = (char *)((int)puVar20 + 1);
        puVar20 = (undefined4 *)((int)puVar20 + 1);
      } while (*pcVar16 != '\0');
      pcVar16 = "/txtfiles/languages/german/docconc.txt";
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar20 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        puVar20 = puVar20 + 1;
      }
      *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
      *(char *)((int)puVar20 + 2) = pcVar16[2];
    }
    break;
  case 5:
    iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"coconc.txt");
    if (iVar7 == 0) {
      iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion1.txt");
      if (iVar7 == 0) {
        iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion2.txt");
        if (iVar7 == 0) {
          iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion3.txt");
          if (iVar7 == 0) {
            iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion4.txt");
            if (iVar7 == 0) {
              iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"docconc.txt");
              if (iVar7 != 0) {
                pcVar16 = (char *)(*DAT_101b2724)();
                pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
                do {
                  cVar1 = *pcVar16;
                  pcVar16 = pcVar16 + 1;
                  *pcVar6 = cVar1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 != '\0');
                puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
                do {
                  pcVar16 = (char *)((int)puVar20 + 1);
                  puVar20 = (undefined4 *)((int)puVar20 + 1);
                } while (*pcVar16 != '\0');
                pcVar16 = "/txtfiles/languages/norwegian/docconc.txt";
                for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar20 = *(undefined4 *)pcVar16;
                  pcVar16 = pcVar16 + 4;
                  puVar20 = puVar20 + 1;
                }
                *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
              }
            }
            else {
              pcVar16 = (char *)(*DAT_101b2724)();
              pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
              do {
                cVar1 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                *pcVar6 = cVar1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 != '\0');
              puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
              do {
                pcVar16 = (char *)((int)puVar20 + 1);
                puVar20 = (undefined4 *)((int)puVar20 + 1);
              } while (*pcVar16 != '\0');
              pcVar16 = "/txtfiles/languages/norwegian/conclusion4.txt";
              for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar20 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                puVar20 = puVar20 + 1;
              }
              *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
            }
          }
          else {
            pcVar16 = (char *)(*DAT_101b2724)();
            pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
            do {
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar6 = cVar1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
            do {
              pcVar16 = (char *)((int)puVar20 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            } while (*pcVar16 != '\0');
            pcVar16 = "/txtfiles/languages/norwegian/conclusion3.txt";
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar20 = *(undefined4 *)pcVar16;
              pcVar16 = pcVar16 + 4;
              puVar20 = puVar20 + 1;
            }
            *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
          }
        }
        else {
          pcVar16 = (char *)(*DAT_101b2724)();
          pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
          do {
            cVar1 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            *pcVar6 = cVar1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
          do {
            pcVar16 = (char *)((int)puVar20 + 1);
            puVar20 = (undefined4 *)((int)puVar20 + 1);
          } while (*pcVar16 != '\0');
          pcVar16 = "/txtfiles/languages/norwegian/conclusion2.txt";
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar20 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            puVar20 = puVar20 + 1;
          }
          *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
        }
      }
      else {
        pcVar16 = (char *)(*DAT_101b2724)();
        pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
        do {
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
        do {
          pcVar16 = (char *)((int)puVar20 + 1);
          puVar20 = (undefined4 *)((int)puVar20 + 1);
        } while (*pcVar16 != '\0');
        pcVar16 = "/txtfiles/languages/norwegian/conclusion1.txt";
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar20 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          puVar20 = puVar20 + 1;
        }
        *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
      }
    }
    else {
      pcVar16 = (char *)(*DAT_101b2724)();
      pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
      do {
        cVar1 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
      do {
        pcVar16 = (char *)((int)puVar20 + 1);
        puVar20 = (undefined4 *)((int)puVar20 + 1);
      } while (*pcVar16 != '\0');
      pcVar16 = "/txtfiles/languages/norwegian/docconc.txt";
      for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar20 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        puVar20 = puVar20 + 1;
      }
      *(undefined2 *)puVar20 = *(undefined2 *)pcVar16;
    }
    break;
  case 6:
    iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"coconc.txt");
    if (iVar7 == 0) {
      iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion1.txt");
      if (iVar7 == 0) {
        iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion2.txt");
        if (iVar7 == 0) {
          iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion3.txt");
          if (iVar7 == 0) {
            iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion4.txt");
            if (iVar7 == 0) {
              iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"docconc.txt");
              if (iVar7 == 0) break;
              pcVar16 = (char *)(*DAT_101b2724)();
              pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
              do {
                cVar1 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                *pcVar6 = cVar1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 != '\0');
              puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
              do {
                pcVar16 = (char *)((int)puVar20 + 1);
                puVar20 = (undefined4 *)((int)puVar20 + 1);
              } while (*pcVar16 != '\0');
              pcVar16 = "/txtfiles/languages/spanish/docconc.txt";
              goto LAB_100281e0;
            }
            pcVar16 = (char *)(*DAT_101b2724)();
            pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
            do {
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar6 = cVar1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
            do {
              pcVar16 = (char *)((int)puVar20 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            } while (*pcVar16 != '\0');
            iVar7 = 0xb;
            pcVar16 = "/txtfiles/languages/spanish/conclusion4.txt";
          }
          else {
            pcVar16 = (char *)(*DAT_101b2724)();
            pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
            do {
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar6 = cVar1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
            do {
              pcVar16 = (char *)((int)puVar20 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            } while (*pcVar16 != '\0');
            iVar7 = 0xb;
            pcVar16 = "/txtfiles/languages/spanish/conclusion3.txt";
          }
        }
        else {
          pcVar16 = (char *)(*DAT_101b2724)();
          pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
          do {
            cVar1 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            *pcVar6 = cVar1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
          do {
            pcVar16 = (char *)((int)puVar20 + 1);
            puVar20 = (undefined4 *)((int)puVar20 + 1);
          } while (*pcVar16 != '\0');
          iVar7 = 0xb;
          pcVar16 = "/txtfiles/languages/spanish/conclusion2.txt";
        }
      }
      else {
        pcVar16 = (char *)(*DAT_101b2724)();
        pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
        do {
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
        do {
          pcVar16 = (char *)((int)puVar20 + 1);
          puVar20 = (undefined4 *)((int)puVar20 + 1);
        } while (*pcVar16 != '\0');
        iVar7 = 0xb;
        pcVar16 = "/txtfiles/languages/spanish/conclusion1.txt";
      }
    }
    else {
      pcVar16 = (char *)(*DAT_101b2724)();
      pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
      do {
        cVar1 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
      do {
        pcVar16 = (char *)((int)puVar20 + 1);
        puVar20 = (undefined4 *)((int)puVar20 + 1);
      } while (*pcVar16 != '\0');
      pcVar16 = "/txtfiles/languages/spanish/docconc.txt";
LAB_100281e0:
      iVar7 = 10;
    }
    goto LAB_100281e5;
  case 7:
    iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"coconc.txt");
    if (iVar7 != 0) {
      pcVar16 = (char *)(*DAT_101b2724)();
      pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
      do {
        cVar1 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
      do {
        pcVar16 = (char *)((int)puVar20 + 1);
        puVar20 = (undefined4 *)((int)puVar20 + 1);
      } while (*pcVar16 != '\0');
LAB_100281db:
      pcVar16 = "/txtfiles/languages/swedish/docconc.txt";
      goto LAB_100281e0;
    }
    iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion1.txt");
    if (iVar7 == 0) {
      iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion2.txt");
      if (iVar7 == 0) {
        iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion3.txt");
        if (iVar7 == 0) {
          iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"conclusion4.txt");
          if (iVar7 == 0) {
            iVar7 = FUN_100d3cf0(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0,"docconc.txt");
            if (iVar7 == 0) break;
            pcVar16 = (char *)(*DAT_101b2724)();
            pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
            do {
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar6 = cVar1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
            do {
              pcVar16 = (char *)((int)puVar20 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            } while (*pcVar16 != '\0');
            goto LAB_100281db;
          }
          pcVar16 = (char *)(*DAT_101b2724)();
          pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
          do {
            cVar1 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            *pcVar6 = cVar1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
          do {
            pcVar16 = (char *)((int)puVar20 + 1);
            puVar20 = (undefined4 *)((int)puVar20 + 1);
          } while (*pcVar16 != '\0');
          iVar7 = 0xb;
          pcVar16 = "/txtfiles/languages/swedish/conclusion4.txt";
        }
        else {
          pcVar16 = (char *)(*DAT_101b2724)();
          pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
          do {
            cVar1 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            *pcVar6 = cVar1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
          do {
            pcVar16 = (char *)((int)puVar20 + 1);
            puVar20 = (undefined4 *)((int)puVar20 + 1);
          } while (*pcVar16 != '\0');
          iVar7 = 0xb;
          pcVar16 = "/txtfiles/languages/swedish/conclusion3.txt";
        }
      }
      else {
        pcVar16 = (char *)(*DAT_101b2724)();
        pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
        do {
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
        do {
          pcVar16 = (char *)((int)puVar20 + 1);
          puVar20 = (undefined4 *)((int)puVar20 + 1);
        } while (*pcVar16 != '\0');
        iVar7 = 0xb;
        pcVar16 = "/txtfiles/languages/swedish/conclusion2.txt";
      }
    }
    else {
      pcVar16 = (char *)(*DAT_101b2724)();
      pcVar6 = (char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2c0);
      do {
        cVar1 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      puVar20 = (undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2bf);
      do {
        pcVar16 = (char *)((int)puVar20 + 1);
        puVar20 = (undefined4 *)((int)puVar20 + 1);
      } while (*pcVar16 != '\0');
      iVar7 = 0xb;
      pcVar16 = "/txtfiles/languages/swedish/conclusion1.txt";
    }
LAB_100281e5:
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar20 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      puVar20 = puVar20 + 1;
    }
  }
switchD_10027176_default:
  uVar8 = FUN_10026cd0();
  iVar7 = 1;
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x7c0) = uVar8;
  *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x7c4) = 1;
  local_30c = (float)0;
  if (*(char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x7c5) == '\0') {
    local_30c = (float)DAT_1018f434;
  }
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x7c8) = 0;
  *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x7cc) = 0;
  *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x7cd) = 0;
  *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2b8) = 0;
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 700) = 0;
  if (0 < *(int *)(*(int *)(DAT_101b2600 + 0x1488) + 0x7c0)) {
    iVar21 = 0x20;
    iVar19 = 0x3c4;
    do {
      FUN_10028f90(iVar7,iVar7);
      iVar9 = iVar21;
      if (*(char *)(*(int *)(DAT_101b2600 + 0x1488) + 0x7c5) != '\0') {
        iVar9 = -iVar21;
      }
      (**(code **)**(undefined4 **)(*(int *)(DAT_101b2600 + 0x1488) + iVar19))
                (0,(int)local_30c + iVar9);
      (**(code **)(**(int **)(iVar19 + *(int *)(DAT_101b2600 + 0x1488)) + 0x24))(1);
      iVar7 = iVar7 + 1;
      iVar19 = iVar19 + 4;
      iVar21 = iVar21 + 0x20;
    } while (iVar7 <= *(int *)(*(int *)(DAT_101b2600 + 0x1488) + 0x7c0));
  }
  uVar8 = FUN_10080a10();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1e8) = uVar8;
  uVar8 = FUN_10080a10();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1ec) = uVar8;
  uVar8 = FUN_10080a10();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1f0) = uVar8;
  uVar8 = FUN_10080a10();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 500) = uVar8;
  fVar23 = (float10)FUN_10080910();
  *(float *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1f8) = (float)fVar23;
  uVar8 = FUN_10080a10();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1fc) = uVar8;
  uVar8 = FUN_10080a10();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x200) = uVar8;
  uVar8 = FUN_10080a10();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x204) = uVar8;
  iVar7 = FUN_10080a10();
  *(float *)(*(int *)(DAT_101b2600 + 0x1488) + 0x208) = (float)iVar7;
  iVar7 = FUN_10080a10();
  *(float *)(*(int *)(DAT_101b2600 + 0x1488) + 0x20c) = (float)iVar7;
  uVar8 = FUN_10080a10();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x210) = uVar8;
  uVar8 = FUN_10080a10();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x214) = uVar8;
  uVar8 = FUN_10080a10();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x218) = uVar8;
  uVar8 = FUN_10080a10();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x21c) = uVar8;
  uVar8 = FUN_10080a10();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x220) = uVar8;
  FUN_100808b0();
  uVar8 = FUN_100808b0();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1d4) = uVar8;
  iVar19 = FUN_100808b0();
  uVar8 = FUN_100808b0();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x224) = uVar8;
  uVar8 = FUN_100809b0();
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1d0) = uVar8;
  uVar8 = FUN_100808b0();
  iVar9 = FUN_100808b0();
  iVar21 = FUN_100808b0();
  local_30c = (float)iVar21;
  iVar10 = FUN_100808b0();
  DAT_101b27c4 = FUN_100808b0();
  iVar11 = FUN_100808b0();
  iVar12 = FUN_100808b0();
  FUN_100808b0();
  FUN_100808b0();
  iVar13 = FUN_100808b0();
  iVar7 = *(int *)(*(int *)(DAT_101b2600 + 0x1488) + 0x224);
  if ((iVar7 < 1) || (4 < iVar7)) {
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x224) = 1;
  }
  if (iVar19 != 0) {
    (**(code **)(**(int **)(DAT_101b2600 + 0x1488) + 0x24))(0);
  }
  if (iVar5 == 0) {
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x7c5) = 1;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1488) + 0xbd) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1488) + 0xbd) = 1;
    iVar7 = 0x20;
    iVar5 = 0x3c4;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x7c5) = 0;
    do {
      (**(code **)**(undefined4 **)(iVar5 + *(int *)(DAT_101b2600 + 0x1488)))
                (0,DAT_1018f434 + iVar7);
      iVar5 = iVar5 + 4;
      iVar7 = iVar7 + 0x20;
      iVar21 = (int)local_30c;
    } while (iVar5 < 0x7bd);
  }
  *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1488) + 0xbc) = 0;
  fVar23 = (float10)(*DAT_101b26e0)();
  *(float *)(*(int *)(DAT_101b2600 + 0x1488) + 0x7d8) = (float)fVar23;
  iVar5 = **(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x238);
  uVar14 = FUN_10029420(&DAT_10142178,*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1e8));
  (**(code **)(iVar5 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x238),uVar14);
  iVar5 = **(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x23c);
  uVar14 = FUN_10029420(&DAT_10142188,*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1ec));
  (**(code **)(iVar5 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x23c),uVar14);
  iVar5 = **(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x240);
  uVar14 = FUN_10029420(&DAT_10142198,*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 500));
  (**(code **)(iVar5 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x240),uVar14);
  iVar5 = **(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x244);
  uVar14 = FUN_10029420(&DAT_101421ac,(int)*(float *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1f8));
  (**(code **)(iVar5 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x244),uVar14);
  iVar5 = *(int *)(DAT_101b2600 + 0x1488);
  iVar7 = **(int **)(iVar5 + 0x248);
  if (iVar21 == 0) {
    uVar14 = FUN_10029420(&DAT_10142264,*(undefined4 *)(iVar5 + 0x1f0));
    (**(code **)(iVar7 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x248),uVar14);
    iVar5 = **(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x24c);
    uVar14 = FUN_10029420(&DAT_10142278,*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x1fc));
    (**(code **)(iVar5 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x24c),uVar14);
    iVar5 = **(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x250);
    uVar14 = FUN_10029420(&DAT_10142288,*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x200));
    (**(code **)(iVar5 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x250),uVar14);
    iVar5 = **(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x254);
    uVar14 = FUN_10029420(&DAT_101421cc,*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x204));
    (**(code **)(iVar5 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x254),uVar14);
    iVar5 = *(int *)(DAT_101b2600 + 0x1488);
    iVar7 = **(int **)(iVar5 + 600);
    uVar14 = FUN_10029420(&DAT_101421e8,(int)*(float *)(iVar5 + 0x20c),
                          (int)(*(float *)(iVar5 + 0x208) / 10.0));
    (**(code **)(iVar7 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 600),uVar14);
    iVar5 = *(int *)(DAT_101b2600 + 0x1488);
    iVar7 = **(int **)(iVar5 + 0x25c);
    uVar14 = FUN_10029420(&DAT_10142210,*(undefined4 *)(iVar5 + 0x218),
                          *(undefined4 *)(iVar5 + 0x214),*(undefined4 *)(iVar5 + 0x210));
    (**(code **)(iVar7 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x25c),uVar14);
    iVar5 = **(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x260);
    uVar14 = FUN_10029420(&DAT_10142228,*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x21c));
    (**(code **)(iVar5 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x260),uVar14);
    iVar5 = **(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x264);
    uVar14 = FUN_10029420(&DAT_10142244,*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x220));
    (**(code **)(iVar5 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x264),uVar14);
  }
  else {
    uVar14 = FUN_10029420(&DAT_101421cc,*(undefined4 *)(iVar5 + 0x204));
    (**(code **)(iVar7 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x248),uVar14);
    iVar5 = *(int *)(DAT_101b2600 + 0x1488);
    iVar7 = **(int **)(iVar5 + 0x24c);
    uVar14 = FUN_10029420(&DAT_101421e8,(int)*(float *)(iVar5 + 0x20c),
                          (int)(*(float *)(iVar5 + 0x208) / 10.0));
    (**(code **)(iVar7 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x24c),uVar14);
    iVar5 = *(int *)(DAT_101b2600 + 0x1488);
    iVar7 = **(int **)(iVar5 + 0x250);
    uVar14 = FUN_10029420(&DAT_10142210,*(undefined4 *)(iVar5 + 0x218),
                          *(undefined4 *)(iVar5 + 0x214),*(undefined4 *)(iVar5 + 0x210));
    (**(code **)(iVar7 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x250),uVar14);
    iVar5 = **(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x254);
    uVar14 = FUN_10029420(&DAT_10142228,*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x21c));
    (**(code **)(iVar5 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x254),uVar14);
    iVar5 = **(int **)(*(int *)(DAT_101b2600 + 0x1488) + 600);
    uVar14 = FUN_10029420(&DAT_10142244,*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x220));
    (**(code **)(iVar5 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 600),uVar14);
    piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x25c);
    (**(code **)(*piVar2 + 0x200))(piVar2,&PTR_1013b108);
    piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x260);
    (**(code **)(*piVar2 + 0x200))(piVar2,&PTR_1013b108);
    piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x264);
    (**(code **)(*piVar2 + 0x200))(piVar2,&PTR_1013b108);
  }
  switch(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x224)) {
  default:
    puVar24 = &DAT_1014229c;
    break;
  case 2:
    puVar24 = &DAT_101422b4;
    break;
  case 3:
    puVar24 = &DAT_101422d0;
    break;
  case 4:
    puVar24 = &DAT_101422e8;
  }
  iVar5 = **(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x268);
  uVar14 = FUN_10029420(puVar24);
  (**(code **)(iVar5 + 0x200))(*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x268),uVar14);
  if ((iVar11 != 0) && (iVar21 != 0)) {
    uVar8 = 6;
  }
  if ((iVar12 != 0) && (DAT_101b27c4 != 0)) {
    local_100 = 0x23203a;
    local_108 = 0xe0eae2eef6edeeca;
    local_fc = 0x20;
switchD_10028c3e_caseD_7:
    puVar22 = (undefined2 *)&uStack_109;
    do {
      pcVar16 = (char *)((int)puVar22 + 1);
      puVar22 = (undefined2 *)((int)puVar22 + 1);
    } while (*pcVar16 != '\0');
    uVar4 = 0x37;
    goto LAB_10028b80;
  }
  local_100 = 0x23203a;
  local_108 = 0xe0eae2eef6edeeca;
  local_fc = 0x20;
  switch(uVar8) {
  case 1:
    puVar22 = (undefined2 *)&uStack_109;
    do {
      pcVar16 = (char *)((int)puVar22 + 1);
      puVar22 = (undefined2 *)((int)puVar22 + 1);
    } while (*pcVar16 != '\0');
    uVar4 = 0x31;
    break;
  case 2:
    puVar22 = (undefined2 *)&uStack_109;
    do {
      pcVar16 = (char *)((int)puVar22 + 1);
      puVar22 = (undefined2 *)((int)puVar22 + 1);
    } while (*pcVar16 != '\0');
    uVar4 = 0x32;
    break;
  case 3:
    puVar22 = (undefined2 *)&uStack_109;
    do {
      pcVar16 = (char *)((int)puVar22 + 1);
      puVar22 = (undefined2 *)((int)puVar22 + 1);
    } while (*pcVar16 != '\0');
    uVar4 = 0x33;
    break;
  case 4:
    puVar22 = (undefined2 *)&uStack_109;
    do {
      pcVar16 = (char *)((int)puVar22 + 1);
      puVar22 = (undefined2 *)((int)puVar22 + 1);
    } while (*pcVar16 != '\0');
    uVar4 = 0x34;
    break;
  case 5:
    puVar22 = (undefined2 *)&uStack_109;
    do {
      pcVar16 = (char *)((int)puVar22 + 1);
      puVar22 = (undefined2 *)((int)puVar22 + 1);
    } while (*pcVar16 != '\0');
    uVar4 = 0x35;
    break;
  case 6:
    puVar22 = (undefined2 *)&uStack_109;
    do {
      pcVar16 = (char *)((int)puVar22 + 1);
      puVar22 = (undefined2 *)((int)puVar22 + 1);
    } while (*pcVar16 != '\0');
    uVar4 = 0x36;
    break;
  case 7:
    goto switchD_10028c3e_caseD_7;
  default:
    goto switchD_10028c3e_default;
  }
LAB_10028b80:
  local_fc = 0x20;
  local_100 = 0x23203a;
  local_108 = 0xe0eae2eef6edeeca;
  *puVar22 = uVar4;
  iVar21 = (int)local_30c;
switchD_10028c3e_default:
  piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x26c);
  (**(code **)(*piVar2 + 0x200))(piVar2,&local_108);
  iVar5 = 0x238;
  do {
    (**(code **)(**(int **)(iVar5 + *(int *)(DAT_101b2600 + 0x1488)) + 0x21c))(4);
    (**(code **)(**(int **)(iVar5 + *(int *)(DAT_101b2600 + 0x1488)) + 0x24))(0);
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x26d);
  if (iVar21 != 0) {
    switch(iVar9 + -1) {
    case 0:
switchD_10028c05_caseD_0:
      piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x22c);
      (**(code **)(*piVar2 + 0x200))(piVar2,&DAT_1014233c);
      puVar24 = &DAT_1014233c;
      break;
    case 1:
switchD_10028c05_caseD_1:
      piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x22c);
      (**(code **)(*piVar2 + 0x200))(piVar2,&DAT_10142338);
      puVar24 = &DAT_10142338;
      break;
    case 2:
switchD_10028c05_caseD_2:
      piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x22c);
      (**(code **)(*piVar2 + 0x200))(piVar2,&DAT_10142334);
      puVar24 = &DAT_10142334;
      break;
    case 3:
switchD_10028c05_caseD_3:
      piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x22c);
      (**(code **)(*piVar2 + 0x200))(piVar2,&DAT_10141bdc);
      puVar24 = &DAT_10141bdc;
      break;
    case 4:
switchD_10028c05_caseD_4:
      piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x22c);
      (**(code **)(*piVar2 + 0x200))(piVar2,&DAT_10142330);
      puVar24 = &DAT_10142330;
      break;
    case 5:
switchD_10028c05_caseD_5:
      piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x22c);
      (**(code **)(*piVar2 + 0x200))(piVar2,&DAT_1014232c);
      puVar24 = &DAT_1014232c;
      break;
    default:
switchD_10028c05_caseD_6:
      piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x22c);
      (**(code **)(*piVar2 + 0x200))(piVar2,&DAT_10142328);
      puVar24 = &DAT_10142328;
    }
    piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x230);
    (**(code **)(*piVar2 + 0x200))(piVar2,puVar24);
    if (iVar13 == 0) {
      piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x22c);
      (**(code **)(*piVar2 + 0x200))(piVar2,&DAT_10141994);
      piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x230);
      (**(code **)(*piVar2 + 0x200))(piVar2,&DAT_10141994);
      piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1488) + 0x26c);
      (**(code **)(*piVar2 + 0x200))(piVar2,&DAT_10141994);
    }
    if (iVar10 != 0) {
      *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1488) + 0x2b8) = 1;
      fVar23 = (float10)(*DAT_101b26e0)();
      *(float *)(*(int *)(DAT_101b2600 + 0x1488) + 700) = (float)(fVar23 + (float10)0.2);
    }
LAB_10028ef3:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  switch(iVar9 + -1) {
  case 0:
    goto switchD_10028c05_caseD_0;
  case 1:
    goto switchD_10028c05_caseD_1;
  case 2:
    goto switchD_10028c05_caseD_2;
  case 3:
    goto switchD_10028c05_caseD_3;
  case 4:
    goto switchD_10028c05_caseD_4;
  case 5:
    goto switchD_10028c05_caseD_5;
  default:
    goto switchD_10028c05_caseD_6;
  }
}

