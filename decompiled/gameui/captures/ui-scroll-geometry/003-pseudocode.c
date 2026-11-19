
int * __thiscall FUN_100a8240(void *this,undefined4 *param_1,uint *param_2,undefined1 param_3)

{
  FUN_1005da5a(this,param_1,param_2);
  FUN_100a8de0((int)this + 0x70);
  *(undefined ***)this = &PTR_FUN_100d7588;
  *(undefined1 *)((int)this + 0x71) = param_3;
  *(undefined1 *)((int)this + 0x72) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  FUN_100a83e2(this);
  return this;
}

