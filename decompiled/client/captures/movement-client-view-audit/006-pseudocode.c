
void FUN_1007b0e0(float param_1,int param_2)

{
  int iVar1;
  double dVar2;
  float fVar3;
  float local_14;
  float local_10;
  float local_8;
  
  (*DAT_101b2690)(&local_14);
  if ((DAT_101b2f10 < 1) || (4 < DAT_101b2f10)) {
    if (DAT_10543624 != 1) {
      FUN_1007be70();
      DAT_10543624 = 1;
    }
    if (((DAT_10543620 != 0) && (*(float *)(DAT_105435d4 + 0xc) != 0.0)) &&
       (iVar1 = FUN_1007bb20(), iVar1 == 1)) {
      iVar1 = 0;
      do {
        fVar3 = (float)((double)**(int **)((int)&DAT_105435bc + iVar1) +
                       (double)(&DAT_1013f5b0)[-(**(int **)((int)&DAT_105435bc + iVar1) >> 0x1f)]) -
                32768.0;
        local_8 = fVar3;
        if ((*(float *)(DAT_1054361c + 0xc) != 0.0) && (*(int *)((int)&DAT_1054358c + iVar1) == 4))
        {
          dVar2 = (double)ABS(fVar3) / 800.0;
          FUN_100ff550();
          fVar3 = (float)(dVar2 * 300.0);
          if (14000.0 < fVar3) {
            fVar3 = 14000.0;
          }
          if (local_8 <= 0.0) {
            fVar3 = -fVar3;
          }
        }
        fVar3 = fVar3 * 3.0517578e-05;
        switch(*(undefined4 *)((int)&DAT_1054358c + iVar1)) {
        case 1:
          if ((*(float *)(DAT_105435dc + 0xc) == 0.0) && ((DAT_1054341c & 1) != 0)) {
            if (ABS(fVar3) <= *(float *)(DAT_10543600 + 0xc)) {
LAB_1007b4d9:
              if (*(float *)(DAT_10543360 + 0xc) != 0.0) break;
            }
            else if (0.0 < *(float *)(DAT_1054334c + 0xc) || *(float *)(DAT_1054334c + 0xc) == 0.0)
            {
              local_14 = *(float *)(DAT_10543610 + 0xc) * fVar3 * param_1 *
                         *(float *)(DAT_10543384 + 0xc) + local_14;
            }
            else {
              local_14 = local_14 -
                         *(float *)(DAT_10543610 + 0xc) * fVar3 * param_1 *
                         *(float *)(DAT_10543384 + 0xc);
            }
LAB_1007b4ec:
            FUN_100b31b0();
          }
          else if (*(float *)(DAT_105435f8 + 0xc) < ABS(fVar3)) {
            *(float *)(param_2 + 0x10) =
                 *(float *)(DAT_10543608 + 0xc) * fVar3 * *(float *)(DAT_10543370 + 0xc) +
                 *(float *)(param_2 + 0x10);
          }
          break;
        case 2:
          if ((DAT_1054341c & 1) != 0) {
            if (ABS(fVar3) <= *(float *)(DAT_10543600 + 0xc)) goto LAB_1007b4d9;
            fVar3 = *(float *)(DAT_10543610 + 0xc) * fVar3;
            if (*(int *)((int)&DAT_105435a4 + iVar1) == 0) {
              local_14 = fVar3 * param_1 * *(float *)(DAT_10543384 + 0xc) + local_14;
            }
            else {
              local_14 = fVar3 * 180.0 + local_14;
            }
            goto LAB_1007b4ec;
          }
          break;
        case 3:
          if (*(float *)(DAT_105435fc + 0xc) < ABS(fVar3)) {
            *(float *)(param_2 + 0x14) =
                 *(float *)(DAT_1054360c + 0xc) * fVar3 * *(float *)(DAT_10543378 + 0xc) +
                 *(float *)(param_2 + 0x14);
          }
          break;
        case 4:
          if ((((byte)DAT_10543470 & 1) == 0) &&
             ((*(float *)(DAT_1054335c + 0xc) == 0.0 || ((DAT_1054341c & 1) == 0)))) {
            if (*(float *)(DAT_10543604 + 0xc) < ABS(fVar3)) {
              fVar3 = *(float *)(DAT_10543614 + 0xc) * fVar3;
              if (*(int *)((int)&DAT_105435a4 + iVar1) == 0) {
                local_10 = fVar3 * param_1 * *(float *)(DAT_10543380 + 0xc) + local_10;
              }
              else {
                local_10 = fVar3 * 180.0 + local_10;
              }
            }
          }
          else if (*(float *)(DAT_105435fc + 0xc) < ABS(fVar3)) {
            *(float *)(param_2 + 0x14) =
                 *(float *)(param_2 + 0x14) -
                 *(float *)(DAT_1054360c + 0xc) * fVar3 * *(float *)(DAT_10543378 + 0xc);
          }
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < 0x18);
      if (*(float *)(DAT_10543368 + 0xc) < local_14) {
        local_14 = *(float *)(DAT_10543368 + 0xc);
      }
      if (local_14 < -*(float *)(DAT_10543364 + 0xc)) {
        local_14 = -*(float *)(DAT_10543364 + 0xc);
      }
      if (DAT_1018d27c == '\0') {
        (*DAT_101b2694)(&local_14);
      }
    }
  }
  return;
}

