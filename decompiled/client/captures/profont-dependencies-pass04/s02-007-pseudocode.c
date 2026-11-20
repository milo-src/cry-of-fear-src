
void FUN_10098930(void)

{
  int *piVar1;
  BorderLayout *this;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_100988e0();
  (**(code **)(*piVar1 + 300))(0x80,0x80,0,0);
  this = (BorderLayout *)FUN_100b44cb(8);
  if (this == (BorderLayout *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = vgui::BorderLayout::BorderLayout(this,0);
  }
  (**(code **)(*piVar1 + 0xb4))(uVar2);
  if (DAT_101b2600 != (int *)0x0) {
    FUN_100a91b0();
    return;
  }
  iVar3 = FUN_100a4dc0(0x14a8);
  if (iVar3 != 0) {
    uVar2 = (**(code **)(*piVar1 + 0x1c))();
    uVar4 = (**(code **)(*piVar1 + 0x18))(uVar2);
    DAT_101b2600 = (int *)FUN_100a4010(0,0,uVar4,uVar2);
    (**(code **)(*DAT_101b2600 + 0x40))(piVar1);
    return;
  }
  DAT_101b2600 = (int *)0x0;
  (**(code **)(iRam00000000 + 0x40))(piVar1);
  return;
}

