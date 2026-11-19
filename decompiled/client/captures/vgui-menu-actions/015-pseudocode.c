
void FUN_1002fdc0(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (*DAT_101b26d4)();
  if (iVar1 != 0) {
    switch(param_1) {
    case 0:
      break;
    case 1:
      (*DAT_101b2654)("subtitleset 1");
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aa7f0(0x25);
      (**(code **)(DAT_101b2758 + 4))
                (0xffffffff,iVar1 + 0x2c0,1,"ui/3d_click.wav",0x3f800000,0x3f4ccccd,0,100);
      FUN_100aaad0();
      return;
    case 2:
      (*DAT_101b2654)("subtitleset 2");
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aa7f0(0x25);
      (**(code **)(DAT_101b2758 + 4))
                (0xffffffff,iVar1 + 0x2c0,1,"ui/3d_click.wav",0x3f800000,0x3f4ccccd,0,100);
      FUN_100aaad0();
      return;
    case 3:
      (*DAT_101b2654)("subtitleset 3");
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aa7f0(0x25);
      (**(code **)(DAT_101b2758 + 4))
                (0xffffffff,iVar1 + 0x2c0,1,"ui/3d_click.wav",0x3f800000,0x3f4ccccd,0,100);
      FUN_100aaad0();
      return;
    case 4:
      (*DAT_101b2654)("subtitleset 4");
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aa7f0(0x25);
      (**(code **)(DAT_101b2758 + 4))
                (0xffffffff,iVar1 + 0x2c0,1,"ui/3d_click.wav",0x3f800000,0x3f4ccccd,0,100);
      FUN_100aaad0();
      return;
    case 5:
      (*DAT_101b2654)("subtitleset 5");
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aa7f0(0x25);
      (**(code **)(DAT_101b2758 + 4))
                (0xffffffff,iVar1 + 0x2c0,1,"ui/3d_click.wav",0x3f800000,0x3f4ccccd,0,100);
      FUN_100aaad0();
      return;
    case 6:
      (*DAT_101b2654)("subtitleset 6");
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aa7f0(0x25);
      (**(code **)(DAT_101b2758 + 4))
                (0xffffffff,iVar1 + 0x2c0,1,"ui/3d_click.wav",0x3f800000,0x3f4ccccd,0,100);
      FUN_100aaad0();
      return;
    case 7:
      (*DAT_101b2654)("subtitleset 7");
      (**(code **)(*in_ECX + 0x24))(0);
      FUN_100aa7f0(0x25);
      (**(code **)(DAT_101b2758 + 4))
                (0xffffffff,iVar1 + 0x2c0,1,"ui/3d_click.wav",0x3f800000,0x3f4ccccd,0,100);
      FUN_100aaad0();
      return;
    default:
      (*DAT_101b26ac)("Unknown Language ActionSignal %i.\n",param_1);
    }
  }
  return;
}

