
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_100af250(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  if ((*(int *)(param_1 + 0x50) != -1) &&
     (fVar1 = *(float *)(param_1 + 0x40), fVar1 != _DAT_1055968c)) {
    fVar3 = *(float *)(DAT_10559578 + 0xc);
    _DAT_10559680 = (double)*(float *)(param_1 + 0x3c) + _DAT_10559680;
    fVar2 = *(float *)(DAT_10559580 + 0xc);
    fVar3 = (float)(_DAT_10559680 - (double)((float)(int)(_DAT_10559680 / (double)fVar3) * fVar3)) /
            fVar3;
    if (fVar2 <= fVar3) {
      fVar2 = ((fVar3 - fVar2) * 3.1415927) / (1.0 - fVar2) + 3.1415927;
    }
    else {
      fVar2 = (fVar3 * 3.1415927) / fVar2;
    }
    dVar4 = (double)(*(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x5c) +
                    *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x58));
    _DAT_1055968c = fVar1;
    if (dVar4 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar4 = SQRT(dVar4);
    }
    dVar4 = (double)(float)(dVar4 * (double)*(float *)(DAT_1055957c + 0xc));
    dVar5 = (double)fVar2;
    FUN_100f8320();
    _DAT_10559688 = (float)(dVar5 * dVar4 * 0.7 + dVar4 * 0.3);
    if (4.0 <= _DAT_10559688) {
      _DAT_10559688 = 4.0;
    }
    else if (_DAT_10559688 <= -7.0) {
      _DAT_10559688 = -7.0;
      return (float10)-7.0;
    }
    return (float10)_DAT_10559688;
  }
  return (float10)_DAT_10559688;
}

