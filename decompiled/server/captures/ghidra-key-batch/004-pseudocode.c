
void FUN_1004dbf0(byte *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int local_20c;
  byte local_208 [512];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar3 = (*DAT_102230c4)();
  if ((iVar3 == 0) || (local_20c == 0)) {
    puVar10 = &DAT_101b1774;
    uVar9 = 1;
    (*DAT_1022303c)();
    (*DAT_1022303c)(1," * GetItemDescription failed to load file %s\n",param_2,uVar9,puVar10);
    (*DAT_1022303c)(1,&DAT_101b1774);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_100c6de0(iVar3);
  pcVar6 = &DAT_102231a8;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (pcVar6 != &DAT_102231a9) {
    do {
      iVar3 = 0;
      do {
        bVar2 = (&DAT_102231a8)[iVar3];
        local_208[iVar3] = bVar2;
        iVar3 = iVar3 + 1;
      } while (bVar2 != 0);
      FUN_100c6de0();
      if (DAT_102231a8 != '{') {
        (*DAT_1022303c)(1,&DAT_101b1774);
        (*DAT_1022303c)(1," * CheckItem parsing error: expecting { after key name\n");
        (*DAT_1022303c)(1,&DAT_101b1774);
        break;
      }
      FUN_100c6de0();
      while (DAT_102231a8 != '}') {
        pbVar7 = (byte *)&DAT_102231a8;
        pbVar5 = &DAT_101b17e0;
        do {
          bVar2 = *pbVar5;
          bVar8 = bVar2 < *pbVar7;
          if (bVar2 != *pbVar7) {
LAB_1004dce0:
            uVar4 = -(uint)bVar8 | 1;
            goto LAB_1004dce5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar8 = bVar2 < pbVar7[1];
          if (bVar2 != pbVar7[1]) goto LAB_1004dce0;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar2 != 0);
        uVar4 = 0;
LAB_1004dce5:
        if (uVar4 == 0) {
          FUN_100c6de0();
          pbVar5 = local_208;
          pbVar7 = param_1;
          do {
            bVar2 = *pbVar5;
            bVar8 = bVar2 < *pbVar7;
            if (bVar2 != *pbVar7) {
LAB_1004dd20:
              uVar4 = -(uint)bVar8 | 1;
              goto LAB_1004dd25;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar8 = bVar2 < pbVar7[1];
            if (bVar2 != pbVar7[1]) goto LAB_1004dd20;
            pbVar5 = pbVar5 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar2 != 0);
          uVar4 = 0;
LAB_1004dd25:
          if (uVar4 == 0) {
            (*DAT_102230c8)();
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
        FUN_100c6de0();
      }
      FUN_100c6de0();
      pcVar6 = &DAT_102231a8;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
    } while (pcVar6 != &DAT_102231a9);
  }
  (*DAT_102230c8)();
  iVar3 = *(int *)(in_ECX + 4);
  (*DAT_1022303c)(1,"KEY ERROR: Couldn\'t parse token of key at %f %f %f!\n",
                  (double)*(float *)(iVar3 + 8),(double)*(float *)(iVar3 + 0xc),
                  (double)*(float *)(iVar3 + 0x10));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

