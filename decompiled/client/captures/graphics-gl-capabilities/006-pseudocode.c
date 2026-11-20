
uint FUN_10055140(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  *(undefined4 *)(in_ECX + 0x1dc) = 0;
  cVar1 = FUN_10053bf0("GL_EXT_texture3D");
  if (cVar1 != '\0') {
    iVar2 = (*DAT_101be758)("glTexImage3DEXT");
    *(int *)(in_ECX + 0x1d8) = iVar2;
    if (iVar2 == 0) {
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glTexImage3DEXT");
      FUN_1007d400(&DAT_101417f8);
    }
    uVar3 = (uint)(iVar2 != 0);
    *(uint *)(in_ECX + 0x1dc) = uVar3;
    return uVar3;
  }
  return *(uint *)(in_ECX + 0x1dc);
}

