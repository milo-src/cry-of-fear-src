
void FUN_1009e3b0(void)

{
  int iVar1;
  int *in_ECX;
  
  *(undefined4 *)(in_ECX[1] + 0x10c) = 0;
  *(undefined4 *)(in_ECX[1] + 0x108) = 0;
  *(undefined4 *)(in_ECX[1] + 0x160) = 0x47;
  (**(code **)(*in_ECX + 0x30))();
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),"sprites/null.spr");
  FUN_1011a030(in_ECX[1],&DAT_10222f34,&DAT_10222f34);
  iVar1 = in_ECX[1];
  if ((*(byte *)(iVar1 + 0x1a4) & 1) != 0) {
    *(uint *)(iVar1 + 0x118) = *(uint *)(iVar1 + 0x118) | 0x80;
    iVar1 = in_ECX[1];
  }
  *(float *)(iVar1 + 0x150) = *(float *)(iVar1 + 0x150) * 0.125;
  return;
}

