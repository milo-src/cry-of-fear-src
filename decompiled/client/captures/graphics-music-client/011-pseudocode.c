
void FUN_10080300(undefined4 param_1)

{
  int iVar1;
  char *in_ECX;
  float10 fVar2;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if ((*in_ECX != '\0') && (DAT_105440a8 != (int *)0x0)) {
    iVar1 = (*DAT_101b26c4)("-nomusic",0);
    if (iVar1 == 0) {
      if ((*(int *)(in_ECX + 0xb8) != 0) && (DAT_105440b0 != (int *)0x0)) {
        (**(code **)(*DAT_105440b0 + 0x18))();
      }
      FUN_1000c900(local_108,&DAT_10146b04,param_1);
      if (DAT_105440b0 != (int *)0x0) {
        (**(code **)(*DAT_105440b0 + 0x18))();
      }
      DAT_105440b0 = (int *)(**(code **)(*DAT_105440a8 + 8))(param_1,0,1,1,0,0);
      if (DAT_105440b0 != (int *)0x0) {
        fVar2 = (float10)(*DAT_101b2644)("MP3Volume");
        (**(code **)(*DAT_105440b0 + 0x20))((float)fVar2);
        (**(code **)(*DAT_105440b0 + 0x10))(0);
      }
      in_ECX[0xb8] = '\x01';
      in_ECX[0xb9] = '\0';
      in_ECX[0xba] = '\0';
      in_ECX[0xbb] = '\0';
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

