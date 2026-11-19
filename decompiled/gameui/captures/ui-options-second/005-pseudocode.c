
void __thiscall FUN_1004fc8a(void *this,char *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  char *pcVar5;
  short *local_808;
  short local_804 [1024];
  
  FUN_100688c5(this,param_1,param_2);
  if (DAT_100f9e94 != (void *)0x0) {
    pcVar5 = param_1;
    piVar1 = (int *)FUN_10058cc0();
    local_808 = (short *)(**(code **)(*piVar1 + 0xc))(pcVar5);
    if (local_808 == (short *)0x0) {
      uVar4 = 0x800;
      psVar3 = local_804;
      piVar1 = (int *)FUN_10058cc0();
      (**(code **)(*piVar1 + 0x10))(param_1,psVar3,uVar4);
      local_808 = local_804;
    }
    iVar2 = (*(code *)**(undefined4 **)this)();
    FUN_1003d9b8(DAT_100f9e94,iVar2,local_808);
  }
  return;
}

