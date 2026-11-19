
float10 FUN_1005e230(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  undefined1 auVar5 [12];
  float fVar6;
  float fVar7;
  float local_10;
  float local_8;
  
  bVar2 = DAT_10542bc0 == 0;
  local_8 = *(float *)(DAT_104cd4f0 + 0xc);
  bVar3 = DAT_10542bc4 != 0;
  if (((((byte)DAT_1018a41c & 0x40) != 0) && (cVar1 = FUN_10072710(), cVar1 == '\0')) &&
     (bVar2 || bVar3)) {
    local_8 = 0.6;
  }
  if (DAT_1018cb4c != 0) {
    local_10 = (float)DAT_1018cb4c;
    local_8 = local_10 / 255.0;
  }
  if (DAT_105458b0 == 1) {
    local_8 = 0.25;
  }
  if (DAT_1018d2d0 != 0.0) {
    if (DAT_104cd4f8 == 0) {
      fVar4 = (float10)(*DAT_101b26e0)();
      fVar6 = (float)((fVar4 - (float10)DAT_1018d2d0) / (float10)5.0);
    }
    else {
      fVar4 = (float10)(*DAT_101b26e0)();
      fVar6 = (float)(fVar4 - (float10)DAT_1018d2d0) / (float)DAT_104cd4f8;
    }
    auVar5 = ZEXT812(0x3f800000);
    if (fVar6 <= 1.0) {
      auVar5._4_8_ = 0;
      auVar5._0_4_ = fVar6;
    }
    if (auVar5._0_4_ <= local_8) {
      auVar5._4_8_ = auVar5._4_8_;
      auVar5._0_4_ = local_8;
    }
    local_8 = auVar5._0_4_;
  }
  if (DAT_1018d2d4 != 0.0) {
    if (DAT_104cd4f8 == 0) {
      fVar4 = (float10)(*DAT_101b26e0)();
      fVar6 = (float)((fVar4 - (float10)DAT_1018d2d4) / (float10)5.0);
    }
    else {
      fVar4 = (float10)(*DAT_101b26e0)();
      fVar6 = (float)(fVar4 - (float10)DAT_1018d2d4) / (float)DAT_104cd4f8;
    }
    fVar7 = 1.0;
    if (fVar6 <= 1.0) {
      fVar7 = fVar6;
    }
    fVar6 = local_10 / 255.0 - fVar7 * (local_10 / 255.0);
    local_8 = 0.0;
    if (0.0 <= fVar6) {
      local_8 = fVar6;
    }
  }
  if (DAT_10542bbc != 0) {
    local_8 = 0.0;
  }
  return (float10)local_8;
}

