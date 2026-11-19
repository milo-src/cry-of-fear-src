
void FUN_1005a110(void)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = (*DAT_101b26dc)(0);
  DAT_104cc46c = *(int *)(iVar4 + 0xb94);
  if (DAT_104cc46c != 0) {
    iVar4 = FUN_10053c70();
    if (iVar4 == 0) {
      if (DAT_104cc470 == 0) {
        FUN_1007d400("ERROR: UpdateLightmaps called when GLmanager not initialized!\n");
        DAT_104cc470 = 1;
        return;
      }
    }
    else {
      iVar4 = FUN_1005a000();
      if (iVar4 != 0) {
        pcVar5 = (char *)(*DAT_101b2730)();
        DAT_101cbf7c = 1;
        if (2.0 < *(float *)(DAT_104cd530 + 0xc)) {
          (*DAT_101b269c)("gl_contrast",0x40000000);
        }
        if (0.3 < *(float *)(DAT_104cd52c + 0xc)) {
          (*DAT_101b269c)("gl_brightness",0x3e99999a);
        }
        DAT_101cc08c = *(float *)(DAT_104cd530 + 0xc);
        DAT_101cc088 = *(float *)(DAT_104cd52c + 0xc);
        DAT_101cc084 = *(float *)(DAT_104cd528 + 0xc);
        if (DAT_101cc084 < 0.0) {
          DAT_101cc084 = 1.0;
        }
        DAT_101cc080 = (uint)(*(float *)(DAT_104cd50c + 0xc) != 0.0);
        iVar4 = (int)&DAT_101cbf80 - (int)pcVar5;
        do {
          cVar1 = *pcVar5;
          pcVar5[iVar4] = cVar1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        _memset(&DAT_101cc098,0,0x300000);
        FUN_1007d4d0();
        FUN_1007d4d0("gamma: %f\nbrightness: %f\ncontrast: %f\n",(double)DAT_101cc084,
                     (double)DAT_101cc088,(double)DAT_101cc08c);
        FUN_1007d4d0("bump: %d\n",DAT_101cc080);
        iVar4 = 0;
        DAT_101cc094 = -1;
        if (0 < *(int *)(DAT_104cc46c + 0xb0)) {
          iVar7 = 0;
          do {
            iVar8 = *(int *)(DAT_104cc46c + 0xb4) + iVar7;
            if ((*(byte *)(iVar8 + 8) & 0x14) == 0) {
              iVar6 = *(int *)(iVar8 + 0x38);
              if (iVar6 < 0x40) {
                if (DAT_101cc094 < iVar6) {
                  DAT_101cc094 = iVar6;
                }
                iVar6 = FUN_1005a0e0(iVar8,0x3d);
                if (iVar6 == -1) {
                  FUN_10059d20();
                }
                else if (((*(uint *)(iVar8 + 8) & 0x200) == 0) ||
                        (*(float *)(DAT_104cd50c + 0xc) == 0.0)) {
                  iVar6 = FUN_1005a0e0(iVar8,0x3e);
                  if ((iVar6 == -1) || (iVar8 = FUN_1005a0e0(iVar8,0x3f), iVar8 == -1)) {
                    FUN_10059880();
                  }
                  else {
                    FUN_10059660();
                  }
                }
                else {
                  FUN_10059990();
                }
              }
              else {
                FUN_1007d400();
              }
            }
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 0x5c;
          } while (iVar4 < *(int *)(DAT_104cc46c + 0xb0));
          if (DAT_101cc094 != -1) {
            FUN_1005a570();
            bVar3 = false;
            iVar4 = 0;
            if (0 < *(int *)(DAT_104cc46c + 0xb0)) {
              iVar8 = 0;
              iVar7 = DAT_104cc46c;
              do {
                iVar6 = *(int *)(iVar7 + 0xb4) + iVar8;
                uVar2 = *(uint *)(iVar6 + 8);
                if ((((uVar2 & 0x14) == 0) && (*(int *)(iVar6 + 0x38) < 0x40)) &&
                   ((uVar2 & 0x600) != 0)) {
                  FUN_10059990();
                  bVar3 = true;
                  iVar7 = DAT_104cc46c;
                }
                iVar4 = iVar4 + 1;
                iVar8 = iVar8 + 0x5c;
              } while (iVar4 < *(int *)(iVar7 + 0xb0));
              if (bVar3) {
                FUN_1005a570();
                iVar4 = 0;
                if (0 < *(int *)(DAT_104cc46c + 0xb0)) {
                  iVar8 = 0;
                  iVar7 = DAT_104cc46c;
                  do {
                    iVar6 = *(int *)(iVar7 + 0xb4) + iVar8;
                    uVar2 = *(uint *)(iVar6 + 8);
                    if ((((uVar2 & 0x14) == 0) && (*(int *)(iVar6 + 0x38) < 0x40)) &&
                       ((uVar2 & 0x600) != 0)) {
                      FUN_10059990();
                      iVar7 = DAT_104cc46c;
                    }
                    iVar4 = iVar4 + 1;
                    iVar8 = iVar8 + 0x5c;
                  } while (iVar4 < *(int *)(iVar7 + 0xb0));
                }
                FUN_1005a570();
                FUN_1007d400();
                return;
              }
            }
            FUN_1007d400("Loaded %d additional lightmaps\n",DAT_101cc094 + 1);
            return;
          }
        }
        FUN_1007d400();
      }
    }
  }
  return;
}

