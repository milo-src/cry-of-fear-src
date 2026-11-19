
undefined4 * __thiscall FUN_10057a70(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int *local_50;
  undefined4 *local_4c;
  int *local_48;
  int *local_44;
  undefined4 *local_40;
  int *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  
  FUN_1008bf30(this,param_1,(uint *)0x0,1);
  FUN_10058770((int)this + 0xb4);
  FUN_10058860((int)this + 0xb5);
  FUN_10058970((int)this + 0xb6);
  FUN_10058a00((int)this + 0xb7);
  FUN_10058a90((int)this + 0xb8);
  *(undefined ***)this = &PTR_FUN_100cf7d0;
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(DAT_100f9e8c + 0x15c);
  pvVar1 = operator_new(0x88);
  if (pvVar1 == (void *)0x0) {
    local_30 = (undefined4 *)0x0;
  }
  else {
    local_30 = FUN_100a18d0(pvVar1,this,(uint *)s_MicMeter_100e91c8);
  }
  *(undefined4 **)((int)this + 0xc4) = local_30;
  pvVar1 = operator_new(0x88);
  if (pvVar1 == (void *)0x0) {
    local_34 = (undefined4 *)0x0;
  }
  else {
    local_34 = FUN_100a18d0(pvVar1,this,(uint *)s_MicMeter2_100e91d4);
  }
  *(undefined4 **)((int)this + 200) = local_34;
  pvVar1 = operator_new(0xbc);
  if (pvVar1 == (void *)0x0) {
    local_38 = (undefined4 *)0x0;
  }
  else {
    local_38 = FUN_1005ad10(pvVar1,this,(uint *)s_ReceiveLabel_100e91fc,
                            s__GameUI_VoiceReceiveVolume_100e91e0);
  }
  *(undefined4 **)((int)this + 0xd8) = local_38;
  pvVar1 = operator_new(0x108);
  if (pvVar1 == (void *)0x0) {
    local_3c = (int *)0x0;
  }
  else {
    local_3c = FUN_10044ef0(pvVar1,this,(uint *)s_VoiceReceive_100e9230);
  }
  *(int **)((int)this + 0xdc) = local_3c;
  pvVar1 = operator_new(0xbc);
  if (pvVar1 == (void *)0x0) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    local_40 = FUN_1005ad10(pvVar1,this,(uint *)s_MicrophoneLabel_100e925c,
                            s__GameUI_VoiceTransmitVolume_100e9240);
  }
  *(undefined4 **)((int)this + 0xd0) = local_40;
  pvVar1 = operator_new(0xb4);
  if (pvVar1 == (void *)0x0) {
    local_44 = (int *)0x0;
  }
  else {
    local_44 = FUN_1008dcc0(pvVar1,this,(uint *)s__GameUI_MicrophoneVolume_100e926c);
  }
  *(int **)((int)this + 0xd4) = local_44;
  (**(code **)(**(int **)((int)this + 0xd4) + 0x220))(0,100);
  (**(code **)(**(int **)((int)this + 0xd4) + 0xa4))(this);
  pvVar1 = operator_new(300);
  if (pvVar1 == (void *)0x0) {
    local_48 = (int *)0x0;
  }
  else {
    local_48 = FUN_10045ae0(pvVar1,this,(uint *)s_voice_modenable_100e92ac,
                            s__GameUI_EnableVoice_100e9298,(uint *)s_voice_modenable_100e9288);
  }
  *(int **)((int)this + 0xe0) = local_48;
  pvVar1 = operator_new(0x120);
  if (pvVar1 == (void *)0x0) {
    local_4c = (undefined4 *)0x0;
  }
  else {
    local_4c = FUN_1008d110(pvVar1,this,(uint *)s_MicBoost_100e92d4,
                            s__GameUI_BoostMicrophone_100e92bc);
  }
  *(undefined4 **)((int)this + 0xc0) = local_4c;
  (**(code **)(**(int **)((int)this + 0xc0) + 0xa4))(this);
  pvVar1 = operator_new(0x108);
  if (pvVar1 == (void *)0x0) {
    local_50 = (int *)0x0;
  }
  else {
    local_50 = FUN_10058f65(pvVar1,this,(uint *)s_TestMicrophone_100e92f8,
                            s__GameUI_TestMicrophone_100e92e0);
  }
  *(int **)((int)this + 0xcc) = local_50;
  FUN_1006cb58(this,s_Resource_OptionsSubVoice_res_100e9308,0);
  *(undefined1 *)((int)this + 0xf4) = 0;
  (**(code **)(**(int **)((int)this + 200) + 0x74))(0);
  if (*(int *)((int)this + 0xbc) == 0) {
    (**(code **)(**(int **)((int)this + 0xdc) + 0xbc))(0);
    (**(code **)(**(int **)((int)this + 0xd4) + 0xbc))(0);
    (**(code **)(**(int **)((int)this + 0xe0) + 0xbc))(0);
    (**(code **)(**(int **)((int)this + 0xc0) + 0xbc))(0);
    (**(code **)(**(int **)((int)this + 0xcc) + 0xbc))(0);
  }
  else {
    FUN_10057ec2((int)this);
  }
  return this;
}

