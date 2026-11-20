
void FUN_01d46517(uint param_1,uint param_2,uint param_3)

{
  undefined4 local_8;
  
  if (((param_1 | param_2 | param_3) & 3) == 0) {
    for (local_8 = 0; local_8 < (int)param_3 >> 2; local_8 = local_8 + 1) {
      *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_2 + local_8 * 4);
    }
  }
  else {
    for (local_8 = 0; local_8 < (int)param_3; local_8 = local_8 + 1) {
      *(undefined1 *)(param_1 + local_8) = *(undefined1 *)(param_2 + local_8);
    }
  }
  return;
}

