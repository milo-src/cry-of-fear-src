
void FUN_1001b040(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  float10 fVar8;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_3,param_2);
  FUN_100808b0();
  uVar2 = FUN_100808b0();
  pbVar3 = (byte *)FUN_10080a60();
  if (pbVar3 != (byte *)0x0) {
    pcVar6 = "Hand Grenade";
    pbVar4 = pbVar3;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_1001b0a2:
        uVar5 = -(uint)bVar7 | 1;
        goto LAB_1001b0a7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_1001b0a2;
      pbVar4 = pbVar4 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_1001b0a7:
    pbVar4 = (byte *)"handgrenade";
    if (uVar5 != 0) {
      pbVar4 = pbVar3;
    }
    FUN_1000c900(local_108,&DAT_1013f4d0,pbVar4);
    DAT_101b24d0 = uVar2;
    fVar8 = (float10)(*DAT_101b26e0)();
    FUN_1007dea0(local_108,(float)fVar8);
    DAT_101b24d0 = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

