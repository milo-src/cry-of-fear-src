
void FUN_10053b40(void)

{
  uint uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10134830;
  local_10 = ExceptionList;
  uVar1 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(HMODULE *)(in_ECX + 0x210) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(in_ECX + 0x210));
  }
  FUN_1007d4d0("GL manager: shutdown\n",uVar1);
  *(undefined4 *)(in_ECX + 0x210) = 0;
  ExceptionList = local_10;
  return;
}

