
void FUN_10043ea0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int in_ECX;
  
  if ((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x1404) != 0)) {
    FUN_10044a30();
  }
  (**(code **)(**(int **)(in_ECX + 0x138) + 0x1fc))(0);
  DAT_1018d024 = 0;
  pcVar4 = (char *)FUN_1006ee90("inventory_picture",&DAT_1018d024);
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if (2 < (uint)((int)pcVar4 - (int)pcVar1)) {
    iVar3 = **(int **)(in_ECX + 0x138);
    uVar5 = FUN_1006ee90("inventory_picture",&DAT_1018d024);
    uVar5 = FUN_10008640(uVar5);
    (**(code **)(iVar3 + 0x1fc))(uVar5);
  }
  (**(code **)(**(int **)(in_ECX + 0x13c) + 0x1fc))(0);
  DAT_1018d0a4 = 0;
  pcVar4 = (char *)FUN_1006ee90("inventory_picture",&DAT_1018d0a4);
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if (2 < (uint)((int)pcVar4 - (int)pcVar1)) {
    iVar3 = **(int **)(in_ECX + 0x13c);
    uVar5 = FUN_1006ee90("inventory_picture",&DAT_1018d0a4);
    uVar5 = FUN_10008640(uVar5);
    (**(code **)(iVar3 + 0x1fc))(uVar5);
  }
  (**(code **)(**(int **)(in_ECX + 0x144) + 0x1fc))(0);
  DAT_1018d124 = 0;
  pcVar4 = (char *)FUN_1006ee90("inventory_picture",&DAT_1018d124);
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if (2 < (uint)((int)pcVar4 - (int)pcVar1)) {
    iVar3 = **(int **)(in_ECX + 0x144);
    uVar5 = FUN_1006ee90("inventory_picture",&DAT_1018d124);
    uVar5 = FUN_10008640(uVar5);
    (**(code **)(iVar3 + 0x1fc))(uVar5);
  }
  return;
}

