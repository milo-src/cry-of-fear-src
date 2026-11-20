
void FUN_01dd8163(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *apcStack_101e4 [2];
  undefined1 *puStack_101dc;
  undefined4 uStack_101d8;
  undefined4 uStack_101d4;
  undefined1 auStack_101d0 [128];
  int *piStack_10150;
  int iStack_1014c;
  int iStack_10148;
  undefined1 auStack_10144 [65536];
  undefined1 local_144 [64];
  undefined1 local_104 [224];
  undefined4 uStack_24;
  int iStack_20;
  int *piStack_1c;
  char **ppcStack_18;
  char **ppcStack_14;
  char **ppcStack_10;
  
  FUN_01e71670();
  ppcStack_10 = (char **)0x14;
  ppcStack_14 = (char **)0x0;
  ppcStack_18 = apcStack_101e4;
  piStack_1c = (int *)0x1dd8182;
  FUN_01d4648a();
  apcStack_101e4[0] = s_New_Connection_01ecad34;
  puStack_101dc = auStack_10144;
  uStack_101d4 = 0;
  uStack_101d8 = 0x10000;
  if ((DAT_02d7da1c != 1) && ((DAT_027fc11c[1] == 0 || (*DAT_027fc11c != 0)))) {
    iStack_10148 = DAT_027fc11c[0x12e7];
    DAT_027fc11c[3] = 1;
    piVar3 = DAT_027fc11c;
    DAT_027fc11c[0xd5e] = DAT_027fc1e0;
    piVar3[0xd5f] = DAT_027fc1e4;
    DAT_027fc11c[0x1404] = 0;
    ppcStack_10 = (char **)(DAT_027fc11c + 0x1f);
    ppcStack_14 = (char **)0x1dd8232;
    FUN_01d483c6();
    ppcStack_10 = (char **)(DAT_027fc11c + 0x970);
    ppcStack_14 = (char **)0x1dd8245;
    FUN_01d483c6();
    ppcStack_10 = (char **)(DAT_027fc11c + 8);
    ppcStack_14 = (char **)0x1dd8257;
    FUN_01d8eece();
    ppcStack_10 = (char **)DAT_027fc11c;
    ppcStack_14 = apcStack_101e4;
    ppcStack_18 = (char **)0x1dd826d;
    FUN_01dd7308();
    uVar1 = DAT_024988a8;
    if (DAT_024988ac != 0) {
      DAT_024988a8 = DAT_024988ac;
      ppcStack_10 = apcStack_101e4;
      ppcStack_14 = (char **)0x1dd829d;
      FUN_01dd80af();
    }
    DAT_024988a8 = uVar1;
    DAT_027fc11c[5] = 1;
    if (((*DAT_027fc11c != 0) || (DAT_027fc11c[1] != 0)) && (DAT_027fc11c[0x12e7] != 0)) {
      ppcStack_10 = (char **)DAT_027fc11c[0x12e7];
      ppcStack_14 = (char **)0x1dd82f0;
      (*DAT_0250d900)();
    }
    ppcStack_10 = (char **)(DAT_027fc11c + 0x1342);
    ppcStack_14 = (char **)&DAT_01ecad44;
    ppcStack_18 = (char **)0x40;
    piStack_1c = (int *)local_144;
    iStack_20 = 0x1dd8313;
    FUN_01e6ff86();
    piVar3 = DAT_027fc11c + 9;
    piVar4 = &iStack_20;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    uStack_24 = 0x1dd8330;
    ppcStack_10 = (char **)FUN_01d921ad();
    ppcStack_14 = (char **)&DAT_01ecad48;
    ppcStack_18 = (char **)0x100;
    piStack_1c = (int *)local_104;
    iStack_20 = 0x1dd834a;
    FUN_01e6ff86();
    ppcStack_10 = (char **)s_Connection_rejected_by_game_01ecad4c;
    ppcStack_14 = (char **)0x80;
    ppcStack_18 = (char **)auStack_101d0;
    piStack_1c = (int *)0x1dd8363;
    FUN_01e6ff86();
    ppcStack_10 = (char **)auStack_101d0;
    ppcStack_14 = (char **)local_104;
    ppcStack_18 = (char **)local_144;
    piStack_1c = (int *)iStack_10148;
    iStack_20 = 0x1dd8388;
    iVar2 = (*DAT_0250d8fc)();
    if (iVar2 == 0) {
      ppcStack_10 = (char **)0x9;
      ppcStack_14 = (char **)(DAT_027fc11c + 0x1f);
      ppcStack_18 = (char **)0x1dd83a0;
      FUN_01d4705f();
      ppcStack_10 = (char **)auStack_101d0;
      ppcStack_14 = (char **)s_echo__s_01ecad6c;
      ppcStack_18 = (char **)0x1dd83b4;
      ppcStack_10 = (char **)FUN_01d48f0d();
      ppcStack_14 = (char **)(DAT_027fc11c + 0x1f);
      ppcStack_18 = (char **)0x1dd83c6;
      FUN_01d47171();
      ppcStack_10 = (char **)auStack_101d0;
      ppcStack_14 = (char **)s_Server_refused_connection_becaus_01ecad78;
      ppcStack_18 = (char **)0x0;
      piStack_1c = DAT_027fc11c;
      iStack_20 = 0x1dd83e3;
      FUN_01d7e2d6();
    }
    else {
      ppcStack_10 = (char **)0x9;
      ppcStack_14 = apcStack_101e4;
      ppcStack_18 = (char **)0x1dd83f9;
      FUN_01d4705f();
      ppcStack_10 = (char **)0x1dd8401;
      ppcStack_10 = (char **)FUN_01d46480();
      ppcStack_14 = (char **)s_fullserverinfo___s__01ecada0;
      ppcStack_18 = (char **)0x1dd840c;
      ppcStack_10 = (char **)FUN_01d48f0d();
      ppcStack_14 = apcStack_101e4;
      ppcStack_18 = (char **)0x1dd841c;
      FUN_01d47171();
      piStack_10150 = DAT_0251f324;
      for (iStack_1014c = 0; iStack_1014c < DAT_0251f328; iStack_1014c = iStack_1014c + 1) {
        if (((piStack_10150 == DAT_027fc11c) || (*piStack_10150 != 0)) ||
           ((piStack_10150[3] != 0 || (piStack_10150[1] != 0)))) {
          ppcStack_10 = apcStack_101e4;
          ppcStack_14 = (char **)piStack_10150;
          ppcStack_18 = (char **)0x1dd84ac;
          FUN_01ddccec();
        }
        piStack_10150 = piStack_10150 + 0x1406;
      }
      ppcStack_10 = apcStack_101e4;
      ppcStack_14 = (char **)(DAT_027fc11c + 8);
      ppcStack_18 = (char **)0x1;
      piStack_1c = (int *)0x1dd84c9;
      FUN_01d90aad();
      ppcStack_10 = (char **)(DAT_027fc11c + 8);
      ppcStack_14 = (char **)0x1dd84db;
      FUN_01d90636();
    }
  }
  return;
}

