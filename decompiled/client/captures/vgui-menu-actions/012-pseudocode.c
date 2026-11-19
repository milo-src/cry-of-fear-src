
void FUN_1002ecf0(bool param_1)

{
  Panel *in_ECX;
  Panel *pPVar1;
  int iVar2;
  
  if (param_1 != false) {
    FUN_1002ea30();
    FUN_1007fbb0(1);
    FUN_1007faf0("gamestartup.mp3");
    *(undefined4 *)(in_ECX + 0xc694) = 0xffffffff;
    in_ECX[0xc698] = (Panel)0x1;
    (**(code **)(**(int **)(in_ECX + 0xc6b4) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6b8) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6bc) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6c0) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6c4) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6c8) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6cc) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6d0) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6d4) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6d8) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6e4) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6f4) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6fc) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc704) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc70c) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc714) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc71c) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc724) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc72c) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc734) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc73c) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xc6dc) + 0x24))(0);
    (**(code **)(**(int **)(in_ECX + 0xc6b0) + 0x24))(0);
    (*DAT_101b2660)("ui/3d_click.wav",0x3f000000);
    pPVar1 = in_ECX + 0xc284;
    iVar2 = 0x100;
    do {
      (**(code **)(**(int **)pPVar1 + 0x24))(0);
      pPVar1 = pPVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  vgui::Panel::setVisible(in_ECX,param_1);
  return;
}

