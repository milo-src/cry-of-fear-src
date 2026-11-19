
void __thiscall FUN_10049ee7(void *this,int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char local_8;
  
  FUN_10069d66(this,param_1);
  piVar2 = (int *)FUN_10058c7a();
  iVar3 = (**(code **)(*piVar2 + 0x10))();
  iVar4 = (**(code **)**(undefined4 **)((int)this + 0x11c))();
  if (iVar3 != iVar4) {
    return;
  }
  if (param_1 != 0x43) {
    if (param_1 == 0x5a) {
      FUN_10049787(this,'\0');
      (**(code **)(**(int **)((int)this + 0x11c) + 0x30))(0);
      return;
    }
    if (param_1 != 0x58) {
      return;
    }
    FUN_10049787(this,'\x01');
    (**(code **)(**(int **)((int)this + 0x11c) + 0x30))(0);
    return;
  }
  local_8 = '\0';
  uVar5 = 0x4f;
  piVar2 = (int *)FUN_10058c7a();
  cVar1 = (**(code **)(*piVar2 + 0x3c))(uVar5);
  if (cVar1 == '\0') {
    uVar5 = 0x50;
    piVar2 = (int *)FUN_10058c7a();
    cVar1 = (**(code **)(*piVar2 + 0x3c))(uVar5);
    if (cVar1 == '\0') goto LAB_10049f7a;
  }
  local_8 = '\x01';
LAB_10049f7a:
  FUN_10049787(this,local_8);
  (**(code **)(**(int **)((int)this + 0x11c) + 0x30))(0);
  return;
}

