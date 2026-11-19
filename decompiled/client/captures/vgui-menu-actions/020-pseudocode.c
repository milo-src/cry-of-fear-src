
void FUN_10033aa0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  float fVar3;
  Color aCStack_14 [12];
  
  fVar3 = (float)in_ECX[0x32];
  if (0.0 < fVar3) {
    fVar3 = (float)((double)fVar3 - DAT_1018d1b8 * 700.0);
    in_ECX[0x32] = (int)fVar3;
  }
  if (fVar3 < 0.0) {
    in_ECX[0x32] = 0;
    fVar3 = 0.0;
  }
  piVar1 = (int *)in_ECX[0x3b];
  vgui::Color::Color(aCStack_14,0xff,0xff,0xff,(int)fVar3);
  (**(code **)(*piVar1 + 0xc))();
  iVar2 = (int)(float)in_ECX[0x32];
  if (iVar2 < 0x80) {
    iVar2 = 0x80;
  }
  vgui::Color::Color((Color *)&stack0xffffffe0,0,0,0,iVar2);
  (**(code **)(*in_ECX + 0x128))();
  return;
}

