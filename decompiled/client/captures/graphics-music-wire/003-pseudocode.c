
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void V_CalcRefdef(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
                    /* 0xb3340  593  V_CalcRefdef */
  if (param_1[0x12] == 0) {
    DAT_10559510 = 0;
    cVar1 = FUN_1007fad0();
    if (cVar1 == '\0') goto LAB_100b338b;
    uVar2 = 0;
  }
  else {
    DAT_10559510 = 1;
    cVar1 = FUN_1007fad0();
    if (cVar1 != '\0') goto LAB_100b338b;
    uVar2 = 1;
  }
  FUN_1007fbd0(uVar2);
LAB_100b338b:
  FUN_100af790(param_1);
  DAT_105595d0 = param_1[1];
  DAT_105595d4 = param_1[2];
  DAT_105595cc = *param_1;
  _DAT_105595f4 = param_1[4];
  _DAT_105595f8 = param_1[5];
  _DAT_105595f0 = param_1[3];
  (*DAT_101b2668)(&DAT_105595f0,&DAT_10559650,&DAT_10559608,&DAT_1055965c);
  FUN_1005fe90(param_1);
  return;
}

