
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001f240(bool param_1)

{
  Panel *in_ECX;
  float10 fVar1;
  
  if (param_1 != false) {
    DAT_1054586c = 0;
    if (DAT_105458b0 != 7) {
      DAT_105458b0 = 7;
    }
    DAT_1018a3fc = 1;
    (*DAT_101b2660)("common/page_turn.wav",0x3f800000);
    fVar1 = (float10)(*DAT_101b26e0)();
    _DAT_10550654 = (float)fVar1;
    DAT_10550624 = 0;
  }
  vgui::Panel::setVisible(in_ECX,param_1);
  return;
}

