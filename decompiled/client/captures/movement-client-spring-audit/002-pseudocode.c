
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100af400(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  iVar1 = (*DAT_101b26d8)();
  if (iVar1 != 0) {
    fVar2 = *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x10);
    *(float *)(iVar1 + 0xb58) = fVar2;
    fVar4 = *(float *)(param_1 + 0x90) * 0.25 - *(float *)(param_1 + 0xc);
    *(float *)(iVar1 + 0xb54) = fVar4;
    dVar5 = (double)(*(float *)(param_1 + 0x40) * _DAT_10190588);
    FUN_100f8320();
    fVar3 = (float)((double)*(float *)(iVar1 + 0xb5c) -
                   dVar5 * (double)DAT_1055958c * (double)DAT_101905c4);
    *(float *)(iVar1 + 0xb5c) = fVar3;
    dVar5 = (double)(*(float *)(param_1 + 0x40) * _DAT_1019059c);
    FUN_100f8320();
    fVar4 = (float)((double)fVar4 - dVar5 * (double)DAT_1055958c * (double)DAT_101905d8 * 0.5);
    *(float *)(iVar1 + 0xb54) = fVar4;
    dVar5 = (double)(*(float *)(param_1 + 0x40) * _DAT_10190574);
    FUN_100f8320();
    fVar2 = (float)((double)fVar2 - dVar5 * (double)DAT_1055958c * (double)DAT_101905b0);
    *(float *)(iVar1 + 0xb58) = fVar2;
    fVar4 = fVar4 - *(float *)(param_1 + 0xa0) * 0.5;
    *(float *)(iVar1 + 0xb54) = fVar4;
    fVar2 = *(float *)(param_1 + 0xa4) * 0.5 + fVar2;
    *(float *)(iVar1 + 0xb58) = fVar2;
    fVar3 = *(float *)(param_1 + 0xa8) * 0.5 + fVar3;
    *(float *)(iVar1 + 0xb5c) = fVar3;
    fVar4 = fVar4 + _DAT_1018cb68;
    *(float *)(iVar1 + 0xb54) = fVar4;
    if (((*(int *)(iVar1 + 0xb94) != 0) && (DAT_1018d578 != 0)) &&
       (*(int *)(DAT_1018d578 + 0x9c) == 1)) {
      fVar4 = fVar4 - _DAT_1018d254;
      *(float *)(iVar1 + 0xb54) = fVar4;
      fVar2 = fVar2 - _DAT_1018d250;
      *(float *)(iVar1 + 0xb58) = fVar2;
    }
    *(float *)(iVar1 + 0x2cc) = fVar4;
    *(float *)(iVar1 + 0x2d0) = fVar2;
    *(float *)(iVar1 + 0x2d4) = fVar3;
    *(float *)(iVar1 + 0xb28) = fVar4;
    *(float *)(iVar1 + 0xb2c) = fVar2;
    *(float *)(iVar1 + 0xb30) = fVar3;
  }
  return;
}

