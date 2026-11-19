
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10086890(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  PROC pPVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined4 *in_ECX;
  int iVar8;
  char *pcVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 auStack_20008 [131076];
  
  uVar2 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  iVar3 = (*DAT_10545850)();
  if (iVar3 == 1) {
    pPVar4 = wglGetProcAddress("glActiveTextureARB");
    *in_ECX = pPVar4;
    pPVar4 = wglGetProcAddress("glMultiTexCoord2fARB");
    in_ECX[1] = pPVar4;
    *(undefined2 *)(in_ECX + 2) = 0x101;
    *(undefined1 *)((int)in_ECX + 10) = 0;
    cVar1 = FUN_10089830();
    if (cVar1 == '\0') {
      *(undefined1 *)((int)in_ECX + 9) = 0;
      __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
      return;
    }
    fVar10 = (float10)(*DAT_101b2644)("cg_water");
    if ((int)fVar10 == 0) {
      (*DAT_101b26ac)("Disabling CG Effects\n");
      *(undefined1 *)((int)in_ECX + 9) = 0;
    }
    uVar5 = glGetString(0x1f03);
    uVar5 = FUN_1010d34b(uVar5);
    cVar1 = FUN_1008a280("GL_NV_texture_shader",uVar5);
    if (*(char *)((int)in_ECX + 9) != '\0') {
      fVar11 = 2.0;
      in_ECX[3] = 0x40000000;
      fVar12 = 2.0;
      if (2.0 < (float)DAT_1018f430) {
        do {
          fVar12 = (float)in_ECX[3] + (float)in_ECX[3];
          in_ECX[3] = fVar12;
        } while (fVar12 < (float)DAT_1018f430);
      }
      in_ECX[4] = 0x40000000;
      if (2.0 < (float)DAT_1018f434) {
        do {
          fVar11 = (float)in_ECX[4] + (float)in_ECX[4];
          in_ECX[4] = fVar11;
        } while (fVar11 < (float)DAT_1018f434);
        fVar12 = (float)in_ECX[3];
      }
      in_ECX[8] = 0x100;
      FUN_10088140((int)fVar12,(int)fVar11,in_ECX + 8,0xde1,0x1907);
      FUN_10088140((int)(float)in_ECX[3],(int)(float)in_ECX[4],in_ECX + 5,0xde1,0x1907);
      FUN_10088140(0x100,0x100,in_ECX + 9,0xde1,0x1907);
      FUN_10088140((int)(float)in_ECX[3],(int)(float)in_ECX[4],in_ECX + 6,0xde1,0x1907);
      iVar3 = 0;
      puVar6 = auStack_20008 + 1;
      do {
        iVar8 = 0;
        do {
          puVar6[-1] = (char)iVar8;
          iVar8 = iVar8 + 1;
          *puVar6 = (char)iVar3;
          puVar6 = puVar6 + 2;
        } while (iVar8 < 0x100);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x100);
      glBindTexture(0xde1,in_ECX[9]);
      if (cVar1 == '\0') {
        uVar13 = 0x1909;
        uVar5 = 0x1909;
      }
      else {
        uVar13 = 0x86f5;
        uVar5 = 0x8709;
      }
      glTexImage2D(0xde1,0,uVar5,0x100,0x100,0,uVar13,0x1401,auStack_20008);
      iVar3 = in_ECX[7];
      if (iVar3 == 0) {
        in_ECX[7] = DAT_1018fe8c;
        DAT_1018fe8c = DAT_1018fe8c + 1;
        iVar3 = in_ECX[7];
      }
      FUN_10069630("textures/noise.tga",1,iVar3);
      iVar3 = FUN_100863f0("water_vp.cg",2);
      in_ECX[0xb] = iVar3;
      if (iVar3 == 0) {
        (*DAT_101b26a8)("Error on vertex\n");
      }
      else {
        uVar5 = cgGetNamedParameter(*(undefined4 *)(iVar3 + 0x24),"ModelViewProj");
        in_ECX[0xf] = uVar5;
        uVar5 = cgGetNamedParameter(*(undefined4 *)(in_ECX[0xb] + 0x24),"flScreen");
        in_ECX[0x11] = uVar5;
      }
      iVar3 = FUN_10086560();
      if (iVar3 == 0x1803) {
        pcVar9 = "fp20_black_fp.cg";
        pcVar7 = "fp20_water_fp.cg";
      }
      else {
        pcVar9 = "black_fp.cg";
        pcVar7 = "water_fp.cg";
      }
      uVar5 = FUN_100863f0(pcVar7,1);
      in_ECX[10] = uVar5;
      uVar5 = FUN_100863f0(pcVar9,1);
      in_ECX[0xc] = uVar5;
      iVar3 = FUN_100863f0("black_vp.cg",2);
      in_ECX[0xd] = iVar3;
      uVar5 = cgGetNamedParameter(*(undefined4 *)(iVar3 + 0x24),"ModelViewProj");
      in_ECX[0xe] = uVar5;
      if (in_ECX[0xc] == 0) {
        (*DAT_101b26a8)("Error Loading Black Shader\n");
      }
      if (in_ECX[10] == 0) {
        (*DAT_101b26a8)("Error on fragment\n");
      }
      else {
        uVar5 = cgGetNamedParameter(*(undefined4 *)(in_ECX[10] + 0x24),"TexOffset");
        in_ECX[0x10] = uVar5;
      }
      (*(code *)*in_ECX)(0x84c0);
    }
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

