
void FUN_10071020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  float local_21c;
  float local_218;
  char *local_214;
  int local_210;
  char *local_20c;
  char local_208 [255];
  char cStack_109;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_4,param_3);
  pcVar5 = (char *)FUN_10080a60();
  uVar6 = FUN_100808b0();
  local_210 = FUN_100808b0();
  fVar11 = (float10)FUN_10080910();
  fVar1 = (float)fVar11;
  fVar11 = (float10)FUN_10080910();
  fVar2 = (float)fVar11;
  fVar11 = (float10)FUN_10080910();
  local_20c = (char *)(float)fVar11;
  iVar7 = FUN_100808b0();
  FUN_10080a10();
  local_214 = local_20c;
  local_21c = fVar1;
  local_218 = fVar2;
  if (iVar7 == 0) {
    local_210 = CONCAT31(local_210._1_3_,local_210 != 0);
    FUN_1007fb10(pcVar5,uVar6,local_210,fVar1,fVar2,local_20c);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar7 = FUN_100d3cf0(pcVar5,"weapons_new/");
  if (iVar7 != 0) {
    bVar4 = false;
    uVar10 = 0;
    uVar9 = 0;
    local_20c = pcVar5 + 1;
    pcVar8 = pcVar5;
    do {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    if (pcVar8 != local_20c) {
      do {
        cVar3 = pcVar5[uVar9];
        if (bVar4) {
          local_208[uVar10] = cVar3;
          uVar10 = uVar10 + 1;
        }
        else if ((cVar3 == '/') || (cVar3 == '\\')) {
          bVar4 = true;
        }
        uVar9 = uVar9 + 1;
        local_20c = pcVar5 + 1;
        pcVar8 = pcVar5;
        do {
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
      } while (uVar9 < (uint)((int)pcVar8 - (int)local_20c));
      if (bVar4) {
        if (0xff < uVar10) {
                    /* WARNING: Subroutine does not return */
          ___report_rangecheckfailure();
        }
        local_208[uVar10] = '\0';
        builtin_strncpy(local_108,"weapons/",9);
        pcVar5 = local_208;
        do {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
        uVar9 = (int)pcVar5 - (int)local_208;
        pcVar5 = &cStack_109;
        do {
          pcVar8 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar8 != '\0');
        pcVar8 = local_208;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar5 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar5 = pcVar5 + 1;
        }
        pcVar5 = local_108;
      }
    }
  }
  iVar7 = FUN_100d3cf0(pcVar5,&DAT_1014edcc);
  if ((iVar7 == 0) && (iVar7 = FUN_100d3cf0(pcVar5,"shoot"), iVar7 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  (**(code **)(DAT_101b2758 + 4))(0,&local_21c,uVar6,pcVar5,0x3f800000,0x3f4ccccd,0,100);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

