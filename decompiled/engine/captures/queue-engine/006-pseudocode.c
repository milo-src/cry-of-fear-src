
void FUN_01de007a(int param_1)

{
  int iVar1;
  undefined1 auStack_10120 [256];
  undefined4 uStack_10020;
  char *apcStack_1001c [2];
  undefined1 *puStack_10014;
  undefined4 uStack_10010;
  undefined4 uStack_1000c;
  int iStack_10008;
  undefined1 auStack_10004 [65520];
  undefined4 uStack_14;
  char **ppcStack_10;
  char **ppcStack_c;
  char **ppcStack_8;
  
  ppcStack_8 = (char **)0x1de0087;
  FUN_01e71670();
  ppcStack_8 = (char **)0x14;
  ppcStack_c = (char **)0x0;
  ppcStack_10 = apcStack_1001c;
  uStack_14 = 0x1de0097;
  FUN_01d4648a();
  apcStack_1001c[0] = s_Activate_Server_01ecbf94;
  puStack_10014 = auStack_10004;
  uStack_1000c = 0;
  uStack_10010 = 0x10000;
  DAT_024988bc = 0;
  DAT_024988c0 = 0;
  DAT_024988c4 = 0;
  DAT_024988c8 = 0;
  ppcStack_8 = (char **)s_cstrike_01ecbfa4;
  ppcStack_c = (char **)&DAT_02d7d3c0;
  ppcStack_10 = (char **)0x1de00fb;
  iVar1 = FUN_01e70540();
  if (iVar1 != 0) {
    ppcStack_8 = (char **)s_cstrike_beta_01ecbfac;
    ppcStack_c = (char **)&DAT_02d7d3c0;
    ppcStack_10 = (char **)0x1de0111;
    iVar1 = FUN_01e70540();
    if (iVar1 != 0) {
      ppcStack_8 = (char **)s_czero_01ecbfbc;
      ppcStack_c = (char **)&DAT_02d7d3c0;
      ppcStack_10 = (char **)0x1de0133;
      iVar1 = FUN_01e70540();
      if (iVar1 == 0) {
        DAT_024988c0 = 1;
      }
      else {
        ppcStack_8 = (char **)s_czeror_01ecbfc4;
        ppcStack_c = (char **)&DAT_02d7d3c0;
        ppcStack_10 = (char **)0x1de0155;
        iVar1 = FUN_01e70540();
        if (iVar1 == 0) {
          DAT_024988c8 = 1;
        }
        else {
          ppcStack_8 = (char **)s_terror_01ecbfcc;
          ppcStack_c = (char **)&DAT_02d7d3c0;
          ppcStack_10 = (char **)0x1de0177;
          iVar1 = FUN_01e70540();
          if (iVar1 == 0) {
            DAT_024988c4 = 1;
          }
        }
      }
      goto LAB_01de0188;
    }
  }
  DAT_024988bc = 1;
LAB_01de0188:
  DAT_024988cc = 1;
  ppcStack_8 = (char **)&DAT_01ecbfd4;
  ppcStack_c = (char **)s_sv_newunit_01ecbfd8;
  ppcStack_10 = (char **)0x1de01a1;
  FUN_01d4d3ba();
  ppcStack_8 = (char **)0x0;
  ppcStack_c = (char **)0x8;
  ppcStack_10 = (char **)s_Server_01ecbfe4;
  uStack_14 = 0x1de01b2;
  FUN_01d0fb4a();
  ppcStack_8 = (char **)DAT_0251f328;
  ppcStack_c = (char **)DAT_025724f8;
  ppcStack_10 = (char **)DAT_02572500;
  uStack_14 = 0x1de01cf;
  (*DAT_0250d914)();
  ppcStack_8 = (char **)0x1de01d7;
  FUN_01dec557();
  ppcStack_8 = (char **)0x0;
  ppcStack_c = (char **)0x9;
  ppcStack_10 = (char **)s_Server_01ecbfec;
  uStack_14 = 0x1de01e5;
  FUN_01d0fb4a();
  ppcStack_8 = (char **)0x1de01ed;
  FUN_01ddf19a();
  DAT_025203a0 = 1;
  DAT_0257250c = 2;
  ppcStack_8 = (char **)0x0;
  ppcStack_c = (char **)0xa;
  ppcStack_10 = (char **)s_Server_01ecbff4;
  uStack_14 = 0x1de020f;
  FUN_01d0fb4a();
  if (param_1 == 0) {
    DAT_027fc108 = 0xd2f1a9fc;
    DAT_027fc10c = 0x3f50624d;
    ppcStack_8 = (char **)0x1de029b;
    FUN_01de8fda();
  }
  else if (DAT_0251f328 < 2) {
    DAT_027fc108 = 0x9999999a;
    DAT_027fc10c = 0x3fb99999;
    ppcStack_8 = (char **)0x1de027b;
    FUN_01de8fda();
    ppcStack_8 = (char **)0x1de0280;
    FUN_01de8fda();
  }
  else {
    DAT_027fc108 = 0x9999999a;
    DAT_027fc10c = 0x3fe99999;
    for (iStack_10008 = 0; iStack_10008 < 0x10; iStack_10008 = iStack_10008 + 1) {
      ppcStack_8 = (char **)0x1de025e;
      FUN_01de8fda();
    }
  }
  ppcStack_8 = (char **)0x1de02a0;
  FUN_01ddf972();
  ppcStack_8 = (char **)0x1de02a5;
  FUN_01ddf4bb();
  ppcStack_8 = (char **)0x1de02aa;
  DAT_025614ec = FUN_01dedfe1();
  DAT_027fc11c = DAT_0251f324;
  for (iStack_10008 = 0; iStack_10008 < DAT_0251f328; iStack_10008 = iStack_10008 + 1) {
    if (((*DAT_027fc11c != 0) || (DAT_027fc11c[3] != 0)) && (DAT_027fc11c[0x952] == 0)) {
      ppcStack_8 = (char **)(DAT_027fc11c + 8);
      ppcStack_c = (char **)0x1de0334;
      FUN_01d8eece();
      if (DAT_0251f328 < 2) {
        ppcStack_8 = (char **)DAT_027fc11c;
        ppcStack_c = apcStack_1001c;
        ppcStack_10 = (char **)0x1de0353;
        FUN_01dd7308();
      }
      else {
        ppcStack_8 = (char **)(DAT_027fc11c + 0x1f);
        ppcStack_c = (char **)0x1de0367;
        FUN_01ddfe26();
        ppcStack_8 = (char **)0x0;
        ppcStack_c = (char **)0x0;
        ppcStack_10 = (char **)(DAT_027fc11c + 8);
        uStack_14 = 0x1de037d;
        FUN_01d8f270();
      }
      if (DAT_024988ac != 0) {
        uStack_10020 = DAT_024988a8;
        DAT_024988a8 = DAT_024988ac;
        ppcStack_8 = apcStack_1001c;
        ppcStack_c = (char **)0x1de03ac;
        FUN_01dd80af();
        DAT_024988a8 = uStack_10020;
      }
      DAT_027fc11c[5] = 1;
      ppcStack_8 = apcStack_1001c;
      ppcStack_c = (char **)(DAT_027fc11c + 8);
      ppcStack_10 = (char **)0x1;
      uStack_14 = 0x1de03de;
      FUN_01d90aad();
      ppcStack_8 = (char **)(DAT_027fc11c + 8);
      ppcStack_c = (char **)0x1de03f0;
      FUN_01d90636();
      ppcStack_8 = apcStack_1001c;
      ppcStack_c = (char **)0x1de03ff;
      FUN_01d483c6();
    }
    DAT_027fc11c = DAT_027fc11c + 0x1406;
  }
  ppcStack_8 = (char **)0x1de040c;
  FUN_01d77401();
  if (DAT_0251f328 < 2) {
    ppcStack_8 = (char **)s_Game_started_01ecc018;
    ppcStack_c = (char **)0x1de0434;
    FUN_01d4abd8();
  }
  else {
    ppcStack_8 = (char **)DAT_0251f328;
    ppcStack_c = (char **)s__i_player_server_started_01ecbffc;
    ppcStack_10 = (char **)0x1de0425;
    FUN_01d4abd8();
  }
  ppcStack_8 = (char **)DAT_025204d4;
  ppcStack_c = (char **)&DAT_025203d0;
  ppcStack_10 = (char **)s_Started_map___s___CRC___i___01ecc028;
  uStack_14 = 0x1de044d;
  FUN_01dd4a80();
  if ((PTR_DAT_01eca0c4 != (undefined *)0x0) && (*PTR_DAT_01eca0c4 != '\0')) {
    ppcStack_8 = (char **)s_Executing_map_change_config_file_01ecc048;
    ppcStack_c = (char **)0x1;
    ppcStack_10 = (char **)0x1de0472;
    FUN_01df3aca();
    ppcStack_8 = (char **)PTR_DAT_01eca0c4;
    ppcStack_c = (char **)s_exec__s_01ecc06c;
    ppcStack_10 = (char **)auStack_10120;
    uStack_14 = 0x1de048d;
    FUN_01e71ee7();
    ppcStack_8 = (char **)auStack_10120;
    ppcStack_c = (char **)0x1de049c;
    FUN_01d440eb();
  }
  return;
}

