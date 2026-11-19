
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a870(char *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  size_t _Count;
  int iVar6;
  
  if ((DAT_101b2600 != 0) && (cVar2 = FUN_100a5290(), cVar2 == '\0')) {
    (*DAT_101b2680)(param_1);
    return;
  }
  iVar6 = 0;
  pcVar3 = &DAT_10545128;
  do {
    if (*pcVar3 == '\0') break;
    pcVar3 = pcVar3 + 0x100;
    iVar6 = iVar6 + 1;
  } while ((int)pcVar3 < 0x10545628);
  if (iVar6 == 5) {
    FUN_1008a9e0();
    iVar6 = 4;
  }
  (&DAT_10545740)[iVar6] = 0;
  (&DAT_10545728)[iVar6] = 0;
  if ((*param_1 == '\x02') && (0 < param_3)) {
    (*DAT_101b265c)(param_3,&DAT_10556cb0 + param_3 * 5);
    pcVar3 = (char *)(&DAT_10556cb0)[param_3 * 5];
    if ((pcVar3 != (char *)0x0) && (iVar4 = FUN_100d3cf0(param_1,pcVar3), iVar4 != 0)) {
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      (&DAT_10545740)[iVar6] = pcVar3 + iVar4 + (-(int)param_1 - (int)pcVar1);
      uVar5 = FUN_1004b800(param_3);
      (&DAT_10545728)[iVar6] = uVar5;
    }
  }
  _Count = 0xff;
  if (0xff < (int)(param_2 - 1U)) {
    _Count = param_2 - 1U;
  }
  _strncpy(&DAT_10545128 + iVar6 * 0x100,param_1,_Count);
  FUN_1008a5a0(iVar6);
  if (iVar6 == 0) {
    DAT_10545758 = *(float *)(*(int *)(in_ECX + 0x18) + 0xc) + DAT_1018d1b0;
  }
  *(uint *)(in_ECX + 0x10) = *(uint *)(in_ECX + 0x10) | 1;
  (*DAT_101b2660)("player/police/police_pager.wav",0x3f800000);
  if (DAT_1018f434 < 0x1e0) {
    iVar6 = DAT_1018f434 + -0x2d;
  }
  else {
    iVar6 = DAT_1018f434 + -0x3c;
  }
  _DAT_1054575c = iVar6 + DAT_10545760 * -6;
  return;
}

