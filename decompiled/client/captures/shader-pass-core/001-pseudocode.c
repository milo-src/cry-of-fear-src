
void FUN_10062940(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(float *)(DAT_104cd51c + 0xc) == 0.0) {
    return;
  }
  iVar2 = FUN_10060e50();
  if (iVar2 == 0) {
    (*DAT_101b269c)("gl_specular",0);
    return;
  }
  if (*(float *)(DAT_104cd510 + 0xc) != 0.0) {
    if (((DAT_101be798 == 0) || (DAT_101be79c < 4)) || (DAT_101be7a0 < 4)) {
      FUN_1007d400("High quality specular is not supported by your videocard\n");
      (*DAT_101b269c)("gl_highspecular",0);
    }
    else if (DAT_1018f854 == -1) {
      (*DAT_101be698)(0x8804);
      (*DAT_101be7a4)(1,&DAT_1018f854);
      (*DAT_101be7a8)(0x8804,DAT_1018f854);
      cVar1 = FUN_100621f0(0x8804,0x8875,0x35a,s___ARBfp1_0_OPTION_ARB_precision__1018faf0);
      if (cVar1 == '\0') {
        DAT_1018f854 = -1;
        (*DAT_101b269c)("gl_highspecular",0);
        (*DAT_101be688)(0x8804);
      }
      else {
        FUN_1007d400("High quality specular fragment program loaded succesfully\n");
        (*DAT_101be688)(0x8804);
      }
    }
  }
  if ((DAT_104cde70 == 0) && (DAT_104cde74 == 0)) {
    if (DAT_104cde78 == 0) {
      return;
    }
  }
  else if (DAT_104cde78 == 0) goto LAB_10062ace;
  if (*(float *)(DAT_104cd510 + 0xc) == 0.0) {
    puVar3 = &DAT_104cde70;
  }
  else {
    puVar3 = &DAT_104cde74;
  }
  FUN_10062280(puVar3,DAT_104cde78);
LAB_10062ace:
  (*DAT_101be698)(0xbe2);
  (*DAT_101be67c)(0);
  (*DAT_101be684)(0x202);
  if (DAT_104cde70 != 0) {
    FUN_10061290(iVar2);
  }
  if ((DAT_104cde74 != 0) && (*(float *)(DAT_104cd510 + 0xc) != 0.0)) {
    FUN_100611a0();
  }
  (*DAT_101be764)(0x84c0);
  (*DAT_101be6d4)(0x1702);
  (*DAT_101be6cc)();
  (*DAT_101be6d4)(0x1700);
  (*DAT_101be688)(0xbe2);
  (*DAT_101be67c)(1);
  return;
}

