
void FUN_10061290(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_10062fe0(0,3);
  FUN_10062fe0(1,2);
  (*DAT_101be764)(0x84c0);
  (*DAT_101be698)(0x8513);
  (*DAT_101be64c)(0x8513,DAT_104cddc0);
  if (param_1 != 2) {
    if (param_1 == 4) {
      (*DAT_101be650)(0x302,0);
      (*DAT_101be66c)(0,0,0,1);
      FUN_10062f10(1,7,0,0);
      for (iVar2 = DAT_104cde70; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x28)) {
        FUN_10060e10(0x84c1,*(int *)(iVar2 + 0x38) + DAT_101cbf78);
        FUN_100632e0(iVar2,&DAT_104cddcc);
        FUN_10061d80(iVar2);
      }
      (*DAT_101be764)(0x84c0);
      (*DAT_101be688)(0x8513);
      (*DAT_101be764)(0x84c0);
      (*DAT_101be6d4)(0x1702);
      (*DAT_101be6cc)();
      (*DAT_101be6d4)(0x1700);
      (*DAT_101be650)(0,0x304);
      FUN_10062f10(0,0,0,0);
      FUN_10062fe0(0,0);
      FUN_10062fe0(1,0);
      for (iVar2 = DAT_104cde70; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x28)) {
        FUN_10061d80(iVar2);
      }
      (*DAT_101be650)(0x304,1);
      (*DAT_101be66c)(1,1,1,0);
      FUN_10062f10(1,4,0,0);
      FUN_10062fe0(0,1);
      FUN_10062fe0(1,2);
      iVar2 = DAT_104cde70;
      if (DAT_104cde70 != 0) {
        do {
          iVar1 = FUN_100621d0(*(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x24));
          FUN_10060e10(0x84c0,*(undefined4 *)(iVar1 + 0x18));
          FUN_10060e10(0x84c1,*(int *)(iVar2 + 0x38) + DAT_101cbf74);
          FUN_10061d80(iVar2);
          DAT_104cdfa8 = DAT_104cdfa8 + 1;
          iVar2 = *(int *)(iVar2 + 0x28);
        } while (iVar2 != 0);
        return;
      }
    }
    else if ((param_1 == 1) || (param_1 == 3)) {
      FUN_10062f10(1,1,1,1);
      FUN_10062fe0(2,2);
      FUN_10062fe0(3,1);
      (*DAT_101be650)(1,1);
      if (param_1 == 1) {
        (*DAT_101be698)(0x8522);
        (*DAT_101be784)(0x854e,2);
        (*DAT_101be78c)(0x8550,0x1907,0x8523,0x84c0,0x8538,0x1907);
        (*DAT_101be78c)(0x8550,0x1907,0x8524,0x84c1,0x8538,0x1907);
        (*DAT_101be790)(0x8550,0x1907,0x852e,0x8530,0x8530,0,0,1,0,0);
        (*DAT_101be78c)(0x8551,0x1907,0x8523,0x852e,0x8536,0x1907);
        (*DAT_101be78c)(0x8551,0x1907,0x8524,0x852e,0x8536,0x1907);
        (*DAT_101be78c)(0x8551,0x1907,0x8525,0x84c2,0x8536,0x1907);
        (*DAT_101be78c)(0x8551,0x1907,0x8526,0x84c3,0x8536,0x1907);
        (*DAT_101be790)(0x8551,0x1907,0x852e,0x852f,0x8530,0,0,0,0,0);
        (*DAT_101be794)(0x8523,0x8531,0x8536,0x1907);
        (*DAT_101be794)(0x8524,0x852f,0x8536,0x1907);
        (*DAT_101be794)(0x8525,0,0x8536,0x1907);
        (*DAT_101be794)(0x8526,0,0x8536,0x1907);
        (*DAT_101be794)(0x8527,0x852e,0x8536,0x1907);
        (*DAT_101be794)(0x8528,0x852e,0x8536,0x1907);
        (*DAT_101be794)(0x8529,0,0x8537,0x1906);
        iVar2 = DAT_104cde70;
      }
      else {
        (*DAT_101be698)(0x8804);
        (*DAT_101be7a8)(0x8804,DAT_1018f850);
        iVar2 = DAT_104cde70;
      }
      for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x28)) {
        iVar1 = FUN_100621d0(*(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x24));
        FUN_10060e10(0x84c1,*(int *)(iVar2 + 0x38) + DAT_101cbf78);
        FUN_10060e10(0x84c2,*(int *)(iVar2 + 0x38) + DAT_101cbf74);
        FUN_10060e10(0x84c3,*(undefined4 *)(iVar1 + 0x18));
        FUN_100632e0(iVar2,&DAT_104cddcc);
        FUN_10061d80(iVar2);
        DAT_104cdfa8 = DAT_104cdfa8 + 1;
      }
      (*DAT_101be764)(0x84c0);
      (*DAT_101be688)(0x8513);
      if (param_1 == 1) goto LAB_10061b21;
      (*DAT_101be688)(0x8804);
    }
    return;
  }
  FUN_10062f10(1,1,0,0);
  (*DAT_101be698)(0x8522);
  (*DAT_101be784)(0x854e,2);
  (*DAT_101be78c)(0x8550,0x1907,0x8523,0x84c0,0x8538,0x1907);
  (*DAT_101be78c)(0x8550,0x1907,0x8524,0x84c1,0x8538,0x1907);
  (*DAT_101be790)(0x8550,0x1907,0x852e,0x8530,0x8530,0,0,1,0,0);
  (*DAT_101be78c)(0x8551,0x1907,0x8523,0x852e,0x8536,0x1907);
  (*DAT_101be78c)(0x8551,0x1907,0x8524,0x852e,0x8536,0x1907);
  (*DAT_101be790)(0x8551,0x1907,0x852e,0x8530,0x8530,0,0,0,0,0);
  (*DAT_101be794)(0x8523,0,0x8536,0x1907);
  (*DAT_101be794)(0x8524,0,0x8536,0x1907);
  (*DAT_101be794)(0x8525,0,0x8536,0x1907);
  (*DAT_101be794)(0x8526,0,0x8536,0x1907);
  (*DAT_101be794)(0x8527,0,0x8536,0x1907);
  (*DAT_101be794)(0x8528,0,0x8536,0x1907);
  (*DAT_101be794)(0x8529,0x852e,0x8536,0x1905);
  (*DAT_101be650)(0x302,0);
  (*DAT_101be66c)(0,0,0,1);
  for (iVar2 = DAT_104cde70; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x28)) {
    FUN_10060e10(0x84c1,*(int *)(iVar2 + 0x38) + DAT_101cbf78);
    FUN_100632e0(iVar2,&DAT_104cddcc);
    FUN_10061d80(iVar2);
  }
  (*DAT_101be764)(0x84c0);
  (*DAT_101be688)(0x8513);
  (*DAT_101be764)(0x84c0);
  (*DAT_101be6d4)(0x1702);
  (*DAT_101be6cc)();
  (*DAT_101be6d4)(0x1700);
  (*DAT_101be650)(0x304,1);
  (*DAT_101be66c)(1,1,1,0);
  FUN_10062fe0(0,1);
  (*DAT_101be784)(0x854e,1);
  (*DAT_101be78c)(0x8550,0x1907,0x8523,0x84c0,0x8536,0x1907);
  (*DAT_101be78c)(0x8550,0x1907,0x8524,0x84c1,0x8536,0x1907);
  (*DAT_101be790)(0x8550,0x1907,0x852e,0x8530,0x8530,0,0,0,0,0);
  (*DAT_101be794)(0x8523,0,0x8536,0x1907);
  (*DAT_101be794)(0x8524,0,0x8536,0x1907);
  (*DAT_101be794)(0x8525,0,0x8536,0x1907);
  (*DAT_101be794)(0x8526,0x852e,0x8536,0x1907);
  (*DAT_101be794)(0x8527,0,0x8536,0x1907);
  (*DAT_101be794)(0x8528,0,0x8536,0x1907);
  (*DAT_101be794)(0x8529,0,0x8536,0x1906);
  iVar2 = DAT_104cde70;
  if (DAT_104cde70 != 0) {
    do {
      iVar1 = FUN_100621d0(*(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x24));
      FUN_10060e10(0x84c0,*(undefined4 *)(iVar1 + 0x18));
      FUN_10060e10(0x84c1,*(int *)(iVar2 + 0x38) + DAT_101cbf74);
      FUN_10061d80(iVar2);
      DAT_104cdfa8 = DAT_104cdfa8 + 1;
      iVar2 = *(int *)(iVar2 + 0x28);
    } while (iVar2 != 0);
    (*DAT_101be688)(0x8522);
    return;
  }
LAB_10061b21:
  (*DAT_101be688)(0x8522);
  return;
}

