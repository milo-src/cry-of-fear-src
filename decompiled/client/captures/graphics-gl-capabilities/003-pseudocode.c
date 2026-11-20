
uint FUN_10054e20(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  *(undefined4 *)(in_ECX + 0x1a4) = 0;
  *(undefined4 *)(in_ECX + 0x1a0) = 0;
  *(undefined4 *)(in_ECX + 0x1a8) = 0;
  cVar1 = FUN_10053bf0("GL_ARB_fragment_program");
  if (cVar1 != '\0') {
    (**(code **)(in_ECX + 0xc0))(0x8872,(undefined4 *)(in_ECX + 0x1a4));
    (**(code **)(in_ECX + 0xc0))(0x8871,in_ECX + 0x1a8);
    iVar2 = (*DAT_101be758)("glGenProgramsARB");
    *(int *)(in_ECX + 0x1ac) = iVar2;
    if (iVar2 == 0) {
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glGenProgramsARB");
      FUN_1007d400(&DAT_101417f8);
    }
    uVar3 = (uint)(iVar2 != 0);
    iVar2 = (*DAT_101be758)("glBindProgramARB");
    *(int *)(in_ECX + 0x1b0) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glBindProgramARB");
      FUN_1007d400(&DAT_101417f8);
    }
    iVar2 = (*DAT_101be758)("glProgramStringARB");
    *(int *)(in_ECX + 0x1b4) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glProgramStringARB");
      FUN_1007d400(&DAT_101417f8);
    }
    iVar2 = (*DAT_101be758)("glGetProgramivARB");
    *(int *)(in_ECX + 0x1b8) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glGetProgramivARB");
      FUN_1007d400(&DAT_101417f8);
    }
    *(uint *)(in_ECX + 0x1a0) = uVar3;
    return uVar3;
  }
  return *(uint *)(in_ECX + 0x1a0);
}

