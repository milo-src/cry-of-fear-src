
void FUN_10070ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char *_Source;
  float10 fVar4;
  float10 fVar5;
  size_t _Count;
  undefined4 local_10c;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_4,param_3);
  iVar2 = FUN_100808b0();
  iVar3 = FUN_100808b0();
  fVar4 = (float10)FUN_10080910();
  _Count = 0x100;
  fVar1 = (float)fVar4;
  _Source = (char *)FUN_10080a60();
  _strncpy(local_108,_Source,_Count);
  fVar4 = (float10)(*DAT_101b2644)("cl_downwiththesickness");
  if ((float)fVar4 == 1.0) {
    _strncpy(local_108,"downwiththesickness.mp3",0x100);
  }
  if (iVar3 == 0) {
    FUN_1007fbf0(1);
    FUN_1007fc10(fVar1);
  }
  else {
    if (fVar1 != 0.0) {
      fVar5 = (float10)(*DAT_101b26e0)(fVar1);
      FUN_1007fb50(0xbf800000,0xbf800000,(float)fVar5);
    }
    local_10c = CONCAT31((int3)((uint)(float)fVar4 >> 8),iVar2 != 0);
    FUN_1007fbb0(local_10c);
    FUN_1007fbf0(0);
    FUN_1007faf0(local_108);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

