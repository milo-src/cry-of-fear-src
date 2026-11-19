
/* public: void __thiscall CTriggerCamera::FollowTarget(void) */

void __thiscall CTriggerCamera::FollowTarget(CTriggerCamera *this)

{
  SHORT SVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
                    /* 0x10af30  134  ?FollowTarget@CTriggerCamera@@QAEXXZ */
  iVar2 = FUN_10017780();
  if (iVar2 != 0) {
    if (DAT_10222ee4 != (int *)0x0) {
      iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))();
      if (iVar2 == 0) {
        SVar1 = GetAsyncKeyState(0xd);
        if ((SVar1 < 0) && ((*(uint *)(*(int *)(this + 4) + 0x1a4) & 0x400) == 0)) {
          iVar2 = FUN_100177a0();
          (*DAT_10223000)(1,DAT_1022665c,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
          (*DAT_10223004)();
        }
      }
    }
    iVar2 = FUN_10017780();
    if ((iVar2 != 0) &&
       ((*DAT_10223188 < *(float *)(this + 0x108) || *DAT_10223188 == *(float *)(this + 0x108) ||
        (*(float *)(this + 0x104) == 666.0)))) {
      iVar2 = *(int *)(this + 4);
      if ((*(byte *)(iVar2 + 0x1a4) & 0x40) == 0) {
        iVar3 = FUN_100177a0();
        iVar3 = *(int *)(iVar3 + 4);
        fStack_18 = *(float *)(iVar3 + 0xc) - *(float *)(iVar2 + 0xc);
        fStack_14 = *(float *)(iVar3 + 0x10) - *(float *)(iVar2 + 0x10);
        fStack_1c = *(float *)(iVar3 + 8) - *(float *)(iVar2 + 8);
        FUN_1011a8d0(&fStack_30,&fStack_1c);
        iVar2 = *(int *)(this + 4);
        fStack_30 = -fStack_30;
        if (360.0 < *(float *)(iVar2 + 0x54)) {
          *(float *)(iVar2 + 0x54) = *(float *)(iVar2 + 0x54) - 360.0;
          iVar2 = *(int *)(this + 4);
        }
        if (*(float *)(iVar2 + 0x54) < 0.0) {
          *(float *)(iVar2 + 0x54) = *(float *)(iVar2 + 0x54) + 360.0;
          iVar2 = *(int *)(this + 4);
        }
        fVar7 = fStack_30 - *(float *)(iVar2 + 0x50);
        fVar6 = fStack_2c - *(float *)(iVar2 + 0x54);
        if (fVar7 < -180.0) {
          fVar7 = fVar7 + 360.0;
        }
        if (180.0 < fVar7) {
          fVar7 = fVar7 - 360.0;
        }
        if (fVar6 < -180.0) {
          fVar6 = fVar6 + 360.0;
        }
        if (180.0 < fVar6) {
          fVar6 = fVar6 - 360.0;
        }
        *(float *)(iVar2 + 0x5c) = fVar7 * 40.0 * DAT_10223188[1];
        *(float *)(*(int *)(this + 4) + 0x60) = fVar6 * 40.0 * DAT_10223188[1];
      }
      else {
        iVar3 = FUN_100177a0();
        iVar3 = *(int *)(iVar3 + 4);
        fStack_2c = *(float *)(iVar3 + 0xc) - *(float *)(iVar2 + 0xc);
        fStack_28 = *(float *)(iVar3 + 0x10) - *(float *)(iVar2 + 0x10);
        fStack_30 = *(float *)(iVar3 + 8) - *(float *)(iVar2 + 8);
        FUN_1011a8d0(&fStack_1c,&fStack_30);
        *(float *)(*(int *)(this + 4) + 0x50) = -fStack_1c;
        *(float *)(*(int *)(this + 4) + 0x54) = fStack_18;
      }
      if (*(int *)(this + 0x144) != 0) {
        *(float *)(*(int *)(this + 4) + 0x58) = (float)*(int *)(this + 0x144);
      }
      iVar2 = *(int *)(this + 4);
      if ((*(byte *)(iVar2 + 0x1a4) & 4) == 0) {
        fStack_14 = *(float *)(iVar2 + 0x28) * 0.8;
        *(ulonglong *)(iVar2 + 0x20) =
             CONCAT44(*(float *)(iVar2 + 0x24) * 0.8,*(float *)(iVar2 + 0x20) * 0.8);
        *(float *)(iVar2 + 0x28) = fStack_14;
        iVar2 = *(int *)(this + 4);
        dVar5 = (double)(*(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                         *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                        *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28));
        if (dVar5 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar5 = SQRT(dVar5);
        }
        if ((float)dVar5 < 10.0) {
          *(undefined8 *)(iVar2 + 0x20) = DAT_10222f34;
          *(undefined4 *)(iVar2 + 0x28) = DAT_10222f3c;
        }
      }
      (**(code **)(*(int *)this + 8))(0);
      FUN_1010e570();
      return;
    }
    fStack_30 = 0.0;
    fStack_2c = 0.0;
    fStack_28 = 0.0;
    uStack_24 = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x248) = 0;
    if (*(int *)(*(int *)(this + 4) + 0x1d8) != 0) {
      FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)(*(int *)(this + 4) + 0x1d8),this,this,3,0);
    }
    iStack_34 = 1;
    if (0 < (int)DAT_10223188[0x24]) {
      do {
        piVar4 = (int *)FUN_10119680(iStack_34);
        if (piVar4 != (int *)0x0) {
          iVar2 = (**(code **)(*piVar4 + 0xbc))();
          if (iVar2 != 0) {
            FUN_10117180(*(undefined4 *)(piVar4[1] + 0x20c),*(undefined4 *)(piVar4[1] + 0x20c));
            FUN_10017740(0);
            *(undefined4 *)(*(int *)(this + 4) + 0x248) = 0;
            *(uint *)(piVar4[1] + 0x1a8) = *(uint *)(piVar4[1] + 0x1a8) & 0xffffff7f;
            *(undefined4 *)(piVar4[1] + 0x170) = 0x40000000;
            FUN_100deff0(1);
          }
          iVar2 = *(int *)(this + 4);
          if (((*(byte *)(iVar2 + 0x1a4) & 0x10) != 0) && (*(int *)(this + 0x130) == 0)) {
            piVar4[0x940] = piVar4[0x940] & 0xfffffff7;
            iVar2 = *(int *)(this + 4);
          }
          if (((*(byte *)(iVar2 + 0x1a4) & 0x20) != 0) && (*(int *)(this + 300) == 0)) {
            piVar4[0x7ad] = 0;
            iVar2 = *(int *)(this + 4);
          }
          if (*(int *)(iVar2 + 0x24c) != 0) {
            piVar4[0x940] = piVar4[0x940] & 0xffffffef;
            iVar2 = *(int *)(this + 4);
          }
          if ((*(uint *)(iVar2 + 0x1a4) & 0x100) != 0) {
            (*DAT_10223000)(1,DAT_102265f4,0,*(undefined4 *)(piVar4[1] + 0x20c));
            (*DAT_10223008)(0);
            (*DAT_10223008)(0);
            (*DAT_10223020)(&DAT_101a2496);
            (*DAT_10223008)(0);
            (*DAT_10223004)();
          }
          FUN_10017740(0);
        }
        iStack_34 = iStack_34 + 1;
      } while (iStack_34 <= (int)DAT_10223188[0x24]);
    }
    FUN_10102930(this,3,0);
    iVar2 = *(int *)(this + 4);
    fStack_14 = 0.0;
    *(ulonglong *)(iVar2 + 0x5c) = CONCAT44(fStack_30,fStack_30);
    *(undefined4 *)(iVar2 + 100) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    if (*(int *)(this + 0x148) != 0) {
      piVar4 = (int *)FUN_10118590(0,(int)DAT_10223188[0x26] + *(int *)(this + 0x148));
      if (piVar4 != (int *)0x0) {
        iVar2 = FUN_10118460(0,"player");
        if (iVar2 != 0) {
          (**(code **)(*piVar4 + 0xe8))(iVar2,iVar2,3,0);
        }
      }
    }
  }
  return;
}

