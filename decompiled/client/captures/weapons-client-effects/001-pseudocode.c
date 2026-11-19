
void FUN_1004bb80(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float10 fVar3;
  
  puVar2 = (undefined4 *)(**(code **)(DAT_101b2754 + 0x100))(0);
  *puVar2 = *param_1;
  puVar2[1] = param_1[1];
  puVar2[2] = param_1[2];
  puVar2[3] = 0x43000000;
  *(undefined2 *)(puVar2 + 4) = 0xaae1;
  *(undefined1 *)((int)puVar2 + 0x12) = 0x69;
  fVar3 = (float10)(*DAT_101b26e0)();
  puVar2[5] = (float)(fVar3 + (float10)0.06);
  puVar2 = (undefined4 *)FUN_1005c0f0(0);
  *puVar2 = *param_1;
  puVar2[1] = param_1[1];
  uVar1 = param_1[2];
  *(undefined8 *)(puVar2 + 4) = 0x3edc28f63f333333;
  puVar2[2] = uVar1;
  puVar2[3] = 0x43000000;
  puVar2[6] = 0x3e0f5c29;
  fVar3 = (float10)(*DAT_101b26e0)();
  puVar2[7] = (float)(fVar3 + (float10)0.06);
  return;
}

