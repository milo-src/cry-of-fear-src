
void FUN_100648d0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_108 [10];
  char local_fe [246];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if (DAT_104d26c8 == 0) {
    DAT_104d26c8 = DAT_1018fe8c;
    DAT_1018fe8c = DAT_1018fe8c + 1;
  }
  if ((DAT_104d26c7 == '\0') && (DAT_104d26c7 = '\0', param_1 != 0)) {
    iVar2 = FUN_100d3cf0(param_1,"police3");
    if (iVar2 == 0) {
      pcVar4 = "police/police_hands.tga";
    }
    else {
      pcVar4 = "police/police3_hands.tga";
    }
    iVar2 = FUN_10069630(pcVar4,0,DAT_104d26c8);
    pcVar4 = &DAT_1018a1dc;
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    if ((char *)0x2 < pcVar3 + -0x1018a1dc) {
      iVar2 = 0;
      do {
        cVar1 = (&DAT_1018a1dc)[iVar2];
        local_108[iVar2] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      iVar2 = FUN_100d3cf0(param_1,"police3");
      if (iVar2 == 0) {
        pcVar4 = &DAT_1018a1dc;
      }
      else {
        iVar2 = 0;
        do {
          cVar1 = (&DAT_1018a1d8)[iVar2];
          local_108[iVar2] = cVar1;
          iVar2 = iVar2 + 1;
        } while (cVar1 != '\0');
        pcVar4 = &stack0xfffffef7;
        do {
          pcVar3 = pcVar4;
          pcVar4 = pcVar3 + 1;
        } while (pcVar3[1] != '\0');
        builtin_strncpy(pcVar3 + 1,"_black.tga",0xb);
        pcVar4 = local_108;
      }
      iVar2 = FUN_10069630(pcVar4,0,DAT_104d26c8);
    }
    if (iVar2 != 0) {
      DAT_104d26c7 = '\x01';
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

