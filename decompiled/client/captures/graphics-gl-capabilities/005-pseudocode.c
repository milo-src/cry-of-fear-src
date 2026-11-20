
uint FUN_100552d0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  *(undefined4 *)(in_ECX + 0x188) = 0;
  *(undefined4 *)(in_ECX + 0x184) = 0;
  cVar1 = FUN_10053bf0("GL_NV_register_combiners");
  if (cVar1 != '\0') {
    (**(code **)(in_ECX + 0xc0))(0x854d,(undefined4 *)(in_ECX + 0x188));
    iVar2 = (*DAT_101be758)("glCombinerParameteriNV");
    *(int *)(in_ECX + 0x18c) = iVar2;
    if (iVar2 == 0) {
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glCombinerParameteriNV");
      FUN_1007d400(&DAT_101417f8);
    }
    uVar3 = (uint)(iVar2 != 0);
    iVar2 = (*DAT_101be758)("glCombinerParameterfvNV");
    *(int *)(in_ECX + 400) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glCombinerParameterfvNV");
      FUN_1007d400(&DAT_101417f8);
    }
    iVar2 = (*DAT_101be758)("glCombinerInputNV");
    *(int *)(in_ECX + 0x194) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glCombinerInputNV");
      FUN_1007d400(&DAT_101417f8);
    }
    iVar2 = (*DAT_101be758)("glCombinerOutputNV");
    *(int *)(in_ECX + 0x198) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glCombinerOutputNV");
      FUN_1007d400(&DAT_101417f8);
    }
    iVar2 = (*DAT_101be758)("glFinalCombinerInputNV");
    *(int *)(in_ECX + 0x19c) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
      FUN_1007d400("Error loading extension opengl function ");
      FUN_1007d400("glFinalCombinerInputNV");
      FUN_1007d400(&DAT_101417f8);
    }
    *(uint *)(in_ECX + 0x184) = uVar3;
    return uVar3;
  }
  return *(uint *)(in_ECX + 0x184);
}

