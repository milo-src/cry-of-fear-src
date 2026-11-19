
void FUN_10086670(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = cgCreateContext();
  *in_ECX = iVar1;
  if (iVar1 != 0) {
    iVar1 = cgGLGetLatestProfile(8);
    in_ECX[1] = iVar1;
    if (iVar1 != 0x1801) {
      cgGLSetOptimalOptions(iVar1);
      iVar1 = cgGLGetLatestProfile(9);
      in_ECX[2] = iVar1;
      if (iVar1 != 0x1801) {
        cgGLSetOptimalOptions(iVar1);
        *(undefined1 *)(in_ECX + 4) = 1;
        return;
      }
    }
  }
  *(undefined1 *)(in_ECX + 4) = 0;
  return;
}

