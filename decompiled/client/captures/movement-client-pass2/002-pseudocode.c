
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10078070(undefined8 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined8 *)(in_ECX + 0x3100) = *param_1;
  *(undefined4 *)(in_ECX + 0x3108) = *(undefined4 *)(param_1 + 1);
  *(undefined8 *)(in_ECX + 0x310c) = *(undefined8 *)((int)param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x3114) = *(undefined4 *)((int)param_1 + 0x14);
  uVar1 = FUN_10078670(0);
  *(undefined4 *)(in_ECX + 0x3118) = uVar1;
  _DAT_10543338 = *(undefined4 *)((int)param_1 + 0x1c);
  FUN_10073610();
  *(float *)((int)param_1 + 0x1c) = *(float *)(in_ECX + 0x3124) * *(float *)(DAT_105433b0 + 0xc);
  DAT_1055958c = (float)*(int *)(in_ECX + 0x18);
  FUN_100788f0(*(undefined4 *)(in_ECX + 0x3118));
  return 1;
}

