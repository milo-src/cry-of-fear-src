
uint __thiscall
FUN_10027400(void *this,byte *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  HDC pHVar4;
  char *pcVar5;
  HFONT pHVar6;
  HBITMAP h;
  BOOL BVar7;
  undefined1 *puVar8;
  UINT *pUVar9;
  void *pvVar10;
  int iVar11;
  DWORD iCharSet;
  undefined4 *puVar12;
  float10 fVar13;
  undefined1 local_69c [44];
  undefined4 local_670;
  undefined1 local_660;
  LONG local_65c;
  tagLOGFONTA local_63c;
  _ABC local_600 [128];
  
  _strncpy(this,(char *)param_1,0x1f);
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(int *)((int)this + 0x20) = param_2;
  *(uint *)((int)this + 0x30) = param_6 >> 7 & 1;
  *(byte *)((int)this + 0x2c) = (byte)(param_6 >> 4) & 1;
  *(byte *)((int)this + 0x34) = (byte)(param_6 >> 1) & 1;
  pvVar10 = (void *)(param_6 >> 6 & 0xffffff01);
  *(undefined1 *)((int)this + 0x1f) = 0;
  *(uint *)((int)this + 0x28) = param_6;
  *(undefined4 *)((int)this + 0x278) = param_4;
  *(undefined4 *)((int)this + 0x274) = param_5;
  *(char *)((int)this + 0x2d) = (char)pvVar10;
  iCharSet = param_6 >> 2 & 2;
  uVar3 = FUN_10037010(pvVar10,param_1,(byte *)s_win98japanese_10044644);
  if (uVar3 == 0) {
    iCharSet = 0x80;
    _strncpy(this,s_Tahoma_10044670,0x20);
  }
  pHVar4 = CreateCompatibleDC((HDC)0x0);
  *(HDC *)((int)this + 0x260) = pHVar4;
  local_63c.lfCharSet = '\x01';
  local_63c.lfPitchAndFamily = '\0';
  pcVar5 = this;
  do {
    DAT_100484fe = *pcVar5;
    pcVar5[(int)&local_63c + (0x1c - (int)this)] = DAT_100484fe;
    pcVar5 = pcVar5 + 1;
  } while (DAT_100484fe != '\0');
  uVar3 = EnumFontFamiliesExA(*(HDC *)((int)this + 0x260),&local_63c,(FONTENUMPROCA)&LAB_100273f0,0,
                              0);
  if (DAT_100484fe != '\0') {
    pHVar6 = CreateFontA(param_2,0,0,0,*(int *)((int)this + 0x24),param_6 & 1,param_6 & 2,
                         param_6 & 4,iCharSet,0,0,(*(char *)((int)this + 0x2c) != '\0') + 3,0,
                         (LPCSTR)param_1);
    *(HFONT *)((int)this + 0x25c) = pHVar6;
    if (pHVar6 == (HFONT)0x0) {
      *(undefined1 *)this = 0;
      return 0;
    }
    SetMapMode(*(HDC *)((int)this + 0x260),1);
    SelectObject(*(HDC *)((int)this + 0x260),*(HGDIOBJ *)((int)this + 0x25c));
    SetTextAlign(*(HDC *)((int)this + 0x260),1);
    GetTextMetricsA(*(HDC *)((int)this + 0x260),(LPTEXTMETRICA)(local_69c + 0x28));
    local_69c._8_4_ = *(int *)((int)this + 0x30) + local_69c._40_4_;
    *(undefined4 *)((int)this + 0x40) = local_670;
    *(undefined4 *)((int)this + 0x38) = local_69c._8_4_;
    puVar12 = (undefined4 *)local_69c;
    for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    *(undefined4 *)((int)this + 0x26c) = local_69c._8_4_;
    local_69c._8_4_ = -local_69c._8_4_;
    local_69c._16_4_ = 0;
    *(LONG *)((int)this + 0x3c) = local_65c;
    *(LONG *)((int)this + 0x268) = local_65c;
    local_69c._0_4_ = 0x28;
    local_69c._4_4_ = local_65c;
    local_69c._12_2_ = 1;
    local_69c._14_2_ = 0x20;
    h = CreateDIBSection(*(HDC *)((int)this + 0x260),(BITMAPINFO *)local_69c,0,
                         (void **)((int)this + 0x270),(HANDLE)0x0,0);
    *(HBITMAP *)((int)this + 0x264) = h;
    SelectObject(*(HDC *)((int)this + 0x260),h);
    puVar12 = (undefined4 *)((int)this + 0x44);
    for (iVar11 = 0x80; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    BVar7 = GetCharABCWidthsW(*(HDC *)((int)this + 0x260),0,0x7f,local_600);
    if ((BVar7 == 0) &&
       (BVar7 = GetCharABCWidthsA(*(HDC *)((int)this + 0x260),0,0x7f,local_600), BVar7 == 0)) {
      puVar8 = (undefined1 *)((int)this + 0x45);
      iVar11 = 0x80;
      do {
        *puVar8 = local_660;
        puVar8 = puVar8 + 4;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    else {
      iVar11 = 0x80;
      pUVar9 = &local_600[0].abcB;
      pcVar5 = (char *)((int)this + 0x45);
      do {
        pcVar5[-1] = (char)((_ABC *)(pUVar9 + -1))->abcA - *(char *)((int)this + 0x278);
        *pcVar5 = *(char *)((int)this + 0x278) * '\x02' + *(char *)((int)this + 0x30) +
                  (char)*pUVar9;
        iVar11 = iVar11 + -1;
        pcVar5[1] = ((char)pUVar9[1] - *(char *)((int)this + 0x30)) - *(char *)((int)this + 0x278);
        pUVar9 = pUVar9 + 3;
        pcVar5 = pcVar5 + 4;
      } while (iVar11 != 0);
    }
    pvVar10 = *(void **)((int)this + 0x278);
    if (1 < (int)pvVar10) {
      pvVar10 = operator_new((int)pvVar10 * 8 + 4);
      iVar11 = 0;
      *(void **)((int)this + 0x27c) = pvVar10;
      fVar1 = (float)*(int *)((int)this + 0x278) * 0.683;
      if (-1 < *(int *)((int)this + 0x278) * 2) {
        do {
          fVar13 = (float10)FUN_1002aa50();
          iVar11 = iVar11 + 1;
          *(float *)(*(int *)((int)this + 0x27c) + -4 + iVar11 * 4) =
               (float)(fVar13 * (float10)(1.0 / SQRT(fVar1 * fVar1 * 6.28)));
          iVar2 = *(int *)((int)this + 0x278) * 2;
        } while (iVar11 <= iVar2);
        return CONCAT31((int3)((uint)iVar2 >> 8),1);
      }
    }
    return CONCAT31((int3)((uint)pvVar10 >> 8),1);
  }
  *(undefined1 *)this = 0;
  return uVar3 & 0xffffff00;
}

