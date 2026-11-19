
void FUN_10040280(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  switch(param_1) {
  case 1:
    if (((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x1468) != 0)) &&
       (iVar1 = *(int *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc6a4), iVar1 != 0)) {
      FUN_1000c900(local_108,"campaign %s",iVar1);
      (*DAT_101b2654)(local_108);
    }
    pcVar2 = "skillset 1";
    break;
  case 2:
    if (((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x1468) != 0)) &&
       (iVar1 = *(int *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc6a4), iVar1 != 0)) {
      FUN_1000c900(local_108,"campaign %s",iVar1);
      (*DAT_101b2654)(local_108);
    }
    pcVar2 = "skillset 2";
    break;
  case 3:
    if (((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x1468) != 0)) &&
       (iVar1 = *(int *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc6a4), iVar1 != 0)) {
      FUN_1000c900(local_108,"campaign %s",iVar1);
      (*DAT_101b2654)(local_108);
    }
    pcVar2 = "skillset 3";
    break;
  case 4:
    if ((DAT_1018a3f8 & 0x20) == 0) goto switchD_100402a3_default;
    if (((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x1468) != 0)) &&
       (iVar1 = *(int *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc6a4), iVar1 != 0)) {
      FUN_1000c900(local_108,"campaign %s",iVar1);
      (*DAT_101b2654)(local_108);
    }
    pcVar2 = "skillset 4";
    break;
  case 5:
    if (DAT_10542a68 == 0) {
      (*DAT_101b2654)("closegame");
      iVar1 = *in_ECX;
      uVar3 = 0;
    }
    else {
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      if ((DAT_101b2600 == 0) || (*(int **)(DAT_101b2600 + 0x1468) == (int *)0x0))
      goto switchD_100402a3_default;
      iVar1 = **(int **)(DAT_101b2600 + 0x1468);
      uVar3 = 1;
    }
    (**(code **)(iVar1 + 0x24))(uVar3);
    FUN_100aaad0();
  default:
    goto switchD_100402a3_default;
  }
  (*DAT_101b2654)(pcVar2);
  (**(code **)(*in_ECX + 0x24))(0);
  uVar3 = (*DAT_101b2730)("game_menu");
  iVar1 = FUN_100d3cf0(uVar3);
  if (iVar1 != 0) {
    FUN_1007fc10(0x3f800000);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
switchD_100402a3_default:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

