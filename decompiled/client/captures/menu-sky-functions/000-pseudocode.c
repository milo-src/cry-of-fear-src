
undefined4 FUN_10063fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  float10 fVar2;
  
  FUN_1007d4d0("Got 3d-sky sky marker\n");
  FUN_10080850(param_3,param_2);
  fVar2 = (float10)FUN_10080910();
  DAT_104ce480 = (float)fVar2;
  fVar2 = (float10)FUN_10080910();
  DAT_104ce484 = (float)fVar2;
  fVar2 = (float10)FUN_10080910();
  DAT_104ce488 = (float)fVar2;
  uVar1 = FUN_100808b0();
  if ((uVar1 & 1) != 0) {
    FUN_1007d4d0("  sky uses ambient light hack\n");
    DAT_104ce070 = FUN_100808b0();
  }
  if ((uVar1 & 2) != 0) {
    FUN_1007d4d0("  sky uses direct light hack\n");
    DAT_104ce074 = FUN_100808b0();
  }
  return 1;
}

