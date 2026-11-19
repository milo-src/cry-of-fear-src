
int * __thiscall
FUN_100992d0(void *this,undefined4 *param_1,uint *param_2,char *param_3,int param_4,
            undefined1 param_5)

{
  FUN_10058f65(this,param_1,param_2,param_3);
  FUN_1009a270((int)this + 0x108);
  FUN_1009a310((int)this + 0x109);
  FUN_1009a420((int)this + 0x10a);
  FUN_1009a4b0((int)this + 0x10b);
  FUN_1009a540((int)this + 0x10c);
  *(undefined ***)this = &PTR_FUN_100d5874;
  *(int *)((int)this + 0x110) = param_4;
  *(undefined1 *)((int)this + 0x114) = param_5;
  FUN_1005928e(this,2);
  *(undefined4 *)((int)this + 0x124) = 0;
  FUN_100994f8(this);
  return this;
}

