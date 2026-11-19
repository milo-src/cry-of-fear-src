
void FUN_10010dc0(void)

{
  float *pfVar1;
  int iVar2;
  char *_Str;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  double dVar6;
  float fVar7;
  float *local_24;
  ushort *local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  uint local_c;
  
  iVar2 = DAT_101ad6e8;
  local_c = DAT_10190600 ^ (uint)&local_24;
  local_20 = (ushort *)(DAT_101ad6e8 + 0x45476);
  if (((*local_20 & 0x1000) == 0) || ((*(uint *)(DAT_101ad6e8 + 0xb8) & 0x40000) == 0)) {
    fVar7 = *(float *)(DAT_101ad6e8 + 0x4546c);
    pfVar1 = (float *)(DAT_101ad6e8 + 0x4546c);
    if ((fVar7 != 0.0) && (*(float *)(DAT_101ad6e8 + 0x45468) != 0.0)) {
      *(float *)(DAT_101ad6e8 + 0x45468) = *(float *)(DAT_101ad6e8 + 0x45468) * 0.5;
      fVar7 = *pfVar1;
    }
  }
  else {
    fVar7 = 0.0;
    *(undefined4 *)(DAT_101ad6e8 + 0x4546c) = 0;
  }
  iVar3 = DAT_101ad6e8;
  pfVar4 = (float *)(iVar2 + 0x4546c);
  local_1c = *(float *)(DAT_101ad6e8 + 0x45468);
  local_24 = (float *)(DAT_101ad6e8 + 0x45468);
  pfVar1 = (float *)(DAT_101ad6e8 + 0x45470);
  dVar6 = (double)(fVar7 * fVar7 + local_1c * local_1c +
                  *(float *)(DAT_101ad6e8 + 0x45470) * *(float *)(DAT_101ad6e8 + 0x45470));
  if (dVar6 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  fVar7 = (float)dVar6;
  if ((fVar7 != 0.0) && (*(float *)(iVar3 + 500) < fVar7)) {
    fVar7 = *(float *)(iVar3 + 500) / fVar7;
    *local_24 = local_1c * fVar7;
    *pfVar4 = *pfVar4 * fVar7;
    *pfVar1 = *pfVar1 * fVar7;
    iVar3 = DAT_101ad6e8;
  }
  if (((*(uint *)(iVar3 + 0xb8) & 0x1001000) != 0) || (*(int *)(iVar3 + 0xd0) != 0)) {
    *local_24 = 0.0;
    *pfVar4 = 0.0;
    *pfVar1 = 0.0;
    *local_20 = 0;
    iVar3 = DAT_101ad6e8;
  }
  FUN_10011eb0(iVar3 + 0xa0);
  _Str = (char *)(**(code **)(DAT_101ad6e8 + 0x4f558))(DAT_101ad6e8 + 0x4f3f4,&DAT_1013ede4);
  _atoi(_Str);
  if (*(float *)(DAT_101ad6e8 + 0x214) <= 50.0 && *(float *)(DAT_101ad6e8 + 0x214) != 50.0) {
    if (*(int *)(DAT_101ad6e8 + 0xd0) == 0) {
      if (0.0 < *(float *)(DAT_101ad6e8 + 0x45488)) {
        *(undefined4 *)(DAT_101ad6e8 + 0x4545c) = *(undefined4 *)(DAT_101ad6e8 + 0x45480);
        *(undefined4 *)(DAT_101ad6e8 + 0x45460) = *(undefined4 *)(DAT_101ad6e8 + 0x45484);
      }
      fStack_18 = *(float *)(DAT_101ad6e8 + 0x4545c) + *(float *)(DAT_101ad6e8 + 0xa0);
      fStack_14 = *(float *)(DAT_101ad6e8 + 0xa4) + *(float *)(DAT_101ad6e8 + 0x45460);
      fStack_10 = *(float *)(DAT_101ad6e8 + 0xa8) + *(float *)(DAT_101ad6e8 + 0x45464);
      fVar5 = (float10)FUN_10010800(&fStack_18,DAT_101ad6e8 + 0x5c,
                                    *(undefined4 *)(*(int *)(DAT_101ad6e8 + 0x4f4f4) + 100),
                                    *(undefined4 *)(*(int *)(DAT_101ad6e8 + 0x4f4f4) + 0x68));
      local_20 = (ushort *)(float)(fVar5 * (float10)4.0);
      *(ushort **)(DAT_101ad6e8 + 0x4c) = local_20;
      *(float *)(DAT_101ad6e8 + 0x44) = fStack_18;
      *(float *)(DAT_101ad6e8 + 0x48) = fStack_14;
    }
    else {
      *(undefined4 *)(DAT_101ad6e8 + 0x44) = *(undefined4 *)(DAT_101ad6e8 + 0x50);
      *(undefined4 *)(DAT_101ad6e8 + 0x48) = *(undefined4 *)(DAT_101ad6e8 + 0x54);
      *(undefined4 *)(DAT_101ad6e8 + 0x4c) = *(undefined4 *)(DAT_101ad6e8 + 0x58);
    }
  }
  if (*(int *)(DAT_101ad6e8 + 0xd0) == 0) {
    if (*(float *)(DAT_101ad6e8 + 0x88) == -8.0) {
      *(undefined4 *)(DAT_101ad6e8 + 0x88) = 0x41e00000;
    }
  }
  else {
    *(undefined4 *)(DAT_101ad6e8 + 0x88) = 0xc1000000;
  }
  if (180.0 < *(float *)(DAT_101ad6e8 + 0x48)) {
    *(float *)(DAT_101ad6e8 + 0x48) = *(float *)(DAT_101ad6e8 + 0x48) - 360.0;
  }
  __security_check_cookie(local_c ^ (uint)&local_24);
  return;
}

