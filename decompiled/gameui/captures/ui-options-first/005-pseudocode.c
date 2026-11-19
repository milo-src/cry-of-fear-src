
int * __thiscall FUN_10053f2d(void *this,undefined4 *param_1)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  char *pcVar7;
  undefined4 *local_1bc;
  int *local_1b8;
  undefined4 *local_1b4;
  undefined4 *local_1b0;
  CSliderCtrl *local_1ac;
  CSliderCtrl *local_1a8;
  undefined4 *local_1a4;
  undefined4 *local_1a0;
  undefined4 *local_19c;
  int *local_198;
  int *local_194;
  int *local_190;
  int *local_18c;
  int *local_184;
  int *local_180;
  int *local_17c;
  int *local_178;
  undefined1 local_124 [256];
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  byte *local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  FUN_1008bf30(this,param_1,(uint *)s_OptionsSubMultiplayer_100e8998,1);
  FUN_10056660((int)this + 0xb4);
  FUN_10056750((int)this + 0xb5);
  FUN_10056860((int)this + 0xb6);
  FUN_100568f0((int)this + 0xb7);
  FUN_100569b0((undefined4 *)((int)this + 300));
  *(undefined ***)this = &PTR_FUN_100cf26c;
  pvVar2 = operator_new(0x108);
  if (pvVar2 == (void *)0x0) {
    local_178 = (int *)0x0;
  }
  else {
    local_178 = FUN_10058f65(pvVar2,this,(uint *)s_Cancel_100e89c0,s__GameUI_Cancel_100e89b0);
  }
  local_1c = local_178;
  (**(code **)(*local_178 + 0x310))(s_Close_100e89c8);
  pvVar2 = operator_new(0x108);
  if (pvVar2 == (void *)0x0) {
    local_17c = (int *)0x0;
  }
  else {
    local_17c = FUN_10058f65(pvVar2,this,(uint *)&DAT_100e89dc,s__GameUI_OK_100e89d0);
  }
  local_24 = local_17c;
  (**(code **)(*local_17c + 0x310))(&DAT_100e89e0);
  pvVar2 = operator_new(0x108);
  if (pvVar2 == (void *)0x0) {
    local_180 = (int *)0x0;
  }
  else {
    local_180 = FUN_10058f65(pvVar2,this,(uint *)s_Apply_100e89f4,s__GameUI_Apply_100e89e4);
  }
  local_c = local_180;
  (**(code **)(*local_180 + 0x310))(s_Apply_100e89fc);
  pvVar2 = operator_new(0x108);
  if (pvVar2 == (void *)0x0) {
    local_184 = (int *)0x0;
  }
  else {
    local_184 = FUN_10058f65(pvVar2,this,(uint *)s_Advanced_100e8a20,
                             s__GameUI_AdvancedEllipsis_100e8a04);
  }
  local_20 = local_184;
  (**(code **)(*local_184 + 0x310))(s_Advanced_100e8a2c);
  pvVar2 = operator_new(0xbc);
  if (pvVar2 != (void *)0x0) {
    FUN_1005ad10(pvVar2,this,(uint *)s_NameLabel_100e8a4c,s__GameUI_PlayerName_100e8a38);
  }
  pvVar2 = operator_new(0x17c);
  if (pvVar2 == (void *)0x0) {
    local_18c = (int *)0x0;
  }
  else {
    local_18c = FUN_10045590(pvVar2,this,(uint *)s_NameEntry_100e8a60,(uint *)&DAT_100e8a58);
  }
  *(int **)((int)this + 0x104) = local_18c;
  pvVar2 = operator_new(0x108);
  if (pvVar2 == (void *)0x0) {
    local_190 = (int *)0x0;
  }
  else {
    local_190 = FUN_10044ef0(pvVar2,this,(uint *)s_Primary_Color_Slider_100e8a90);
  }
  *(int **)((int)this + 0x108) = local_190;
  pvVar2 = operator_new(0x108);
  if (pvVar2 == (void *)0x0) {
    local_194 = (int *)0x0;
  }
  else {
    local_194 = FUN_10044ef0(pvVar2,this,(uint *)s_Secondary_Color_Slider_100e8acc);
  }
  *(int **)((int)this + 0x10c) = local_194;
  pvVar2 = operator_new(300);
  if (pvVar2 == (void *)0x0) {
    local_198 = (int *)0x0;
  }
  else {
    local_198 = FUN_10045ae0(pvVar2,this,(uint *)s_High_Quality_Models_100e8b04,
                             s__GameUI_HighModels_100e8af0,(uint *)s_cl_himodels_100e8ae4);
  }
  *(int **)((int)this + 0x110) = local_198;
  pvVar2 = operator_new(0x170);
  if (pvVar2 == (void *)0x0) {
    local_19c = (undefined4 *)0x0;
  }
  else {
    local_19c = FUN_100462a0(pvVar2,this,(uint *)s_Player_model_100e8b18);
  }
  *(undefined4 **)((int)this + 0xbc) = local_19c;
  FUN_10054d68(*(int **)((int)this + 0xbc));
  pvVar2 = operator_new(0x170);
  if (pvVar2 == (void *)0x0) {
    local_1a0 = (undefined4 *)0x0;
  }
  else {
    local_1a0 = FUN_100462a0(pvVar2,this,(uint *)s_SpraypaintList_100e8b28);
  }
  *(undefined4 **)((int)this + 0xc4) = local_1a0;
  *(undefined1 *)((int)this + 200) = 0;
  FUN_10054bc1(*(int **)((int)this + 0xc4));
  pvVar2 = operator_new(0x170);
  if (pvVar2 == (void *)0x0) {
    local_1a4 = (undefined4 *)0x0;
  }
  else {
    local_1a4 = FUN_100462a0(pvVar2,this,(uint *)s_SpraypaintColor_100e8b38);
  }
  *(undefined4 **)((int)this + 0x100) = local_1a4;
  local_14 = (byte *)(**(code **)(DAT_100f9e8c + 0x40))(s_cl_logocolor_100e8b48);
  local_10 = 9;
  local_8 = 0;
  for (local_18 = 0; local_18 < local_10; local_18 = local_18 + 1) {
    if ((local_14 != (byte *)0x0) &&
       (uVar3 = FUN_100b1620((void *)(local_18 * 0x10),local_14,
                             *(byte **)(local_18 * 0x10 + 0x100e87e8)), uVar3 == 0)) {
      local_8 = local_18;
    }
    FUN_100ad757(local_124,(byte *)s_cl_logocolor__s_100e8b58);
    (**(code **)(**(int **)((int)this + 0x100) + 0x374))
              ((&PTR_s__Valve_Orange_100e87e8)[local_18 * 4],local_124);
  }
  FUN_1004647e(*(void **)((int)this + 0x100),local_8);
  (**(code **)(**(int **)((int)this + 0x100) + 0xa4))(this);
  pvVar2 = operator_new(0xf8);
  if (pvVar2 == (void *)0x0) {
    local_1a8 = (CSliderCtrl *)0x0;
  }
  else {
    local_1a8 = FUN_10044510(pvVar2,this,(uint *)s_ModelImage_100e8b6c,(uint *)0x0);
  }
  *(CSliderCtrl **)((int)this + 0xb8) = local_1a8;
  (**(code **)(**(int **)((int)this + 0xb8) + 0xa4))(this);
  pvVar2 = operator_new(0xf8);
  if (pvVar2 == (void *)0x0) {
    local_1ac = (CSliderCtrl *)0x0;
  }
  else {
    local_1ac = FUN_10044510(pvVar2,this,(uint *)s_LogoImage_100e8b78,(uint *)0x0);
  }
  *(CSliderCtrl **)((int)this + 0xc0) = local_1ac;
  (**(code **)(**(int **)((int)this + 0xc0) + 0xa4))(this);
  *(undefined4 *)((int)this + 0x118) = 0x1e;
  *(undefined4 *)((int)this + 0x11c) = 6;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xf8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xfc) = 0xffffffff;
  pcVar7 = s_czero_100e8b84;
  pbVar4 = (byte *)(*DAT_100f9d74)();
  uVar3 = FUN_100b1620(this_00,pbVar4,(byte *)pcVar7);
  if (uVar3 != 0) {
    pcVar7 = s_terror_100e8b8c;
    pbVar4 = (byte *)(*DAT_100f9d74)();
    uVar3 = FUN_100b1620(this_01,pbVar4,(byte *)pcVar7);
    if (uVar3 != 0) {
      pcVar7 = s_cstrike_100e8b94;
      pbVar4 = (byte *)(*DAT_100f9d74)();
      uVar3 = FUN_100b1620(this_02,pbVar4,(byte *)pcVar7);
      if (uVar3 != 0) {
        pcVar7 = s_cstrike_beta_100e8b9c;
        pbVar4 = (byte *)(*DAT_100f9d74)();
        uVar3 = FUN_100b1620(this_03,pbVar4,(byte *)pcVar7);
        if (uVar3 != 0) goto LAB_10054930;
      }
    }
  }
  *(undefined4 *)((int)this + 0xf4) = 0x32;
  *(undefined4 *)((int)this + 0xf8) = 0xfa;
  *(undefined4 *)((int)this + 0xfc) = 0x32;
  pvVar2 = operator_new(0x150);
  if (pvVar2 == (void *)0x0) {
    local_1b0 = (undefined4 *)0x0;
  }
  else {
    local_1b0 = FUN_1007b234(pvVar2,this,(uint *)s_CrosshairColorComboBox_100e8bac,6,0);
  }
  *(undefined4 **)((int)this + 0xf0) = local_1b0;
  FUN_10054efe(this);
  pvVar2 = operator_new(0x170);
  if (pvVar2 == (void *)0x0) {
    local_1b4 = (undefined4 *)0x0;
  }
  else {
    local_1b4 = FUN_100462a0(pvVar2,this,(uint *)s_CrosshairSizeComboBox_100e8bc4);
  }
  *(undefined4 **)((int)this + 0xe8) = local_1b4;
  pvVar2 = operator_new(300);
  if (pvVar2 == (void *)0x0) {
    local_1b8 = (int *)0x0;
  }
  else {
    local_1b8 = FUN_10045ae0(pvVar2,this,(uint *)s_CrosshairTranslucencyCheckbox_100e8c0c,
                             s__GameUI_Translucent_100e8bf8,
                             (uint *)s_cl_crosshair_translucent_100e8bdc);
  }
  *(int **)((int)this + 0xec) = local_1b8;
  FUN_10055281(*(int **)((int)this + 0xe8));
  pvVar2 = operator_new(0xa0);
  if (pvVar2 == (void *)0x0) {
    local_1bc = (undefined4 *)0x0;
  }
  else {
    local_1bc = FUN_10053ac0(pvVar2,this,(uint *)s_CrosshairImage_100e8c2c,
                             *(undefined4 *)((int)this + 0xec));
  }
  *(undefined4 **)((int)this + 0x114) = local_1bc;
  FUN_10055132(this);
