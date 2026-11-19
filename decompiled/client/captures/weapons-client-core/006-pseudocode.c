
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004bc30(int param_1,int param_2,char param_3,float param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  byte local_11;
  
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x41200000;
  local_11 = 0;
  iVar2 = FUN_100d3cf0(*(undefined4 *)(param_1 + 0xb94),"models/cs/");
  local_24 = (uint)local_11;
  if (iVar2 != 0) {
    local_24 = 1;
  }
  puVar3 = (undefined4 *)(*DAT_101b26d4)();
  if (puVar3 != (undefined4 *)0x0) {
    iVar2 = 0;
    if (DAT_1018d578 != 0) {
      iVar2 = DAT_1018d578;
    }
    local_28 = puVar3;
    local_1c = (*DAT_101b26f8)("models/flash1.mdl",&local_20);
    local_18 = 4.0;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 0x9c);
      if (iVar4 == 4) {
        local_18 = 6.0;
      }
      else if (iVar4 == 0x15) {
        local_18 = 6.0;
      }
      else {
        local_18 = 4.0;
        if (iVar4 == 9) {
          local_1c = (*DAT_101b26f8)("models/flash2.mdl",&local_20);
          iVar4 = *(int *)(iVar2 + 0x9c);
          local_18 = 6.0;
        }
        if (iVar4 == 0xb) {
          local_1c = (*DAT_101b26f8)("models/flash2.mdl",&local_20);
          iVar4 = *(int *)(iVar2 + 0x9c);
          local_18 = 10.0;
        }
        if (iVar4 == 0x1a) {
          local_1c = (*DAT_101b26f8)("models/flash2.mdl",&local_20);
          iVar4 = *(int *)(iVar2 + 0x9c);
          local_18 = 6.0;
        }
        if (iVar4 == 0x1b) {
          local_1c = (*DAT_101b26f8)("models/flash2.mdl",&local_20);
          iVar4 = *(int *)(iVar2 + 0x9c);
          local_18 = 2.0;
        }
        if (iVar4 == 0x17) {
          local_1c = (*DAT_101b26f8)("models/flash2.mdl",&local_20);
          iVar4 = *(int *)(iVar2 + 0x9c);
          local_18 = 9.0;
        }
        if (iVar4 == 0xb) {
          local_1c = (*DAT_101b26f8)("models/flash2.mdl",&local_20);
          iVar4 = *(int *)(iVar2 + 0x9c);
          local_18 = 9.0;
        }
        if (iVar4 == 0xe) {
          local_1c = (*DAT_101b26f8)("models/flash1.mdl",&local_20);
          local_18 = 4.0;
        }
      }
    }
    if (param_3 != '\0') {
      local_1c = (*DAT_101b26f8)("models/flash3.mdl",&local_20);
    }
    if ((char)local_24 != '\0') {
      local_18 = 2.0;
    }
    fVar6 = (float10)(*DAT_101b2714)(0xbf800000,0x3f800000);
    puVar5 = &DAT_101b3ae8;
    for (iVar2 = 0x2ee; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    _DAT_101b467c = local_1c;
    _DAT_101b3dc0 = local_20;
    local_18 = (float)(fVar6 + (float10)local_18);
    _DAT_101b3dd8 = local_18 * param_4;
    DAT_101b3aec = 0;
    puVar3 = (undefined4 *)(param_1 + (param_2 * 3 + 0x2d8) * 4);
    DAT_101b4630._4_4_ = puVar3[1];
    DAT_101b4638 = puVar3[2];
    DAT_101b4630._0_4_ = *puVar3;
    DAT_101b463c._4_4_ = *(float *)(param_1 + 0xb58);
    DAT_101b4644 = *(float *)(param_1 + 0xb5c);
    DAT_101b463c._0_4_ = *(undefined4 *)(param_1 + 0xb54);
    fVar6 = (float10)(*DAT_101b2714)(0x3f800000,0x43b38000);
    DAT_101b4644 = (float)fVar6;
    if (param_3 != '\0') {
      DAT_101b463c._4_4_ = DAT_101b463c._4_4_ + 90.0;
    }
    _DAT_101b3de0 = 5;
    _DAT_101b3de4 = 100;
    _DAT_101b3dec = 0xa1;
    _DAT_101b3dc4 = 0;
    fVar6 = (float10)(*DAT_101b26e0)();
    _DAT_101b3df4 = (float)fVar6;
    (*DAT_101b26fc)(0,&DAT_101b3ae8);
    if (*(float *)(DAT_105433cc + 0xc) != 0.0) {
      _DAT_101b2f28 = (**(code **)(DAT_101b2758 + 0xc))("sprites/gunsmoke.spr");
      _DAT_101b2f24 =
           (**(code **)(DAT_101b2754 + 200))
                     (param_1 + 0xb60,&local_34,0x3d4ccccd,_DAT_101b2f28,5,6,0x437f0000,0x3f800000,
                      0x300100);
    }
    if (param_3 == '\0') {
      FUN_1004bb80(puVar3);
      return;
    }
    puVar5 = (undefined4 *)(**(code **)(DAT_101b2754 + 0x100))(0);
    puVar3 = local_28;
    *puVar5 = local_28[0x2d2];
    puVar5[1] = local_28[0x2d3];
    puVar5[2] = local_28[0x2d4];
    puVar5[3] = 0x43000000;
    *(undefined2 *)(puVar5 + 4) = 0x60e1;
    *(undefined1 *)((int)puVar5 + 0x12) = 0;
    fVar6 = (float10)(*DAT_101b26e0)();
    puVar5[5] = (float)(fVar6 + (float10)0.06);
    puVar5 = (undefined4 *)FUN_1005c0f0(0);
    *puVar5 = puVar3[0x2d2];
    puVar5[1] = puVar3[0x2d3];
    uVar1 = puVar3[0x2d4];
    *(undefined8 *)(puVar5 + 4) = 0x3ebd70a43f800000;
    puVar5[2] = uVar1;
    puVar5[3] = 0x43000000;
    puVar5[6] = 0;
    fVar6 = (float10)(*DAT_101b26e0)();
    puVar5[7] = (float)(fVar6 + (float10)0.06);
  }
  return;
}

