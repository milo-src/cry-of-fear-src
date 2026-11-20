
void FUN_10064ec0(void)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if ((DAT_1018ca1c == 0) && (DAT_101b27bc == 0)) goto switchD_10064f27_caseD_2;
  if (DAT_104d26d4 == 0) {
    DAT_104d26d4 = DAT_1018fe8c;
    DAT_1018fe8c = DAT_1018fe8c + 1;
  }
  if (DAT_104d26d1 != '\0') goto switchD_10064f27_caseD_2;
  DAT_104d26d1 = '\0';
  iVar1 = DAT_1018ca20;
  if (DAT_101b27bc != 0) {
    iVar1 = DAT_101b27bc;
  }
  switch(iVar1) {
  case 1:
    pcVar2 = "models/costumes/leatherhoff/Leatherhoff_Jeans.tga";
    break;
  case 2:
  case 5:
  case 6:
  case 8:
    goto switchD_10064f27_caseD_2;
  case 3:
    pcVar2 = "models/costumes/hello_kitty/Hello_Kitty_Jeans.tga";
    break;
  case 4:
    pcVar2 = "models/costumes/AoM/AoM_Jeans.tga";
    break;
  case 7:
    pcVar2 = "models/costumes/black_metal/Black_Metal_Jeans.tga";
    break;
  case 9:
    pcVar2 = "models/costumes/awesome/Awesome_Jeans.tga";
    break;
  case 10:
    pcVar2 = "models/costumes/sick_simon/Sick_Simon_Jeans.tga";
    break;
  case 0xb:
    pcVar2 = "models/costumes/twitcher/Twitcher_Jeans.tga";
    break;
  default:
    goto switchD_10064f27_default;
  }
  FUN_1000c900(local_108,pcVar2);
switchD_10064f27_default:
  iVar1 = FUN_10069630(local_108,0,DAT_104d26d4);
  if (iVar1 != 0) {
    DAT_104d26d1 = '\x01';
  }
switchD_10064f27_caseD_2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

