
void __thiscall FUN_1005e0ab(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2);
  piVar2 = (int *)FUN_10058cac();
  (**(code **)(*piVar2 + 8))(uVar1);
  return;
}

