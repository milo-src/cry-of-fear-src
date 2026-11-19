
int * __thiscall
FUN_10045fe0(void *this,undefined4 *param_1,uint *param_2,char *param_3,uint *param_4,uint *param_5)

{
  uint *local_10;
  uint *local_c;
  
  FUN_1008d110(this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_FUN_100cb2b4;
  if (param_4 == (uint *)0x0) {
    local_c = (uint *)0x0;
  }
  else {
    local_c = FUN_100bfec9(param_4);
  }
  *(uint **)((int)this + 0x120) = local_c;
  if (param_5 == (uint *)0x0) {
    local_10 = (uint *)0x0;
  }
  else {
    local_10 = FUN_100bfec9(param_5);
  }
  *(uint **)((int)this + 0x124) = local_10;
  if (*(int *)((int)this + 0x120) != 0) {
    FUN_10046138(this);
  }
  return this;
}

