
void FUN_1004ac60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_3,param_2);
  if ((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x1458) != 0)) {
    uVar2 = FUN_100808b0();
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1458) + 0xf0) = uVar2;
    uVar2 = FUN_100808b0();
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1458) + 0xf4) = uVar2;
    if (*(int *)(*(int *)(DAT_101b2600 + 0x1458) + 0xf0) == 1) {
      FUN_1000c900(local_88,"gfx/vgui/640_user%i.tga",
                   *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1458) + 0xf4));
      iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1458) + 0xe4);
      uVar2 = FUN_10008640(local_88);
      (**(code **)(iVar1 + 0x1fc))(uVar2);
    }
    if (*(int *)(*(int *)(DAT_101b2600 + 0x1458) + 0xf0) == 2) {
      FUN_1000c900(local_88,"gfx/vgui/640_pass%i.tga",
                   *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1458) + 0xf4));
      iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1458) + 0xe4);
      uVar2 = FUN_10008640(local_88);
      (**(code **)(iVar1 + 0x1fc))(uVar2);
    }
    FUN_100aa7f0(0x22);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

