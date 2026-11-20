
void FUN_1005f3a0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  
  FUN_10062bd0();
  if (*(float *)(DAT_104cd508 + 0xc) != 0.0) {
    iVar1 = FUN_10053c70();
    if (iVar1 != 0) {
      if (DAT_101be7f8 == 0) {
        pcVar2 = "No paranoia hacked opengl32.dll, custom renderer disabled\n";
      }
      else {
        iVar1 = (*DAT_101b26dc)(0);
        if (*(int *)(*(int *)(iVar1 + 0xb94) + 0x17c) == 0) {
          pcVar2 = "No lightdata, custom renderer disabled\n";
        }
        else {
          if ((((DAT_101be75c != 0) && (DAT_101be778 != 0)) && (DAT_101be7cc != 0)) &&
             (1 < DAT_101be760)) {
            if (param_1[0x39] != 0) {
              return;
            }
            if (DAT_101be804 == 0) {
              FUN_1007d400("Warning: no stencilbits!\n");
              (*DAT_101b269c)("gl_clipplanes",0x3f800000);
            }
            if (DAT_1018f848 != 0) {
              FUN_10069410();
              FUN_10059e30();
              FUN_10061eb0();
              DAT_1018f848 = 0;
            }
            FUN_1005a110();
            if (DAT_104cddc0 == 0) {
              DAT_104cddc0 = FUN_1005ec40();
            }
            if (DAT_104cddc4 == 0) {
              DAT_104cddc4 = FUN_1005eb80();
            }
            FUN_1005ab00();
            DAT_104cde64 = *param_1;
            DAT_104cde68 = param_1[1];
            DAT_104cde6c = param_1[2];
            FUN_10084c30(param_1[3],param_1[4],param_1[5],*param_1,param_1[1],param_1[2],
                         param_1[0x27]);
            FUN_1005ee00(param_1);
            DAT_104cdd60 = 1;
            return;
          }
          pcVar2 = "Paranoia custom renderer is not supported by your videocard\n";
        }
      }
      FUN_1007d400(pcVar2);
    }
    (*DAT_101b269c)("gl_renderer",0);
  }
  return;
}

