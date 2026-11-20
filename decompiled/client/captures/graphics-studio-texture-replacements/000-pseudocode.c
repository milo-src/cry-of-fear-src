
void FUN_10064340(char param_1)

{
  int iVar1;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if (DAT_104d26b8 == 0) {
    DAT_104d26b8 = DAT_1018fe8c;
    DAT_1018fe8c = DAT_1018fe8c + 1;
  }
  if (DAT_104d26c5 != '\0') goto LAB_10064611;
  DAT_104d26c5 = '\0';
  if ((param_1 == '\0') || (DAT_101b27bc == 0)) {
    switch(DAT_1018ca20) {
    case 1:
      goto switchD_100643a1_caseD_1;
    case 2:
      FUN_1000c900(local_108,"models/costumes/ModDB/ModDB_Hoodie.tga");
      break;
    case 3:
      FUN_1000c900(local_108,"models/costumes/Hello_Kitty/Hello_Kitty_Hoodie.tga");
      break;
    case 4:
      FUN_1000c900(local_108,"models/costumes/AoM/AoM_Hoodie.tga");
      break;
    case 5:
      FUN_1000c900(local_108,"models/costumes/Camo/Camo_Hoodie.tga");
      break;
    case 6:
      FUN_1000c900(local_108,"models/costumes/HLC/HLC_Hoodie.tga");
      break;
    case 7:
      FUN_1000c900(local_108,"models/costumes/Black_Metal/Black_Metal_Hoodie.tga");
      break;
    case 8:
      FUN_1000c900(local_108,"models/costumes/Team_Psykskallar/Team_Psykskallar_Hoodie.tga");
      break;
    case 9:
      FUN_1000c900(local_108,"models/costumes/Awesome/Awesome_Hoodie.tga");
      break;
    case 10:
      FUN_1000c900(local_108,"models/costumes/Sick_Simon/Sick_Simon_Hoodie.tga");
      break;
    case 0xb:
      FUN_1000c900(local_108,"models/costumes/Twitcher/Twitcher_Hoodie.tga");
      break;
    case 0xc:
      iVar1 = (*DAT_101b2648)("sv_custom_hoodie");
      if (iVar1 != 0) {
        FUN_1000c900(local_108,"models/costumes/%s",iVar1);
      }
    }
  }
  else {
    switch(DAT_101b27bc) {
    case 1:
switchD_100643a1_caseD_1:
      FUN_1000c900(local_108,"models/costumes/Leatherhoff/Leatherhoff_Hoodie.tga");
      break;
    case 2:
      FUN_1000c900(local_108,"models/costumes/ModDB/ModDB_Hoodie.tga");
      break;
    case 3:
      FUN_1000c900(local_108,"models/costumes/Hello_Kitty/Hello_Kitty_Hoodie.tga");
      break;
    case 4:
      FUN_1000c900(local_108,"models/costumes/AoM/AoM_Hoodie.tga");
      break;
    case 5:
      FUN_1000c900(local_108,"models/costumes/Camo/Camo_Hoodie.tga");
      break;
    case 6:
      FUN_1000c900(local_108,"models/costumes/HLC/HLC_Hoodie.tga");
      break;
    case 7:
      FUN_1000c900(local_108,"models/costumes/black_metal/Black_Metal_Hoodie.tga");
      break;
    case 8:
      FUN_1000c900(local_108,"models/costumes/Team_Psykskallar/Team_Psykskallar_Hoodie.tga");
      break;
    case 9:
      FUN_1000c900(local_108,"models/costumes/Awesome/Awesome_Hoodie.tga");
      break;
    case 10:
      FUN_1000c900(local_108,"models/costumes/Sick_Simon/Sick_Simon_Hoodie.tga");
      break;
    case 0xb:
      FUN_1000c900(local_108,"models/costumes/Twitcher/Twitcher_hoodie.tga");
    }
  }
  iVar1 = FUN_10069630(local_108,0,DAT_104d26b8);
  if (iVar1 != 0) {
    DAT_104d26c5 = '\x01';
  }
LAB_10064611:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

