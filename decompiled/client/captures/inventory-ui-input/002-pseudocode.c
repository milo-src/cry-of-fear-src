
void FUN_100449f0(undefined4 param_1)

{
  int in_ECX;
  
  (*DAT_101b2660)("inventory/inventory_toggle.wav",0x3f800000);
  *(undefined4 *)(in_ECX + 0x1b0) = param_1;
  *(undefined4 *)(in_ECX + 0x1bc) = 0;
  *(undefined4 *)(in_ECX + 0x1b8) = 0;
  return;
}

