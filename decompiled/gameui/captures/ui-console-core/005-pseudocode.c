
void __fastcall FUN_1004a930(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  undefined4 *local_14;
  
  piVar1 = (int *)FUN_10058c7a();
  iVar2 = (**(code **)(*piVar1 + 0x10))();
  if (iVar2 != param_1[0x4d]) {
    this = (void *)FUN_100743aa(0x18);
    if (this == (void *)0x0) {
      local_14 = (undefined4 *)0x0;
    }
    else {
      local_14 = FUN_10072470(this,s_CloseCompletionList_100e6d2c);
    }
    uVar3 = (**(code **)(*param_1 + 0x88))(local_14,0);
    (**(code **)(*param_1 + 0x7c))(uVar3);
  }
  return;
}

