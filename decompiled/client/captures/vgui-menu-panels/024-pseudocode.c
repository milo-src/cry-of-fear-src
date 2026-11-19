
void FUN_10033c00(void)

{
  Panel *in_ECX;
  
  vgui::Panel::Panel(in_ECX,0,0,DAT_1018f430,DAT_1018f434);
  *(undefined ***)in_ECX = CTVFrame::vftable;
  vgui::Panel::setBgColor(in_ECX,0,0,0,0xff);
  FUN_10033c50();
  return;
}

