
void FUN_10088140(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_58;
  void *local_54;
  undefined4 local_44;
  uint local_40;
  void *local_3c;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10134b7d;
  local_10 = ExceptionList;
  local_14 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = FUN_100b42b2(param_2 * param_1 * 4,local_14);
  *param_3 = *(undefined4 *)(in_ECX + 4);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
  glBindTexture(param_4,*param_3);
  glTexParameteri(param_4,0x2802,0x2901);
  glTexParameteri(param_4,0x2803,0x2901);
  glTexParameteri(param_4,0x2801,0x2601);
  glTexParameteri(param_4,0x2800,0x2601);
  glCopyTexImage2D(param_4,0,param_5,0,0,param_1,param_2,0);
  local_40 = 0xf;
  local_2c = 0;
  local_28 = 0xf;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  local_8 = 0;
  local_58 = 2;
  local_44 = 1;
  local_54._0_2_ = (ushort)*(byte *)(in_ECX + 4);
  local_1c = 0;
  local_18 = 0x1908;
  local_24 = *param_3;
  FUN_1008a330(&local_58);
  thunk_FUN_100f7be4(uVar1);
  if (0xf < local_28) {
    std::_Deallocate<8,0>(local_3c,local_28 + 1);
  }
  if (0xf < local_40) {
    std::_Deallocate<8,0>(local_54,local_40 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

