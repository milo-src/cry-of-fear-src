
void FUN_10063150(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x24) + 0xe);
  local_48 = *(uint *)(DAT_104cdf90 + 0x10 + uVar4 * 0x28) ^ 0x80000000;
  local_38 = *(uint *)(DAT_104cdf90 + 0x14 + uVar4 * 0x28) ^ 0x80000000;
  fVar1 = param_2[1];
  fVar2 = *param_2;
  local_28 = *(uint *)(DAT_104cdf90 + 0x18 + uVar4 * 0x28) ^ 0x80000000;
  fVar3 = param_2[2];
  local_18 = *(float *)(DAT_104cdf90 + 0x10 + uVar4 * 0x28) * fVar2 +
             *(float *)(DAT_104cdf90 + 0x14 + uVar4 * 0x28) * fVar1 +
             *(float *)(DAT_104cdf90 + 0x18 + uVar4 * 0x28) * fVar3;
  local_44 = *(uint *)(DAT_104cdf90 + 0x1c + uVar4 * 0x28) ^ 0x80000000;
  local_34 = *(uint *)(DAT_104cdf90 + 0x20 + uVar4 * 0x28) ^ 0x80000000;
  local_24 = *(uint *)(DAT_104cdf90 + 0x24 + uVar4 * 0x28) ^ 0x80000000;
  local_14 = *(float *)(DAT_104cdf90 + 0x1c + uVar4 * 0x28) * fVar2 +
             *(float *)(DAT_104cdf90 + 0x20 + uVar4 * 0x28) * fVar1 +
             *(float *)(DAT_104cdf90 + 0x24 + uVar4 * 0x28) * fVar3;
  local_40 = *(uint *)(DAT_104cdf90 + 4 + uVar4 * 0x28) ^ 0x80000000;
  local_30 = *(uint *)(DAT_104cdf90 + 8 + uVar4 * 0x28) ^ 0x80000000;
  local_20 = *(uint *)(DAT_104cdf90 + 0xc + uVar4 * 0x28) ^ 0x80000000;
  local_1c = 0;
  local_2c = 0;
  local_3c = 0;
  local_10 = *(float *)(DAT_104cdf90 + 4 + uVar4 * 0x28) * fVar2 +
             *(float *)(DAT_104cdf90 + 8 + uVar4 * 0x28) * fVar1 +
             *(float *)(DAT_104cdf90 + 0xc + uVar4 * 0x28) * fVar3;
  local_c = 0x3f800000;
  (*DAT_101be764)(0x84c0);
  (*DAT_101be6d4)(0x1702);
  (*DAT_101be6d0)(&local_48);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

