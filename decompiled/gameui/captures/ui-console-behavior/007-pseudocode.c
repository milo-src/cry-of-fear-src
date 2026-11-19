
undefined4 * __thiscall
FUN_1004a8a0(void *this,undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  FUN_1007d2d0(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x134) = param_3;
  *(undefined ***)this = &PTR_FUN_100cc8e8;
  return this;
}

