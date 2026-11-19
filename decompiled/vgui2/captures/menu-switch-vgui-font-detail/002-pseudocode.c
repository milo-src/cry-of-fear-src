
int FUN_10013af3(int param_1)

{
  char cVar1;
  uint uVar2;
  void *this;
  void *extraout_ECX;
  void *this_00;
  void *this_01;
  longlong lVar3;
  int local_50;
  byte local_48 [64];
  char *local_8;
  
  local_48[0] = 0;
  local_8 = (char *)(**(code **)(*DAT_1004830c + 0x170))();
  if ((local_8 != (char *)0x0) && (*local_8 != '\0')) {
    _strncpy((char *)local_48,local_8,0x40);
  }
  this = (void *)(int)(char)local_48[0];
  if ((this != (void *)0x0) ||
     (cVar1 = (**(code **)(*(int *)PTR_DAT_1004428c + 0x34))
                        (s_HKEY_CURRENT_USER_Software_Valve_100434c0,local_48,0x3f),
     this = extraout_ECX, cVar1 != '\0')) {
    uVar2 = FUN_10037010(this,local_48,(byte *)s_korean_100434f0);
    if (((uVar2 == 0) ||
        (((uVar2 = FUN_10037010(local_48,local_48,(byte *)s_tchinese_100434f8), uVar2 == 0 ||
          (uVar2 = FUN_10037010(this_00,local_48,(byte *)s_schinese_10043504), uVar2 == 0)) ||
         (uVar2 = FUN_10037010(this_01,local_48,&DAT_10043510), uVar2 == 0)))) && (param_1 < 0xd)) {
      param_1 = 0xd;
    }
    else {
      uVar2 = FUN_10037010(local_48,local_48,(byte *)s_russian_10043518);
      if ((uVar2 == 0) && (0xc < param_1)) {
        lVar3 = __ftol();
        if ((int)lVar3 < 0xc) {
          local_50 = 0xc;
          param_1 = local_50;
        }
        else {
          lVar3 = __ftol();
          param_1 = (int)lVar3;
        }
      }
    }
  }
  return param_1;
}

