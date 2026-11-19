
void FUN_100a0b50(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x11c))(0);
  *(uint *)(in_ECX[1] + 0x1a4) = *(uint *)(in_ECX[1] + 0x1a4) & 0xfffffffd;
  if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
    in_ECX[0x1e] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*in_ECX + 8))(0);
  }
  return;
}

