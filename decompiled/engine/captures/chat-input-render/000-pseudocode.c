
void FUN_01d89a63(int param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 == 0xd) || (param_1 == 0xa9)) {
    FUN_01d89a1f();
    FUN_01d440eb(&DAT_01ebf2c0);
    FUN_01d440eb(&DAT_01ebf5d8);
    FUN_01d440eb(&DAT_027f8c40);
    FUN_01d440eb(&DAT_01ebf5dc);
    DAT_023ca258 = 0;
    DAT_023ca25c = 0;
    DAT_027f8c40 = 0;
    FUN_01d46622(&DAT_01ebf2c0,&DAT_01ebf5e0);
  }
  else if (param_1 == 0x1b) {
    DAT_023ca258 = 0;
    DAT_023ca25c = 0;
    DAT_027f8c40 = 0;
  }
  else if ((0x1f < param_1) && (param_1 < 0x80)) {
    if (param_1 == 0x7f) {
      if (DAT_023ca25c != 0) {
        puVar1 = &DAT_027f8c3f + DAT_023ca25c;
        DAT_023ca25c = DAT_023ca25c + -1;
        *puVar1 = 0;
      }
    }
    else if (DAT_023ca25c != 0x78) {
      (&DAT_027f8c40)[DAT_023ca25c] = (undefined1)param_1;
      puVar1 = &DAT_027f8c41 + DAT_023ca25c;
      DAT_023ca25c = DAT_023ca25c + 1;
      *puVar1 = 0;
    }
  }
  return;
}

