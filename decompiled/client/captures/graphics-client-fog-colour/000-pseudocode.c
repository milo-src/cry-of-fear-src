
void FUN_1005d7a0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if (DAT_10542bb4 != 0) {
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
    uVar10 = 0x3f800000;
    fVar7 = (float10)(*DAT_101b2714)(0,0x3f800000,0x3f800000);
    fVar9 = (float)fVar7;
    fVar7 = (float10)(*DAT_101b2714)(0,0x3f800000,fVar9);
    fVar8 = (float)fVar7;
    fVar7 = (float10)(*DAT_101b2714)();
    glColor4f((float)fVar7,fVar8,fVar9,uVar10);
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
  }
  if (DAT_104cd504 != '\0') {
    FUN_1005e440();
    DAT_104cd504 = '\0';
  }
  iVar1 = FUN_10053c70();
  if ((iVar1 != 0) && (*(float *)(DAT_104cd4ec + 0xc) != 0.0)) {
    fVar7 = (float10)FUN_1005e230();
    local_1c = (float)fVar7;
    if ((0.0 < local_1c) && (local_1c <= 1.0)) {
      FUN_1005e440();
      (*DAT_101be6d4)(0x1700);
      (*DAT_101be6f0)();
      (*DAT_101be6cc)();
      (*DAT_101be6d4)(0x1701);
      (*DAT_101be6f0)();
      (*DAT_101be6cc)();
      (*DAT_101be6dc)(0,0,0x3ff00000,0,0x3ff00000,0,0x9999999a,0x3fb99999,0,0x40590000);
      uVar2 = (*DAT_101be6c8)(0xbe2);
      local_28 = uVar2 & 0xff;
      (*DAT_101be698)(0xbe2);
      (*DAT_101be664)(0x3f800000,0x3f800000,0x3f800000,local_1c);
      (*DAT_101be650)(0x302,0x303);
      if ((DAT_101be77c == 0) || (*(float *)(DAT_104cd520 + 0xc) != 0.0)) {
        FUN_1005e610();
        (*DAT_101be764)(0x84c0);
        (*DAT_101be6bc)(0x2300,0x2200,&local_34);
        local_18 = 0x3f000000;
        uStack_14 = 0x3f000000;
        uStack_10 = 0x3f000000;
        uStack_c = 0x3f000000;
        (*DAT_101be724)(0x2300,0x2200,0x8570);
        (*DAT_101be71c)(0x2300,0x2201,&local_18);
        (*DAT_101be724)(0x2300,0x8571,0x8575);
        (*DAT_101be724)(0x2300,0x8580,0x1702);
        (*DAT_101be724)(0x2300,0x8581,0x8577);
        (*DAT_101be724)(0x2300,0x8582,0x8576);
        (*DAT_101be724)(0x2300,0x8573,1);
        (*DAT_101be764)(0x84c1);
        (*DAT_101be6bc)(0x2300,0x2200,&local_2c);
        (*DAT_101be698)(0xde1);
        (*DAT_101be724)(0x2300,0x2200,0x8570);
        (*DAT_101be724)(0x2300,0x8571,0x86ae);
        (*DAT_101be724)(0x2300,0x8580,0x8578);
        (*DAT_101be724)(0x2300,0x8581,0x1702);
        (*DAT_101be724)(0x2300,0x8573,1);
        (*DAT_101be6b8)(0x8069,&local_30);
        (*DAT_101be64c)(0xde1,DAT_104cd500);
        (*DAT_101be764)(0x84c0);
      }
      else {
        local_18 = 0x3ea3d70a;
        uStack_14 = 0x3f170a3d;
        uStack_10 = 0x3db851ec;
        uStack_c = 0;
        (*DAT_101be784)(0x854e,1);
        (*DAT_101be788)(0x852a,&local_18);
        (*DAT_101be78c)(0x8550,0x1907,0x8523,0x852a,0x853c,0x1907);
        (*DAT_101be78c)(0x8550,0x1907,0x8524,0x84c0,0x853c,0x1907);
        (*DAT_101be790)(0x8550,0x1907,0x852e,0x8530,0x8530,0,0,1,0,0);
        (*DAT_101be794)(0x8523,0,0x8536,0x1907);
        (*DAT_101be794)(0x8524,0,0x8536,0x1907);
        (*DAT_101be794)(0x8525,0,0x8536,0x1907);
        (*DAT_101be794)(0x8526,0x852e,0x8536,0x1907);
        (*DAT_101be794)(0x8527,0,0x8536,0x1907);
        (*DAT_101be794)(0x8528,0,0x8536,0x1907);
        (*DAT_101be794)(0x8529,0x852c,0x8536,0x1906);
        (*DAT_101be698)(0x8522);
      }
      iVar1 = FUN_1005e710();
      if (iVar1 == 0) {
        (*DAT_101be6b8)(0x8069,&local_24);
        (*DAT_101be64c)(0xde1,DAT_104cd4fc);
        iVar1 = 0;
        if (0 < DAT_1018f434) {
          local_1c = (float)(DAT_1018f434 + -0x100);
          iVar3 = DAT_1018f430;
          iVar4 = DAT_1018f434;
          iVar5 = DAT_1018f434;
          do {
            iVar6 = 0;
            if (0 < iVar3) {
              do {
                (*DAT_101be674)(0xde1,0,0,0,iVar6,iVar1,0x100,0x100);
                (*DAT_101be648)(7);
                (*DAT_101be714)(0,0);
                local_20 = (float)iVar6;
                (*DAT_101be748)(local_20 / (float)DAT_1018f430,(float)iVar5 / (float)DAT_1018f434,
                                0xbf800000);
                (*DAT_101be714)(0x3f800000,0);
                iVar6 = iVar6 + 0x100;
                (*DAT_101be748)((float)iVar6 / (float)DAT_1018f430,
                                (float)iVar5 / (float)DAT_1018f434,0xbf800000);
                (*DAT_101be714)(0x3f800000,0x3f800000);
                (*DAT_101be748)((float)iVar6 / (float)DAT_1018f430,
                                (float)(int)local_1c / (float)DAT_1018f434,0xbf800000);
                (*DAT_101be714)(0,0x3f800000);
                (*DAT_101be748)(local_20 / (float)DAT_1018f430,
                                (float)(int)local_1c / (float)DAT_1018f434,0xbf800000);
                (*DAT_101be6a0)();
                iVar3 = DAT_1018f430;
                iVar4 = DAT_1018f434;
              } while (iVar6 < DAT_1018f430);
            }
            iVar1 = iVar1 + 0x100;
            local_1c = (float)((int)local_1c + -0x100);
            iVar5 = iVar5 + -0x100;
          } while (iVar1 < iVar4);
        }
        (*DAT_101be64c)(0xde1,local_24);
        uVar2 = local_28;
      }
      else {
        (*DAT_101be698)(0x84f5);
        (*DAT_101be64c)(0x84f5,DAT_104cd4fc);
        (*DAT_101be674)(0x84f5,0,0,0,0,0,DAT_1018f430,DAT_1018f434);
        (*DAT_101be648)(7);
        FUN_1005e100(DAT_1018f430,DAT_1018f434,0,0);
        (*DAT_101be6a0)();
        (*DAT_101be688)(0x84f5);
        uVar2 = uVar2 & 0xff;
      }
      if ((DAT_101be77c == 0) || (*(float *)(DAT_104cd520 + 0xc) != 0.0)) {
        (*DAT_101be764)(0x84c1);
        (*DAT_101be724)(0x2300,0x2200,local_2c);
        (*DAT_101be64c)(0xde1,local_30);
        (*DAT_101be688)(0xde1);
        (*DAT_101be764)(0x84c0);
        (*DAT_101be724)(0x2300,0x2200,local_34);
      }
      else {
        (*DAT_101be688)(0x8522);
      }
      (*DAT_101be6d4)(0x1701);
      (*DAT_101be6f4)();
      (*DAT_101be6d4)(0x1700);
      (*DAT_101be6f4)();
      if (uVar2 == 0) {
        (*DAT_101be688)(0xbe2);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

