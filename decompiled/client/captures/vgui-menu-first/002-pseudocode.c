
undefined4 FUN_1002e000(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x1468) != 0) {
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc699) = 0;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc69a) = 0;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc69b) = 0;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc69c) = 0;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc69d) = 0;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc69e) = 0;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc69f) = 0;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc6a0) = 0;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc6a1) = 0;
    *(undefined1 *)(*(int *)(DAT_101b2600 + 0x1468) + 0xc6a2) = 0;
    iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1468) + 0xc6f4);
    uVar2 = FUN_10008640("gfx/vgui/menu/newgame.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar2);
    iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1468) + 0xc6fc);
    uVar2 = FUN_10008640("gfx/vgui/menu/loadgame.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar2);
    iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1468) + 0xc704);
    uVar2 = FUN_10008640("gfx/vgui/menu/customc.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar2);
    iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1468) + 0xc70c);
    uVar2 = FUN_10008640("gfx/vgui/menu/jserver.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar2);
    iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1468) + 0xc714);
    uVar2 = FUN_10008640("gfx/vgui/menu/options.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar2);
    iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1468) + 0xc71c);
    uVar2 = FUN_10008640("gfx/vgui/menu/language.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar2);
    iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1468) + 0xc724);
    uVar2 = FUN_10008640("gfx/vgui/menu/unlockables.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar2);
    iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1468) + 0xc72c);
    uVar2 = FUN_10008640("gfx/vgui/menu/extras.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar2);
    iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1468) + 0xc734);
    uVar2 = FUN_10008640("gfx/vgui/menu/hserver.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar2);
    iVar1 = **(int **)(*(int *)(DAT_101b2600 + 0x1468) + 0xc73c);
    uVar2 = FUN_10008640("gfx/vgui/menu/quit.tga");
    (**(code **)(iVar1 + 0x1fc))(uVar2);
    (**(code **)(**(int **)(DAT_101b2600 + 0x1468) + 0x24))(1);
    FUN_100aaad0();
    (*DAT_101b2654)("freeze 1024");
  }
  return 1;
}

