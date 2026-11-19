
void __thiscall FUN_100572a9(void *this,char param_1)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  uint local_310 [64];
  char local_210 [256];
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [256];
  int local_8;
  
  if (*(int *)((int)this + 0x1dc) != 0) {
    (**(code **)(**(int **)((int)this + 0x1dc) + 0x224))(local_210,0x100);
    FUN_100b0c6a(local_210,(byte *)s__i_x__i_100e9108);
    *(undefined4 *)((int)this + 0x148) = local_10c;
    *(undefined4 *)((int)this + 0x14c) = local_110;
    *(undefined4 *)((int)this + 0x150) = 0x20;
  }
  if (*(int *)((int)this + 0x1e8) != 0) {
    (**(code **)(**(int **)((int)this + 0x1e8) + 0x224))(local_310,0x100);
    puVar1 = FUN_100ae970(local_310,s_window_100e9110);
    if (puVar1 == (uint *)0x0) {
      *(undefined4 *)((int)this + 0x154) = 0;
    }
    else {
      *(undefined4 *)((int)this + 0x154) = 1;
    }
  }
  iVar2 = _memcmp((void *)((int)this + 0xb8),(void *)((int)this + 0x148),0x90);
  if ((iVar2 != 0) || (param_1 != '\0')) {
    local_8 = (int)this + 0x148;
    FUN_100ad757(local_108,(byte *)s__setvideomode__i__i__i_100e9118);
    (**(code **)(DAT_100f9e8c + 0x50))(local_108);
    if (*(int *)(local_8 + 0xc) == 0) {
      pcVar3 = s_fullscreen_100e913c;
    }
    else {
      pcVar3 = s_windowed_100e9130;
    }
    FUN_100ad757(local_108,(byte *)s__setrenderer__s__s_100e9148);
    (**(code **)(DAT_100f9e8c + 0x50))(local_108,pcVar3);
    (**(code **)(DAT_100f9e8c + 0x218))();
  }
  return;
}

