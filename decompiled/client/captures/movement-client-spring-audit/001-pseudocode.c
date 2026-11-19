
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adec0(float param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [16];
  
  if (DAT_1018c9f4 == '\0') {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    local_38 = *(undefined4 *)param_3;
    local_34 = *(undefined4 *)((int)param_3 + 4);
    local_30 = *(undefined4 *)(param_3 + 1);
    (*DAT_101b2668)(param_3,&local_44,0,0);
    if (param_1 != 0.0) {
      fStack_50 = local_44 - _DAT_10559614;
      fStack_4c = fStack_40 - _DAT_10559618;
      fStack_48 = fStack_3c - _DAT_1055961c;
      fVar4 = (float10)(*DAT_101b2644)("cl_lazyweapon_force");
      fVar5 = 0.0;
      if (0.0 <= (float)fVar4) {
        fVar5 = (float)fVar4;
      }
      fVar8 = 10.0;
      if (fVar5 <= 10.0) {
        fVar8 = fVar5;
      }
      auVar7._0_8_ = (double)(fStack_50 * fStack_50 + fStack_4c * fStack_4c + fStack_48 * fStack_48)
      ;
      auVar7._8_8_ = 0;
      if (auVar7._0_8_ < 0.0) {
        __libm_sse2_sqrt_precise();
        dVar6 = auVar7._0_8_;
      }
      else {
        dVar6 = SQRT(auVar7._0_8_);
      }
      if (((float)dVar6 <= DAT_101905e8) || (DAT_101905e8 <= 0.0)) {
        fVar5 = 5.0;
      }
      else {
        fVar5 = ((float)dVar6 / DAT_101905e8) * 5.0;
      }
      FUN_10094770(&DAT_10559614,fVar5 * param_1,&fStack_50,&DAT_10559614);
      FUN_100947c0(&DAT_10559614);
      fStack_2c = fStack_50 * -1.0;
      fStack_28 = fStack_4c * -1.0;
      fStack_24 = fStack_48 * -1.0;
      FUN_10094770(param_2,fVar8,&fStack_2c,param_2);
    }
    (*DAT_101b2668)(param_4,&local_44,auStack_14,auStack_20);
    if (DAT_101905e8 == 0.0) {
      *param_2 = uVar1;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      *param_3 = CONCAT44(local_34,local_38);
      *(undefined4 *)(param_3 + 1) = local_30;
    }
  }
  return;
}

