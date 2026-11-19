
void FUN_10033b50(bool param_1)

{
  int iVar1;
  Panel *in_ECX;
  char *pcVar2;
  
  iVar1 = (*DAT_101b26d4)();
  _strncpy((char *)(in_ECX + 0xdc),(char *)&PTR_1013b108,0x10);
  if (param_1 == false) {
    if (iVar1 != 0) {
      (**(code **)(DAT_101b2758 + 8))(0xffffffff,3,"phone/telephone_dial_tone.wav");
    }
    pcVar2 = "unfreeze 1024";
  }
  else {
    if (iVar1 != 0) {
      (**(code **)(DAT_101b2758 + 4))
                (0xffffffff,iVar1 + 0x2c0,3,"phone/telephone_dial_tone.wav",0x3f800000,0,0,100);
    }
    pcVar2 = "freeze 1024";
  }
  (*DAT_101b2654)(pcVar2);
  vgui::Panel::setVisible(in_ECX,param_1);
  return;
}

