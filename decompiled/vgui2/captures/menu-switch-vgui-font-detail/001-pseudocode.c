
void __thiscall
FUN_100277b0(void *this,undefined1 *param_1,int param_2,int param_3,int param_4,int param_5,
            undefined4 *param_6)

{
  byte *pbVar1;
  byte bVar2;
  DWORD cjBuffer;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int *piVar7;
  bool bVar8;
  longlong lVar9;
  HDC hdc;
  _GLYPHMETRICS local_74;
  RECT local_60;
  MAT2 local_50;
  int local_40;
  undefined1 uStack_3c;
  undefined1 local_3b;
  int local_38;
  int local_34;
  int local_30;
  undefined1 *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined1 *local_1c;
  float local_18;
  float local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  FUN_100281e0(this,(UINT)param_1,&local_30,&local_20,&local_34);
  SelectObject(*(HDC *)((int)this + 0x260),*(HGDIOBJ *)((int)this + 0x25c));
  local_8 = local_20;
  if (*(char *)((int)this + 0x34) != '\0') {
    local_8 = local_20 + local_30 + local_34;
  }
  local_c = *(int *)((int)this + 0x38);
  local_50.eM11.value = 1;
  local_50.eM22.value = 1;
  local_50.eM11.fract = 0;
  local_50.eM12.fract = 0;
  local_50.eM12.value = 0;
  local_50.eM21.fract = 0;
  local_50.eM21.value = 0;
  local_50.eM22.fract = 0;
  if ((*(char *)((int)this + 0x2c) != '\0') && ((int)param_1 < 0x100)) {
    SelectObject(*(HDC *)((int)this + 0x260),*(HGDIOBJ *)((int)this + 0x25c));
    cjBuffer = GetGlyphOutlineA(*(HDC *)((int)this + 0x260),(UINT)param_1,6,&local_74,0,(LPVOID)0x0,
                                &local_50);
    if (0 < (int)cjBuffer) {
      FUN_1002a580();
      local_2c = &stack0xffffff80;
      GetGlyphOutlineA(*(HDC *)((int)this + 0x260),(UINT)param_1,6,&local_74,cjBuffer,
                       &stack0xffffff80,&local_50);
      uVar5 = local_74.gmBlackBoxX & 0x80000003;
      bVar8 = uVar5 == 0;
      local_8 = local_74.gmBlackBoxX;
      if ((int)uVar5 < 0) {
        bVar8 = (uVar5 - 1 | 0xfffffffc) == 0xffffffff;
      }
      while (!bVar8) {
        local_8 = local_8 + 1;
        uVar5 = local_8 & 0x80000003;
        bVar8 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar8 = (uVar5 - 1 | 0xfffffffc) == 0xffffffff;
        }
      }
      local_10 = 0;
      if ((int)(local_20 + 2) <= (int)local_74.gmBlackBoxX) {
        local_10 = local_74.gmBlackBoxX - local_20 >> 1;
      }
      local_28 = 0;
      if (local_74.gmBlackBoxY != 0) {
        local_18 = (float)((*(int *)((int)this + 0x40) - local_74.gmptGlyphOrigin.y) + param_3);
        local_1c = local_2c;
        puVar6 = (undefined1 *)((int)local_18 * param_4);
        do {
          local_24 = local_10;
          local_2c = puVar6;
          if (local_10 < local_74.gmBlackBoxX) {
            do {
              iVar4 = (*(int *)((int)this + 0x278) - local_10) + local_24 + param_2;
              if ((iVar4 < param_4) && ((int)local_18 < param_5)) {
                bVar2 = local_1c[local_24];
                local_38 = CONCAT31(local_38._1_3_,bVar2);
                if (bVar2 == 0) {
                  local_14 = 0.0;
                }
                else {
                  local_14 = (float)bVar2 * 0.015625;
                  if (1.0 < local_14) {
                    local_14 = 1.0;
                  }
                }
                puVar3 = param_6 + (int)(puVar6 + iVar4);
                lVar9 = __ftol();
                *(char *)puVar3 = (char)lVar9;
                lVar9 = __ftol();
                *(char *)((int)puVar3 + 1) = (char)lVar9;
                lVar9 = __ftol();
                *(char *)((int)puVar3 + 2) = (char)lVar9;
                lVar9 = __ftol();
                *(char *)((int)puVar3 + 3) = (char)lVar9;
                puVar6 = local_2c;
              }
              local_24 = local_24 + 1;
            } while (local_24 < local_74.gmBlackBoxX);
          }
          local_28 = local_28 + 1;
          puVar6 = puVar6 + param_4;
          local_18 = (float)((int)local_18 + 1);
          local_1c = local_1c + local_8;
          local_2c = puVar6;
        } while (local_28 < local_74.gmBlackBoxY);
      }
      goto LAB_10027a6b;
    }
  }
  SetBkColor(*(HDC *)((int)this + 0x260),0);
  SetTextColor(*(HDC *)((int)this + 0x260),0xffffff);
  SetBkMode(*(HDC *)((int)this + 0x260),2);
  if (*(char *)((int)this + 0x34) == '\0') {
    hdc = *(HDC *)((int)this + 0x260);
    local_30 = -local_30;
  }
  else {
    hdc = *(HDC *)((int)this + 0x260);
    local_30 = 0;
  }
  MoveToEx(hdc,local_30,0,(LPPOINT)0x0);
  local_2c = param_1;
  if (DAT_100484fd == '\0') {
    local_60.right = local_8;
    local_60.left = 0;
    local_60.top = 0;
    local_60.bottom = local_c;
    ExtTextOutA(*(HDC *)((int)this + 0x260),0,0,2,&local_60,(LPCSTR)0x0,0,(INT *)0x0);
    uStack_3c = 0;
    local_40 = 0;
    local_3b = 0;
    WideCharToMultiByte(0,0,(LPCWSTR)&local_2c,1,(LPSTR)&local_40,6,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar5 = 0xffffffff;
    piVar7 = &local_40;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      iVar4 = *piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
    } while ((char)iVar4 != '\0');
    ExtTextOutA(*(HDC *)((int)this + 0x260),0,0,0,(RECT *)0x0,(LPCSTR)&local_40,~uVar5 - 1,
                (INT *)0x0);
  }
  else {
    ExtTextOutW(*(HDC *)((int)this + 0x260),0,0,0,(RECT *)0x0,(LPCWSTR)&local_2c,1,(INT *)0x0);
  }
  SetBkMode(*(HDC *)((int)this + 0x260),1);
  if ((int)*(uint *)((int)this + 0x268) < (int)local_8) {
    local_8 = *(uint *)((int)this + 0x268);
  }
  if (*(int *)((int)this + 0x26c) < local_c) {
    local_c = *(int *)((int)this + 0x26c);
  }
  local_14 = 0.0;
  if (0 < local_c) {
    uVar5 = param_3 * param_4;
    do {
      local_28 = 0;
      if (local_8 != *(uint *)((int)this + 0x30) &&
          -1 < (int)(local_8 - *(uint *)((int)this + 0x30))) {
        local_38 = (int)local_14 + param_3;
        local_24 = uVar5;
        do {
          local_40 = param_2 + local_28;
          if ((local_40 < param_4) && (local_38 < param_5)) {
            pbVar1 = (byte *)(*(int *)((int)this + 0x270) +
                             (*(int *)((int)this + 0x268) * (int)local_14 + local_28) * 4);
            local_10 = (uint)pbVar1[2];
            local_18 = (float)*pbVar1 * 0.003921569;
            local_1c = (undefined1 *)((float)pbVar1[1] * 0.003921569);
            if (param_1 == (undefined1 *)0x9) {
              local_1c = (undefined1 *)0x0;
              local_18 = 0.0;
            }
            puVar3 = param_6 + uVar5 + local_40;
            lVar9 = __ftol();
            *(char *)puVar3 = (char)lVar9;
            lVar9 = __ftol();
            *(char *)((int)puVar3 + 1) = (char)lVar9;
            lVar9 = __ftol();
            *(char *)((int)puVar3 + 2) = (char)lVar9;
            lVar9 = __ftol();
            *(char *)((int)puVar3 + 3) = (char)lVar9;
            uVar5 = local_24;
          }
          local_28 = local_28 + 1;
        } while ((int)local_28 < (int)(local_8 - *(int *)((int)this + 0x30)));
      }
      local_14 = (float)((int)local_14 + 1);
      uVar5 = uVar5 + param_4;
      local_24 = uVar5;
    } while ((int)local_14 < local_c);
  }
  if ((*(int *)((int)this + 0x30) != 0) &&
     (puVar3 = param_6 + (*(int *)((int)this + 0x38) + -1) * param_4 + param_2, uVar5 = local_8,
     0 < (int)local_8)) {
    do {
      *(undefined1 *)puVar3 = 0;
      *(undefined1 *)((int)puVar3 + 1) = 0;
      *(undefined1 *)((int)puVar3 + 2) = 0;
      *(undefined1 *)((int)puVar3 + 3) = 0;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
LAB_10027a6b:
  if (*(int *)((int)this + 0x30) != 0) {
    FUN_10027ed0(this,param_2,param_3,param_4,param_5,local_8,local_c,(int)param_6);
  }
  FUN_10027f90(this,param_2,param_3,param_4,param_5,param_6);
  FUN_10027df0(this,param_2,param_3,param_4,param_5,(int)param_6);
  FUN_10027da0(this,param_2,param_3,param_4,param_5,(int)param_6);
  return;
}

