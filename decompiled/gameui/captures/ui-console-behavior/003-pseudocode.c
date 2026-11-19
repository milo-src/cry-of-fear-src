
void __thiscall FUN_10049d70(void *this,byte *param_1)

{
  uint uVar1;
  uint *local_108;
  uint local_104 [64];
  
  uVar1 = FUN_100b1620(this,param_1,(byte *)s_Submit_100e6c1c);
  if (uVar1 == 0) {
    (**(code **)(**(int **)((int)this + 0x11c) + 0x224))(local_104,0x100);
    (**(code **)(DAT_100f9e8c + 0x50))(local_104);
    FUN_1004948a(this,&DAT_100e6c24);
    FUN_1004948a(this,(char *)local_104);
    FUN_1004948a(this,&DAT_100e6c28);
    (**(code **)(**(int **)((int)this + 0x11c) + 0x218))(&DAT_100fedf0);
    (**(code **)(*(int *)this + 0x2f8))(*(undefined4 *)((int)this + 0x11c));
    FUN_1007704c(*(int **)((int)this + 0x118));
    local_108 = FUN_100af0f0(local_104,' ');
    if (local_108 != (uint *)0x0) {
      *(undefined1 *)local_108 = 0;
      local_108 = (uint *)((int)local_108 + 1);
    }
    FUN_1004a34d(this,(char *)local_104,(char *)local_108);
    (**(code **)(**(int **)((int)this + 0x124) + 0x74))(0);
  }
  else {
    FUN_10069684(this,param_1);
  }
  return;
}

