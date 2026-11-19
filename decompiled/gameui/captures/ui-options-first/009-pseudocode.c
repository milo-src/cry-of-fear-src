
void __fastcall FUN_1008cc52(int *param_1)

{
  void *this;
  undefined4 *local_10;
  
  (**(code **)(*(int *)param_1[0x44] + 0x22c))();
  this = (void *)FUN_100743aa(0x18);
  if (this == (void *)0x0) {
    local_10 = (undefined4 *)0x0;
  }
  else {
    local_10 = FUN_10072470(this,s_ApplyChanges_100ebb24);
  }
  (**(code **)(*param_1 + 0xac))(local_10);
  return;
}

