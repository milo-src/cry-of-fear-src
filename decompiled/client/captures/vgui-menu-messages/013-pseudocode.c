
void FUN_1003f070(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_208 [512];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_3,param_2);
  if ((DAT_101b2600 != 0) && (*(int **)(DAT_101b2600 + 0x1450) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(DAT_101b2600 + 0x1450) + 0x28))();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(DAT_101b2600 + 0x1450) + 0x24))(1);
      FUN_100aaad0();
    }
    FUN_100aaad0();
    uVar2 = FUN_100808b0();
    *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1450) + 0xc0) = uVar2;
    iVar3 = FUN_100808b0();
    iVar4 = FUN_100808b0();
    iVar5 = FUN_100808b0();
    uVar2 = FUN_10080a60();
    FUN_1000c900(local_208,"Jill - %s! - David\n",uVar2);
    (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1450) + 0xe4) + 0x1fc))(local_208);
    (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1450) + 0xe4) + 0x120))(0,0,0,0);
    iVar6 = **(int **)(*(int *)(DAT_101b2600 + 0x1450) + 0xe0);
    if (*(int *)(*(int *)(DAT_101b2600 + 0x1450) + 0xc0) == 0) {
      uVar2 = FUN_10008640("gfx/vgui/puzzle/computer/computer_logon.tga");
      (**(code **)(iVar6 + 0x1fc))(uVar2);
      (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1450) + 0xd4) + 0x24))(1);
      (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1450) + 0xd8) + 0x24))(1);
      iVar6 = (*DAT_101b26d4)();
      if ((iVar6 != 0) && ((iVar3 != 0 || (iVar4 != 0)))) {
        (**(code **)(DAT_101b2758 + 4))
                  (0xffffffff,iVar6 + 0x2c0,0,"buttons/computer_deny.wav",0x3f333333,0x3f4ccccd,0,
                   100);
      }
      (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1450) + 0xe4) + 0x24))(0);
      if ((iVar3 != 0) || (iVar4 != 0)) {
        (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1450) + 0xd4) + 0x1fc))
                  ("Invalid username or password!",0x1d);
        (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1450) + 0xd8) + 0x1fc))
                  ("Invalid username or password!",0x1d);
      }
    }
    else {
      uVar2 = FUN_10008640("gfx/vgui/puzzle/computer/computer_loggedon.tga");
      (**(code **)(iVar6 + 0x1fc))(uVar2);
      (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1450) + 0xd4) + 0x24))(0);
      (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1450) + 0xd8) + 0x24))(0);
      iVar6 = (*DAT_101b26d4)();
      (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1450) + 0xe4) + 0x24))(1);
      if ((iVar6 != 0) && (iVar5 == 0)) {
        (**(code **)(DAT_101b2758 + 4))
                  (0xffffffff,iVar6 + 0x2c0,0,"buttons/computer_logon.wav",0x3f333333,0x3f4ccccd,0,
                   100);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

