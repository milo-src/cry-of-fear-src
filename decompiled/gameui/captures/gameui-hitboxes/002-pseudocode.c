
void __thiscall FUN_1005b0b0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  iVar1 = (**(code **)(*(int *)this + 0x24c))();
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*(int *)this + 0x50))();
    piVar3 = (int *)FUN_10058c84();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x1c))(uVar2);
    if (piVar3 != (int *)0x0) {
      uVar2 = (**(code **)(*(int *)this + 0x54))();
      uVar2 = (**(code **)(*piVar3 + 0xc))(s_Default_100e96b8,uVar2);
      (**(code **)(*(int *)this + 0x248))(uVar2);
    }
  }
  (**(code **)(*(int *)this + 0x288))(&local_8,&local_14,&local_c,&local_18);
  *param_1 = (local_c - local_8) + *(int *)((int)this + 0x90);
  (**(code **)(**(int **)((int)this + 0x78) + 0xc))(&local_1c,local_10);
  *param_1 = *param_1 - local_1c;
  (**(code **)(**(int **)((int)this + 0x78) + 8))(&local_1c,local_10);
  *param_1 = *param_1 + local_1c;
  local_20 = 0;
  while( true ) {
    iVar1 = FUN_1005d320((int)this + 0x7c);
    if (iVar1 <= local_20) break;
    iVar1 = FUN_1005d2e0((void *)((int)this + 0x7c),local_20);
    *param_1 = *param_1 + (int)*(short *)(iVar1 + 4);
    local_20 = local_20 + 1;
  }
  *param_2 = (local_18 - local_14) + *(int *)((int)this + 0x94);
  return;
}

