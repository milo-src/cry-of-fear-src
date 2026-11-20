
void FUN_100641d0(void)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if (DAT_1018ca1c == 0) goto switchD_1006422b_caseD_1;
  if (DAT_104d26d8 == 0) {
    DAT_104d26d8 = DAT_1018fe8c;
    DAT_1018fe8c = DAT_1018fe8c + 1;
  }
  if (DAT_104d26d2 != '\0') goto switchD_1006422b_caseD_1;
  DAT_104d26d2 = '\0';
  switch(DAT_1018ca20) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
    goto switchD_1006422b_caseD_1;
  case 7:
    pcVar2 = "models/costumes/black_metal/Black_Metal_Face.tga";
    break;
  case 10:
    pcVar2 = "models/costumes/sick_simon/Sick_Simon_Face.tga";
    break;
  case 0xb:
    pcVar2 = "models/costumes/twitcher/Twitcher_Face.tga";
    break;
  default:
    goto switchD_1006422b_default;
  }
  FUN_1000c900(local_108,pcVar2);
switchD_1006422b_default:
  iVar1 = FUN_10069630(local_108,0,DAT_104d26d8);
  if (iVar1 != 0) {
    DAT_104d26d2 = '\x01';
  }
switchD_1006422b_caseD_1:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

