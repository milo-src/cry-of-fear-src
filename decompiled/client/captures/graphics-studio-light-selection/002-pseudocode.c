
undefined * FUN_100f8160(void)

{
  ushort uVar1;
  undefined *puVar2;
  ushort in_FPUControlWord;
  undefined1 in_XMM0 [16];
  
  if ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f) {
    uVar1 = (in_XMM0._6_2_ & 0x7fff) + 0xcfd0;
    if (uVar1 < 0x10c6) {
      return &DAT_10164100 +
             ((int)ROUND(in_XMM0._0_8_ * 10.185916357881302) + 0x1c7610U & 0x3f) * 0x20;
    }
    if ((short)uVar1 < 0x10c6) {
      return (undefined *)(uint)(in_XMM0._6_2_ & 0x7fff);
    }
  }
  puVar2 = (undefined *)FUN_10119a6f();
  return puVar2;
}

