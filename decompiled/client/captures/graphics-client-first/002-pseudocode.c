
void FUN_10086d10(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  code *pcVar5;
  float10 fVar6;
  double dVar7;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined8 local_2c;
  float local_24;
  float local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  cVar2 = *(char *)((int)in_ECX + 9);
  local_1c = in_ECX;
  if (cVar2 == '\0') {
    FUN_10086890();
    cVar2 = *(char *)((int)in_ECX + 9);
  }
  *(undefined1 *)((int)in_ECX + 10) = 1;
  if (cVar2 != '\0') {
    glGetIntegerv(0x8069,&DAT_104cd4f4);
    glDisable(0xbe2);
    glEnable(0xde1);
    glBindTexture(0xde1,in_ECX[8]);
    glCopyTexSubImage2D(0xde1,0,0,0,0,0,DAT_1018f430,DAT_1018f434);
    FUN_100866e0();
    glDisable(0xb44);
    glDepthMask(0);
    glBindTexture(0xde1,in_ECX[7]);
    glColor4f(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    iVar4 = 0;
    do {
      iVar3 = (*DAT_101b26dc)(iVar4);
      pcVar5 = glVertex3fv_exref;
      if ((iVar3 != 0) && (*(short *)(iVar3 + 0x2e8) == -3)) {
        local_30 = *(float *)(iVar3 + 0x33c);
        local_70 = *(float *)(iVar3 + 0x330);
        local_34 = *(float *)(iVar3 + 0x338);
        local_74 = *(float *)(iVar3 + 0x32c);
        fVar6 = (float10)(*DAT_101b2644)("cl_waterspeed_x");
        local_24 = (float)fVar6;
        fVar6 = (float10)(*DAT_101b26e0)();
        local_24 = (float)(fVar6 / (float10)local_24);
        fVar6 = (float10)(*DAT_101b2644)("cl_waterspeed_y");
        local_20 = (float)fVar6;
        fVar6 = (float10)(*DAT_101b26e0)();
        dVar7 = (double)fVar6;
        local_2c = dVar7;
        FUN_100f8160();
        local_9c = *(float *)(iVar3 + 0x340) + 1.0;
        local_88 = *(float *)(iVar3 + 0x330);
        local_a0 = *(undefined4 *)(iVar3 + 0x33c);
        local_20 = (float)(dVar7 / (double)local_20);
        local_a4 = *(undefined4 *)(iVar3 + 0x32c);
        local_68 = *(float *)(iVar3 + 0x338);
        local_8c = local_a4;
        local_84 = local_9c;
        local_64 = local_88;
        local_60 = local_9c;
        local_50 = local_68;
        local_4c = local_a0;
        local_48 = local_9c;
        glBegin(7);
        local_80 = local_24 + 0.0;
        local_7c = local_20 + 0.0;
        local_2c = (double)CONCAT44(local_7c,(undefined4)local_2c);
        local_78 = local_7c + 0.0;
        local_6c = local_80;
        local_38 = local_78;
        glTexCoord2fv(&local_80);
        pcVar5 = glVertex3fv_exref;
        glVertex3fv(&local_8c);
        local_98 = local_6c;
        local_94 = (local_30 - local_70) * 0.0078125 + local_20;
        local_90 = local_38;
        local_30 = local_94;
        glTexCoord2fv(&local_98);
        glVertex3fv(&local_a4);
        local_44 = (local_34 - local_74) * 0.0078125 + local_24;
        local_40 = local_30;
        local_3c = local_38;
        local_34 = local_44;
        glTexCoord2fv(&local_44);
        glVertex3fv(&local_50);
        local_5c = local_34;
        local_58 = local_2c._4_4_;
        local_54 = local_38;
        glTexCoord2fv(&local_5c);
        glVertex3fv(&local_68);
        glEnd();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x400);
    glEnable(0xb44);
    glDepthMask(1);
    glBindTexture(0xde1,in_ECX[6]);
    glCopyTexSubImage2D(0xde1,0,0,0,0,0,DAT_1018f430,DAT_1018f434);
    FUN_100866e0();
    glDisable(0xde1);
    glColor4f(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    glDisable(0xb44);
    iVar4 = 0;
    do {
      iVar3 = (*DAT_101b26dc)(iVar4);
      if ((iVar3 != 0) && (*(short *)(iVar3 + 0x2e8) == -3)) {
        local_68 = *(float *)(iVar3 + 0x32c);
        local_60 = *(float *)(iVar3 + 0x340);
        local_64 = *(float *)(iVar3 + 0x330);
        local_58 = *(undefined4 *)(iVar3 + 0x33c);
        local_50 = *(float *)(iVar3 + 0x338);
        local_5c = local_68;
        local_54 = local_60;
        local_4c = local_58;
        local_48 = local_60;
        local_44 = local_50;
        local_40 = local_64;
        local_3c = local_60;
        glBegin(7);
        (*pcVar5)(&local_68);
        (*pcVar5)(&local_5c);
        (*pcVar5)(&local_50);
        (*pcVar5)(&local_44);
        glEnd();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x400);
    glEnable(0xb44);
    glDepthMask(0);
    glBindTexture(0xde1,in_ECX[5]);
    glCopyTexSubImage2D(0xde1,0,0,0,0,0,DAT_1018f430,DAT_1018f434);
    FUN_100866e0();
    glBindTexture(0xde1,in_ECX[8]);
    FUN_100875d0();
    cVar2 = FUN_10089830();
    if (cVar2 != '\0') {
      cgGLEnableProfile(DAT_10545054);
    }
    cVar2 = FUN_10089830();
    if (cVar2 != '\0') {
      cgGLEnableProfile(DAT_10545058);
    }
    iVar4 = in_ECX[0xb];
    local_2c._4_4_ = iVar4;
    if (iVar4 == 0) {
      (*DAT_101b26a8)("Error on Vertex\n");
    }
    else {
      cVar2 = FUN_10089830();
      if (cVar2 != '\0') {
        cgGLBindProgram(*(undefined4 *)(local_2c._4_4_ + 0x24));
      }
    }
    local_2c = (double)CONCAT44(in_ECX[10],(undefined4)local_2c);
    if (in_ECX[10] == 0) {
      (*DAT_101b26a8)("Error on fragment\n");
    }
    else {
      cVar2 = FUN_10089830();
      if (cVar2 != '\0') {
        cgGLBindProgram(*(undefined4 *)(local_2c._4_4_ + 0x24));
      }
    }
    (*(code *)*in_ECX)(0x84c0);
    glEnable(0xde1);
    glBindTexture(0xde1,in_ECX[6]);
    (*(code *)*in_ECX)(0x84c1);
    glEnable(0xde1);
    glBindTexture(0xde1,in_ECX[9]);
    (*(code *)*in_ECX)(0x84c2);
    glEnable(0xde1);
    glBindTexture(0xde1,in_ECX[8]);
    (*(code *)*in_ECX)(0x84c3);
    glEnable(0xde1);
    glBindTexture(0xde1,in_ECX[5]);
    glEnable(0xbe2);
    glBlendFunc(0x302,0x303);
    glMatrixMode(0x1700);
    glPushMatrix();
    glLoadIdentity();
    glMatrixMode(0x1701);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0,0,0x3ff00000,0,0x3ff00000,0,0xa0000000,0x3fb99999,0,0x40b00000);
    puVar1 = local_1c;
    cgGLSetStateMatrixParameter(local_1c[0xf],7,0);
    local_18 = 0;
    uStack_14 = 0x3d4ccccd;
    uStack_10 = 0;
    uStack_c = 0x3d4ccccd;
    cgGLSetParameter4fv();
    cgGLSetParameter1f(puVar1[0x11],0x3f770a3d);
    glDisable(0xb71);
    glDisable(0xb44);
    glColor4f(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    glBegin(7);
    glTexCoord2f(0,0);
    glVertex3f(0,0x3f800000,0xbf800000);
    glTexCoord2f((float)DAT_1018f430 / (float)local_1c[3],0);
    glVertex3f(0x3f800000,0x3f800000,0xbf800000);
    glTexCoord2f((float)DAT_1018f430 / (float)local_1c[3],(float)DAT_1018f434 / (float)local_1c[4]);
    glVertex3f(0x3f800000,0,0xbf800000);
    glTexCoord2f(0,(float)DAT_1018f434 / (float)local_1c[4]);
    glVertex3f(0,0,0xbf800000);
    glEnd();
    glMatrixMode(0x1701);
    glPopMatrix();
    glMatrixMode(0x1700);
    glPopMatrix();
    (*(code *)*local_1c)(0x84c1);
    glDisable(0xde1);
    (*(code *)*local_1c)(0x84c2);
    glDisable(0xde1);
    (*(code *)*local_1c)(0x84c3);
    glDisable(0xde1);
    (*(code *)*local_1c)(0x84c0);
    cVar2 = FUN_10089830();
    if (cVar2 != '\0') {
      cgGLDisableProfile(DAT_10545058);
    }
    cVar2 = FUN_10089830();
    if (cVar2 != '\0') {
      cgGLDisableProfile(DAT_10545054);
    }
    glEnable(0xb71);
    glEnable(0xb44);
    glDisable(0xbe2);
    glBindTexture(0xde1,DAT_104cd4f4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

