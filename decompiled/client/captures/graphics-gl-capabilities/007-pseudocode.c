
uint FUN_10054c90(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  *(undefined4 *)(in_ECX + 0x1e0) = 0;
  cVar1 = FUN_10053bf0("GL_ARB_vertex_buffer_object");
  if (cVar1 != '\0') {
    iVar2 = (*DAT_101be758)("glBindBufferARB");
    *(int *)(in_ECX + 0x1e4) = iVar2;
    if (iVar2 == 0) {
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glBindBufferARB");
      FUN_1007d400(&DAT_101417f8);
    }
    uVar3 = (uint)(iVar2 != 0);
    iVar2 = (*DAT_101be758)("glGenBuffersARB");
    *(int *)(in_ECX + 0x1e8) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glGenBuffersARB");
      FUN_1007d400(&DAT_101417f8);
    }
    iVar2 = (*DAT_101be758)("glBufferDataARB");
    *(int *)(in_ECX + 0x1ec) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glBufferDataARB");
      FUN_1007d400(&DAT_101417f8);
    }
    iVar2 = (*DAT_101be758)("glDeleteBuffersARB");
    *(int *)(in_ECX + 0x1f0) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glDeleteBuffersARB");
      FUN_1007d400(&DAT_101417f8);
    }
    iVar2 = (*DAT_101be758)("glGetBufferParameterivARB");
    *(int *)(in_ECX + 500) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glGetBufferParameterivARB");
      FUN_1007d400(&DAT_101417f8);
    }
    *(uint *)(in_ECX + 0x1e0) = uVar3;
    return uVar3;
  }
  return *(uint *)(in_ECX + 0x1e0);
}

