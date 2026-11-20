
ushort FUN_1010e844(int param_1,uint param_2,int param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte extraout_CL;
  char extraout_CL_00;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  int extraout_ECX_01;
  bool bVar5;
  short in_FPUControlWord;
  ushort in_FPUStatusWord;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar7;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined1 auStack_78 [12];
  ushort uStack_6c;
  undefined4 uStack_64;
  undefined1 auStack_e [10];
  undefined4 uStack_4;
  
  uStack_4 = FUN_1010e84d;
  uVar2 = __fload_withFB();
  uStack_4 = (code *)CONCAT22((short)(uVar2 >> 0x10),in_FPUControlWord);
  uVar3 = uVar2;
  if (in_FPUControlWord != 0x27f) {
    auStack_e._6_4_ = 0x1010e861;
    uVar2 = FUN_10122e35();
    uVar3 = extraout_ECX;
  }
  bVar5 = (uVar3 & 0x7ff00000) == 0x7ff00000;
  if (bVar5) {
    if ((uVar2 & 0xfffff) == 0 && param_3 == 0) {
      auStack_e._6_4_ = 0x1010e929;
      fVar6 = (float10)__fload_withFB();
      iVar4 = extraout_ECX_01;
      fVar7 = extraout_ST1_01;
      in_ST6 = in_ST7;
    }
    else {
      auStack_e._6_4_ = 0x1010e8ed;
      uVar1 = __fload_withFB();
      in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
      fVar7 = extraout_ST1_00;
      if (NAN((float10)1) || NAN(extraout_ST0_00)) goto LAB_1010e8f8;
      if ((float10)1 == extraout_ST0_00) {
        return uVar1;
      }
      iVar4 = extraout_ECX_00 + 1;
      fVar6 = extraout_ST0_00;
    }
  }
  else {
    auStack_e._6_4_ = 0x1010e87c;
    uVar3 = __fload_withFB();
    if (!bVar5) {
      if (((uVar3 & 0x7ff00000) != 0) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
        fVar6 = extraout_ST0;
        if ((param_2 & 0x80000000) != 0) {
          auStack_e._6_4_ = 0x1010e9f3;
          fVar6 = (float10)FUN_1010ea11();
          fVar6 = -fVar6;
          if (extraout_CL_00 == '\0') {
            uVar1 = 1;
            goto LAB_1010e8c5;
          }
        }
        log2(fVar6);
        auStack_e._6_4_ = 0x1010e8a1;
        uVar1 = FUN_10122e20();
        if (DAT_1055ae80 != 0) {
          return uVar1;
        }
        uVar1 = FUN_10122f09();
        return uVar1;
      }
      if ((param_4 & 0x7fffffff) == 0 && param_3 == 0) {
        uVar1 = FUN_10122ebe();
        return uVar1;
      }
      auStack_e._6_4_ = 0x1010e9ab;
      uVar1 = FUN_1010ea11();
      if ((param_4 & 0x80000000) == 0) {
        if ((param_2._3_1_ >> 7 & extraout_CL) == 0) {
          return uVar1;
        }
        uVar1 = FUN_10122ebe();
        return uVar1;
      }
      uVar1 = 2;
      goto LAB_1010e8c5;
    }
    iVar4 = 0;
    fVar6 = extraout_ST0;
    fVar7 = extraout_ST1;
    in_ST6 = in_ST7;
  }
  if (((param_2 & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
LAB_1010e8f8:
    fVar6 = (float10)0;
    uVar1 = (ushort)NAN(fVar7) << 8 | (ushort)(fVar7 < fVar6) << 9 | (ushort)(fVar7 != fVar6) << 10
            | (ushort)(fVar7 == fVar6) << 0xe;
    if ((fVar7 == fVar6) == 0) {
      return uVar1;
    }
    return uVar1;
  }
  if (iVar4 != 0) {
    return 0;
  }
  uStack_64 = 0x1010e957;
  uStack_6c = in_FPUStatusWord;
  auStack_e = (undefined1  [10])in_ST6;
  iVar4 = FUN_10123014((double)fVar6,(double)fVar7,auStack_78);
  if (iVar4 == 0) {
    return 0;
  }
  uVar1 = 1;
LAB_1010e8c5:
  if (DAT_1055ae80 != 0) {
    return uVar1;
  }
  auStack_e._6_4_ = 0x1010e8e2;
  uVar1 = FUN_10122dc0();
  return uVar1;
}

