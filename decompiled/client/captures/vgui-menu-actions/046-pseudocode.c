
void FUN_10046230(undefined4 param_1)

{
  int *in_ECX;
  
  switch(param_1) {
  case 0:
    break;
  case 1:
    (**(code **)(*in_ECX + 0x24))(0);
    FUN_100aaad0();
    return;
  case 2:
    FUN_10046350();
    return;
  case 3:
    FUN_10046350();
    return;
  case 4:
    FUN_10046350();
    return;
  case 5:
    FUN_10046350();
    return;
  case 6:
    FUN_10046350();
    return;
  case 7:
    FUN_10046350();
    return;
  case 8:
    FUN_10046350();
    return;
  case 9:
    FUN_10046350();
    return;
  case 10:
    FUN_10046350();
    return;
  default:
    (*DAT_101b26ac)("Unknown Keypad ActionSignal %i.\n",param_1);
  }
  return;
}

