
void __fastcall FUN_100580ec(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 local_10;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x21c))();
    *(undefined4 *)(param_1 + 0xe4) = uVar2;
    (**(code **)(*(int *)(param_1 + 0xbc) + 8))(0,(float)*(int *)(param_1 + 0xe4) / 100.0);
    uVar1 = (**(code **)(**(int **)(param_1 + 0xc0) + 0x2b8))();
    *(undefined1 *)(param_1 + 0xe8) = uVar1;
    if (*(char *)(param_1 + 0xe8) == '\0') {
      local_10 = 0;
    }
    else {
      local_10 = 0x3f800000;
    }
    (**(code **)(*(int *)(param_1 + 0xbc) + 8))(2,local_10);
    FUN_10045090(*(int **)(param_1 + 0xdc));
    fVar3 = FUN_1004511e(*(int **)(param_1 + 0xdc));
    *(float *)(param_1 + 0xec) = (float)fVar3;
    FUN_10045c46(*(int **)(param_1 + 0xe0));
  }
  return;
}

