
void FUN_1006fe00(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  float10 fVar3;
  
  DAT_10542b94 = 0;
  DAT_10542b98 = 0;
  param_1[0xc6b] = 0;
  param_1[0xc6d] = 0;
  fVar3 = (float10)(*DAT_101b26e0)();
  param_1[0xc6e] = (float)fVar3;
  fVar3 = (float10)(*DAT_101b26e0)();
  *(float *)(DAT_101b2600 + 0x14a0) = (float)fVar3;
  param_1[0xc70] = 0;
  fVar3 = (float10)(*DAT_101b26e0)();
  param_1[0xc71] = (float)fVar3;
  fVar3 = (float10)(*DAT_101b26e0)();
  param_1[0xc72] = (float)fVar3;
  fVar3 = (float10)(*DAT_101b26e0)();
  param_1[0xc73] = (float)fVar3;
  fVar3 = (float10)(*DAT_101b26e0)();
  param_1[0xc74] = (float)fVar3;
  fVar3 = (float10)(*DAT_101b2644)("difficulty");
  DAT_10542ba4 = (int)fVar3;
  fVar3 = (float10)(*DAT_101b26e0)();
  param_1[0xaa0] = (float)fVar3;
  param_1[0xaa1] = 0;
  *(undefined1 *)(param_1 + 0xaa2) = 0;
  *(undefined1 *)(param_1 + 0xc6f) = 0;
  param_1[0xc58] = 0;
  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x18))();
    }
  }
  DAT_101ba470 = 0;
  DAT_101ba46c = 0;
  cVar2 = FUN_10089830();
  if (cVar2 == '\0') {
    return;
  }
  FUN_10089840();
  FUN_1008a210();
  FUN_10086640();
  FUN_10086670();
  FUN_10086890();
  return;
}

