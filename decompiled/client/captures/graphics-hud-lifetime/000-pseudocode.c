
void FUN_1007a750(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_10543540;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_100f7be4(puVar2);
    puVar2 = puVar1;
  }
  DAT_10543540 = (undefined4 *)0x0;
  return;
}

