
void FUN_10064d60(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if (DAT_1018ca1c == 0) {
    pcVar4 = &DAT_1018a1dc;
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    if (pcVar3 + -0x1018a1dc < (char *)0x3) goto switchD_10064dce_caseD_c;
  }
  if (DAT_104d26bc == 0) {
    DAT_104d26bc = DAT_1018fe8c;
    DAT_1018fe8c = DAT_1018fe8c + 1;
  }
  if (DAT_104d26c6 != '\0') goto switchD_10064dce_caseD_c;
  DAT_104d26c6 = '\0';
  switch(DAT_1018ca20) {
  case 1:
    pcVar4 = "models/costumes/leatherhoff/Leatherhoff_Sleeve.tga";
    break;
  case 2:
    pcVar4 = "models/costumes/moddb/ModDB_Sleeve.tga";
    break;
  case 3:
    pcVar4 = "models/costumes/hello_kitty/Hello_Kitty_Sleeve.tga";
    break;
  case 4:
  case 7:
  case 8:
  case 9:
    pcVar4 = "models/costumes/awesome/Awesome_Sleeve.tga";
    break;
  case 5:
    pcVar4 = "models/costumes/camo/Camo_Sleeve.tga";
    break;
  case 6:
    pcVar4 = "models/costumes/hlc/HLC_Sleeve.tga";
    break;
  case 10:
    pcVar4 = "models/costumes/sick_simon/Sick_Simon_Sleeve.tga";
    break;
  case 0xb:
    pcVar4 = "models/costumes/twitcher/twitcher_sleeve.tga";
    break;
  case 0xc:
    goto switchD_10064dce_caseD_c;
  default:
    goto switchD_10064dce_default;
  }
  FUN_1000c900(local_108,pcVar4);
switchD_10064dce_default:
  pcVar4 = &DAT_1018a0dc;
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  if ((char *)0x2 < pcVar3 + -0x1018a0dc) {
    iVar2 = 0;
    do {
      cVar1 = (&DAT_1018a0dc)[iVar2];
      local_108[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
  }
  iVar2 = FUN_10069630(local_108,0,DAT_104d26bc);
  if (iVar2 != 0) {
    DAT_104d26c6 = '\x01';
  }
switchD_10064dce_caseD_c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

