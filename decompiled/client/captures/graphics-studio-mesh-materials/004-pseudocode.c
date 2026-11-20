
void FUN_1008bb70(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = (*DAT_105457dc)("cl_himodels");
  *(undefined4 *)(in_ECX + 0x24) = uVar1;
  uVar1 = (*DAT_105457dc)("developer");
  *(undefined4 *)(in_ECX + 0x28) = uVar1;
  uVar1 = (*DAT_105457dc)("r_drawentities");
  *(undefined4 *)(in_ECX + 0x2c) = uVar1;
  uVar1 = (*DAT_105457e4)();
  *(undefined4 *)(in_ECX + 0x58) = uVar1;
  (*DAT_105457e8)(in_ECX + 0x4098,in_ECX + 0x409c);
  uVar1 = (*DAT_105457f0)();
  *(undefined4 *)(in_ECX + 0x40a8) = uVar1;
  uVar1 = (*DAT_105457f4)();
  *(undefined4 *)(in_ECX + 0x40ac) = uVar1;
  uVar1 = (*DAT_105457f8)();
  *(undefined4 *)(in_ECX + 0x40a4) = uVar1;
  uVar1 = (*DAT_105457fc)();
  *(undefined4 *)(in_ECX + 0x40a0) = uVar1;
  DAT_10545864 = 0xffffffff;
  DAT_10545868 = 0xffffffff;
  return;
}

