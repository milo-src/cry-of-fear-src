
void FUN_100554c0(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = (**(code **)(in_ECX + 0xb0))(0x1f01);
  FUN_1007d4d0("GL_RENDERER: %s\n",uVar1);
  uVar1 = (**(code **)(in_ECX + 0xb0))(0x1f00);
  FUN_1007d4d0("GL_VENDOR: %s\n",uVar1);
  uVar1 = (**(code **)(in_ECX + 0xb0))(0x1f02);
  FUN_1007d4d0("GL_VERSION: %s\n",uVar1);
  (**(code **)(in_ECX + 0xc0))(0xd52,&local_8);
  (**(code **)(in_ECX + 0xc0))(0xd53,&local_14);
  (**(code **)(in_ECX + 0xc0))(0xd54,&local_10);
  (**(code **)(in_ECX + 0xc0))(0xd55,&local_c);
  FUN_1007d4d0("Color buffer RGBA bits: %d, %d, %d, %d\n",local_8,local_14,local_10,local_c);
  (**(code **)(in_ECX + 0xc0))(0xd58,&local_8);
  (**(code **)(in_ECX + 0xc0))(0xd59,&local_14);
  (**(code **)(in_ECX + 0xc0))(0xd5a,&local_10);
  (**(code **)(in_ECX + 0xc0))(0xd5b,&local_c);
  FUN_1007d4d0("Accum buffer RGBA bits: %d, %d, %d, %d\n",local_8,local_14,local_10,local_c);
  (**(code **)(in_ECX + 0xc0))(0xd56,&local_8);
  FUN_1007d4d0("Depth buffer bits: %d\n",local_8);
  (**(code **)(in_ECX + 0xc0))(0xd57,&local_8);
  FUN_1007d4d0("Stencil buffer bits: %d\n",local_8);
  return;
}

