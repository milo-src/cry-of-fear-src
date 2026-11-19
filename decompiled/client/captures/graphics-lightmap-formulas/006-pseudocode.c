
void FUN_1005b6d0(void)

{
  undefined4 *puVar1;
  
  (*DAT_101be764)(0x84c0);
  (*DAT_101be688)(0x8513);
  (*DAT_101be6d4)(0x1702);
  (*DAT_101be6cc)();
  (*DAT_101be6d4)(0x1700);
  if (DAT_104cd4d8 == 0) {
    (*DAT_101be764)(0x84c2);
    (*DAT_101be688)(0x806f);
    FUN_1005ad10();
    return;
  }
  FUN_10060e10(0x84c1,DAT_104cc480);
  (*DAT_101be764)(0x84c1);
  FUN_1005c5a0();
  (*DAT_101be764)(0x84c0);
  (*DAT_101be688)(0xde1);
  (*DAT_101be698)(0xde0);
  (*DAT_101be64c)(0xde0,DAT_104cc484);
  FUN_1005c4f0();
  FUN_10062fe0(0,0);
  FUN_10062fe0(1,0);
  if (((DAT_101be77c != 0) && (1 < DAT_101be780)) && (*(float *)(DAT_104cd520 + 0xc) == 0.0)) {
    (*DAT_101be650)(0x304,1);
    (*DAT_101be66c)(1,1,1,0);
    (*DAT_101be698)(0x8522);
    (*DAT_101be784)(0x854e,1);
    (*DAT_101be788)(0x852a,&DAT_104cc488);
    (*DAT_101be78c)(0x8550,0x1907,0x8523,0x84c0,0x8536,0x1906);
    (*DAT_101be78c)(0x8550,0x1907,0x8524,0,0x8537,0x1907);
    (*DAT_101be78c)(0x8550,0x1907,0x8525,0x84c1,0x8536,0x1906);
    (*DAT_101be78c)(0x8550,0x1907,0x8526,0,0x8537,0x1907);
    (*DAT_101be790)(0x8550,0x1907,0x8530,0x8530,0x852e,0,0,0,0,0);
    (*DAT_101be794)(0x8523,0x852e,0x8536,0x1907);
    (*DAT_101be794)(0x8524,0,0x8536,0x1907);
    (*DAT_101be794)(0x8525,0x852a,0x8536,0x1907);
    (*DAT_101be794)(0x8526,0,0x8536,0x1907);
    (*DAT_101be794)(0x8529,0,0x8537,0x1906);
    for (puVar1 = DAT_104cd4d4; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      FUN_10061d50(puVar1);
    }
    (*DAT_101be688)(0x8522);
    (*DAT_101be764)(0x84c0);
    (*DAT_101be688)(0xde0);
    (*DAT_101be698)(0xde1);
    FUN_1005ace0();
    (*DAT_101be764)(0x84c1);
    FUN_1005acf0();
    return;
  }
  (*DAT_101be650)(0,0x303);
  FUN_10062f10(1,1,0,0);
  (*DAT_101be764)(0x84c0);
  (*DAT_101be724)(0x2300,0x2200,0x8570);
  (*DAT_101be724)(0x2300,0x8571,0x1e01);
  (*DAT_101be724)(0x2300,0x8580,0x1702);
  (*DAT_101be724)(0x2300,0x8573,1);
  (*DAT_101be724)(0x2300,0x8572,0x1e01);
  (*DAT_101be724)(0x2300,0x8588,0x1702);
  (*DAT_101be724)(0x2300,0x8598,0x302);
  (*DAT_101be724)(0x2300,0xd1c,1);
  (*DAT_101be764)(0x84c1);
  (*DAT_101be724)(0x2300,0x2200,0x8570);
  (*DAT_101be724)(0x2300,0x8571,0x1e01);
  (*DAT_101be724)(0x2300,0x8580,0x1702);
  (*DAT_101be724)(0x2300,0x8573,1);
  (*DAT_101be724)(0x2300,0x8572,0x104);
  (*DAT_101be724)(0x2300,0x8588,0x8578);
  (*DAT_101be724)(0x2300,0x8598,0x302);
  (*DAT_101be724)(0x2300,0x8589,0x1702);
  (*DAT_101be724)(0x2300,0x8599,0x302);
  (*DAT_101be724)(0x2300,0xd1c,1);
  for (puVar1 = DAT_104cd4d4; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    FUN_10061d50(puVar1);
  }
  (*DAT_101be764)(0x84c0);
  (*DAT_101be688)(0xde0);
  (*DAT_101be698)(0xde1);
  FUN_1005ace0();
  (*DAT_101be724)(0x2300,0x2200,0x1e01);
  (*DAT_101be764)(0x84c1);
  FUN_1005acf0();
  (*DAT_101be724)(0x2300,0x2200,0x1e01);
  (*DAT_101be650)(0x304,1);
  (*DAT_101be66c)(1,1,1,0);
  FUN_10062f10(0,0,0,0);
  (*DAT_101be660)(DAT_104cc488,DAT_104cc48c,DAT_104cc490);
  for (puVar1 = DAT_104cd4d4; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    FUN_10061d50(puVar1);
  }
  return;
}

