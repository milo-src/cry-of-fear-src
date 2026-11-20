
uint FUN_10054f90(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  *(undefined4 *)(in_ECX + 0x168) = 1;
  *(undefined4 *)(in_ECX + 0x164) = 0;
  cVar1 = FUN_10053bf0("GL_ARB_multitexture");
  if (cVar1 != '\0') {
    (**(code **)(in_ECX + 0xc0))(0x84e2,(undefined4 *)(in_ECX + 0x168));
    iVar2 = (*DAT_101be758)("glActiveTextureARB");
    *(int *)(in_ECX + 0x16c) = iVar2;
    if (iVar2 == 0) {
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glActiveTextureARB");
      FUN_1007d400(&DAT_101417f8);
    }
    uVar3 = (uint)(iVar2 != 0);
    iVar2 = (*DAT_101be758)("glClientActiveTextureARB");
    *(int *)(in_ECX + 0x170) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glClientActiveTextureARB");
      FUN_1007d400(&DAT_101417f8);
    }
    iVar2 = (*DAT_101be758)("glMultiTexCoord1fARB");
    *(int *)(in_ECX + 0x174) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glMultiTexCoord1fARB");
      FUN_1007d400(&DAT_101417f8);
    }
    iVar2 = (*DAT_101be758)("glMultiTexCoord2fARB");
    *(int *)(in_ECX + 0x178) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glMultiTexCoord2fARB");
      FUN_1007d400(&DAT_101417f8);
    }
    iVar2 = (*DAT_101be758)("glMultiTexCoord3fvARB");
    *(int *)(in_ECX + 0x17c) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glMultiTexCoord3fvARB");
      FUN_1007d400(&DAT_101417f8);
    }
    *(uint *)(in_ECX + 0x164) = uVar3;
    return uVar3;
  }
  return *(uint *)(in_ECX + 0x164);
}

