
void FUN_100308b0(undefined4 param_1)

{
  int *in_ECX;
  
  switch(param_1) {
  case 1:
    (*DAT_101b2654)("padlockrotate 1");
    return;
  case 2:
    (*DAT_101b2654)("padlockrotate 2");
    return;
  case 3:
    (*DAT_101b2654)("padlockrotate 3");
    return;
  case 4:
    (*DAT_101b2654)("padlockrotate 4");
    return;
  case 5:
    (*DAT_101b2654)("padlockcancel");
    (**(code **)(*in_ECX + 0x24))(0);
    FUN_100aaad0();
  }
  return;
}

