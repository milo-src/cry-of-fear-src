
undefined4 FUN_10055440(void)

{
  char cVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1fc) = 0;
  *(undefined4 *)(in_ECX + 0x1f8) = 0;
  cVar1 = FUN_10053bf0("GL_NV_texture_rectangle");
  if (cVar1 == '\0') {
    cVar1 = FUN_10053bf0("GL_ARB_texture_rectangle");
    if (cVar1 == '\0') {
      cVar1 = FUN_10053bf0("GL_EXT_texture_rectangle");
      if (cVar1 == '\0') {
        return *(undefined4 *)(in_ECX + 0x1f8);
      }
    }
  }
  (**(code **)(in_ECX + 0xc0))(0x84f8,(undefined4 *)(in_ECX + 0x1fc));
  *(undefined4 *)(in_ECX + 0x1f8) = 1;
  return 1;
}

