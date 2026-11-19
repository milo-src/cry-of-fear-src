
void FUN_10094730(uint *param_1)

{
  *param_1 = *param_1 ^ 0x80000000;
  param_1[1] = param_1[1] ^ 0x80000000;
  param_1[2] = param_1[2] ^ 0x80000000;
  return;
}

