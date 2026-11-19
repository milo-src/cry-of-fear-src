
void FUN_10110b80(void)

{
  int in_ECX;
  
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x108) = 8;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x150) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x14c) = 2;
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1fc);
  if (*(float *)(in_ECX + 0x11c) == 0.0) {
    *(undefined4 *)(in_ECX + 0x11c) = 0x43fa0000;
  }
  if (*(float *)(in_ECX + 0x120) == 0.0) {
    *(undefined4 *)(in_ECX + 0x120) = 0x43fa0000;
  }
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x248) = 0;
  if (*(int *)(in_ECX + 0x144) != 0) {
    *(float *)(*(int *)(in_ECX + 4) + 0x58) = (float)*(int *)(in_ECX + 0x144);
  }
  return;
}

