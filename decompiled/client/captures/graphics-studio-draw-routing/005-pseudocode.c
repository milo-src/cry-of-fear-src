
void FUN_1008edd0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (*DAT_10545850)();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1008ede2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x54))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1008ede5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x50))();
  return;
}

