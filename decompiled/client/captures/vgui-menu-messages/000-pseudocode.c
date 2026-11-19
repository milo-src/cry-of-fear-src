
undefined4 FUN_1001e6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long _Value;
  undefined4 uVar4;
  char local_8 [4];
  
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x1484) != 0) {
    iVar2 = FUN_100808b0();
    iVar3 = FUN_100808b0();
    _Value = FUN_100808b0();
    FID_conflict___ltoa(_Value,local_8,10);
    *(int *)(*(int *)(DAT_101b2600 + 0x1484) + 0xe8 + iVar2 * 4) = iVar3;
    piVar1 = *(int **)(*(int *)(DAT_101b2600 + 0x1484) + 0xcc + iVar2 * 4);
    (**(code **)(*piVar1 + 0x200))(piVar1,local_8);
    (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1484) + 0xcc + iVar2 * 4) + 0x21c))(6);
    if (iVar3 == 0) {
      piVar1 = *(int **)(*(int *)(DAT_101b2600 + 0x1484) + 0x104 + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x1fc))(0);
        if ((*(int *)(*(int *)(DAT_101b2600 + 0x1484) + 200) == iVar2) &&
           (piVar1 = *(int **)(*(int *)(DAT_101b2600 + 0x1484) + 0x120), piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0x1fc))(0);
        }
      }
    }
    else {
      switch(iVar3) {
      case 1:
        piVar1 = *(int **)(iVar2 * 4 + 0x104 + *(int *)(DAT_101b2600 + 0x1484));
        if (piVar1 != (int *)0x0) {
          iVar2 = *piVar1;
          uVar4 = FUN_10008640("gfx/vgui/ammo/glock_slot.tga");
          (**(code **)(iVar2 + 0x1fc))(uVar4);
          return 1;
        }
        break;
      case 2:
        piVar1 = *(int **)(iVar2 * 4 + 0x104 + *(int *)(DAT_101b2600 + 0x1484));
        if (piVar1 != (int *)0x0) {
          iVar2 = *piVar1;
          uVar4 = FUN_10008640("gfx/vgui/ammo/m16_slot.tga");
          (**(code **)(iVar2 + 0x1fc))(uVar4);
          return 1;
        }
        break;
      case 3:
        piVar1 = *(int **)(iVar2 * 4 + 0x104 + *(int *)(DAT_101b2600 + 0x1484));
        if (piVar1 != (int *)0x0) {
          iVar2 = *piVar1;
          uVar4 = FUN_10008640("gfx/vgui/ammo/p345_slot.tga");
          (**(code **)(iVar2 + 0x1fc))(uVar4);
          return 1;
        }
        break;
      case 4:
        piVar1 = *(int **)(iVar2 * 4 + 0x104 + *(int *)(DAT_101b2600 + 0x1484));
        if (piVar1 != (int *)0x0) {
          iVar2 = *piVar1;
          uVar4 = FUN_10008640("gfx/vgui/ammo/shotgun_slot.tga");
          (**(code **)(iVar2 + 0x1fc))(uVar4);
          return 1;
        }
        break;
      case 5:
        piVar1 = *(int **)(iVar2 * 4 + 0x104 + *(int *)(DAT_101b2600 + 0x1484));
        if (piVar1 != (int *)0x0) {
          iVar2 = *piVar1;
          uVar4 = FUN_10008640("gfx/vgui/ammo/tmp_slot.tga");
          (**(code **)(iVar2 + 0x1fc))(uVar4);
          return 1;
        }
      }
    }
  }
  return 1;
}

