
undefined4 * FUN_1005c0f0(int param_1)

{
  int iVar1;
  undefined4 *_Dst;
  float10 fVar2;
  
  fVar2 = (float10)(*DAT_101b26e0)();
  if (param_1 != 0) {
    _Dst = &DAT_104cc550;
    iVar1 = 0;
    do {
      if (_Dst[9] == param_1) goto LAB_1005c161;
      iVar1 = iVar1 + 1;
      _Dst = _Dst + 0x1f;
    } while (iVar1 < 0x20);
  }
  _Dst = &DAT_104cc550;
  iVar1 = 0;
  while ((float)fVar2 < (float)_Dst[7] || (float)fVar2 == (float)_Dst[7]) {
    iVar1 = iVar1 + 1;
    _Dst = _Dst + 0x1f;
    if (0x1f < iVar1) {
      _memset(&DAT_104cc550,0,0x7c);
      DAT_104cc574 = param_1;
      return &DAT_104cc550;
    }
  }
LAB_1005c161:
  _memset(_Dst,0,0x7c);
  _Dst[9] = param_1;
  return _Dst;
}

