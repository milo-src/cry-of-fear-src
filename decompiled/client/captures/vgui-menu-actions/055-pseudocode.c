
void FUN_1004a5e0(undefined4 param_1)

{
  int *in_ECX;
  char *pcVar1;
  
  switch(param_1) {
  case 0:
    return;
  case 1:
    (*DAT_101b2654)("unfreeze 666");
    (**(code **)(*in_ECX + 0x24))(0);
    FUN_100aaad0();
    return;
  case 2:
    (*DAT_101b2654)("cofsave 19573");
    pcVar1 = "save/save_yes.wav";
    break;
  case 3:
    (*DAT_101b2654)("unfreeze 1024");
    pcVar1 = "save/save_no.wav";
    break;
  default:
    (*DAT_101b26ac)("Unknown Save ActionSignal %i.\n",param_1);
    return;
  }
  (*DAT_101b2660)(pcVar1,0x3f800000);
  (**(code **)(*in_ECX + 0x24))(0);
  FUN_100aaad0();
  return;
}

