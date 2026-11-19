
void FUN_1003d850(undefined4 param_1)

{
  int *in_ECX;
  char *pcVar1;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if (in_ECX[0x32] == 0) goto switchD_1003d87d_caseD_0;
  switch(param_1) {
  case 1:
    (**(code **)(*in_ECX + 0x24))(0);
    FUN_100aaad0();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 2:
    pcVar1 = "movestatue 0 %i";
    break;
  case 3:
    pcVar1 = "movestatue 1 %i";
    break;
  case 4:
    pcVar1 = "movestatue 2 %i";
    break;
  case 5:
    pcVar1 = "movestatue 3 %i";
    break;
  default:
    (*DAT_101b26ac)("Unknown AnimalStatue ActionSignal %i.\n",param_1);
  case 0:
switchD_1003d87d_caseD_0:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_1000c900(local_88,pcVar1,in_ECX[0x32]);
  (*DAT_101b2654)(local_88);
  (*DAT_101b2660)("statue_puzzle/statue_switch.wav",0x3f800000);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

