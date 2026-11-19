
void FUN_100858a0(void)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  float10 fVar4;
  
  fVar4 = (float10)(*DAT_101b26e0)();
  DAT_10190244 = 0;
  if (DAT_10190240 < 2) {
    DAT_10545008 = 0;
    (*DAT_101b26a8)("Rain error: failed to allocate memory block for fx objects!\n");
    return;
  }
  if (*DAT_1019023c != 0) {
    pfVar2 = (float *)(DAT_1019023c + *DAT_1019023c * 0xd + 1);
    piVar3 = DAT_1019023c;
    while (pfVar2 != (float *)0x0) {
      if ((float)fVar4 <= pfVar2[1] + *pfVar2) {
        DAT_10190244 = piVar3[DAT_10190244 * 0xd];
      }
      else {
        iVar1 = piVar3[DAT_10190244 * 0xd];
        piVar3[DAT_10190244 * 0xd] = piVar3[iVar1 * 0xd];
        DAT_1019023c[iVar1 * 0xd] = DAT_10190248;
        DAT_1054504c = DAT_1054504c + -1;
        piVar3 = DAT_1019023c;
        DAT_10190248 = iVar1;
      }
      if (piVar3[DAT_10190244 * 0xd] == 0) {
        return;
      }
      pfVar2 = (float *)(piVar3 + piVar3[DAT_10190244 * 0xd] * 0xd + 1);
    }
  }
  return;
}

