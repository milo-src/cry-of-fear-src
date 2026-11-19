
/* private: virtual void __thiscall CEnvModel::Think(void) */

void __thiscall CEnvModel::Think(CEnvModel *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* 0xa0b90  320  ?Think@CEnvModel@@EAEXXZ */
  if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 8) == 0) goto LAB_100a0d1c;
  iVar3 = FUN_10118460(0,"player");
  if (iVar3 == 0) {
LAB_100a0d00:
    if (DAT_10226477 == '\0') goto LAB_100a0d1c;
  }
  else if (DAT_10226477 == '\0') {
    FUN_10119320(*(int *)(this + 4) + 0x50);
    iVar3 = *(int *)(iVar3 + 4);
    iVar1 = *(int *)(this + 4);
    fVar6 = *(float *)(iVar3 + 8) - *(float *)(iVar1 + 8);
    fVar8 = *(float *)(iVar3 + 0xc) - *(float *)(iVar1 + 0xc);
    dVar7 = (double)(fVar6 * fVar6 + fVar8 * fVar8);
    if (dVar7 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    if ((float)dVar7 == 0.0) {
      fVar9 = 0.0;
      fVar10 = 0.0;
    }
    else {
      fVar10 = 1.0 / (float)dVar7;
      fVar9 = fVar6 * fVar10;
      fVar10 = fVar8 * fVar10;
    }
    if (0.0 <= *(float *)(DAT_10223188 + 0x2c) * fVar10 + *(float *)(DAT_10223188 + 0x28) * fVar9) {
      fVar5 = (float10)FUN_100a9c90(fVar6,fVar8,*(float *)(iVar3 + 0x10) - *(float *)(iVar1 + 0x10))
      ;
      fVar6 = (float)fVar5 - *(float *)(*(int *)(this + 4) + 0x54);
      if (180.0 < fVar6) {
        fVar6 = fVar6 - 360.0;
      }
      if (fVar6 < -180.0) {
        fVar6 = fVar6 + 360.0;
      }
      FUN_1000eb70(0,fVar6);
    }
    goto LAB_100a0d00;
  }
  FUN_1000eb70(0,0);
LAB_100a0d1c:
  FUN_1000eda0(0);
  if ((*(int *)(this + 0xf8) != 0) && (*(int *)(this + 0xfc) == 0)) {
    uVar2 = *(uint *)(*(int *)(this + 4) + 0x1a4);
    if ((uVar2 & 1) == 0) {
      iVar3 = *(int *)(this + 0x118);
    }
    else {
      iVar3 = *(int *)(this + 0x11c);
    }
    if (iVar3 != 2) {
      return;
    }
    uVar4 = uVar2 & 0xfffffffe;
    if ((uVar2 & 1) == 0) {
      uVar4 = uVar2 | 1;
    }
    *(uint *)(*(int *)(this + 4) + 0x1a4) = uVar4;
    FUN_1009bed0();
  }
  if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 8) == 0) {
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  (**(code **)(*(int *)this + 8))(0);
  return;
}

