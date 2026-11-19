
void FUN_100b1f60(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = (*DAT_101b26dc)(*(undefined4 *)(param_1 + 0xb0));
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_100b1870(*(undefined4 *)(iVar1 + 0xb54),*(undefined4 *)(iVar1 + 0xb58),
                                  *(undefined4 *)(iVar1 + 0xb5c),*(undefined4 *)(param_1 + 0x58),
                                  *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),
                                  *(undefined4 *)(*(int *)(param_1 + 0xcc) + 100),
                                  *(undefined4 *)(*(int *)(param_1 + 0xcc) + 0x68));
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + (float)fVar2;
  }
  return;
}

