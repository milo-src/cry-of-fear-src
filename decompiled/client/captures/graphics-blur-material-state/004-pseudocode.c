
void FUN_1006a420(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char local_388 [256];
  char local_288 [253];
  char acStack_18b [259];
  char local_88 [64];
  char local_48 [64];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  DAT_104e8150 = 0;
  pcVar2 = (char *)(*DAT_101b2730)();
  pcVar7 = pcVar2;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar7[(int)(acStack_18b + (2 - (int)pcVar2))] = cVar1;
  } while (cVar1 != '\0');
  FUN_1007d4d0("\n>> loading detail textures\n");
  pcVar7 = acStack_18b + 3;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar8 = (int)pcVar7 - (int)(acStack_18b + 4);
  if (iVar8 == 0) {
    FUN_1007d400("ERROR: ParseDetailTextureDataFile() cant get level name!\n");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (0xff < iVar8 - 4U) {
                    /* WARNING: Subroutine does not return */
    ___report_rangecheckfailure();
  }
  local_288[iVar8 + 0xfc] = '\0';
  pcVar7 = acStack_18b + 2;
  do {
    pcVar2 = pcVar7;
    pcVar7 = pcVar2 + 1;
  } while (pcVar2[1] != '\0');
  builtin_strncpy(pcVar2 + 1,"_detail.txt",0xc);
  iVar8 = (*DAT_101b2744)(acStack_18b + 3,5,0);
  if (iVar8 == 0) {
    FUN_1007d400("No detail textures file %s\n",acStack_18b + 3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  DAT_104e8150 = 0;
  iVar3 = iVar8;
  do {
    iVar3 = (*DAT_101b2748)(iVar3,local_388);
    if (iVar3 == 0) goto LAB_1006a6b7;
    iVar3 = (*DAT_101b2748)(iVar3,local_288);
    if (iVar3 == 0) goto LAB_1006a6b7;
    iVar3 = (*DAT_101b2748)(iVar3,local_48);
    if (iVar3 == 0) goto LAB_1006a6b7;
    iVar3 = (*DAT_101b2748)(iVar3,local_88);
    if (iVar3 == 0) goto LAB_1006a6b7;
    iVar4 = _atoi(local_48);
    iVar5 = _atoi(local_88);
    pcVar7 = local_388;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar7 - (int)(local_388 + 1)) < 0x11) {
      pcVar7 = local_288;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (0x20 < (uint)((int)pcVar7 - (int)(local_288 + 1))) goto LAB_1006a65f;
      pcVar7 = local_388;
      iVar6 = DAT_104e8150 * 0x38 - (int)pcVar7;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar7[iVar6 + 0x104e114f] = cVar1;
      } while (cVar1 != '\0');
      pcVar7 = local_288;
      iVar6 = DAT_104e8150 * 0x38 - (int)pcVar7;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar7[iVar6 + 0x104e115f] = cVar1;
      } while (cVar1 != '\0');
      (&DAT_104e1180)[DAT_104e8150 * 0xe] = iVar4;
      (&DAT_104e1184)[DAT_104e8150 * 0xe] = iVar5;
      DAT_104e8150 = DAT_104e8150 + 1;
    }
    else {
LAB_1006a65f:
      FUN_1007d400("Error in detail textures file %s: token too large\n",acStack_18b + 3);
      FUN_1007d400("(entry %d: %s - %s)\n",DAT_104e8150,local_388,local_288);
    }
  } while (DAT_104e8150 < 0x200);
  FUN_1007d400("Too many entries in detail textures file %s\n",acStack_18b + 3);
LAB_1006a6b7:
  (*DAT_101b274c)(iVar8);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

