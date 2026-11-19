
undefined4 * __thiscall FUN_10056a40(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *local_4c;
  undefined4 *local_38;
  undefined4 *local_34;
  int *local_30;
  int *local_2c;
  
  FUN_1008bf30(this,param_1,(uint *)0x0,1);
  FUN_100576c0((int)this + 0xb4);
  FUN_100577b0((int)this + 0x1d8);
  FUN_100578c0((int)this + 0x1d9);
  FUN_10057950((int)this + 0x1da);
  *(undefined ***)this = &PTR_FUN_100cf524;
  _memset((void *)((int)this + 0xb8),0,0x90);
  _memset((void *)((int)this + 0x148),0,0x90);
  pvVar1 = operator_new(0x108);
  if (pvVar1 == (void *)0x0) {
    local_2c = (int *)0x0;
  }
  else {
    local_2c = FUN_10044ef0(pvVar1,this,(uint *)s_Brightness_100e903c);
  }
  *(int **)((int)this + 0x1f0) = local_2c;
  pvVar1 = operator_new(0x108);
  if (pvVar1 == (void *)0x0) {
    local_30 = (int *)0x0;
  }
  else {
    local_30 = FUN_10044ef0(pvVar1,this,(uint *)s_Gamma_100e9064);
  }
  *(int **)((int)this + 500) = local_30;
  FUN_100571f6((int)this);
  pvVar1 = operator_new(0x150);
  if (pvVar1 == (void *)0x0) {
    local_34 = (undefined4 *)0x0;
  }
  else {
    local_34 = FUN_1007b234(pvVar1,this,(uint *)s_Resolution_100e906c,6,0);
  }
  *(undefined4 **)((int)this + 0x1dc) = local_34;
  pvVar1 = operator_new(0x150);
  if (pvVar1 == (void *)0x0) {
    local_38 = (undefined4 *)0x0;
  }
  else {
    local_38 = FUN_1007b234(pvVar1,this,(uint *)s_AspectRatio_100e9078,2,0);
  }
  *(undefined4 **)((int)this + 0x1ec) = local_38;
  pcVar7 = s__GameUI_AspectNormal_100e9084;
  piVar2 = (int *)FUN_10058cc0();
  uVar3 = (**(code **)(*piVar2 + 0xc))(pcVar7);
  uVar6 = 0x20;
  iVar4 = (int)this + 600;
  piVar2 = (int *)FUN_10058cc0();
  (**(code **)(*piVar2 + 0x14))(uVar3,iVar4,uVar6);
  pcVar7 = s__GameUI_AspectWide_100e909c;
  piVar2 = (int *)FUN_10058cc0();
  uVar3 = (**(code **)(*piVar2 + 0xc))(pcVar7);
  uVar6 = 0x20;
  iVar4 = (int)this + 0x278;
  piVar2 = (int *)FUN_10058cc0();
  (**(code **)(*piVar2 + 0x14))(uVar3,iVar4,uVar6);
  uVar3 = (**(code **)(**(int **)((int)this + 0x1ec) + 0x310))((int)this + 600,0);
  uVar6 = (**(code **)(**(int **)((int)this + 0x1ec) + 0x310))((int)this + 0x278,0);
  uVar5 = FUN_100579f0(*(int *)((int)this + 0x148),*(int *)((int)this + 0x14c));
  *(char *)((int)this + 0x2a0) = (char)uVar5;
  if (*(char *)((int)this + 0x2a0) == '\0') {
    (**(code **)(**(int **)((int)this + 0x1ec) + 0x33c))(uVar3);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x1ec) + 0x33c))(uVar6);
  }
  pvVar1 = operator_new(0x150);
  if (pvVar1 == (void *)0x0) {
    local_4c = (undefined4 *)0x0;
  }
  else {
    local_4c = FUN_1007b234(pvVar1,this,(uint *)s_Windowed_100e90b0,2,0);
  }
  *(undefined4 **)((int)this + 0x1e8) = local_4c;
  (**(code **)(**(int **)((int)this + 0x1e8) + 0x310))(s__UI_RunWindowed_100e90bc,0);
  (**(code **)(**(int **)((int)this + 0x1e8) + 0x310))(s__UI_RunFull_100e90cc,0);
  FUN_1005703c((int)this);
  FUN_1006cb58(this,s_Resource_OptionsSubVideo_res_100e90d8,0);
  FUN_10056de8((int)this);
  return this;
}

