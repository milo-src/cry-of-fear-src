
void FUN_100a8e80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (in_ECX[0x41] != 0) {
    FUN_1001f160(local_10,"%i7%i9",in_ECX[0x42] + 1,in_ECX[0x43] + 1);
    iVar2 = _atoi(local_10);
    iVar3 = FUN_10118460(0,"player");
    if (iVar3 != 0) {
      iVar3 = FUN_100125e0(*(undefined4 *)(iVar3 + 4));
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x2040) = iVar2;
      }
    }
  }
  iVar2 = FUN_100183a0(param_3,~*(uint *)(in_ECX[1] + 0x1a4) & 1);
  if (iVar2 != 0) {
    uVar1 = *(uint *)(in_ECX[1] + 0x1a4);
    uVar4 = uVar1 & 0xfffffffe;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar1 | 1;
    }
    *(uint *)(in_ECX[1] + 0x1a4) = uVar4;
    FUN_1009bed0();
    (**(code **)(*in_ECX + 8))(0x3dcccccd);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

