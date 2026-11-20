
undefined4 FUN_10054de0(void)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_10053bf0("ARB_texture_env_combine");
  if (cVar1 != '\0') {
    cVar1 = FUN_10053bf0("ARB_texture_env_dot3");
    if (cVar1 != '\0') {
      *(undefined4 *)(in_ECX + 0x180) = 1;
      return 1;
    }
  }
  *(undefined4 *)(in_ECX + 0x180) = 0;
  return 0;
}

