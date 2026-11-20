
undefined4 KB_Find(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_10543540;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = __stricmp(param_1,(char *)(puVar1 + 2));
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[1];
}

