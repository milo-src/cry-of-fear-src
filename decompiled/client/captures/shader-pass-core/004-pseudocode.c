
void FUN_100875d0(void)

{
  int in_ECX;
  
  glMatrixMode(0x1700);
  glPushMatrix();
  glLoadIdentity();
  glMatrixMode(0x1701);
  glPushMatrix();
  glLoadIdentity();
  glOrtho(0,0,0x3ff00000,0,0x3ff00000,0,0xa0000000,0x3fb99999,0,0x40590000);
  glDisable(0xb71);
  glCullFace(0);
  glDisable(0xb44);
  glColor4f(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  glBegin(7);
  glTexCoord2f(0,0);
  glVertex3f(0,0x3f800000,0xbf800000);
  glTexCoord2f((float)DAT_1018f430 / *(float *)(in_ECX + 0xc),0);
  glVertex3f(0x3f800000,0x3f800000,0xbf800000);
  glTexCoord2f((float)DAT_1018f430 / *(float *)(in_ECX + 0xc),
               (float)DAT_1018f434 / *(float *)(in_ECX + 0x10));
  glVertex3f(0x3f800000,0,0xbf800000);
  glTexCoord2f(0,(float)DAT_1018f434 / *(float *)(in_ECX + 0x10));
  glVertex3f(0,0,0xbf800000);
  glEnd();
  glEnable(0xb71);
  glEnable(0xb44);
  glMatrixMode(0x1700);
  glPopMatrix();
  glMatrixMode(0x1701);
  glPopMatrix();
  glMatrixMode(0x1700);
  return;
}

