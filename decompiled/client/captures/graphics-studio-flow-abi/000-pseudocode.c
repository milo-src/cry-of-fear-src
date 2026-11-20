
bool FUN_10053c80(void)

{
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  FARPROC pFVar6;
  FARPROC pFVar7;
  FARPROC pFVar8;
  FARPROC pFVar9;
  FARPROC pFVar10;
  FARPROC pFVar11;
  FARPROC pFVar12;
  FARPROC pFVar13;
  FARPROC pFVar14;
  FARPROC pFVar15;
  FARPROC pFVar16;
  FARPROC pFVar17;
  FARPROC pFVar18;
  FARPROC pFVar19;
  FARPROC pFVar20;
  FARPROC pFVar21;
  FARPROC pFVar22;
  FARPROC pFVar23;
  FARPROC pFVar24;
  FARPROC pFVar25;
  FARPROC pFVar26;
  FARPROC pFVar27;
  FARPROC pFVar28;
  FARPROC pFVar29;
  FARPROC pFVar30;
  FARPROC pFVar31;
  FARPROC pFVar32;
  FARPROC pFVar33;
  FARPROC pFVar34;
  FARPROC pFVar35;
  FARPROC pFVar36;
  FARPROC pFVar37;
  FARPROC pFVar38;
  FARPROC pFVar39;
  FARPROC pFVar40;
  FARPROC pFVar41;
  FARPROC pFVar42;
  FARPROC pFVar43;
  FARPROC pFVar44;
  FARPROC pFVar45;
  FARPROC pFVar46;
  FARPROC pFVar47;
  FARPROC pFVar48;
  FARPROC pFVar49;
  FARPROC pFVar50;
  FARPROC pFVar51;
  FARPROC pFVar52;
  FARPROC pFVar53;
  FARPROC pFVar54;
  FARPROC pFVar55;
  FARPROC pFVar56;
  FARPROC pFVar57;
  FARPROC pFVar58;
  FARPROC pFVar59;
  FARPROC pFVar60;
  FARPROC pFVar61;
  FARPROC pFVar62;
  FARPROC pFVar63;
  FARPROC pFVar64;
  FARPROC pFVar65;
  FARPROC pFVar66;
  FARPROC pFVar67;
  FARPROC pFVar68;
  FARPROC pFVar69;
  FARPROC pFVar70;
  FARPROC pFVar71;
  int in_ECX;
  
  pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glAccum");
  *(FARPROC *)(in_ECX + 0x48) = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glAccum");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar2 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glAlphaFunc");
  *(FARPROC *)(in_ECX + 0x4c) = pFVar2;
  if (pFVar2 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glAlphaFunc");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar3 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glBegin");
  *(FARPROC *)(in_ECX + 0x50) = pFVar3;
  if (pFVar3 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glBegin");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar4 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glBindTexture");
  *(FARPROC *)(in_ECX + 0x54) = pFVar4;
  if (pFVar4 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glBindTexture");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar5 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glBlendFunc");
  *(FARPROC *)(in_ECX + 0x58) = pFVar5;
  if (pFVar5 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glBlendFunc");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar6 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glClear");
  *(FARPROC *)(in_ECX + 0x60) = pFVar6;
  if (pFVar6 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glClear");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar7 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glClearColor");
  *(FARPROC *)(in_ECX + 100) = pFVar7;
  if (pFVar7 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glClearColor");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar8 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glClipPlane");
  *(FARPROC *)(in_ECX + 0x5c) = pFVar8;
  if (pFVar8 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glClipPlane");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar9 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glColor3f");
  *(FARPROC *)(in_ECX + 0x68) = pFVar9;
  if (pFVar9 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glColor3f");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar10 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glColor4f");
  *(FARPROC *)(in_ECX + 0x6c) = pFVar10;
  if (pFVar10 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glColor4f");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar11 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glColor4ub");
  *(FARPROC *)(in_ECX + 0x70) = pFVar11;
  if (pFVar11 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glColor4ub");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar12 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glColorMask");
  *(FARPROC *)(in_ECX + 0x74) = pFVar12;
  if (pFVar12 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glColorMask");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar13 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glCopyTexImage2D");
  *(FARPROC *)(in_ECX + 0x78) = pFVar13;
  if (pFVar13 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glCopyTexImage2D");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar14 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glCopyTexSubImage2D");
  *(FARPROC *)(in_ECX + 0x7c) = pFVar14;
  if (pFVar14 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glCopyTexSubImage2D");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar15 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glCullFace");
  *(FARPROC *)(in_ECX + 0x80) = pFVar15;
  if (pFVar15 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glCullFace");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar16 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glDepthMask");
  *(FARPROC *)(in_ECX + 0x84) = pFVar16;
  if (pFVar16 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glDepthMask");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar17 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glDepthRange");
  *(FARPROC *)(in_ECX + 0x88) = pFVar17;
  if (pFVar17 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glDepthRange");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar18 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glDepthFunc");
  *(FARPROC *)(in_ECX + 0x8c) = pFVar18;
  if (pFVar18 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glDepthFunc");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar19 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glDisable");
  *(FARPROC *)(in_ECX + 0x90) = pFVar19;
  if (pFVar19 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glDisable");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar20 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glDisableClientState");
  *(FARPROC *)(in_ECX + 0x94) = pFVar20;
  if (pFVar20 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glDisableClientState");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar21 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glDrawArrays");
  *(FARPROC *)(in_ECX + 0x98) = pFVar21;
  if (pFVar21 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glDrawArrays");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar22 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glDrawBuffer");
  *(FARPROC *)(in_ECX + 0x9c) = pFVar22;
  if (pFVar22 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glDrawBuffer");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar23 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glEnable");
  *(FARPROC *)(in_ECX + 0xa0) = pFVar23;
  if (pFVar23 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glEnable");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar24 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glEnableClientState");
  *(FARPROC *)(in_ECX + 0xa4) = pFVar24;
  if (pFVar24 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glEnableClientState");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar25 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glEnd");
  *(FARPROC *)(in_ECX + 0xa8) = pFVar25;
  if (pFVar25 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glEnd");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar26 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glFrustum");
  *(FARPROC *)(in_ECX + 0xac) = pFVar26;
  if (pFVar26 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glFrustum");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar27 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glGetDoublev");
  *(FARPROC *)(in_ECX + 0xb8) = pFVar27;
  if (pFVar27 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glGetDoublev");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar28 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glGetFloatv");
  *(FARPROC *)(in_ECX + 0xbc) = pFVar28;
  if (pFVar28 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glGetFloatv");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar29 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glGetIntegerv");
  *(FARPROC *)(in_ECX + 0xc0) = pFVar29;
  if (pFVar29 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glGetIntegerv");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar30 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glGetTexEnviv");
  *(FARPROC *)(in_ECX + 0xc4) = pFVar30;
  if (pFVar30 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glGetTexEnviv");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar31 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glGetTexImage");
  *(FARPROC *)(in_ECX + 200) = pFVar31;
  if (pFVar31 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glGetTexImage");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar32 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glGetTexLevelParameteriv");
  *(FARPROC *)(in_ECX + 0xcc) = pFVar32;
  if (pFVar32 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glGetTexLevelParameteriv");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar33 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glGetString");
  *(FARPROC *)(in_ECX + 0xb0) = pFVar33;
  if (pFVar33 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glGetString");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar34 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glGetError");
  *(FARPROC *)(in_ECX + 0xb4) = pFVar34;
  if (pFVar34 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glGetError");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar35 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glIsEnabled");
  *(FARPROC *)(in_ECX + 0xd0) = pFVar35;
  if (pFVar35 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glIsEnabled");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar36 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glLoadIdentity");
  *(FARPROC *)(in_ECX + 0xd4) = pFVar36;
  if (pFVar36 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glLoadIdentity");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar37 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glLoadMatrixf");
  *(FARPROC *)(in_ECX + 0xd8) = pFVar37;
  if (pFVar37 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glLoadMatrixf");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar38 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glMatrixMode");
  *(FARPROC *)(in_ECX + 0xdc) = pFVar38;
  if (pFVar38 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glMatrixMode");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar39 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glMultMatrixd");
  *(FARPROC *)(in_ECX + 0xe0) = pFVar39;
  if (pFVar39 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glMultMatrixd");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar40 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glOrtho");
  *(FARPROC *)(in_ECX + 0xe4) = pFVar40;
  if (pFVar40 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glOrtho");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar41 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glPopAttrib");
  *(FARPROC *)(in_ECX + 0xe8) = pFVar41;
  if (pFVar41 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glPopAttrib");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar42 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glPushAttrib");
  *(FARPROC *)(in_ECX + 0xec) = pFVar42;
  if (pFVar42 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glPushAttrib");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar43 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glPixelStorei");
  *(FARPROC *)(in_ECX + 0xf0) = pFVar43;
  if (pFVar43 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glPixelStorei");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar44 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glPolygonOffset");
  *(FARPROC *)(in_ECX + 0xf4) = pFVar44;
  if (pFVar44 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glPolygonOffset");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar45 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glPushMatrix");
  *(FARPROC *)(in_ECX + 0xf8) = pFVar45;
  if (pFVar45 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glPushMatrix");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar46 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glPopMatrix");
  *(FARPROC *)(in_ECX + 0xfc) = pFVar46;
  if (pFVar46 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glPopMatrix");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar47 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glReadBuffer");
  *(FARPROC *)(in_ECX + 0x100) = pFVar47;
  if (pFVar47 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glReadBuffer");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar48 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glRotatef");
  *(FARPROC *)(in_ECX + 0x104) = pFVar48;
  if (pFVar48 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glRotatef");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar49 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glScalef");
  *(FARPROC *)(in_ECX + 0x108) = pFVar49;
  if (pFVar49 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glScalef");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar50 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glShadeModel");
  *(FARPROC *)(in_ECX + 0x10c) = pFVar50;
  if (pFVar50 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glShadeModel");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar51 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glStencilFunc");
  *(FARPROC *)(in_ECX + 0x110) = pFVar51;
  if (pFVar51 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glStencilFunc");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar52 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glStencilOp");
  *(FARPROC *)(in_ECX + 0x114) = pFVar52;
  if (pFVar52 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glStencilOp");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar53 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glStencilMask");
  *(FARPROC *)(in_ECX + 0x118) = pFVar53;
  if (pFVar53 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glStencilMask");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar54 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTexCoord2f");
  *(FARPROC *)(in_ECX + 0x11c) = pFVar54;
  if (pFVar54 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTexCoord2f");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar55 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTexCoordPointer");
  *(FARPROC *)(in_ECX + 0x120) = pFVar55;
  if (pFVar55 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTexCoordPointer");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar56 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTexEnvfv");
  *(FARPROC *)(in_ECX + 0x124) = pFVar56;
  if (pFVar56 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTexEnvfv");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar57 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTexEnvf");
  *(FARPROC *)(in_ECX + 0x128) = pFVar57;
  if (pFVar57 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTexEnvf");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar58 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTexEnvi");
  *(FARPROC *)(in_ECX + 300) = pFVar58;
  if (pFVar58 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTexEnvi");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar59 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTexGenfv");
  *(FARPROC *)(in_ECX + 0x130) = pFVar59;
  if (pFVar59 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTexGenfv");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar60 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTexGeni");
  *(FARPROC *)(in_ECX + 0x134) = pFVar60;
  if (pFVar60 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTexGeni");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar61 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTexImage1D");
  *(FARPROC *)(in_ECX + 0x138) = pFVar61;
  if (pFVar61 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTexImage1D");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar62 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTexImage2D");
  *(FARPROC *)(in_ECX + 0x13c) = pFVar62;
  if (pFVar62 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTexImage2D");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar63 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTexParameteri");
  *(FARPROC *)(in_ECX + 0x140) = pFVar63;
  if (pFVar63 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTexParameteri");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar64 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTexParameterf");
  *(FARPROC *)(in_ECX + 0x144) = pFVar64;
  if (pFVar64 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTexParameterf");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar65 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTranslated");
  *(FARPROC *)(in_ECX + 0x148) = pFVar65;
  if (pFVar65 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTranslated");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar66 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glTranslatef");
  *(FARPROC *)(in_ECX + 0x14c) = pFVar66;
  if (pFVar66 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glTranslatef");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar67 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glVertex3f");
  *(FARPROC *)(in_ECX + 0x150) = pFVar67;
  if (pFVar67 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glVertex3f");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar68 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glVertex3fv");
  *(FARPROC *)(in_ECX + 0x154) = pFVar68;
  if (pFVar68 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glVertex3fv");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar69 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glVertexPointer");
  *(FARPROC *)(in_ECX + 0x158) = pFVar69;
  if (pFVar69 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glVertexPointer");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar70 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"glViewport");
  *(FARPROC *)(in_ECX + 0x15c) = pFVar70;
  if (pFVar70 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("glViewport");
    FUN_1007d400(&DAT_101417f8);
  }
  pFVar71 = GetProcAddress(*(HMODULE *)(in_ECX + 0x210),"wglGetProcAddress");
  *(FARPROC *)(in_ECX + 0x160) = pFVar71;
  if (pFVar71 == (FARPROC)0x0) {
    FUN_1007d400("Error loading opengl function ");
    FUN_1007d400("wglGetProcAddress");
    FUN_1007d400(&DAT_101417f8);
    return false;
  }
  return pFVar70 != (FARPROC)0x0 &&
         (pFVar69 != (FARPROC)0x0 &&
         (pFVar68 != (FARPROC)0x0 &&
         (pFVar67 != (FARPROC)0x0 &&
         (pFVar66 != (FARPROC)0x0 &&
         (pFVar65 != (FARPROC)0x0 &&
         (pFVar64 != (FARPROC)0x0 &&
         (pFVar63 != (FARPROC)0x0 &&
         (pFVar62 != (FARPROC)0x0 &&
         (pFVar61 != (FARPROC)0x0 &&
         (pFVar60 != (FARPROC)0x0 &&
         (pFVar59 != (FARPROC)0x0 &&
         (pFVar58 != (FARPROC)0x0 &&
         (pFVar57 != (FARPROC)0x0 &&
         (pFVar56 != (FARPROC)0x0 &&
         (pFVar55 != (FARPROC)0x0 &&
         (pFVar54 != (FARPROC)0x0 &&
         (pFVar53 != (FARPROC)0x0 &&
         (pFVar52 != (FARPROC)0x0 &&
         (pFVar51 != (FARPROC)0x0 &&
         (pFVar50 != (FARPROC)0x0 &&
         (pFVar49 != (FARPROC)0x0 &&
         (pFVar48 != (FARPROC)0x0 &&
         (pFVar47 != (FARPROC)0x0 &&
         (pFVar46 != (FARPROC)0x0 &&
         (pFVar45 != (FARPROC)0x0 &&
         (pFVar44 != (FARPROC)0x0 &&
         (pFVar43 != (FARPROC)0x0 &&
         (pFVar42 != (FARPROC)0x0 &&
         (pFVar41 != (FARPROC)0x0 &&
         (pFVar40 != (FARPROC)0x0 &&
         (pFVar39 != (FARPROC)0x0 &&
         (pFVar38 != (FARPROC)0x0 &&
         (pFVar37 != (FARPROC)0x0 &&
         (pFVar36 != (FARPROC)0x0 &&
         (pFVar35 != (FARPROC)0x0 &&
         (pFVar34 != (FARPROC)0x0 &&
         (pFVar33 != (FARPROC)0x0 &&
         (pFVar32 != (FARPROC)0x0 &&
         (pFVar31 != (FARPROC)0x0 &&
         (pFVar30 != (FARPROC)0x0 &&
         (pFVar29 != (FARPROC)0x0 &&
         (pFVar28 != (FARPROC)0x0 &&
         (pFVar27 != (FARPROC)0x0 &&
         (pFVar26 != (FARPROC)0x0 &&
         (pFVar25 != (FARPROC)0x0 &&
         (pFVar24 != (FARPROC)0x0 &&
         (pFVar23 != (FARPROC)0x0 &&
         (pFVar22 != (FARPROC)0x0 &&
         (pFVar21 != (FARPROC)0x0 &&
         (pFVar20 != (FARPROC)0x0 &&
         (pFVar19 != (FARPROC)0x0 &&
         (pFVar18 != (FARPROC)0x0 &&
         (pFVar17 != (FARPROC)0x0 &&
         (pFVar16 != (FARPROC)0x0 &&
         (pFVar15 != (FARPROC)0x0 &&
         (pFVar14 != (FARPROC)0x0 &&
         (pFVar13 != (FARPROC)0x0 &&
         (pFVar12 != (FARPROC)0x0 &&
         (pFVar11 != (FARPROC)0x0 &&
         (pFVar10 != (FARPROC)0x0 &&
         (pFVar9 != (FARPROC)0x0 &&
         (pFVar8 != (FARPROC)0x0 &&
         (pFVar7 != (FARPROC)0x0 &&
         (pFVar6 != (FARPROC)0x0 &&
         (pFVar5 != (FARPROC)0x0 &&
         (pFVar4 != (FARPROC)0x0 &&
         (pFVar3 != (FARPROC)0x0 && (pFVar2 != (FARPROC)0x0 && pFVar1 != (FARPROC)0x0)))))))))))))))
         )))))))))))))))))))))))))))))))))))))))))))))))))))));
}

