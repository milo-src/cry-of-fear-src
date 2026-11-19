
void __fastcall FUN_100571f6(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  (**(code **)(*DAT_100f9e78 + 0x18))(param_1 + 0xb8,param_1 + 0xbc,param_1 + 0xc0);
  (**(code **)(*DAT_100f9e78 + 0x1c))(param_1 + 200,0x80,param_1 + 0xc4);
  FUN_100c0338((uint *)(param_1 + 200));
  puVar2 = (undefined4 *)(param_1 + 0xb8);
  puVar3 = (undefined4 *)(param_1 + 0x148);
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

