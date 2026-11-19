
void FUN_1002bcf0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  char *pcVar3;
  
  switch(param_1) {
  case 1:
    (**(code **)(*in_ECX + 0x24))(0);
    FUN_100aaad0();
    if (DAT_101b2600 == 0) {
      return;
    }
    if (*(int **)(DAT_101b2600 + 0x1468) == (int *)0x0) {
      return;
    }
    (**(code **)(**(int **)(DAT_101b2600 + 0x1468) + 0x24))(1);
    FUN_100aaad0();
    return;
  case 2:
    iVar1 = SteamFriends();
    if (iVar1 != 0) {
      piVar2 = (int *)SteamFriends();
      pcVar3 = "http://www.cry-of-fear.com/donate.php";
LAB_1002bdc9:
      (**(code **)(*piVar2 + 0x5c))(pcVar3);
    }
    break;
  case 3:
    iVar1 = SteamFriends();
    if (iVar1 != 0) {
      piVar2 = (int *)SteamFriends();
      pcVar3 = "http://www.cdbaby.com/cd/andreasronnberg";
      goto LAB_1002bdc9;
    }
    break;
  case 4:
    iVar1 = SteamFriends();
    if (iVar1 != 0) {
      piVar2 = (int *)SteamFriends();
      pcVar3 = "http://www.cdbaby.com/cd/andreasronnberg2";
      goto LAB_1002bdc9;
    }
    break;
  case 5:
    iVar1 = SteamFriends();
    if (iVar1 != 0) {
      piVar2 = (int *)SteamFriends();
      pcVar3 = "http://teampsykskallar.spreadshirt.se/";
      goto LAB_1002bdc9;
    }
    break;
  case 6:
    iVar1 = SteamFriends();
    if (iVar1 != 0) {
      piVar2 = (int *)SteamFriends();
      pcVar3 = "http://www.moddb.com/mods/afraid-of-monsters-dc";
      goto LAB_1002bdc9;
    }
    break;
  case 7:
    iVar1 = SteamFriends();
    if (iVar1 != 0) {
      piVar2 = (int *)SteamFriends();
      pcVar3 = "http://www.facebook.com/CryOfFearOfficial";
      goto LAB_1002bdc9;
    }
    break;
  default:
    goto switchD_1002bd01_default;
  }
  (*DAT_101b2660)("ui/3d_click.wav",0x3f800000);
switchD_1002bd01_default:
  return;
}

