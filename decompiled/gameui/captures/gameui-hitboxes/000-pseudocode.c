
void __fastcall FUN_10096249(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  if ((*(byte *)(param_1 + 0xc4) >> 2 & 1) != 0) {
    *(undefined4 *)(param_1 + 200) = 0;
    if (*(int *)(param_1 + 0x7c) == 0) {
      local_8 = FUN_10098ba0(param_1 + 0x8c);
      while (iVar1 = FUN_10098a20(), local_8 != iVar1) {
        puVar4 = local_10;
        piVar3 = &local_c;
        puVar2 = (undefined4 *)FUN_10098a80((void *)(param_1 + 0x8c),local_8);
        (**(code **)(*(int *)*puVar2 + 0x228))(piVar3,puVar4);
        if (*(int *)(param_1 + 200) + -8 < local_c) {
          *(int *)(param_1 + 200) = local_c + 8;
        }
        local_8 = FUN_10098bc0((void *)(param_1 + 0x8c),local_8);
      }
    }
    if (*(int *)(param_1 + 200) < *(int *)(param_1 + 0x80)) {
      *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x80);
    }
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xfb;
  }
  return;
}

