
void FUN_10062fe0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_101be760 <= param_1) {
    return;
  }
  if (*(int *)(&DAT_104ce000 + param_1 * 4) == param_2) {
    return;
  }
  (*DAT_101be768)(param_1 + 0x84c0);
  switch(param_2) {
  case 0:
    (*DAT_101be68c)(0x8078);
    *(int *)(&DAT_104ce000 + param_1 * 4) = param_2;
    return;
  case 1:
    if (DAT_104cdf94 == 2) {
      iVar2 = 0xc;
      uVar1 = 2;
    }
    else {
      iVar2 = DAT_104cdf8c + 0xc;
      uVar1 = 2;
    }
    break;
  case 2:
    if (DAT_104cdf94 == 2) {
      iVar2 = 0x14;
      uVar1 = 2;
    }
    else {
      iVar2 = DAT_104cdf8c + 0x14;
      uVar1 = 2;
    }
    break;
  case 3:
    iVar2 = DAT_104cdf8c;
    if (DAT_104cdf94 == 2) {
      iVar2 = 0;
    }
    uVar1 = 3;
    break;
  default:
    goto switchD_1006301a_default;
  }
  (*DAT_101be718)(uVar1,0x1406,0x1c,iVar2);
  (*DAT_101be69c)(0x8078);
switchD_1006301a_default:
  *(int *)(&DAT_104ce000 + param_1 * 4) = param_2;
  return;
}

