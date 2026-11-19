
void __thiscall FUN_1004a212(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  FUN_100692ce(this,param_1);
  puVar1 = (undefined4 *)(**(code **)(*(int *)this + 0xd8))(local_8);
  *(undefined4 *)((int)this + 0x128) = *puVar1;
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_c,s_BrightControlText_100e6c5c,param_1);
  *(undefined4 *)((int)this + 300) = *puVar1;
  (**(code **)(*(int *)this + 0xe8))(0,0);
  return;
}

