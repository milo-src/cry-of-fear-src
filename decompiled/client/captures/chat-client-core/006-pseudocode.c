
undefined4 * FUN_1004b800(int param_1)

{
  switch(*(undefined2 *)(&DAT_105571ce + param_1 * 0x1a)) {
  case 0:
  case 3:
    return &DAT_1018f708;
  case 1:
    return (undefined4 *)&DAT_1018f6e4;
  case 2:
    return (undefined4 *)&DAT_1018f6f0;
  case 4:
    return (undefined4 *)&DAT_1018f6fc;
  default:
    return (undefined4 *)&DAT_1018f714;
  }
}

