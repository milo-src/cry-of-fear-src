
float10 FUN_10078840(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = uVar1 & 1;
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 4) != 0) {
      *(uint *)(param_1 + 8) = uVar2;
      return (float10)0.0;
    }
    if (uVar2 != 0) {
      *(uint *)(param_1 + 8) = uVar2;
      return (float10)1.0;
    }
  }
  else {
    if ((uVar1 & 4) != 0) {
      if (uVar2 != 0) {
        *(uint *)(param_1 + 8) = uVar2;
        return (float10)0.75;
      }
      *(undefined4 *)(param_1 + 8) = 0;
      return (float10)0.25;
    }
    if (uVar2 != 0) {
      *(uint *)(param_1 + 8) = uVar2;
      return (float10)0.5;
    }
  }
  *(uint *)(param_1 + 8) = uVar2;
  return (float10)0.0;
}

