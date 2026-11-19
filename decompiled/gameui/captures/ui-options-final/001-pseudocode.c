
void __fastcall FUN_1004d126(int *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  FUN_1004ca0a(param_1);
  if (*param_1 != 0) {
    FUN_1003af5f(*param_1);
    uVar5 = 0;
    puVar4 = &DAT_100e72c0;
    pcVar3 = s_user_scr_100e72c4;
    piVar1 = (int *)FUN_10058cb6();
    iVar2 = (**(code **)(*piVar1 + 0x28))(pcVar3,puVar4,uVar5);
    if (iVar2 != 0) {
      FUN_1003af91((void *)*param_1,iVar2);
      piVar1 = (int *)FUN_10058cb6();
      (**(code **)(*piVar1 + 0x2c))(iVar2);
    }
  }
  return;
}

