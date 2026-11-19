
void FUN_10065260(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  short *psVar5;
  undefined4 uVar6;
  float10 fVar7;
  float *pfVar8;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  uint local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  int *local_20;
  undefined8 local_1c;
  float local_14;
  int local_10;
  uint local_c;
  short *local_8;
  
  local_30 = (*DAT_101b26d4)();
  if (DAT_10542bc0 == 0) {
    local_8 = &DAT_105571c8;
    local_34 = 0;
    local_10 = 0;
    local_20 = &DAT_10556cb0;
    do {
      psVar5 = local_8;
      piVar1 = local_20;
      iVar2 = (*DAT_101b26dc)(local_34);
      if ((iVar2 != 0) && (*piVar1 != 0)) {
        local_c = (uint)*local_8;
        if ((local_c & 0x29) == 0) {
          *(undefined4 *)(iVar2 + 0x314) = 0;
          psVar5 = local_8;
        }
        else {
          local_14 = *(float *)(iVar2 + 0xb8c);
          local_1c = *(undefined8 *)(iVar2 + 0xb84);
          if (iVar2 == local_30) {
            pfVar8 = (float *)&DAT_1055962c;
          }
          else {
            local_64 = *(undefined4 *)(iVar2 + 0xb58);
            pfVar8 = &local_68;
            local_60 = *(undefined4 *)(iVar2 + 0xb5c);
            local_68 = *(float *)(iVar2 + 0xb54) * -1.0;
          }
          (*DAT_101b2668)(pfVar8,&local_2c,0,0);
          if ((local_c & 1) != 0) {
            local_74 = local_2c * 32.0 + (float)local_1c;
            local_70 = local_28 * 32.0 + local_1c._4_4_;
            local_6c = local_24 * 32.0 + local_14;
            iVar3 = (*DAT_101b26f4)(&local_1c,&local_74,0,1,0xffffffff);
            puVar4 = (undefined8 *)FUN_1005c0f0(local_10);
            *puVar4 = *(undefined8 *)(iVar3 + 0x14);
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(iVar3 + 0x1c);
            puVar4[5] = *(undefined8 *)(iVar2 + 0xb54);
            *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(iVar2 + 0xb5c);
            puVar4[2] = 0x3eeb851f3eeb851f;
            *(undefined4 *)((int)puVar4 + 0xc) = 0x42700000;
            *(undefined4 *)(puVar4 + 3) = 0x3f028f5c;
            fVar7 = (float10)(*DAT_101b26e0)();
            *(float *)((int)puVar4 + 0x1c) = (float)(fVar7 + (float10)0.1);
          }
          if ((local_c & 8) != 0) {
            local_80 = local_2c * 4096.0 + (float)local_1c;
            local_7c = local_28 * 4096.0 + local_1c._4_4_;
            local_78 = local_24 * 4096.0 + local_14;
            iVar3 = (*DAT_101b26f4)(&local_1c,&local_80,0,1,0xffffffff);
            puVar4 = (undefined8 *)FUN_1005c0f0(local_10);
            *puVar4 = *(undefined8 *)(iVar3 + 0x14);
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(iVar3 + 0x1c);
            puVar4[5] = *(undefined8 *)(iVar2 + 0xb54);
            *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(iVar2 + 0xb5c);
            puVar4[2] = 0x3f2666663f333333;
            *(undefined4 *)((int)puVar4 + 0xc) = 0x42700000;
            *(undefined4 *)(puVar4 + 3) = 0x3f266666;
            fVar7 = (float10)(*DAT_101b26e0)();
            *(float *)((int)puVar4 + 0x1c) = (float)(fVar7 + (float10)0.1);
          }
          psVar5 = local_8;
          if ((local_c & 0x20) != 0) {
            local_8c = local_2c * 128.0 + (float)local_1c;
            *(undefined4 *)(iVar2 + 0x314) = 1;
            local_88 = local_28 * 128.0 + local_1c._4_4_;
            local_84 = local_24 * 128.0 + local_14;
            (*DAT_101b26f4)(&local_1c,&local_8c,0,1,0xffffffff);
            local_38 = *(uint *)(iVar2 + 0xb5c);
            local_40 = CONCAT44(*(undefined4 *)(iVar2 + 0xb58),*(float *)(iVar2 + 0xb54) * -1.0);
            local_c = local_38;
            if (iVar2 == local_30) {
              local_40 = DAT_1055962c;
              local_c = DAT_10559634;
            }
            local_4c = *(undefined8 *)(iVar2 + 0xb84);
            uVar6 = *(undefined4 *)(iVar2 + 0xb8c);
            local_5c = local_40;
            local_44 = uVar6;
            if ((iVar2 == local_30) && (iVar2 = CL_IsThirdPerson(), uVar6 = local_44, iVar2 == 0)) {
              local_4c = DAT_10559638;
              uVar6 = DAT_10559640;
            }
            local_54 = local_4c;
            puVar4 = (undefined8 *)FUN_1005c0f0(local_10);
            *puVar4 = local_54;
            puVar4[5] = local_5c;
            *(uint *)(puVar4 + 6) = local_c;
            puVar4[2] = 0x3f2666663f333333;
            *(undefined4 *)(puVar4 + 1) = uVar6;
            *(undefined4 *)((int)puVar4 + 0xc) = 0x442f0000;
            *(undefined4 *)(puVar4 + 3) = 0x3f266666;
            fVar7 = (float10)(*DAT_101b26e0)();
            *(undefined4 *)((int)puVar4 + 0x34) = 0x42480000;
            *(undefined4 *)(puVar4 + 7) = 0x42480000;
            *(float *)((int)puVar4 + 0x1c) = (float)(fVar7 + (float10)0.1);
            psVar5 = local_8;
            if (*(float *)(DAT_105433e0 + 0xc) == 1.0) {
              builtin_strncpy((char *)((int)puVar4 + 0x3c),"gfx/",4);
              builtin_strncpy((char *)(puVar4 + 8),"low/",4);
              builtin_strncpy((char *)((int)puVar4 + 0x44),"flas",4);
              builtin_strncpy((char *)(puVar4 + 9),"hlig",4);
              *(undefined8 *)((int)puVar4 + 0x4c) = 0x6167742e327468;
            }
            else if (*(float *)(DAT_105433e0 + 0xc) == 0.0) {
              builtin_strncpy((char *)((int)puVar4 + 0x3c),"gfx/",4);
              builtin_strncpy((char *)(puVar4 + 8),"flas",4);
              builtin_strncpy((char *)((int)puVar4 + 0x44),"hlig",4);
              builtin_strncpy((char *)(puVar4 + 9),"ht2.",4);
              builtin_strncpy((char *)((int)puVar4 + 0x4c),"tga",4);
            }
          }
        }
      }
      local_8 = psVar5 + 0xd;
      local_20 = local_20 + 5;
      local_10 = local_10 + -1;
      local_34 = local_34 + 1;
    } while ((int)local_20 < 0x105571c4);
  }
  return;
}

