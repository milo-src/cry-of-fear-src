
int FUN_1005a8c0(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  int iStack_18;
  
  if (DAT_101be7d4 != 0) {
    iVar1 = FUN_100b42b2(0x18000);
    if (iVar1 != 0) {
      puVar3 = (undefined1 *)(iVar1 + 2);
      iStack_18 = 0;
      do {
        iVar1 = 0;
        do {
          iVar2 = 0;
          fVar5 = ((float)iVar1 - 16.0) * ((float)iVar1 - 16.0) +
                  ((float)iStack_18 - 16.0) * ((float)iStack_18 - 16.0);
          do {
            dVar4 = (double)(((float)iVar2 - 16.0) * ((float)iVar2 - 16.0) + fVar5);
            if (dVar4 < 0.0) {
              __libm_sse2_sqrt_precise();
            }
            else {
              dVar4 = SQRT(dVar4);
            }
            fVar6 = 16.0;
            if ((float)dVar4 <= 16.0) {
              fVar6 = (float)dVar4;
            }
            if ((((iStack_18 == 0) || (iVar1 == 0)) || (iVar2 == 0)) ||
               (((iStack_18 == 0x1f || (iVar1 == 0x1f)) || (iVar2 == 0x1f)))) {
              fVar6 = 0.0;
            }
            else {
              fVar6 = (fVar6 * fVar6 * 0.00390625 - 1.0) * -255.0;
            }
            iVar2 = iVar2 + 1;
            puVar3[-2] = (char)(int)(DAT_1018f83c * fVar6);
            puVar3[-1] = (char)(int)(DAT_1018f840 * fVar6);
            *puVar3 = (char)(int)(DAT_1018f844 * fVar6);
            puVar3 = puVar3 + 3;
          } while (iVar2 < 0x20);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x20);
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 0x20);
      (*DAT_101be64c)(0x806f,DAT_1018fe8c);
      (*DAT_101be7d0)(0x806f,0,3,0x20,0x20,0x20,0,0x1907,0x1401,fVar5);
      (*DAT_101be738)(0x806f,0x2802,0x812f);
      (*DAT_101be738)(0x806f,0x2803,0x812f);
      (*DAT_101be738)(0x806f,0x8072,0x812f);
      (*DAT_101be738)(0x806f,0x2800,0x2601);
      (*DAT_101be738)(0x806f,0x2801,0x2601);
      thunk_FUN_100f7be4(fVar5);
      FUN_1007d4d0("Created 3D attenuation texture\n");
      iVar1 = DAT_1018fe8c;
      DAT_1018fe8c = DAT_1018fe8c + 1;
      return iVar1;
    }
    FUN_1007d400("Error: Failed to allocate memory for 3d attenuation texture!\n");
  }
  return 0;
}

