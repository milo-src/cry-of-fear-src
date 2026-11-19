
void FUN_100aea10(undefined8 param_1,float param_2,float param_3,undefined4 param_4,float param_5,
                 float param_6,float param_7)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_80 [16];
  float local_70;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  float local_24;
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar2 = (*DAT_101b26d4)();
  if (iVar2 == 0) {
    return;
  }
  if ((DAT_1018a41c & 3) == 0) {
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
  if ((DAT_1018a41c & 2) != 0) {
    param_1 = *(undefined8 *)(iVar2 + 0x2c0);
    param_2 = *(float *)(iVar2 + 0x2c8);
    fVar5 = (float10)(*DAT_101b2644)("cof_reducedlightxangle");
    param_3 = (float)fVar5;
    fVar5 = (float10)(*DAT_101b2644)("cof_reducedlightzangle");
    param_5 = (float)fVar5;
  }
  local_8 = 0.0;
  (*DAT_101b2668)(&param_3,&local_18,local_3c,local_30);
  local_18 = local_18 * 150.0 + (float)param_1;
  local_14 = local_14 * 150.0 + param_1._4_4_;
  local_10 = local_10 * 150.0 + param_2;
  (**(code **)(DAT_101b2758 + 0x38))(2);
  (**(code **)(DAT_101b2758 + 0x3c))(&param_1,&local_18,0,0xffffffff,local_80);
  fVar6 = local_8;
  if (local_70 < 1.0) {
    if ((DAT_1018a41c & 2) == 0) {
      fVar6 = (1.0 - local_70) * 30.0;
    }
    else {
      fVar5 = (float10)(*DAT_101b2644)("cof_reducedlightradius");
      local_8 = (float)fVar5;
      fVar6 = (1.0 - local_70) * local_8;
    }
  }
  fVar7 = (DAT_10559ecc - fVar6) * 10.0;
  if (fVar7 < 0.0) {
    fVar7 = fVar7 * -1.0;
  }
  if (fVar6 <= DAT_10559ecc) {
    if (DAT_10559ecc <= fVar6) goto LAB_100aebf8;
    DAT_10559ecc = DAT_10559ecc - fVar7 * param_7;
    bVar4 = fVar6 < DAT_10559ecc;
  }
  else {
    DAT_10559ecc = fVar7 * param_7 + DAT_10559ecc;
    bVar4 = DAT_10559ecc < fVar6;
  }
  if (!bVar4 && DAT_10559ecc != fVar6) {
    DAT_10559ecc = fVar6;
  }
LAB_100aebf8:
  if ((DAT_1018a41c & 1) != 0) {
    puVar3 = (undefined8 *)FUN_1005c0f0(0xffffffff);
    *puVar3 = param_1;
    *(float *)(puVar3 + 1) = param_2;
    *(undefined4 *)((int)puVar3 + 0xc) = 0x442f0000;
    *(float *)((int)puVar3 + 0x1c) = param_6 + 0.01;
    puVar3[5] = CONCAT44(param_4,param_3);
    *(float *)(puVar3 + 6) = param_5;
    if (*(float *)(DAT_105433e0 + 0xc) == 1.0) {
      builtin_strncpy((char *)((int)puVar3 + 0x3c),"gfx/",4);
      builtin_strncpy((char *)(puVar3 + 8),"low/",4);
      builtin_strncpy((char *)((int)puVar3 + 0x44),"flas",4);
      builtin_strncpy((char *)(puVar3 + 9),"hlig",4);
      builtin_strncpy((char *)((int)puVar3 + 0x4c),"ht.t",4);
      *(undefined2 *)(puVar3 + 10) = 0x6167;
      *(undefined1 *)((int)puVar3 + 0x52) = 0;
    }
    else if (*(float *)(DAT_105433e0 + 0xc) == 0.0) {
      builtin_strncpy((char *)((int)puVar3 + 0x3c),"gfx/",4);
      builtin_strncpy((char *)(puVar3 + 8),"flas",4);
      builtin_strncpy((char *)((int)puVar3 + 0x44),"hlig",4);
      builtin_strncpy((char *)(puVar3 + 9),"ht.t",4);
      *(undefined2 *)((int)puVar3 + 0x4c) = 0x6167;
      *(undefined1 *)((int)puVar3 + 0x4e) = 0;
    }
    fVar6 = DAT_10559ecc + 50.0;
    *(float *)((int)puVar3 + 0x34) = fVar6;
    *(float *)(puVar3 + 7) = fVar6;
    puVar3[2] = 0x3eeb851f3eeb851f;
    *(undefined4 *)(puVar3 + 3) = 0x3f028f5c;
  }
  if (((DAT_1018a41c & 2) != 0) && ((DAT_1018a41c & 4) == 0)) {
    local_24 = (float)param_1 + 0.0;
    fStack_20 = param_1._4_4_ + 0.0;
    local_1c = param_2 - 1024.0;
    (*DAT_101b26f4)(&param_1,&local_24,0,1,0xffffffff);
    puVar3 = (undefined8 *)FUN_1005c0f0(0xfffffffe);
    *puVar3 = param_1;
    *(float *)(puVar3 + 1) = param_2;
    *(undefined4 *)((int)puVar3 + 0xc) = 0x442f0000;
    *(float *)((int)puVar3 + 0x1c) = param_6 + 0.01;
    puVar3[5] = CONCAT44(param_4,param_3);
    *(float *)(puVar3 + 6) = param_5;
    if (*(float *)(DAT_105433e0 + 0xc) == 1.0) {
      builtin_strncpy((char *)((int)puVar3 + 0x3c),"gfx/",4);
      builtin_strncpy((char *)(puVar3 + 8),"low/",4);
      builtin_strncpy((char *)((int)puVar3 + 0x44),"flas",4);
      builtin_strncpy((char *)(puVar3 + 9),"hlig",4);
      builtin_strncpy((char *)((int)puVar3 + 0x4c),"ht.t",4);
      *(undefined2 *)(puVar3 + 10) = 0x6167;
      *(undefined1 *)((int)puVar3 + 0x52) = 0;
    }
    else if (*(float *)(DAT_105433e0 + 0xc) == 0.0) {
      builtin_strncpy((char *)((int)puVar3 + 0x3c),"gfx/",4);
      builtin_strncpy((char *)(puVar3 + 8),"flas",4);
      builtin_strncpy((char *)((int)puVar3 + 0x44),"hlig",4);
      builtin_strncpy((char *)(puVar3 + 9),"ht.t",4);
      *(undefined2 *)((int)puVar3 + 0x4c) = 0x6167;
      *(undefined1 *)((int)puVar3 + 0x4e) = 0;
    }
    fVar6 = DAT_10559ecc + 50.0;
    *(float *)((int)puVar3 + 0x34) = fVar6;
    *(float *)(puVar3 + 7) = fVar6;
    fVar5 = (float10)(*DAT_101b2644)("cof_reducedlightcolour3");
    local_c = (float)fVar5;
    fVar5 = (float10)(*DAT_101b2644)("cof_reducedlightcolour2");
    local_8 = (float)fVar5;
    fVar5 = (float10)(*DAT_101b2644)("cof_reducedlightcolour1");
    puVar3[2] = CONCAT44(local_8,(float)fVar5);
    *(float *)(puVar3 + 3) = local_c;
  }
  return;
}

