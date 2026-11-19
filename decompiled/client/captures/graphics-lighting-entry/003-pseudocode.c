
void FUN_100ae540(float param_1,float param_2,float param_3,undefined8 param_4,undefined4 param_5,
                 float param_6,float param_7)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined1 local_7c [16];
  float local_6c;
  undefined1 local_38 [12];
  undefined1 local_2c [24];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (((byte)DAT_1018a41c & 8) == 0) {
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
  local_8 = 0.0;
  (*DAT_101b2668)(&param_4,&local_14,local_38,local_2c);
  local_14 = local_14 * 150.0 + param_1;
  local_10 = local_10 * 150.0 + param_2;
  local_c = local_c * 150.0 + param_3;
  (**(code **)(DAT_101b2758 + 0x38))(2);
  (**(code **)(DAT_101b2758 + 0x3c))(&param_1,&local_14,0,0xffffffff,local_7c);
  fVar5 = local_8;
  if (local_6c < 1.0) {
    fVar5 = (1.0 - local_6c) * 30.0;
  }
  fVar4 = (DAT_10559ed4 - fVar5) * 10.0;
  if (fVar4 < 0.0) {
    fVar4 = fVar4 * -1.0;
  }
  if (fVar5 <= DAT_10559ed4) {
    if (DAT_10559ed4 <= fVar5) goto LAB_100ae6a9;
    DAT_10559ed4 = DAT_10559ed4 - fVar4 * param_7;
    bVar3 = fVar5 < DAT_10559ed4;
  }
  else {
    DAT_10559ed4 = fVar4 * param_7 + DAT_10559ed4;
    bVar3 = DAT_10559ed4 < fVar5;
  }
  if (!bVar3 && DAT_10559ed4 != fVar5) {
    DAT_10559ed4 = fVar5;
  }
LAB_100ae6a9:
  puVar2 = (undefined8 *)FUN_1005c0f0(0xfffffff8);
  *puVar2 = CONCAT44(param_2,param_1);
  *(float *)(puVar2 + 1) = param_3;
  *(undefined4 *)((int)puVar2 + 0xc) = 0x442f0000;
  *(float *)((int)puVar2 + 0x1c) = param_6 + 0.01;
  puVar2[5] = param_4;
  *(undefined4 *)(puVar2 + 6) = param_5;
  if (*(float *)(DAT_105433e0 + 0xc) == 1.0) {
    builtin_strncpy((char *)((int)puVar2 + 0x3c),"gfx/",4);
    builtin_strncpy((char *)(puVar2 + 8),"low/",4);
    builtin_strncpy((char *)((int)puVar2 + 0x44),"flas",4);
    builtin_strncpy((char *)(puVar2 + 9),"hlig",4);
    *(undefined8 *)((int)puVar2 + 0x4c) = 0x6167742e327468;
  }
  else if (*(float *)(DAT_105433e0 + 0xc) == 0.0) {
    builtin_strncpy((char *)((int)puVar2 + 0x3c),"gfx/",4);
    builtin_strncpy((char *)(puVar2 + 8),"flas",4);
    builtin_strncpy((char *)((int)puVar2 + 0x44),"hlig",4);
    builtin_strncpy((char *)(puVar2 + 9),"ht2.",4);
    builtin_strncpy((char *)((int)puVar2 + 0x4c),"tga",4);
  }
  fVar5 = DAT_10559ed4 + 50.0;
  *(float *)((int)puVar2 + 0x34) = fVar5;
  *(float *)(puVar2 + 7) = fVar5;
  puVar2[2] = 0x3fb333333fb33333;
  *(undefined4 *)(puVar2 + 3) = 0x3fb33333;
  return;
}

