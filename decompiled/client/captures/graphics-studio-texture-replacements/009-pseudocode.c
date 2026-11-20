
void FUN_10064ac0(int param_1,int param_2)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  
  if (DAT_104d26f0 == 0) {
    _Dst = (void *)FUN_100b42b2(0x30000);
    _memset(_Dst,0,0x30000);
    (*DAT_101be6b8)(0x8069,&DAT_104d26f0);
    (*DAT_101be64c)(0xde1,DAT_1018fe8c);
    (*DAT_101be738)(0xde1,0x2801,0x2601);
    (*DAT_101be738)(0xde1,0x2800,0x2601);
    (*DAT_101be734)(0xde1,0,3,0x100,0x100,0,0x1907,0x1401,_Dst);
    (*DAT_101be64c)(0xde1,DAT_104d26f0);
    thunk_FUN_100f7be4(_Dst);
    DAT_104d26f0 = DAT_1018fe8c;
    DAT_1018fe8c = DAT_1018fe8c + 1;
  }
  (*DAT_101be6b8)(0x8069,&DAT_104d26ec);
  (*DAT_101be64c)(0xde1,DAT_104d26f0);
  iVar1 = DAT_1018f430 / 2;
  if (param_1 != 0) {
    iVar1 = iVar1 - param_1 / 2;
  }
  iVar2 = DAT_1018f434 / 2;
  if (param_2 != 0) {
    iVar2 = iVar2 - param_2 / 2;
  }
  (*DAT_101be670)(0xde1,0,0x1907,iVar1,iVar2,param_1,param_2,0);
  DAT_104d26e6 = 1;
  return;
}

