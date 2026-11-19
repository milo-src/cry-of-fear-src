
void FUN_100e4410(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  byte *pbVar11;
  bool bVar12;
  size_t _Count;
  undefined1 local_e0 [48];
  int local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  int local_8c;
  byte local_88 [128];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_8c = param_1;
  pcVar4 = (char *)FUN_100dff70("map_name",
                                *(int *)(DAT_10223188 + 0x98) +
                                *(int *)(in_ECX + 0x21fc + param_1 * 4));
  pcVar5 = pcVar4 + 1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar4 - (int)pcVar5) < 2) {
    FUN_10119810();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  _Count = 0x80;
  pcVar5 = (char *)FUN_100dff70("map_name",
                                *(int *)(DAT_10223188 + 0x98) +
                                *(int *)(in_ECX + 0x21fc + param_1 * 4));
  _strncpy((char *)local_88,pcVar5,_Count);
  FUN_10119320(*(int *)(in_ECX + 4) + 0x74);
  iVar8 = *(int *)(in_ECX + 4);
  local_90 = *(float *)(DAT_10223188 + 0x30);
  local_9c = *(float *)(iVar8 + 0x178) + *(float *)(iVar8 + 8) +
             *(float *)(DAT_10223188 + 0x28) * 80.0;
  local_98 = *(float *)(iVar8 + 0x17c) + *(float *)(iVar8 + 0xc) +
             *(float *)(DAT_10223188 + 0x2c) * 80.0;
  local_94 = *(float *)(iVar8 + 0x10) + *(float *)(iVar8 + 0x180) + local_90 * 80.0;
  local_a4 = *(float *)(iVar8 + 0x17c) + *(float *)(iVar8 + 0xc);
  local_a0 = *(float *)(iVar8 + 0x180) + *(float *)(iVar8 + 0x10);
  local_a8 = *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0x178);
  FUN_1011a800(&local_a8,&local_9c,0,*(undefined4 *)(iVar8 + 0x20c),local_e0);
  if (((local_b0 != 0) && (piVar3 = *(int **)(local_b0 + 0x7c), piVar3 != (int *)0x0)) &&
     (uVar6 = (**(code **)(*piVar3 + 0x40))(), (uVar6 & 0x38) != 0)) {
    pcVar5 = "inter_door";
    pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)piVar3[1]);
    do {
      bVar2 = *pbVar7;
      bVar12 = bVar2 < (byte)*pcVar5;
      if (bVar2 != *pcVar5) {
LAB_100e4610:
        uVar6 = -(uint)bVar12 | 1;
        goto LAB_100e4615;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar12 = bVar2 < (byte)pcVar5[1];
      if (bVar2 != pcVar5[1]) goto LAB_100e4610;
      pbVar7 = pbVar7 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar2 != 0);
    uVar6 = 0;
LAB_100e4615:
    if ((uVar6 == 0) && (iVar8 = FUN_10047f10((int *)piVar3[1]), iVar8 != 0)) {
      pbVar7 = local_88;
      pbVar11 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar8 + 400));
      do {
        bVar2 = *pbVar7;
        bVar12 = bVar2 < *pbVar11;
        if (bVar2 != *pbVar11) {
LAB_100e4668:
          uVar6 = -(uint)bVar12 | 1;
          goto LAB_100e466d;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar12 = bVar2 < pbVar11[1];
        if (bVar2 != pbVar11[1]) goto LAB_100e4668;
        pbVar7 = pbVar7 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar2 != 0);
      uVar6 = 0;
LAB_100e466d:
      if (uVar6 == 0) {
        if ((*(byte *)(*(int *)(iVar8 + 4) + 0x1a4) & 1) == 0) {
          FUN_100dd990(local_8c,0);
        }
        FUN_10048e40(in_ECX);
        goto LAB_100e4ba3;
      }
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),2,"inventory/inventory_no.wav",
                   0x3f800000,0x3f4ccccd,0,100);
    }
    iVar8 = piVar3[1];
    iVar9 = FUN_1000aaf0(iVar8,"func_valve");
    if ((iVar9 != 0) && (iVar8 = FUN_10042560(iVar8), iVar8 != 0)) {
      pbVar7 = local_88;
      pbVar11 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar8 + 0x180));
      do {
        bVar2 = *pbVar7;
        bVar12 = bVar2 < *pbVar11;
        if (bVar2 != *pbVar11) {
LAB_100e4730:
          uVar6 = -(uint)bVar12 | 1;
          goto LAB_100e4735;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar12 = bVar2 < pbVar11[1];
        if (bVar2 != pbVar11[1]) goto LAB_100e4730;
        pbVar7 = pbVar7 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar2 != 0);
      uVar6 = 0;
LAB_100e4735:
      if (uVar6 == 0) {
        if ((*(byte *)(*(int *)(iVar8 + 4) + 0x1a4) & 1) == 0) {
          FUN_100dd990(local_8c,0);
        }
        FUN_10042cf0(in_ECX);
        goto LAB_100e4ba3;
      }
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),2,"inventory/inventory_no.wav",
                   0x3f800000,0x3f4ccccd,0,100);
    }
    iVar8 = piVar3[1];
    iVar9 = FUN_1000aaf0(iVar8,"func_button");
    if (((iVar9 != 0) && (iVar8 = FUN_10012580(iVar8), iVar8 != 0)) &&
       (*(char *)(iVar8 + 0x180) != '\0')) {
      pbVar7 = local_88;
      pbVar11 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar8 + 0x18c));
      do {
        bVar2 = *pbVar7;
        bVar12 = bVar2 < *pbVar11;
        if (bVar2 != *pbVar11) {
LAB_100e47f8:
          uVar6 = -(uint)bVar12 | 1;
          goto LAB_100e47fd;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar12 = bVar2 < pbVar11[1];
        if (bVar2 != pbVar11[1]) goto LAB_100e47f8;
        pbVar7 = pbVar7 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar2 != 0);
      uVar6 = 0;
LAB_100e47fd:
      if (uVar6 == 0) {
LAB_100e4b7e:
        if ((*(uint *)(*(int *)(iVar8 + 4) + 0x1a4) & 0x400) == 0) {
          FUN_100dd990(local_8c,0);
        }
        FUN_10015a20();
LAB_100e4ba3:
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),3,"inventory/inventory_click.wav"
                     ,0x3f800000,0x3f4ccccd,0,100);
        FUN_100ddc40();
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),2,"inventory/inventory_no.wav",
                   0x3f800000,0x3f4ccccd,0,100);
    }
  }
  iVar9 = FUN_101186b0(0,*(int *)(in_ECX + 4) + 8,0x42800000);
  do {
    if (iVar9 == 0) {
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),3,"inventory/inventory_no.wav",
                   0x3f800000,0x3f4ccccd,0,100);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pcVar5 = "inter_door";
    pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(iVar9 + 4));
    do {
      bVar2 = *pbVar7;
      bVar12 = bVar2 < (byte)*pcVar5;
      if (bVar2 != *pcVar5) {
LAB_100e4896:
        uVar6 = -(uint)bVar12 | 1;
        goto LAB_100e489b;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar12 = bVar2 < (byte)pcVar5[1];
      if (bVar2 != pcVar5[1]) goto LAB_100e4896;
      pbVar7 = pbVar7 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar2 != 0);
    uVar6 = 0;
LAB_100e489b:
    if (((uVar6 == 0) && (iVar8 = FUN_10047f10(*(int **)(iVar9 + 4)), iVar8 != 0)) &&
       (iVar10 = FUN_10048540(), iVar10 != 0)) {
      pbVar11 = (byte *)(*(int *)(iVar8 + 400) + *(int *)(DAT_10223188 + 0x98));
      pbVar7 = local_88;
      do {
        bVar2 = *pbVar7;
        bVar12 = bVar2 < *pbVar11;
        if (bVar2 != *pbVar11) {
LAB_100e48f4:
          uVar6 = -(uint)bVar12 | 1;
          goto LAB_100e48f9;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar12 = bVar2 < pbVar11[1];
        if (bVar2 != pbVar11[1]) goto LAB_100e48f4;
        pbVar7 = pbVar7 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar2 != 0);
      uVar6 = 0;
LAB_100e48f9:
      if (uVar6 == 0) {
        if ((*(byte *)(*(int *)(iVar8 + 4) + 0x1a4) & 1) == 0) {
          FUN_100dd990(local_8c,0);
        }
        FUN_10048e40(in_ECX);
        goto LAB_100e4ba3;
      }
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),2,"inventory/inventory_no.wav",
                   0x3f800000,0x3f4ccccd,0,100);
    }
    pcVar5 = "func_valve";
    pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(iVar9 + 4));
    do {
      bVar2 = *pbVar7;
      bVar12 = bVar2 < (byte)*pcVar5;
      if (bVar2 != *pcVar5) {
LAB_100e4964:
        uVar6 = -(uint)bVar12 | 1;
        goto LAB_100e4969;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar12 = bVar2 < (byte)pcVar5[1];
      if (bVar2 != pcVar5[1]) goto LAB_100e4964;
      pbVar7 = pbVar7 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar2 != 0);
    uVar6 = 0;
LAB_100e4969:
    if ((uVar6 == 0) && (iVar8 = FUN_10042560(*(int **)(iVar9 + 4)), iVar8 != 0)) {
      if (*(int *)(iVar8 + 0x180) != 0) {
        pbVar11 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar8 + 0x180));
        pbVar7 = local_88;
        do {
          bVar2 = *pbVar7;
          bVar12 = bVar2 < *pbVar11;
          if (bVar2 != *pbVar11) {
LAB_100e49c0:
            uVar6 = -(uint)bVar12 | 1;
            goto LAB_100e49c5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar12 = bVar2 < pbVar11[1];
          if (bVar2 != pbVar11[1]) goto LAB_100e49c0;
          pbVar7 = pbVar7 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar2 != 0);
        uVar6 = 0;
LAB_100e49c5:
        if (uVar6 == 0) {
          if ((*(byte *)(*(int *)(iVar8 + 4) + 0x1a4) & 1) == 0) {
            FUN_100dd990(local_8c,0);
          }
          FUN_10042cf0(in_ECX);
          goto LAB_100e4ba3;
        }
      }
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),2,"inventory/inventory_no.wav",
                   0x3f800000,0x3f4ccccd,0,100);
    }
    pcVar5 = "func_button";
    pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(iVar9 + 4));
    do {
      bVar2 = *pbVar7;
      bVar12 = bVar2 < (byte)*pcVar5;
      if (bVar2 != *pcVar5) {
LAB_100e4a30:
        uVar6 = -(uint)bVar12 | 1;
        goto LAB_100e4a35;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar12 = bVar2 < (byte)pcVar5[1];
      if (bVar2 != pcVar5[1]) goto LAB_100e4a30;
      pbVar7 = pbVar7 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar2 != 0);
    uVar6 = 0;
LAB_100e4a35:
    if ((((uVar6 == 0) && (iVar8 = FUN_10012580(*(int **)(iVar9 + 4)), iVar8 != 0)) &&
        (*(int *)(iVar8 + 0x18c) != 0)) && (*(char *)(iVar8 + 0x180) != '\0')) {
      pbVar11 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar8 + 0x18c));
      pbVar7 = local_88;
      do {
        bVar2 = *pbVar7;
        bVar12 = bVar2 < *pbVar11;
        if (bVar2 != *pbVar11) {
LAB_100e4a96:
          uVar6 = -(uint)bVar12 | 1;
          goto LAB_100e4a9b;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar12 = bVar2 < pbVar11[1];
        if (bVar2 != pbVar11[1]) goto LAB_100e4a96;
        pbVar7 = pbVar7 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar2 != 0);
      uVar6 = 0;
LAB_100e4a9b:
      if (uVar6 == 0) goto LAB_100e4b7e;
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),2,"inventory/inventory_no.wav",
                   0x3f800000,0x3f4ccccd,0,100);
    }
    iVar9 = FUN_101186b0(iVar9,*(int *)(in_ECX + 4) + 8,0x42800000);
  } while( true );
}