LAB_10054930:
  *(undefined4 *)((int)this + 0x120) = 0xff;
  *(undefined4 *)((int)this + 0x124) = 0xff;
  *(undefined4 *)((int)this + 0x128) = 0xff;
  FUN_1006cb58(this,s_Resource_OptionsSubMultiplayer_r_100e8c3c,0);
  puVar5 = (undefined4 *)FUN_10036350();
  bVar1 = FUN_100364cd(puVar5);
  if (bVar1) {
    if (*(int *)((int)this + 0xb8) != 0) {
      (**(code **)(**(int **)((int)this + 0xb8) + 0x74))(0);
    }
    if (*(int *)((int)this + 0xbc) != 0) {
      (**(code **)(**(int **)((int)this + 0xbc) + 0x74))(0);
    }
    if (*(int *)((int)this + 0x108) != 0) {
      (**(code **)(**(int **)((int)this + 0x108) + 0x74))(0);
    }
    if (*(int *)((int)this + 0x10c) != 0) {
      (**(code **)(**(int **)((int)this + 0x10c) + 0x74))(0);
    }
    piVar6 = (int *)FUN_1005ed82(this,(byte *)s_Label1_100e8c60,0);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x74))(0);
    }
    piVar6 = (int *)FUN_1005ed82(this,(byte *)s_Colors_100e8c68,0);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x74))(0);
    }
  }
  puVar5 = (undefined4 *)FUN_10036350();
  bVar1 = FUN_10036504(puVar5);
  if ((bVar1) && (*(int *)((int)this + 0x110) != 0)) {
    (**(code **)(**(int **)((int)this + 0x110) + 0x74))(0);
  }
  return this;
}

