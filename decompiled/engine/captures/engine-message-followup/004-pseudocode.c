
undefined * FUN_01da62cf(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  switch(param_1) {
  case 0:
    puVar2 = &DAT_02572510;
    break;
  case 1:
  case 8:
    iVar1 = FUN_01da8405(DAT_0242f2f4);
    if ((iVar1 < 1) || (DAT_0251f328 < iVar1)) {
      FUN_01d7d873(s_WriteDest_Parm__not_a_client_01ec23f8);
    }
    if (param_1 == 1) {
      puVar2 = (undefined *)(DAT_0251f324 + 0x7c + (iVar1 + -1) * 0x5018);
    }
    else {
      puVar2 = (undefined *)(DAT_0251f324 + 0x25c0 + (iVar1 + -1) * 0x5018);
    }
    break;
  case 2:
    puVar2 = &DAT_025734c4;
    break;
  case 3:
    puVar2 = &DAT_02574ca0;
    break;
  case 4:
  case 5:
    puVar2 = &DAT_02574478;
    break;
  default:
    FUN_01d7d873(s_WriteDest_Parm__bad_destination__01ec2418,param_1);
    puVar2 = (undefined *)0x0;
    break;
  case 9:
    puVar2 = &DAT_0257488c;
  }
  return puVar2;
}

