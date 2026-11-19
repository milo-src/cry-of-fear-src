
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10064040(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  FUN_10080850(param_3,param_2);
  fVar1 = (float10)FUN_10080910();
  _DAT_104ce48c = (float)fVar1;
  fVar1 = (float10)FUN_10080910();
  _DAT_104ce490 = (float)fVar1;
  fVar1 = (float10)FUN_10080910();
  _DAT_104ce494 = (float)fVar1;
  fVar1 = (float10)FUN_10080910();
  DAT_104ce06c = (float)fVar1;
  FUN_1007d4d0("Got 3d-sky world marker (speed %f)\n",(double)DAT_104ce06c);
  return 1;
}

