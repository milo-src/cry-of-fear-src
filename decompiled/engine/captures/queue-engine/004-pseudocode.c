
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d816e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  char *_Source;
  int local_c;
  int local_8;
  
  FUN_01d7e77b(0);
  DAT_023ca258 = 0;
  FUN_01d72406(0);
  if (param_4 == 0) {
    FUN_01d84f75();
    FUN_01de2927();
    _DAT_0251f334 = 0;
  }
  FUN_01d4666a(&DAT_02dd28a4,param_2,0x3f);
  DAT_02dd28e3 = 0;
  iVar1 = FUN_01de04d1(param_1,param_3,0);
  if (iVar1 != 0) {
    FUN_01d0fb4a(s_Server_01ebdfb0,7,0);
    if (param_4 == 0) {
      FUN_01de0ddb();
      FUN_01de007a(1);
      if (DAT_025203a0 == 0) {
        return;
      }
      if (DAT_02dcf280 != 0) {
        FUN_01d46622(&DAT_02dd28e4,&DAT_023c9f5c);
        for (local_8 = 2; iVar1 = FUN_01d44cee(), local_8 < iVar1; local_8 = local_8 + 1) {
          sVar2 = _strlen(&DAT_02dd28e4);
          sVar2 = 0x7ff - sVar2;
          _Source = (char *)FUN_01d44cfe(local_8);
          _strncat(&DAT_02dd28e4,_Source,sVar2);
          sVar2 = _strlen(&DAT_02dd28e4);
          _strncat(&DAT_02dd28e4,&DAT_01ebdfb8,0x7ff - sVar2);
        }
      }
    }
    else {
      iVar1 = FUN_01d8405b(param_3,1);
      if (iVar1 == 0) {
        FUN_01de0ddb();
      }
      DAT_025203a4 = 1;
      DAT_025203a8 = 1;
      FUN_01de007a(0);
    }
    if (DAT_024988a8 != 0) {
      if (DAT_024988ac == 0) {
        DAT_024988ac = DAT_024988a8;
      }
      else {
        for (local_c = DAT_024988ac; *(int *)(local_c + 0x18) != 0;
            local_c = *(int *)(local_c + 0x18)) {
        }
        *(int *)(local_c + 0x18) = DAT_024988a8;
      }
      DAT_024988a8 = 0;
    }
    if (DAT_02dcf280 != 0) {
      FUN_01d4542c(s_connect_local_01ebdfbc,1);
    }
  }
  return;
}

