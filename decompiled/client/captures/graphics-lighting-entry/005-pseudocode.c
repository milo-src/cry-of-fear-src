
void FUN_100aee70(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float in_stack_0000001c;
  float in_stack_00000020;
  undefined1 local_88 [16];
  float local_78;
  undefined1 local_44 [12];
  undefined1 local_38 [24];
  undefined8 local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  float fStack_c;
  float local_8;
  
  iVar2 = (*DAT_101b26d4)();
  iVar3 = (*DAT_101b26d8)();
  if (iVar2 == 0) {
    return;
  }
  if (iVar3 == 0) {
    return;
  }
  if (((byte)DAT_1018a41c & 4) == 0) {
    return;
  }
  cVar1 = FUN_10072710();
  if (cVar1 != '\0') {
    return;
  }
  if (DAT_10542bc0 != 0) {
    return;
  }
  if (DAT_10542bbc != 0) {
    return;
  }
  if (DAT_105436d8 != 0) {
    return;
  }
  if (DAT_10542bb8 != 0) {
    return;
  }
  iVar2 = (*DAT_101b26f4)(&DAT_10559638,iVar3 + 0xb6c,0,1,0xffffffff);
  param_1 = *(undefined8 *)(iVar2 + 0x14);
  param_2 = *(undefined4 *)(iVar2 + 0x1c);
  local_14 = 0.0;
  (*DAT_101b2668)(&stack0x00000010,&local_20,local_44,local_38);
  local_20 = *(undefined8 *)(iVar3 + 0xb78);
  local_18 = *(undefined4 *)(iVar3 + 0xb80);
  (**(code **)(DAT_101b2758 + 0x38))(2);
  (**(code **)(DAT_101b2758 + 0x3c))(&param_1,&local_20,0,0xffffffff,local_88);
  fVar7 = local_14;
  if (local_78 < 1.0) {
    fVar7 = (1.0 - local_78) * 30.0;
  }
  fVar6 = (DAT_10559ed0 - fVar7) * 10.0;
  if (fVar6 < 0.0) {
    fVar6 = fVar6 * -1.0;
  }
  if (fVar7 <= DAT_10559ed0) {
    if (DAT_10559ed0 <= fVar7) goto LAB_100aeffe;
    DAT_10559ed0 = DAT_10559ed0 - fVar6 * in_stack_00000020;
    bVar5 = fVar7 < DAT_10559ed0;
  }
  else {
    DAT_10559ed0 = fVar6 * in_stack_00000020 + DAT_10559ed0;
    bVar5 = DAT_10559ed0 < fVar7;
  }
  if (!bVar5 && DAT_10559ed0 != fVar7) {
    DAT_10559ed0 = fVar7;
  }
LAB_100aeffe:
  if ((((byte)DAT_1018a41c & 4) != 0) && (iVar2 = (*DAT_101b26d8)(), *(int *)(iVar2 + 0xb94) != 0))
  {
    local_10 = *(float *)(iVar2 + 0xb78) - *(float *)(iVar2 + 0xb6c);
    fStack_c = *(float *)(iVar2 + 0xb7c) - *(float *)(iVar2 + 0xb70);
    local_8 = *(float *)(iVar2 + 0xb80) - *(float *)(iVar2 + 0xb74);
    FUN_100945e0(&local_10,&local_10);
    local_10 = -local_10;
    puVar4 = (undefined8 *)FUN_1005c0f0(0xffffffbe);
    *puVar4 = param_1;
    *(undefined4 *)(puVar4 + 1) = param_2;
    *(undefined4 *)((int)puVar4 + 0xc) = 0x442f0000;
    *(float *)((int)puVar4 + 0x1c) = in_stack_0000001c + 0.01;
    puVar4[5] = CONCAT44(fStack_c,local_10);
    *(float *)(puVar4 + 6) = local_8;
    if (*(float *)(DAT_105433e0 + 0xc) == 1.0) {
      builtin_strncpy((char *)((int)puVar4 + 0x3c),"gfx/",4);
      builtin_strncpy((char *)(puVar4 + 8),"low/",4);
      builtin_strncpy((char *)((int)puVar4 + 0x44),"flas",4);
      builtin_strncpy((char *)(puVar4 + 9),"hlig",4);
      *(undefined8 *)((int)puVar4 + 0x4c) = 0x6167742e327468;
    }
    else if (*(float *)(DAT_105433e0 + 0xc) == 0.0) {
      builtin_strncpy((char *)((int)puVar4 + 0x3c),"gfx/",4);
      builtin_strncpy((char *)(puVar4 + 8),"flas",4);
      builtin_strncpy((char *)((int)puVar4 + 0x44),"hlig",4);
      builtin_strncpy((char *)(puVar4 + 9),"ht2.",4);
      builtin_strncpy((char *)((int)puVar4 + 0x4c),"tga",4);
    }
    puVar4[2] = 0x3f0000003f000000;
    *(undefined4 *)((int)puVar4 + 0x34) = 0x428c0000;
    *(undefined4 *)(puVar4 + 7) = 0x428c0000;
    *(undefined4 *)(puVar4 + 3) = 0x3f000000;
  }
  return;
}

