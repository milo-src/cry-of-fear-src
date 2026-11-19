
void FUN_100877d0(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  cVar2 = FUN_10089830();
  if (cVar2 != '\0') {
    cgGLEnableProfile(DAT_10545058);
  }
  cVar2 = FUN_10089830();
  if (cVar2 != '\0') {
    cgGLEnableProfile(DAT_10545054);
  }
  iVar1 = *(int *)(in_ECX + 0x30);
  if (iVar1 != 0) {
    cVar2 = FUN_10089830();
    if (cVar2 != '\0') {
      cgGLBindProgram(*(undefined4 *)(iVar1 + 0x24));
    }
  }
  iVar1 = *(int *)(in_ECX + 0x34);
  if (iVar1 != 0) {
    cVar2 = FUN_10089830();
    if (cVar2 != '\0') {
      cgGLBindProgram(*(undefined4 *)(iVar1 + 0x24));
    }
  }
  cgGLSetStateMatrixParameter(*(undefined4 *)(in_ECX + 0x38),7,0);
  return;
}

