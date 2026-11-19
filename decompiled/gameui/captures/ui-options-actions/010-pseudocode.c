
void __fastcall FUN_1004529b(int *param_1)

{
  char cVar1;
  int iVar2;
  void *this;
  undefined4 *local_10;
  
  cVar1 = FUN_10045264(param_1);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x21c))();
    if (param_1[0x30] != iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x21c))();
      param_1[0x30] = iVar2;
      param_1[0x31] = (int)((float)param_1[0x30] / 100.0);
    }
    this = (void *)FUN_100743aa(0x18);
    if (this == (void *)0x0) {
      local_10 = (undefined4 *)0x0;
    }
    else {
      local_10 = FUN_10072470(this,s_ControlModified_100e64a4);
    }
    (**(code **)(*param_1 + 0xac))(local_10);
  }
  return;
}

