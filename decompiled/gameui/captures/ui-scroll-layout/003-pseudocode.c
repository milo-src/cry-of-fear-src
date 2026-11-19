
void __thiscall FUN_100798c8(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 local_8 [4];
  
  FUN_10060a6b(this,param_1);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)this + 0x138))(local_8,s_ScrollBar_BgColor_100eb100,param_1);
  (**(code **)(*(int *)this + 0xcc))(*puVar1);
  return;
}

