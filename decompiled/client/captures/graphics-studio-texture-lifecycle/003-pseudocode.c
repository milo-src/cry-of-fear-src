
void FUN_1005a570(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 0;
  if (DAT_101cc094 != -1 && -1 < DAT_101cc094 + 1) {
    puVar2 = &DAT_101cc098;
    do {
      (*DAT_101be64c)(0xde1,iVar1 + param_1);
      (*DAT_101be73c)(0xde1,0x2801,0x46180000);
      (*DAT_101be73c)(0xde1,0x2800,0x46180400);
      (*DAT_101be734)(0xde1,0,3,0x80,0x80,0,0x1907,0x1401,puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0xc000;
    } while (iVar1 < DAT_101cc094 + 1);
  }
  return;
}

