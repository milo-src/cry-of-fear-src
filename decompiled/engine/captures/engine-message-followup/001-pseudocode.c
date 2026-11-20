
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d7d873(undefined4 param_1)

{
  undefined1 local_404 [1024];
  
  if (DAT_023c9dec != 0) {
    FUN_01df2656(s_Host_Error__recursively_entered_01ebcbac);
  }
  DAT_023c9dec = 1;
  FUN_01d724ac();
  FUN_01e725ae(local_404,0x400,param_1,&stack0x00000008);
  if ((DAT_025203a0 == 0) && (_DAT_01ebc9ac != 0.0)) {
    FUN_01d38050(0,0,0);
  }
  FUN_01d4aa99(s_Host_Error___s_01ebcbcc,local_404);
  if (DAT_025203a0 != 0) {
    FUN_01d7e77b(0);
  }
  if (DAT_02dcf280 == 0) {
    FUN_01df2656(s_Host_Error___s_01ebcbdc,local_404);
  }
  FUN_01d31007();
  DAT_02dd31ec = 0xffffffff;
  DAT_023c9dec = 0;
                    /* WARNING: Subroutine does not return */
  _longjmp((int *)&DAT_027fc1a0,1);
}

