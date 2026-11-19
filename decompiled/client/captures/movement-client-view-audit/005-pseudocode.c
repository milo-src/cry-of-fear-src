
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b580(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  int local_c;
  float local_8;
  
  if ((DAT_101905e0 != -1) && (DAT_101905e4 != -1)) {
    return;
  }
  if ((0 < DAT_101b2f10) && (DAT_101b2f10 < 5)) {
    return;
  }
  (*DAT_101b2690)(&local_18);
  if ((DAT_10543404 & 1) != 0) {
    FUN_100b31b0();
  }
  if (((DAT_105436c0 == 0) && (DAT_10543554 == 0)) && (DAT_1018f648 == 0)) {
    GetCursorPos((LPPOINT)&DAT_10543568);
    iVar2 = (*DAT_101b2688)();
    iVar2 = (DAT_10543580 + DAT_10543568) - iVar2;
    local_c = iVar2;
    iVar3 = (*DAT_101b268c)();
    iVar3 = (DAT_10543584 + DAT_1054356c) - iVar3;
    DAT_10543580 = 0;
    DAT_10543584 = 0;
    DAT_10543570 = iVar2;
    DAT_10543574 = iVar3;
    if (*(float *)(DAT_10543558 + 0xc) != 0.0) {
      DAT_10543570 = (int)((double)(DAT_10543578 + iVar2) * 0.5);
      DAT_10543574 = (int)((double)(DAT_1054357c + iVar3) * 0.5);
    }
    DAT_10543578 = iVar2;
    DAT_1054357c = iVar3;
    fVar4 = (float10)FUN_1006cdc0();
    local_8 = (float)fVar4;
    if (local_8 == 0.0) {
      DAT_10543570 = (int)((float)DAT_10543570 * *(float *)(DAT_1054355c + 0xc));
      fVar5 = (float)DAT_10543574 * *(float *)(DAT_1054355c + 0xc);
    }
    else {
      fVar4 = (float10)FUN_1006cdc0();
      local_8 = (float)(fVar4 * (float10)DAT_10543570);
      DAT_10543570 = (int)(fVar4 * (float10)DAT_10543570);
      fVar4 = (float10)FUN_1006cdc0();
      fVar5 = (float)(fVar4 * (float10)DAT_10543574);
      local_8 = fVar5;
    }
    DAT_10543574 = (int)fVar5;
    if (DAT_1018d1e0 < DAT_1018fec0) {
      DAT_10543570 = (int)((double)DAT_10543570 * 0.5);
      DAT_10543574 = (int)((double)DAT_10543574 * 0.5);
    }
    (*DAT_101b2698)();
    iVar2 = FUN_10078830();
    if (iVar2 != 0) {
      DAT_10543570 = 0;
      DAT_10543574 = 0;
    }
    if (((DAT_10543470 & 1) == 0) &&
       ((*(float *)(DAT_1054335c + 0xc) == 0.0 || ((DAT_10543404 & 1) == 0)))) {
      local_14 = local_14 - (float)DAT_10543570 * *(float *)(DAT_10543350 + 0xc);
    }
    else {
      *(float *)(param_2 + 0x14) =
           (float)DAT_10543570 * *(float *)(DAT_10543358 + 0xc) + *(float *)(param_2 + 0x14);
    }
    if ((DAT_10543404 & 1) == 0) {
      if ((DAT_10543470 & 1) != 0) goto LAB_1007b896;
LAB_1007b8c5:
      *(float *)(param_2 + 0x10) =
           *(float *)(param_2 + 0x10) - (float)DAT_10543574 * *(float *)(DAT_10543354 + 0xc);
    }
    else if ((DAT_10543470 & 1) == 0) {
      local_18 = (float)DAT_10543574 * *(float *)(DAT_1054334c + 0xc) + local_18;
      if (*(float *)(DAT_10543368 + 0xc) < local_18) {
        local_18 = *(float *)(DAT_10543368 + 0xc);
      }
      if (local_18 < -*(float *)(DAT_10543364 + 0xc)) {
        local_18 = -*(float *)(DAT_10543364 + 0xc);
      }
    }
    else {
LAB_1007b896:
      iVar2 = (*DAT_101b26d0)();
      if (iVar2 == 0) goto LAB_1007b8c5;
      *(float *)(param_2 + 0x18) =
           *(float *)(param_2 + 0x18) - (float)DAT_10543574 * *(float *)(DAT_10543354 + 0xc);
    }
    if (((local_c != 0) || (iVar3 != 0)) &&
       ((*(int **)(DAT_101b2600 + 0x1460) != (int *)0x0 &&
        (cVar1 = (**(code **)(**(int **)(DAT_101b2600 + 0x1460) + 0x28))(), cVar1 == '\0')))) {
      FUN_1007bbb0();
    }
  }
  if (DAT_1018d27c == '\0') {
    if (DAT_105436d8 == 0) {
      (*DAT_101b2694)(&local_18);
      goto LAB_1007b952;
    }
  }
  else {
LAB_1007b952:
    if (DAT_105436d8 == 0) goto LAB_1007ba16;
  }
  local_24 = 30.0;
  _DAT_10559504 = (float)DAT_10543574 * *(float *)(DAT_1054334c + 0xc) + _DAT_10559504;
  _DAT_10559508 = (float)DAT_10543570 * *(float *)(DAT_10543350 + 0xc) + _DAT_10559508;
  if ((_DAT_10559504 <= 30.0) && (local_24 = _DAT_10559504, _DAT_10559504 < -60.0)) {
    local_24 = -60.0;
  }
  if (60.0 < _DAT_10559508) {
    _DAT_10559508 = 60.0;
  }
  if (_DAT_10559508 < -60.0) {
    _DAT_10559508 = -60.0;
  }
  local_20 = _DAT_10559508 * -1.0;
  _DAT_10559504 = local_24;
  (*DAT_101b2694)(&local_24);
LAB_1007ba16:
  if ((DAT_10542bb8 != 0) && (DAT_10542bb2 == '\0')) {
    DAT_105594fc = (float)DAT_10543574 * *(float *)(DAT_1054334c + 0xc) + DAT_105594fc;
    _DAT_10559500 = (float)DAT_10543570 * *(float *)(DAT_10543350 + 0xc) + _DAT_10559500;
    if (DAT_105594fc <= 30.0) {
      if (DAT_105594fc < -60.0) {
        DAT_105594fc = -60.0;
      }
    }
    else {
      DAT_105594fc = 30.0;
    }
    if (60.0 < _DAT_10559500) {
      _DAT_10559500 = 60.0;
      return;
    }
    if (_DAT_10559500 < -60.0) {
      _DAT_10559500 = -60.0;
    }
  }
  return;
}

