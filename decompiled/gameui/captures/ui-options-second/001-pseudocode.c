
int * __thiscall FUN_10044ef0(void *this,undefined4 *param_1,uint *param_2)

{
  longlong lVar1;
  uint *in_stack_00000018;
  undefined1 in_stack_0000001c;
  int iVar2;
  char local_44 [32];
  char local_24 [32];
  
  FUN_1008dcc0(this,param_1,param_2);
  FUN_10045380((int)this + 0xb4);
  FUN_10045470((int)this + 0xb5);
  *(undefined ***)this = &PTR_FUN_100caa24;
  FUN_100602d9(this,this);
  lVar1 = __ftol();
  iVar2 = (int)lVar1;
  lVar1 = __ftol();
  FUN_1008ec87(this,(int)lVar1,iVar2);
  FUN_100ad757(local_24,&DAT_100e6494);
  FUN_100ad757(local_44,&DAT_100e649c);
  FUN_1008e9c5(this,local_24,local_44);
  FUN_100ae190((uint *)((int)this + 200),in_stack_00000018);
  *(undefined1 *)((int)this + 0xb7) = 0;
  *(undefined1 *)((int)this + 0xb6) = in_stack_0000001c;
  FUN_100451d3(this);
  return this;
}

