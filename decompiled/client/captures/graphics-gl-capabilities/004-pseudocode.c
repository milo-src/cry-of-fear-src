
undefined4 FUN_10055100(void)

{
  char cVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1d4) = 0;
  cVar1 = FUN_10053bf0("GL_ARB_texture_cube_map");
  if (cVar1 != '\0') {
    *(undefined4 *)(in_ECX + 0x1d4) = 1;
    return 1;
  }
  return *(undefined4 *)(in_ECX + 0x1d4);
}

