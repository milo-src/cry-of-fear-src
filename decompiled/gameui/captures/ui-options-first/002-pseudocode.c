
undefined4 * __thiscall FUN_100503b0(void *this,undefined4 *param_1)

{
  bool bVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  float10 fVar5;
  uint local_40;
  undefined4 *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  
  FUN_1008bf30(this,param_1,(uint *)0x0,1);
  FUN_10050810((int)this + 0xb4);
  FUN_10050900((int)this + 0xb5);
  *(undefined ***)this = &PTR_FUN_100ce878;
  pvVar2 = operator_new(300);
  if (pvVar2 == (void *)0x0) {
    local_28 = (int *)0x0;
  }
  else {
    local_28 = FUN_10045ae0(pvVar2,this,(uint *)&DAT_100e814c,s__GameUI_EnableEAX_100e8138,
                            (uint *)s_s_eax_100e8130);
  }
  *(int **)((int)this + 0xb8) = local_28;
  pvVar2 = operator_new(300);
  if (pvVar2 == (void *)0x0) {
    local_2c = (int *)0x0;
  }
  else {
    local_2c = FUN_10045ae0(pvVar2,this,(uint *)&DAT_100e816c,s__GameUI_EnableA3D_100e8158,
                            (uint *)s_s_a3d_100e8150);
  }
  *(int **)((int)this + 0xbc) = local_2c;
  pvVar2 = operator_new(0x108);
  if (pvVar2 == (void *)0x0) {
    local_30 = (int *)0x0;
  }
  else {
    local_30 = FUN_10044ef0(pvVar2,this,(uint *)s_SFX_Slider_100e8194);
  }
  *(int **)((int)this + 0xc0) = local_30;
  pvVar2 = operator_new(0x108);
  if (pvVar2 == (void *)0x0) {
    local_34 = (int *)0x0;
  }
  else {
    local_34 = FUN_10044ef0(pvVar2,this,(uint *)s_Suit_Slider_100e81c4);
  }
  *(int **)((int)this + 0xc4) = local_34;
  pvVar2 = operator_new(0x108);
  if (pvVar2 == (void *)0x0) {
    local_38 = (int *)0x0;
  }
  else {
    local_38 = FUN_10044ef0(pvVar2,this,(uint *)s_MP3_Volume_100e81f0);
  }
  *(int **)((int)this + 200) = local_38;
  pvVar2 = operator_new(0x170);
  if (pvVar2 == (void *)0x0) {
    local_3c = (undefined4 *)0x0;
  }
  else {
    local_3c = FUN_100462a0(pvVar2,this,(uint *)s_Sound_Quality_100e81fc);
  }
  *(undefined4 **)((int)this + 0xcc) = local_3c;
  (**(code **)(**(int **)((int)this + 0xcc) + 0x374))(s__GameUI_High_100e8218,s_hisound_1_100e820c);
  (**(code **)(**(int **)((int)this + 0xcc) + 0x374))(s__GameUI_Low_100e8234,s_hisound_0_100e8228);
  fVar5 = (float10)(**(code **)(DAT_100f9e8c + 0x3c))(s_hisound_100e8240);
  local_40 = (uint)(fVar5 == (float10)0.0);
  FUN_1004647e(*(void **)((int)this + 0xcc),local_40);
  FUN_1006cb58(this,s_Resource_OptionsSubAudio_res_100e8248,0);
  puVar3 = (undefined4 *)FUN_10036350();
  bVar1 = FUN_1003645f(puVar3);
  if (bVar1) {
    piVar4 = (int *)FUN_1005ed82(this,(byte *)s_suit_label_100e8268,0);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x74))(0);
    }
    piVar4 = (int *)FUN_1005ed82(this,(byte *)s_Suit_Slider_100e8274,0);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x74))(0);
    }
  }
  return this;
}

