
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ad9d0(int param_1,undefined8 *param_2,float *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,char param_7)

{
  float10 fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined8 local_c;
  
  (*DAT_101b2668)(param_3,local_40,local_4c,local_58);
  (*DAT_101b2668)(param_1 + 0x80,&local_1c,&local_28,&local_34);
  FUN_100ae110(param_1,param_4,param_5);
  if (DAT_1018c9f4 != '\0') {
    DAT_10559594 = 0.0;
    DAT_10559590 = 0.0;
  }
  FUN_10094770(param_2,DAT_10559590 * 0.1,local_40,param_2);
  *(float *)(param_2 + 1) = DAT_10559590 * 0.1 + *(float *)(param_2 + 1);
  param_3[2] = DAT_10559590 * 0.5 + param_3[2];
  *param_3 = *param_3 - DAT_10559590 * 0.4;
  param_3[1] = param_3[1] - DAT_10559594 * 0.3;
  FUN_10094770(param_2,DAT_10559594 * 0.8,local_4c,param_2);
  if (param_6 != 0) {
    *(undefined8 *)(param_6 + 0xb48) = *param_2;
    *(undefined4 *)(param_6 + 0xb50) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(param_6 + 0xb54) = *(undefined8 *)param_3;
    *(float *)(param_6 + 0xb5c) = param_3[2];
    fVar2 = *(float *)(param_6 + 0xb50) - local_14 * DAT_1055959c;
    local_c = (double)CONCAT44(fVar2,(undefined4)local_c);
    *(ulonglong *)(param_6 + 0xb48) =
         CONCAT44(*(float *)(param_6 + 0xb4c) - local_18 * DAT_1055959c,
                  *(float *)(param_6 + 0xb48) - local_1c * DAT_1055959c);
    *(float *)(param_6 + 0xb50) = fVar2;
    if (((DAT_1018cb54 == 0) && (DAT_1018cb58 == 0)) && (DAT_10542bc4 == 0)) {
      *(float *)(param_6 + 0x2cc) = *(float *)(param_6 + 0x2cc) - DAT_10559598;
      if (param_7 == '\0') {
        *(float *)(param_6 + 0x2d0) = *(float *)(param_6 + 0x2d0) - DAT_10559598 * 0.5;
        *(float *)(param_6 + 0x2d4) = *(float *)(param_6 + 0x2d4) - DAT_10559598 * 0.5;
      }
      else {
        *(float *)(param_6 + 0x2d0) = DAT_10559598 * 0.5 + *(float *)(param_6 + 0x2d0);
        *(float *)(param_6 + 0x2d4) = DAT_10559598 * 0.5 + *(float *)(param_6 + 0x2d4);
      }
    }
    else {
      *(float *)(param_6 + 0x2cc) = *(float *)(param_6 + 0x2cc) - DAT_10559598 * 2.0;
      if (param_7 == '\0') {
        fVar2 = *(float *)(param_6 + 0x2d0) - DAT_10559598 * 0.5;
      }
      else {
        fVar2 = DAT_10559598 * 0.5 + *(float *)(param_6 + 0x2d0);
      }
      *(float *)(param_6 + 0x2d0) = fVar2;
    }
    fVar1 = (float10)(*DAT_101b26e0)();
    dVar3 = (double)(fVar1 / (float10)_DAT_10542a7c);
    local_c = dVar3;
    FUN_100f8320();
    fVar1 = (float10)(*DAT_101b26e0)();
    dVar4 = (double)(fVar1 / (float10)_DAT_10542a7c);
    local_c = dVar4;
    FUN_100f8160();
    fVar2 = (float)dVar3 / _DAT_10542a80;
    fVar6 = (float)dVar4 / _DAT_10542a80;
    if (DAT_1018c9f4 != '\0') {
      fVar6 = 0.0;
      fVar2 = 0.0;
    }
    fVar6 = fVar6 * 0.5;
    fVar5 = fVar2 * 0.5;
    *(ulonglong *)(param_6 + 0xb48) =
         CONCAT44(local_24 * fVar2 + *(float *)(param_6 + 0xb4c),
                  local_28 * fVar2 + *(float *)(param_6 + 0xb48));
    *(float *)(param_6 + 0xb50) = local_20 * fVar2 + *(float *)(param_6 + 0xb50);
    *(ulonglong *)(param_6 + 0xb48) =
         CONCAT44(local_18 * fVar5 + *(float *)(param_6 + 0xb4c),
                  local_1c * fVar5 + *(float *)(param_6 + 0xb48));
    *(float *)(param_6 + 0xb50) = local_14 * fVar5 + *(float *)(param_6 + 0xb50);
    *(ulonglong *)(param_6 + 0xb48) =
         CONCAT44(local_30 * fVar6 + *(float *)(param_6 + 0xb4c),
                  local_34 * fVar6 + *(float *)(param_6 + 0xb48));
    *(float *)(param_6 + 0xb50) = local_2c * fVar6 + *(float *)(param_6 + 0xb50);
  }
  return;
}

