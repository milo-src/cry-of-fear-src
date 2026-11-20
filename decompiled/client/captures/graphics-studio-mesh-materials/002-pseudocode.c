
void FUN_10068770(int param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 0x44);
  if (*(int *)(iVar2 + 0xcc) < param_1) {
    (*DAT_101b26a8)("SetupModel: no such bodypart %d\n",param_1);
    iVar2 = *(int *)(in_ECX + 0x44);
    param_1 = 0;
  }
  iVar1 = *(int *)(iVar2 + 0xd0) + param_1 * 0x4c + iVar2;
  *(int *)(in_ECX + 0x48) = iVar1;
  *(int *)(in_ECX + 0x4c) =
       ((*(int *)(*(int *)(in_ECX + 0x30) + 0x314) / *(int *)(iVar1 + 0x44)) %
       *(int *)(iVar1 + 0x40)) * 0x70 + *(int *)(iVar1 + 0x48) + iVar2;
  return;
}

