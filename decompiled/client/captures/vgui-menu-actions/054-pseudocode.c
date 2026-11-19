
void FUN_1004a1b0(undefined4 param_1)

{
  int *in_ECX;
  
  switch(param_1) {
  case 1:
    (*DAT_101b2654)("boilercheck 1");
    return;
  case 2:
    (*DAT_101b2654)("boilercheck 2");
    return;
  case 3:
    (*DAT_101b2654)("boilercheck 3");
    return;
  case 4:
    (*DAT_101b2654)("boilercheck 4");
    return;
  case 5:
    (**(code **)(*in_ECX + 0x24))(0);
    FUN_100aaad0();
    (*DAT_101b2654)("boilercheck 5");
  }
  return;
}

