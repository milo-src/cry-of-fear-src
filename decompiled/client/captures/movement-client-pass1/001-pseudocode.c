
void HUD_PlayerMove(int param_1,int param_2)

{
  DAT_101ad6e8 = param_1;
  FUN_10015650(param_2 != 0);
  if (*(int *)(DAT_101ad6e8 + 0xe0) == -1) {
    *(uint *)(DAT_101ad6e8 + 0xb8) = *(uint *)(DAT_101ad6e8 + 0xb8) & 0xfffffdff;
  }
  else {
    *(uint *)(DAT_101ad6e8 + 0xb8) = *(uint *)(DAT_101ad6e8 + 0xb8) | 0x200;
  }
  if ((*(int *)(DAT_101ad6e8 + 8) == 0) && (*(int *)(DAT_101ad6e8 + 0xdc) == 3)) {
    *(undefined4 *)(DAT_101ad6e8 + 0xc4) = 0x3f800000;
  }
  return;
}

