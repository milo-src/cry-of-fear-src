
undefined4 FUN_1008a790(void)

{
  int iVar1;
  int *in_ECX;
  
  FUN_1006ca20(in_ECX);
  (*DAT_101b2650)("SayText",FUN_1008aa60);
  (**(code **)(*in_ECX + 0x18))();
  iVar1 = (*DAT_101b2640)("hud_saytext",&DAT_1013c8c4,0);
  in_ECX[5] = iVar1;
  iVar1 = (*DAT_101b2640)("hud_saytext_time",&DAT_1013f144,0);
  in_ECX[4] = in_ECX[4] | 2;
  in_ECX[6] = iVar1;
  return 1;
}

