
int FUN_1000c900(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_10006e40(param_1,0xffffffff,param_2,0,&stack0x0000000c);
  iVar2 = ___stdio_common_vsprintf(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}

