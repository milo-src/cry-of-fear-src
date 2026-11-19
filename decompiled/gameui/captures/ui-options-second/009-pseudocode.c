
int * __thiscall
FUN_10044970(void *this,undefined4 *param_1,uint *param_2,char *param_3,uint *param_4)

{
  uint *local_c;
  
  FUN_1008d110(this,param_1,param_2,param_3);
  FUN_10044ce0((int)this + 0x120);
  FUN_10044dd0((int)this + 0x121);
  *(undefined ***)this = &PTR_FUN_100ca6e8;
  if (param_4 == (uint *)0x0) {
    local_c = (uint *)0x0;
  }
  else {
    local_c = FUN_100bfec9(param_4);
  }
  *(uint **)((int)this + 0x124) = local_c;
  FUN_10044ad1(this);
  FUN_100602d9(this,this);
  return this;
}

