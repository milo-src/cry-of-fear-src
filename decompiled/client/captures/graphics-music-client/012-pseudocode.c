
undefined4 FUN_10080780(float param_1)

{
  int iVar1;
  char *in_ECX;
  float10 fVar2;
  
  if (*in_ECX == '\0') {
    return 0;
  }
  if (DAT_105440a8 != 0) {
    iVar1 = (*DAT_101b26c4)("-nomusic",0);
    if (iVar1 == 0) {
      in_ECX[0xdd] = '\x01';
      if (in_ECX[0xc4] != '\0') {
        in_ECX[0xc4] = '\0';
      }
      in_ECX[0x36] = '\0';
      if (param_1 == 0.0) {
        if (DAT_105440b0 != (int *)0x0) {
          (**(code **)(*DAT_105440b0 + 0x18))();
        }
        in_ECX[0xb8] = '\0';
        in_ECX[0xb9] = '\0';
        in_ECX[0xba] = '\0';
        in_ECX[0xbb] = '\0';
        in_ECX[0xcc] = '\0';
        in_ECX[0xcd] = '\0';
        in_ECX[0xce] = '\0';
        in_ECX[0xcf] = '\0';
        in_ECX[0xd0] = '\0';
        in_ECX[0xd1] = '\0';
        in_ECX[0xd2] = '\0';
        in_ECX[0xd3] = '\0';
        in_ECX[0xdd] = '\0';
        return 1;
      }
      fVar2 = (float10)(*DAT_101b26e0)();
      *(float *)(in_ECX + 0xcc) = (float)fVar2;
      *(float *)(in_ECX + 0xd0) = param_1;
    }
  }
  return 1;
}

