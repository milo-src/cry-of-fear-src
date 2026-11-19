
void FUN_1009e590(void)

{
  uint *puVar1;
  int iVar2;
  int in_ECX;
  
  puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x118);
  *puVar1 = *puVar1 | 0x80;
  iVar2 = *(int *)(in_ECX + 4);
  if (*(int *)(iVar2 + 0x1d0) == 0) {
    *(uint *)(iVar2 + 0x1a4) = *(uint *)(iVar2 + 0x1a4) | 1;
    iVar2 = *(int *)(in_ECX + 4);
  }
  if ((*(byte *)(iVar2 + 0x1a4) & 1) != 0) {
    *(code **)(in_ECX + 0x78) = CEnvFog::TurnOn;
    FUN_100c4850();
  }
  if (*(int *)(in_ECX + 0xdc) == 0) {
    *(undefined4 *)(in_ECX + 0xdc) = 1;
  }
  if (*(int *)(in_ECX + 0xe0) == 0) {
    *(undefined4 *)(in_ECX + 0xe0) = 1;
  }
  return;
}

