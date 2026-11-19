
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10078670(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)((_DAT_105434a0 & 3) != 0);
  uVar3 = uVar4 | 4;
  if ((DAT_105434d0 & 3) == 0) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 2;
  if ((DAT_10543494 & 3) == 0) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 8;
  if ((DAT_10543428 & 3) == 0) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x10;
  if ((DAT_10543434 & 3) == 0) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x20;
  if ((DAT_10543488 & 3) == 0) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x40;
  if ((DAT_10543518 & 3) == 0) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x80;
  if ((DAT_10543530 & 3) == 0) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x200;
  if ((DAT_10543458 & 3) == 0) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x400;
  if ((DAT_10543464 & 3) == 0) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x800;
  if ((DAT_105434ac & 3) == 0) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x2000;
  if ((DAT_105434dc & 3) == 0) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x4000;
  if ((DAT_105434e8 & 3) == 0) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x1000;
  if ((DAT_1054347c & 3) == 0) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x8000;
  if ((DAT_105434f4 & 3) == 0) {
    uVar4 = uVar3;
  }
  iVar1 = (*DAT_101b2730)();
  if (iVar1 != 0) {
    uVar2 = (*DAT_101b2730)(&DAT_1014688c);
    iVar1 = FUN_100d3cf0(uVar2);
    if (iVar1 != 0) {
      uVar4 = uVar4 | 0x8000;
    }
  }
  iVar1 = FUN_10078830();
  if ((iVar1 != 0) || (DAT_1018f648 != 0)) {
    uVar4 = uVar4 | 0x8000;
  }
  if (param_1 != 0) {
    _DAT_105434a0 = _DAT_105434a0 & 0xfffffffd;
    DAT_105434d0 = DAT_105434d0 & 0xfffffffd;
    DAT_10543494 = DAT_10543494 & 0xfffffffd;
    DAT_10543428 = DAT_10543428 & 0xfffffffd;
    DAT_10543434 = DAT_10543434 & 0xfffffffd;
    DAT_10543488 = DAT_10543488 & 0xfffffffd;
    DAT_10543458 = DAT_10543458 & 0xfffffffd;
    DAT_10543464 = DAT_10543464 & 0xfffffffd;
    DAT_105434ac = DAT_105434ac & 0xfffffffd;
    DAT_10543518 = DAT_10543518 & 0xfffffffd;
    DAT_105434dc = DAT_105434dc & 0xfffffffd;
    DAT_105434e8 = DAT_105434e8 & 0xfffffffd;
    DAT_105434f4 = DAT_105434f4 & 0xfffffffd;
    _DAT_10543524 = _DAT_10543524 & 0xfffffffd;
    DAT_1054347c = DAT_1054347c & 0xfffffffd;
  }
  return uVar4;
}

