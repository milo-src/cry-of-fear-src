
void __thiscall FUN_1005bcb0(void *this,int param_1)

{
  *(int *)((int)this + 0x74) = param_1;
  (**(code **)(*(int *)this + 0x10))();
  return;
}

