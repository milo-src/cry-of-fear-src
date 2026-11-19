
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001b150(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int in_ECX;
  
  FUN_10080850(param_3,param_2);
  iVar5 = FUN_100808b0();
  iVar6 = FUN_100808e0();
  uVar7 = FUN_100808e0();
  if (iVar6 < 1) {
    (*DAT_101b263c)(0,_DAT_101b24e4,uRam101b24e8,uRam101b24ec,uRam101b24f0,0,0,0);
    *(undefined4 *)(in_ECX + 0x8c) = 0;
  }
  else {
    if (DAT_105593b8 != 4) {
      DAT_1018f644 = 0;
    }
    iVar6 = iVar6 * 0x15c;
    if (&DAT_101af810 + iVar6 != (undefined *)0x0) {
      if ((int)uVar7 < -1) {
        *(uint *)(&DAT_101af8b0 + iVar6) = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
      }
      else {
        *(uint *)(&DAT_101af8b0 + iVar6) = uVar7;
      }
      uVar4 = uRam101b24f0;
      uVar3 = uRam101b24ec;
      uVar2 = uRam101b24e8;
      uVar1 = _DAT_101b24e4;
      if (iVar5 != 0) {
        *(undefined **)(in_ECX + 0x8c) = &DAT_101af810 + iVar6;
        (*DAT_101b263c)(0,uVar1,uVar2,uVar3,uVar4,0,0,0);
        *(undefined4 *)(in_ECX + 0x84) = 0x43480000;
        *(uint *)(in_ECX + 0x10) = *(uint *)(in_ECX + 0x10) | 1;
      }
      return 1;
    }
  }
  return 0;
}

