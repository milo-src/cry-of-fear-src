
void FUN_100c48b0(int param_1)

{
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x80;
  if (DAT_1022318c != 0) {
    FUN_100c3e50();
    return;
  }
  FUN_100c44e0();
  return;
}

