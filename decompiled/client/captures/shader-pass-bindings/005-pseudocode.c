
void FUN_10071df0(float param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  int local_8;
  
  if (*(float *)(DAT_104cdd94 + 0xc) != 0.0) {
    fVar6 = (float10)(*DAT_101b26e0)();
    if (((((*(float *)(DAT_104cd534 + 0xc) != 0.0) || (DAT_1018d270 != 0)) || (2 < DAT_1054506c)) ||
        ((float)fVar6 < *(float *)(in_ECX + 0x328))) &&
       ((param_1 != 0.0 && (FUN_10064c10(DAT_1018f430,DAT_1018f434,0,0), DAT_104d26e8 != 0)))) {
      glDisable(0xc60);
      glDisable(0xc61);
      iVar4 = (int)(((float)DAT_1018f430 / 640.0) * 32.0 + 0.5);
      param_1 = (float)(int)(((float)DAT_1018f434 / 480.0) * 24.0 + 0.5);
      iVar1 = (int)(*(float *)(DAT_104cdd98 + 0xc) * ((float)DAT_1018f430 / 640.0) + 0.5);
      if (iVar1 < 1) {
        iVar1 = 1;
      }
      iVar2 = (int)(*(float *)(DAT_104cdd9c + 0xc) * ((float)DAT_1018f434 / 480.0) + 0.5);
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      local_8 = DAT_1018f430 / iVar1 + 1;
      if (0 < local_8) {
        do {
          (*DAT_101be64c)(0xde1,DAT_104d26e8);
          (*DAT_101be698)(0xbe2);
          (*DAT_101be650)(0x302,0x303);
          (*DAT_101be664)(0x3f800000,0x3f800000,0x3f800000,*(undefined4 *)(DAT_104cdda0 + 0xc));
          param_1 = (float)((int)param_1 + iVar2);
          iVar4 = iVar4 + iVar1;
          glBegin(7);
          glTexCoord2f(0,0x3f800000);
          iVar3 = (int)param_1 / 2;
          iVar5 = iVar4 / 2;
          glVertex2f((float)(DAT_1018f430 / 2 - iVar5),(float)(DAT_1018f434 / 2 - iVar3));
          glTexCoord2f(0x3f800000,0x3f800000);
          glVertex2f((float)(DAT_1018f430 / 2 + iVar5),(float)(DAT_1018f434 / 2 - iVar3));
          glTexCoord2f(0x3f800000,0);
          glVertex2f((float)(DAT_1018f430 / 2 + iVar5),(float)(DAT_1018f434 / 2 + iVar3));
          glTexCoord2f(0,0);
          glVertex2f((float)(DAT_1018f430 / 2 - iVar5),(float)(DAT_1018f434 / 2 + iVar3));
          glEnd();
          (*DAT_101be688)(0xbe2);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
    }
  }
  return;
}

