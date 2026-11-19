
void __thiscall FUN_1005b5b0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined1 local_c [4];
  int local_8;
  
  *(undefined4 *)((int)this + 0x90) = param_1;
  *(undefined4 *)((int)this + 0x94) = param_2;
  FUN_1005e14a(this,&local_8,local_c);
  FUN_10065852(*(void **)((int)this + 0x78),local_8 - *(int *)((int)this + 0x90));
  return;
}

