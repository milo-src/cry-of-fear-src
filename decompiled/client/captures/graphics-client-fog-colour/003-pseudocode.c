
void FUN_10093bc0(void)

{
  if (((DAT_1055956c < 2) && (0.0 < DAT_10542b94)) && (0.0 < DAT_10542b98)) {
    glEnable(0xb60);
    glFogi(0xb65,0x2601);
    glFogfv(0xb66,&DAT_10542b88);
    glFogf(0xb62,0x3f800000);
    glHint(0xc54,0x1102);
    glFogf(0xb63,DAT_10542b94);
    glFogf(0xb64,DAT_10542b98);
    return;
  }
  glDisable(0xb60);
  return;
}

