
void __thiscall FUN_10059a47(void *this,int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = FUN_1000d690((void *)((int)this + 0xec),&param_1);
  if ((bVar1) && (bVar1 = FUN_1000d690((void *)((int)this + 0xf0),&param_2), bVar1)) {
    return;
  }
  *(int *)((int)this + 0xec) = param_1;
  *(int *)((int)this + 0xf0) = param_2;
  (**(code **)(*(int *)this + 0xe8))(0,0);
  return;
}

