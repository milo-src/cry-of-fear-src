
undefined1 * FUN_10080a60(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_105440b8;
  uVar3 = 0;
  DAT_105440c8 = 0;
  while (DAT_105440bc + 1 <= iVar1) {
    iVar2 = FUN_100808e0();
    if ((iVar2 == -1) || (iVar2 == 0)) break;
    (&DAT_105440c8)[uVar3] = (char)iVar2;
    uVar3 = uVar3 + 1;
    if (0x7fe < uVar3) break;
  }
  if (uVar3 < 0x800) {
    (&DAT_105440c8)[uVar3] = 0;
    return &DAT_105440c8;
  }
                    /* WARNING: Subroutine does not return */
  ___report_rangecheckfailure();
}

