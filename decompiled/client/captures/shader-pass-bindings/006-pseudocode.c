
void FUN_100621f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_50;
  int local_4c;
  undefined4 local_48;
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  (*DAT_101be7ac)(param_1,param_2,param_3,param_4);
  (*DAT_101be6b8)(0x864b,&local_4c);
  (*DAT_101be7b0)(0x8804,0x88b6,&local_50);
  if ((local_4c == -1) && (local_50 == 1)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_1007d400("Failed to load fragment program. errorPos %d, isNative %d\n",local_4c,local_50);
  puVar2 = (undefined4 *)(param_4 + local_4c);
  puVar3 = &local_48;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
                    /* WARNING: Subroutine does not return */
  ___report_rangecheckfailure();
}

