
void FUN_1005bd90(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,int param_10,int param_11)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  undefined1 local_e4 [4];
  int local_e0;
  float local_d4;
  int local_a0;
  float local_9c;
  int local_98;
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  local_a0 = param_10;
  iVar4 = 0;
  fVar5 = (float10)(*DAT_101b26e0)();
  param_5 = param_2 + param_5;
  puVar3 = &DAT_104cc580;
  param_4 = param_1 + param_4;
  param_6 = param_3 + param_6;
  param_8 = param_8 + param_2;
  param_7 = param_7 + param_1;
  param_9 = param_9 + param_3;
  local_9c = (float)fVar5;
  local_98 = 0x20;
  do {
    if ((local_9c <= (float)puVar3[-5]) && (fVar1 = (float)puVar3[-9], fVar1 != 0.0)) {
      if ((param_11 == 0) || ((puVar3[-3] != -0x29a && (puVar3[-3] != -0x299)))) {
        fVar6 = param_1 - (float)puVar3[-0xc];
        if ((param_2 - (float)puVar3[-0xb]) * (param_2 - (float)puVar3[-0xb]) + fVar6 * fVar6 +
            (param_3 - (float)puVar3[-10]) * (param_3 - (float)puVar3[-10]) <= fVar1 * fVar1) {
          if (*(char *)(puVar3 + 3) != '\0') {
            FUN_10084e40(puVar3[-2],puVar3[-1],*puVar3,puVar3[-0xc],puVar3[-0xb],puVar3[-10],
                         puVar3[1],puVar3[2],fVar1);
            iVar2 = FUN_10084b30(param_4,param_5,param_6,param_7,param_8,param_9);
            if (iVar2 != 0) goto LAB_1005bfc8;
          }
          (**(code **)(DAT_101b2758 + 0x38))(2);
          (**(code **)(DAT_101b2758 + 0x3c))(&param_1,puVar3 + -0xc,8,0xffffffff,local_e4);
          if ((local_e0 == 0) && (1.0 <= local_d4)) goto LAB_1005bfb3;
        }
      }
      else {
LAB_1005bfb3:
        *(undefined4 **)(local_a0 + iVar4 * 4) = puVar3 + -0xc;
        iVar4 = iVar4 + 1;
      }
    }
LAB_1005bfc8:
    puVar3 = puVar3 + 0x1f;
    local_98 = local_98 + -1;
    if (local_98 == 0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

