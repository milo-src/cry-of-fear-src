
void __fastcall FUN_10096579(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined1 local_8 [4];
  
  (**(code **)(*param_1 + 0x18))(&local_c,&local_14,local_8,local_10);
  local_18 = FUN_10098ba0((int)(param_1 + 0x23));
  while( true ) {
    iVar1 = FUN_10098a20();
    if (local_18 == iVar1) break;
    puVar2 = (undefined4 *)FUN_10098a80(param_1 + 0x23,local_18);
    if ((void *)*puVar2 != (void *)0x0) {
      FUN_1005e115((void *)*puVar2,(param_1[0x32] - local_c) - local_14,param_1[0x1e]);
    }
    local_18 = FUN_10098bc0(param_1 + 0x23,local_18);
  }
  return;
}

