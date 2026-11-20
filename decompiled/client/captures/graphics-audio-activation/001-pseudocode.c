
void FUN_1007f740(void)

{
  undefined4 uVar1;
  int iVar2;
  char *in_ECX;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_105440a8 != 0) && (*in_ECX != '\0')) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar1 = (*DAT_101b26d4)();
      *(undefined4 *)(in_ECX + 4) = uVar1;
    }
    if (DAT_105440ac != (int *)0x0) {
      fVar4 = (float10)(*DAT_101b2644)("volume");
      fVar5 = 1.0;
      if ((float)fVar4 <= 1.0) {
        fVar5 = (float)fVar4;
      }
      fVar6 = 0.0;
      if (0.0 <= fVar5) {
        fVar6 = fVar5;
      }
      (**(code **)(*DAT_105440ac + 0x20))(fVar6);
    }
    if (DAT_105440b0 != (int *)0x0) {
      fVar4 = (float10)(*DAT_101b2644)("MP3Volume");
      fVar5 = 1.0;
      if ((float)fVar4 <= 1.0) {
        fVar5 = (float)fVar4;
      }
      fVar6 = 0.0;
      if (0.0 <= fVar5) {
        fVar6 = fVar5;
      }
      (**(code **)(*DAT_105440b0 + 0x20))(fVar6);
      if ((DAT_105440b0 != (int *)0x0) &&
         (fVar5 = *(float *)(in_ECX + 0xcc), fVar6 = *(float *)(in_ECX + 0xd0),
         fVar4 = (float10)(*DAT_101b26e0)(), (float)fVar4 < fVar5 + fVar6)) {
        fVar4 = (float10)(*DAT_101b26e0)();
        fVar5 = (float)(fVar4 - (float10)*(float *)(in_ECX + 0xcc)) / *(float *)(in_ECX + 0xd0);
        if (0.95 <= fVar5) {
          (**(code **)(*DAT_105440b0 + 0x18))();
          return;
        }
        fVar4 = (float10)(*DAT_101b2644)("MP3Volume");
        iVar2 = (int)(fVar4 * (float10)255.0 - (float10)(int)(fVar5 * 255.0));
        iVar3 = 0;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        if (0xff < iVar3) {
          iVar3 = 0xff;
        }
        fVar5 = 0.0;
        if (0.0 <= (float)iVar3 / 255.0) {
          fVar5 = (float)iVar3 / 255.0;
        }
        fVar6 = 1.0;
        if (fVar5 <= 1.0) {
          fVar6 = fVar5;
        }
        if (fVar6 <= 0.05) {
          (**(code **)(*DAT_105440b0 + 0x18))();
        }
        else {
          (**(code **)(*DAT_105440b0 + 0x20))(fVar6);
        }
      }
    }
    if ((in_ECX[0xc4] != '\0') && (DAT_105440b0 != (int *)0x0)) {
      fVar5 = 0.0;
      if (0.0 <= (float)*(int *)(in_ECX + 0xc0) / 255.0) {
        fVar5 = (float)*(int *)(in_ECX + 0xc0) / 255.0;
      }
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      (**(code **)(*DAT_105440b0 + 0x20))(fVar6);
    }
  }
  return;
}

