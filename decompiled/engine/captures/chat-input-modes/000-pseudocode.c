
void FUN_01d4a5c2(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01d0fd1e();
  if (iVar1 == 0) {
    DAT_023ca258 = 1;
    iVar1 = FUN_01d44cee();
    if (iVar1 == 2) {
      uVar2 = FUN_01d44cfe(1,0x1f);
      FUN_01d4666a(&DAT_01ebf2c0,uVar2);
      DAT_01ebf2df = 0;
    }
    else {
      FUN_01d46622(&DAT_01ebf2c0,&DAT_01eb16dc);
    }
  }
  return;
}

