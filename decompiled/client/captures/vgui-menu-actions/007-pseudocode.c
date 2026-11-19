
void FUN_1002b140(bool param_1)

{
  char cVar1;
  int iVar2;
  Panel *in_ECX;
  char *pcVar3;
  char *pcVar4;
  Panel *pPVar5;
  
  if (param_1 != false) {
    pcVar4 = &DAT_1018b1fc;
    pPVar5 = in_ECX + 0x2ac;
    do {
      pcVar3 = pcVar4;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      (**(code **)(**(int **)pPVar5 + 0x24))(1 < (uint)((int)pcVar3 - (int)(pcVar4 + 1)));
      pcVar4 = pcVar4 + 0x1a0;
      pPVar5 = pPVar5 + 4;
    } while ((int)pcVar4 < 0x1018ca5d);
    iVar2 = (*DAT_101b26d4)();
    if (iVar2 != 0) {
      (**(code **)(DAT_101b2758 + 4))
                (0,iVar2 + 0xb48,0,"notes/note_turn1.wav",0x3f800000,0x3f4ccccd,0,0x50);
    }
  }
  vgui::Panel::setVisible(in_ECX,param_1);
  return;
}

