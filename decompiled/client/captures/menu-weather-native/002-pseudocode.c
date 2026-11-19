
void FUN_10092850(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  int iStack_30;
  int iStack_20;
  int iStack_10;
  uint local_c;
  
  local_c = DAT_10190600 ^ (uint)&local_58;
  if (*DAT_1019022c != 0) {
    local_58 = DAT_10545024 - 80.0;
    pcVar1 = "sprites/hi_rain.spr";
    if (DAT_10545020 != 0) {
      pcVar1 = "sprites/snowflake.spr";
    }
    iVar2 = FUN_10094580(pcVar1);
    if (iVar2 == 0) {
      (*DAT_101b26a8)("ERROR: hi_rain.spr or snowflake.spr could not be loaded!\n");
      __security_check_cookie(local_c ^ (uint)&local_58);
      return;
    }
    uVar3 = (*DAT_101b2700)(iVar2);
    (**(code **)(DAT_101b2750 + 0x2c))(uVar3,0);
    (**(code **)(DAT_101b2750 + 4))(5);
    (**(code **)(DAT_101b2750 + 0x28))(1);
    DAT_10190234 = 0;
    iVar2 = (*DAT_101b26d4)();
    if (DAT_1019022c[DAT_10190234 * 10] == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = DAT_1019022c + DAT_1019022c[DAT_10190234 * 10] * 10 + 1;
    }
    if (DAT_10545020 == 0) {
      if (piVar4 != (int *)0x0) {
        while( true ) {
          fStack_54 = *(float *)(iVar2 + 0xb4c) - (float)piVar4[3];
          local_58 = *(float *)(iVar2 + 0xb48) - (float)piVar4[2];
          dVar7 = (double)(fStack_54 * fStack_54 + local_58 * local_58);
          if (dVar7 < 0.0) {
            __libm_sse2_sqrt_precise();
          }
          else {
            dVar7 = SQRT(dVar7);
          }
          fVar6 = 0.0;
          if ((float)dVar7 == 0.0) {
            fStack_54 = 0.0;
          }
          else {
            fVar5 = 1.0 / (float)dVar7;
            fVar6 = fVar5 * fStack_54;
            fStack_54 = fVar5 * local_58;
          }
          local_58 = fVar6 * 8.0;
          fStack_54 = fStack_54 * 8.0;
          fStack_4c = ((float)piVar4[6] / 900.0) * 46.0;
          fStack_50 = ((float)piVar4[7] / 900.0) * 46.0;
          (**(code **)(DAT_101b2750 + 0x10))(0x3f800000,0x3f800000,0x3f800000,piVar4[5]);
          (**(code **)(DAT_101b2750 + 8))(0);
          (**(code **)(DAT_101b2750 + 0x18))(0,0);
          (**(code **)(DAT_101b2750 + 0x20))
                    (((float)piVar4[2] - local_58) - fStack_4c,
                     (fStack_54 + (float)piVar4[3]) - fStack_50,(float)piVar4[4] + 46.0);
          (**(code **)(DAT_101b2750 + 0x18))(0x3f000000,0x3f800000);
          (**(code **)(DAT_101b2750 + 0x20))
                    ((float)piVar4[2] + fStack_4c,(float)piVar4[3] + fStack_50,
                     (float)piVar4[4] - 46.0);
          (**(code **)(DAT_101b2750 + 0x18))(0x3f800000,0);
          (**(code **)(DAT_101b2750 + 0x20))
                    ((local_58 + (float)piVar4[2]) - fStack_4c,
                     ((float)piVar4[3] - fStack_54) - fStack_50,(float)piVar4[4] + 46.0);
          (**(code **)(DAT_101b2750 + 0xc))();
          DAT_10190234 = DAT_1019022c[DAT_10190234 * 10];
          if (DAT_1019022c[DAT_10190234 * 10] == 0) break;
          piVar4 = DAT_1019022c + DAT_1019022c[DAT_10190234 * 10] * 10 + 1;
          if (piVar4 == (int *)0x0) {
            __security_check_cookie(local_c ^ (uint)&local_58);
            return;
          }
        }
      }
    }
    else {
      (*DAT_101b2690)(auStack_48);
      FUN_10090c30(auStack_48,auStack_3c);
      while (piVar4 != (int *)0x0) {
        iStack_30 = piVar4[2];
        iStack_20 = piVar4[3];
        iStack_10 = piVar4[4];
        if (local_58 < (float)piVar4[4]) {
          fVar6 = ((DAT_10545024 - (float)piVar4[4]) / 80.0) * (float)piVar4[5];
        }
        else {
          fVar6 = (float)piVar4[5];
        }
        (**(code **)(DAT_101b2750 + 0x10))(0x3f800000,0x3f800000,0x3f800000,fVar6);
        (**(code **)(DAT_101b2750 + 8))(2);
        (**(code **)(DAT_101b2750 + 0x18))(0,0);
        FUN_100944a0(0,0x40400000,0x40400000,auStack_3c);
        (**(code **)(DAT_101b2750 + 0x18))(0,0x3f800000);
        FUN_100944a0(0,0x40400000,0xc0400000,auStack_3c);
        (**(code **)(DAT_101b2750 + 0x18))(0x3f800000,0x3f800000);
        FUN_100944a0(0,0xc0400000,0xc0400000,auStack_3c);
        (**(code **)(DAT_101b2750 + 0x18))(0x3f800000,0);
        FUN_100944a0(0,0xc0400000,0x40400000,auStack_3c);
        (**(code **)(DAT_101b2750 + 0xc))();
        DAT_10190234 = DAT_1019022c[DAT_10190234 * 10];
        if (DAT_1019022c[DAT_10190234 * 10] == 0) break;
        piVar4 = DAT_1019022c + DAT_1019022c[DAT_10190234 * 10] * 10 + 1;
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)&local_58);
  return;
}

