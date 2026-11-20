
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01d7f2cc(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  int local_1c;
  int local_18;
  double local_14;
  double local_c;
  
  iVar1 = __setjmp3(&DAT_027fc1a0,0);
  if (iVar1 == 0) {
    if ((DAT_0250d988 != 3) || (DAT_023c9f48 == 0)) {
      DAT_0250d988 = param_2;
    }
    *param_3 = 0;
    if (_DAT_01ebc994 != 0.0) {
      fVar3 = (float10)FUN_01df2837();
      local_c = (double)fVar3;
    }
    FUN_01d7f0f8(param_1);
    if (_DAT_01ebc994 != 0.0) {
      fVar3 = (float10)FUN_01df2837();
      local_14 = (double)fVar3;
    }
    if (DAT_02499f64 != 0) {
      *param_3 = DAT_02499f64;
      DAT_02499f64 = 0;
      FUN_01d442c6();
    }
    if (_DAT_01ebc994 != 0.0) {
      _DAT_023c9dd8 = (local_14 - local_c) + _DAT_023c9dd8;
      DAT_023c9dd4 = DAT_023c9dd4 + 1;
      if (999 < DAT_023c9dd4) {
        uVar2 = __ftol();
        DAT_023c9dd4 = 0;
        _DAT_023c9dd8 = 0.0;
        local_18 = 0;
        for (local_1c = 0; local_1c < DAT_0251f328; local_1c = local_1c + 1) {
          if (*(int *)(DAT_0251f324 + local_1c * 0x5018) != 0) {
            local_18 = local_18 + 1;
          }
        }
        FUN_01d4aa99(s_host_profile___2i_clients__2i_ms_01ebcfc0,local_18,uVar2);
      }
    }
  }
  return DAT_0250d988;
}

