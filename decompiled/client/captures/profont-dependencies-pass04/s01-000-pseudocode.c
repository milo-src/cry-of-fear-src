
void FUN_1006cb10(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  int *piVar5;
  char ****ppppcVar6;
  char ****ppppcVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  undefined1 local_2f0 [184];
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  char ***local_22c [4];
  uint local_21c;
  undefined4 local_218;
  char local_214 [256];
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10134936;
  local_10 = ExceptionList;
  local_14 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  DAT_10542a88 = 0;
  pcVar4 = (char *)(*DAT_101b2724)(local_14);
  pcVar10 = pcVar4;
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar10[(int)(local_214 + (-1 - (int)pcVar4))] = cVar1;
  } while (cVar1 != '\0');
  pcVar10 = (char *)((int)&local_218 + 3);
  do {
    pcVar4 = pcVar10;
    pcVar10 = pcVar4 + 1;
  } while (pcVar4[1] != '\0');
  builtin_strncpy(pcVar4 + 1,"/config.cfg",0xc);
  FUN_10026090(local_214,1,0x40,1);
  local_21c = 0;
  local_218 = 0xf;
  local_22c[0] = (char ***)((uint)local_22c[0] & 0xffffff00);
  local_238 = 0;
  local_234 = 0;
  local_230 = 0;
  local_8 = 2;
  piVar5 = (int *)FUN_10020990(local_2f0,local_22c);
  bVar2 = *(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5);
joined_r0x1006cc0d:
  if ((bVar2 & 6) == 0) {
    ppppcVar6 = local_22c;
    if (0xf < local_218) {
      ppppcVar6 = (char ****)local_22c[0];
    }
    ppppcVar7 = ppppcVar6;
    do {
      cVar1 = *(char *)ppppcVar7;
      ppppcVar7 = (char ****)((int)ppppcVar7 + 1);
      *(char *)((int)ppppcVar7 + (int)(local_214 + (0xff - (int)ppppcVar6))) = cVar1;
    } while (cVar1 != '\0');
    if (0xff < local_21c) goto LAB_1006cdb7;
    local_114[local_21c] = '\0';
    iVar8 = FUN_100d3cf0(local_114,&DAT_1014ed70);
    if ((iVar8 == 0) || (iVar8 = FUN_100d3cf0(local_114,param_1), iVar8 == 0)) goto LAB_1006cc81;
    bVar3 = false;
    pcVar10 = local_114;
    uVar11 = 0;
    iVar8 = 1;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (0 < (int)pcVar10 - (int)(local_114 + 1)) {
      do {
        if (bVar3) {
          if (local_114[iVar8] == '\"') {
            if (uVar11 < 0x100) {
              (&DAT_10542a88)[uVar11] = 0;
              if (0xf < local_218) {
                std::_Deallocate<8,0>(local_22c[0],local_218 + 1);
              }
              FUN_100220d0();
              goto LAB_1006ccde;
            }
LAB_1006cdb7:
                    /* WARNING: Subroutine does not return */
            ___report_rangecheckfailure();
          }
          iVar9 = _toupper((int)local_114[iVar8]);
          (&DAT_10542a88)[uVar11] = (char)iVar9;
          uVar11 = uVar11 + 1;
        }
        else {
          bVar3 = false;
          if (local_114[iVar8] == '\"') {
            bVar3 = true;
          }
        }
        pcVar10 = local_114;
        iVar8 = iVar8 + 1;
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        if ((int)pcVar10 - (int)(local_114 + 1) < iVar8) break;
      } while( true );
    }
  }
  else {
    (*DAT_101b26a8)("Couldn\'t get key for bind %s!\n",param_1);
  }
  if (0xf < local_218) {
    std::_Deallocate<8,0>(local_22c[0],local_218 + 1);
  }
  FUN_100220d0();
LAB_1006ccde:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_1006cc81:
  piVar5 = (int *)FUN_10020990(local_2f0,local_22c);
  bVar2 = *(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5);
  goto joined_r0x1006cc0d;
}

