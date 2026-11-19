
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ada0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_8;
  
  uVar3 = DAT_10543678;
  uVar1 = _DAT_10543630;
  if (DAT_10543620 != 0) {
    iVar2 = 0;
    if (0 < DAT_1054363c) {
      do {
        uVar1 = 1 << ((byte)iVar2 & 0x1f);
        if ((uVar3 & uVar1) == 0) {
          if ((_DAT_1054362c & uVar1) != 0) {
            uVar4 = 0;
            goto LAB_1007ade6;
          }
        }
        else if ((_DAT_1054362c & uVar1) == 0) {
          uVar4 = 1;
LAB_1007ade6:
          (*DAT_101b26c8)((uint)(3 < iVar2) * 4 + 0xcb + iVar2,uVar4);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_1054363c);
    }
    _DAT_1054362c = uVar3;
    uVar1 = _DAT_10543630;
    if (DAT_10543628 != 0) {
      uVar1 = 0;
      if (DAT_10543680 != 0xffff) {
        if (DAT_10543680 == 0) {
          uVar1 = 1;
        }
        else if (DAT_10543680 == 9000) {
          uVar1 = 2;
        }
        else if (DAT_10543680 == 18000) {
          uVar1 = 4;
        }
        else if (DAT_10543680 == 27000) {
          uVar1 = 8;
        }
      }
      uVar3 = 1;
      iVar2 = 0xeb;
      local_8 = 4;
      do {
        if ((uVar1 & uVar3) == 0) {
          if ((_DAT_10543630 & uVar3) != 0) {
            uVar4 = 0;
            goto LAB_1007ae8a;
          }
        }
        else if ((_DAT_10543630 & uVar3) == 0) {
          uVar4 = 1;
LAB_1007ae8a:
          (*DAT_101b26c8)(iVar2,uVar4);
        }
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  _DAT_10543630 = uVar1;
  return;
}

