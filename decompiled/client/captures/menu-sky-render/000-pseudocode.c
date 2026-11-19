
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10063780(void)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  int local_d8 [24];
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  float local_64;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  undefined8 local_48;
  float local_40;
  undefined8 local_3c;
  float local_34;
  undefined8 local_30;
  float local_28;
  undefined8 local_24;
  float local_1c;
  uint local_14;
  
  local_14 = DAT_10190600 ^ (uint)&stack0xfffffff0;
  if (*(float *)(DAT_104ce068 + 0xc) != 0.0) {
    FUN_10063450();
    if ((DAT_104ce020 != 0) && (DAT_104cdd70 == 0)) {
      local_10c = DAT_105595cc - DAT_104ce480;
      local_108 = DAT_105595d0 - DAT_104ce484;
      local_104 = DAT_105595d4 - DAT_104ce488;
      if (DAT_104ce06c != 0.0) {
        local_10c = local_10c - (DAT_105595cc - _DAT_104ce48c) / DAT_104ce06c;
        local_108 = local_108 - (DAT_105595d0 - _DAT_104ce490) / DAT_104ce06c;
        local_104 = local_104 - (DAT_105595d4 - _DAT_104ce494) / DAT_104ce06c;
      }
      (*DAT_101be680)(0xcccccccd,0x3feccccc,0,0x3ff00000);
      (*DAT_101be688)(0xbe2);
      (*DAT_101be67c)(0);
      (*DAT_101be764)(0x84c0);
      (*DAT_101be698)(0xde1);
      (*DAT_101be724)(0x2300,0x2200,0x1e01);
      (*DAT_101b2668)(&DAT_1018fe4c,&local_11c,&local_128,&local_134);
      local_128 = local_128 * -10.0;
      local_124 = local_124 * -10.0;
      local_120 = local_120 * -10.0;
      local_11c = local_11c * 10.0;
      local_118 = local_118 * 10.0;
      local_114 = local_114 * 10.0;
      local_12c = local_12c * 10.0;
      local_130 = local_130 * 10.0;
      local_134 = local_134 * 10.0;
      fVar3 = (local_11c + DAT_105595cc) - local_134;
      fVar8 = (local_118 + DAT_105595d0) - local_130;
      local_40 = (local_114 + DAT_105595d4) - local_12c;
      local_70 = local_120 + local_40;
      local_78 = CONCAT44(fVar8 + local_124,local_128 + fVar3);
      local_40 = local_40 - local_120;
      fVar4 = local_11c + DAT_105595cc + local_134;
      local_100 = local_118 + DAT_105595d0 + local_130;
      local_fc = local_114 + DAT_105595d4 + local_12c;
      local_64 = local_120 + local_fc;
      fVar7 = (DAT_105595cc - local_11c) + local_134;
      fVar6 = local_130 + (DAT_105595d0 - local_118);
      local_6c = CONCAT44(local_100 + local_124,local_128 + fVar4);
      local_28 = (DAT_105595d4 - local_114) + local_12c;
      local_58 = local_120 + local_28;
      local_60 = CONCAT44(fVar6 + local_124,local_128 + fVar7);
      fVar5 = (DAT_105595cc - local_11c) - local_134;
      local_ec = (DAT_105595d0 - local_118) - local_130;
      local_e8 = (DAT_105595d4 - local_114) - local_12c;
      local_4c = local_120 + local_e8;
      local_54 = CONCAT44(local_ec + local_124,local_128 + fVar5);
      local_48 = CONCAT44(fVar8 - local_124,fVar3 - local_128);
      piVar1 = local_d8 + 1;
      local_28 = local_28 - local_120;
      iVar2 = 0;
      local_34 = local_fc - local_120;
      local_f0 = local_e8 - local_120;
      local_d8[0] = 1;
      local_d8[1] = 2;
      local_d8[2] = 6;
      local_d8[3] = 5;
      local_3c = CONCAT44(local_100 - local_124,fVar4 - local_128);
      local_d8[4] = 2;
      local_d8[5] = 3;
      local_d8[6] = 7;
      local_d8[7] = 6;
      local_d8[8] = 3;
      local_d8[9] = 0;
      local_d8[10] = 4;
      local_d8[0xb] = 7;
      local_d8[0xc] = 0;
      local_d8[0xd] = 1;
      local_d8[0xe] = 5;
      local_d8[0xf] = 4;
      local_d8[0x10] = 2;
      local_d8[0x11] = 1;
      local_d8[0x12] = 0;
      local_d8[0x13] = 3;
      local_30 = CONCAT44(fVar6 - local_124,fVar7 - local_128);
      local_24 = CONCAT44(local_ec - local_124,fVar5 - local_128);
      local_d8[0x14] = 7;
      local_d8[0x15] = 4;
      local_d8[0x16] = 5;
      local_d8[0x17] = 6;
      local_110 = local_12c;
      local_e4 = local_128;
      local_e0 = local_120;
      local_dc = local_124;
      local_1c = local_f0;
      do {
        (*DAT_101be64c)(0xde1,DAT_104ce024 + iVar2);
        (*DAT_101be648)();
        (*DAT_101be714)(0x3b449ba6,0x3b449ba6);
        (*DAT_101be74c)((int)&local_78 + piVar1[-1] * 0xc);
        (*DAT_101be714)(0x3f7f3b64,0x3b449ba6);
        (*DAT_101be74c)((int)&local_78 + *piVar1 * 0xc);
        (*DAT_101be714)(0x3f7f3b64,0x3f7f3b64);
        (*DAT_101be74c)((int)&local_78 + piVar1[1] * 0xc);
        (*DAT_101be714)(0x3b449ba6,0x3f7f3b64);
        (*DAT_101be74c)((int)&local_78 + piVar1[2] * 0xc);
        (*DAT_101be6a0)();
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 4;
      } while (iVar2 < 6);
      if (DAT_104ce078 != 0) {
        (*DAT_101be680)(0x9999999a,0x3fe99999,0xcccccccd,0x3feccccc);
        (*DAT_101be744)(local_10c,local_108,local_104);
        iVar2 = 0;
        if (0 < DAT_104ce078) {
          do {
            FUN_1005d0e0((&DAT_104ce080)[iVar2]);
            iVar2 = iVar2 + 1;
          } while (iVar2 < DAT_104ce078);
        }
        (*DAT_101be744)(-local_10c,-local_108,-local_104);
      }
      (*DAT_101be680)(0,0x3fe999999999999a);
    }
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

