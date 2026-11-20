
int FUN_01de0e44(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *local_8;
  
  iVar3 = 0;
  if (DAT_01ec9dd0 < 0x100) {
    if (param_1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar1 = FUN_01d466c2(param_1,0,0);
      if (iVar1 < 0xc) {
        if (param_2 < 0xc1) {
          for (local_8 = DAT_024988ac; local_8 != (int *)0x0; local_8 = (int *)local_8[6]) {
            iVar1 = FUN_01d4676f(param_1,local_8 + 2);
            if (iVar1 == 0) {
              iVar3 = 1;
              break;
            }
          }
          if (iVar3 == 0) {
            piVar2 = (int *)FUN_01d8cf91(0x20);
            *piVar2 = DAT_01ec9dd0;
            DAT_01ec9dd0 = DAT_01ec9dd0 + 1;
            piVar2[1] = param_2;
            FUN_01d46622(piVar2 + 2,param_1);
            if (piVar2 == (int *)0x0) {
              iVar3 = 0;
            }
            else {
              piVar2[6] = (int)DAT_024988a8;
              iVar3 = *piVar2;
              DAT_024988a8 = piVar2;
            }
          }
          else {
            iVar3 = *local_8;
          }
        }
        else {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0;
      }
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

