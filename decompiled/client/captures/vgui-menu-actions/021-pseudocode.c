
void FUN_100335f0(undefined4 param_1)

{
  int *in_ECX;
  
  switch(param_1) {
  case 1:
    FUN_10033700();
    return;
  case 2:
    FUN_10033700();
    return;
  case 3:
    FUN_10033700();
    return;
  case 4:
    FUN_10033700();
    return;
  case 5:
    FUN_10033700();
    return;
  case 6:
    FUN_10033700();
    return;
  case 7:
    FUN_10033700();
    return;
  case 8:
    FUN_10033700();
    return;
  case 9:
    FUN_10033700();
    return;
  case 10:
    FUN_10033700();
    return;
  case 0xb:
    FUN_10033790();
    return;
  case 0xc:
    if ((char)in_ECX[0x31] == '\0') {
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aaad0();
      (*DAT_101b2660)("phone/telephone_receiver_down.wav",0x3f800000);
    }
  }
  return;
}

