
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100af160(int param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = *(float *)(param_1 + 0x40);
  dVar2 = (double)(fVar1 * _DAT_10190588);
  FUN_100f8320();
  *(float *)(param_1 + 0x14) =
       (float)(dVar2 * (double)DAT_1055958c * (double)DAT_101905c4 +
              (double)*(float *)(param_1 + 0x14));
  dVar2 = (double)(fVar1 * _DAT_1019059c);
  FUN_100f8320();
  *(float *)(param_1 + 0xc) =
       (float)(dVar2 * (double)DAT_1055958c * (double)DAT_101905d8 +
              (double)*(float *)(param_1 + 0xc));
  dVar2 = (double)(fVar1 * _DAT_10190574);
  FUN_100f8320();
  *(float *)(param_1 + 0x10) =
       (float)(dVar2 * (double)DAT_1055958c * (double)DAT_101905b0 +
              (double)*(float *)(param_1 + 0x10));
  return;
}

