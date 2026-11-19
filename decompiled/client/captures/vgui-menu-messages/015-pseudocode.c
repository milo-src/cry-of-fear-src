
undefined4 FUN_10046680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x1438) != 0) {
    uVar4 = FUN_100808b0();
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1438) + 0xcc) = uVar4;
    uVar4 = FUN_100808b0();
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1438) + 200) = uVar4;
    FUN_10046900();
    iVar5 = FUN_100808b0();
    iVar1 = *(int *)(DAT_101b2600 + 0x1438);
    iVar2 = *(int *)(iVar1 + 0xcc);
    if (iVar2 == 0) {
      iVar1 = **(int **)(iVar1 + 0x108);
      uVar4 = FUN_10008640("gfx/vgui/640_panelback.tga");
      (**(code **)(iVar1 + 0x1fc))(uVar4);
      (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1438) + 0x118) + 0x24))(1);
      (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1438) + 0x120) + 0x24))(0);
    }
    else if (iVar2 == 1) {
      (**(code **)(**(int **)(iVar1 + 0x118) + 0x24))(0);
      (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1438) + 0x120) + 0x24))(0);
      iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1438) + 0x108);
      uVar4 = FUN_10008640("gfx/vgui/640_panel2back.tga");
      (**(code **)(iVar1 + 0x1fc))(uVar4);
    }
    else if (iVar2 == 2) {
      (**(code **)(**(int **)(iVar1 + 0x118) + 0x24))(0);
      (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1438) + 0x120) + 0x24))(0);
      iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1438) + 0x108);
      uVar4 = FUN_10008640("gfx/vgui/keypad3.tga");
      (**(code **)(iVar1 + 0x1fc))(uVar4);
    }
    if (*(int *)(*(int *)(DAT_101b2600 + 0x1438) + 200) != 0) {
      FUN_10046310();
    }
    cVar3 = (**(code **)(**(int **)(DAT_101b2600 + 0x1438) + 0x28))();
    if ((cVar3 == '\0') && (iVar5 != 0)) {
      (**(code **)(**(int **)(DAT_101b2600 + 0x1438) + 0x24))(1);
      FUN_100aaad0();
    }
    return 1;
  }
  return 1;
}

