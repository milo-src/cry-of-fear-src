
/* WARNING: Removing unreachable block (ram,0x10013547) */

void FUN_10013160(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  double dVar6;
  float fVar7;
  
  if (*(float *)(DAT_101ad6e8 + 0x214) == 0.0) {
    if (*(int *)(DAT_101ad6e8 + 0xd0) != 0) {
LAB_10013193:
      *(uint *)(DAT_101ad6e8 + 200) = *(uint *)(DAT_101ad6e8 + 200) | 2;
      return;
    }
    pcVar1 = (char *)(**(code **)(DAT_101ad6e8 + 0x4f558))(DAT_101ad6e8 + 0x4f3f4,&DAT_1013ed8c);
    iVar2 = _atoi(pcVar1);
    iVar3 = DAT_101ad6e8;
    if ((iVar2 != 1) || (*(int *)(DAT_101ad6e8 + 0xd4) != 5)) {
      if (*(float *)(DAT_101ad6e8 + 0xcc) == 0.0) {
        if ((*(int *)(DAT_101ad6e8 + 0xe4) < 2) || (*(int *)(DAT_101ad6e8 + 0xe8) == -0x13)) {
          if (*(int *)(DAT_101ad6e8 + 0xe0) == -1) goto LAB_10013193;
          if ((*(byte *)(DAT_101ad6e8 + 200) & 2) == 0) {
            *(undefined4 *)(DAT_101ad6e8 + 0xe0) = 0xffffffff;
            FUN_10015b00();
            if (iVar2 != 1) {
              uVar4 = FUN_10013a70(*(undefined1 *)(DAT_101ad6e8 + 0x1f0),0x3f800000);
              FUN_10014190(uVar4);
            }
            else {
              (**(code **)(DAT_101ad6e8 + 0x4f5b8))
                        (4,"player/plyrjmp8.wav",0x3f000000,0x3f4ccccd,0,100);
            }
            if (*(int *)(DAT_101ad6e8 + 0xe4) < 3) {
              iVar3 = (**(code **)(DAT_101ad6e8 + 0x4f58c))(0xffffffe2,0x1e);
              if (*(int *)(DAT_101ad6e8 + 8) == 0) {
                pcVar1 = "player/sprint/bag_movement.wav";
              }
              else {
                pcVar1 = "player/sprint/equipment_movement.wav";
              }
              (**(code **)(DAT_101ad6e8 + 0x4f5b8))(0,pcVar1,0x3f800000,0x3f4ccccd,0,iVar3 + 100);
            }
            pcVar1 = (char *)(**(code **)(DAT_101ad6e8 + 0x4f558))
                                       (DAT_101ad6e8 + 0x4f3f4,&DAT_1013edc4);
            iVar3 = _atoi(pcVar1);
            if ((*(int *)(DAT_101ad6e8 + 0x90) == 0) &&
               ((*(uint *)(DAT_101ad6e8 + 0xb8) & 0x4000) == 0)) {
              pcVar1 = (char *)(**(code **)(DAT_101ad6e8 + 0x4f558))
                                         (DAT_101ad6e8 + 0x4f3f4,&DAT_1013edc8);
              iVar3 = _atoi(pcVar1);
              dVar6 = (double)(iVar3 << 4) * 45.0;
              if (dVar6 < 0.0) {
                __libm_sse2_sqrt_precise();
                *(float *)(DAT_101ad6e8 + 100) = (float)dVar6;
              }
              else {
                *(float *)(DAT_101ad6e8 + 100) = (float)SQRT(dVar6);
              }
            }
            else if ((iVar3 != 1) ||
                    ((((*(byte *)(DAT_101ad6e8 + 0x45476) & 4) == 0 ||
                      (*(float *)(DAT_101ad6e8 + 0x8c) <= 0.0)) ||
                     (fVar5 = (float10)FUN_1000fc20(DAT_101ad6e8 + 0x5c), (float)fVar5 <= 50.0)))) {
              *(undefined4 *)(DAT_101ad6e8 + 100) = 0x43862a01;
            }
            else {
              *(undefined4 *)(DAT_101ad6e8 + 0xa0) = 0xc0a00000;
              *(float *)(DAT_101ad6e8 + 0x5c) = *(float *)(DAT_101ad6e8 + 0x14) * 350.0 * 1.6;
              *(float *)(DAT_101ad6e8 + 0x60) = *(float *)(DAT_101ad6e8 + 0x18) * 350.0 * 1.6;
              *(undefined4 *)(DAT_101ad6e8 + 100) = 0x4395aa92;
            }
            FUN_10012460();
            *(uint *)(DAT_101ad6e8 + 200) = *(uint *)(DAT_101ad6e8 + 200) | 2;
          }
        }
        else {
          *(undefined4 *)(DAT_101ad6e8 + 0xe0) = 0xffffffff;
          if (*(int *)(DAT_101ad6e8 + 0xe8) == -3) {
            *(undefined4 *)(DAT_101ad6e8 + 100) = 0x42c80000;
          }
          else if (*(int *)(DAT_101ad6e8 + 0xe8) == -4) {
            *(undefined4 *)(DAT_101ad6e8 + 100) = 0x42a00000;
          }
          else {
            *(undefined4 *)(DAT_101ad6e8 + 100) = 0x42480000;
          }
          if (*(float *)(DAT_101ad6e8 + 0xac) <= 0.0) {
            *(undefined4 *)(DAT_101ad6e8 + 0xac) = 0x459c4000;
            iVar3 = (**(code **)(DAT_101ad6e8 + 0x4f58c))(0xfffffff6,10);
            (**(code **)(DAT_101ad6e8 + 0x4f5b8))
                      (4,"player/vocal/water_breathe.wav",0x3f800000,0x3f4ccccd,0,iVar3 + 100);
            return;
          }
        }
      }
      else {
        fVar7 = *(float *)(DAT_101ad6e8 + 0xcc) - (float)*(byte *)(DAT_101ad6e8 + 0x4545a);
        *(float *)(DAT_101ad6e8 + 0xcc) = fVar7;
        if (fVar7 < 0.0) {
          *(undefined4 *)(iVar3 + 0xcc) = 0;
          return;
        }
      }
    }
  }
  return;
}

