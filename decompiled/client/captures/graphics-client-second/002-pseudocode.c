
void FUN_100866e0(void)

{
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
  glDisable(0xde1);
  glColor4f(0,0,0,0x3f800000);
  glBegin(7);
  glVertex3f(0,0x3f800000,0xbf800000);
  glVertex3f(0x3f800000,0x3f800000,0xbf800000);
  glVertex3f(0x3f800000,0,0xbf800000);
  glVertex3f(0,0,0xbf800000);
  glEnd();
  glEnable(0xb71);
  glEnable(0xb44);
  glEnable(0xde1);
  glMatrixMode(0x1700);
  glPopMatrix();
  glMatrixMode(0x1701);
  glPopMatrix();
  glMatrixMode(0x1700);
  return;
}

