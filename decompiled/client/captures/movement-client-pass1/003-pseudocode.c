
void HUD_PostRunCmd(undefined4 param_1,int param_2)

{
                    /* 0x6c760  574  HUD_PostRunCmd */
  *(undefined4 *)(param_2 + 0x1b4) = 0;
  DAT_10542a54 = param_2;
  FUN_1006c710();
  return;
}

