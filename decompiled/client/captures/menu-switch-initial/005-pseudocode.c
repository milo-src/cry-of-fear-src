
void FUN_1001a540(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  float fVar4;
  double dVar5;
  wchar_t local_48 [32];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  *(int *)(in_ECX + 0x14) = (int)(((float)DAT_1018f430 / 640.0) * 170.0 + 0.5);
  fVar4 = (float)DAT_1018f434;
  *(undefined4 *)(in_ECX + 0x1c) = 0x3ecccccd;
  *(undefined4 *)(in_ECX + 0x20) = 0x3eb33333;
  *(undefined4 *)(in_ECX + 0x24) = 0x3f4ccccd;
  *(undefined4 *)(in_ECX + 0x28) = 0x40a00000;
  *(undefined4 *)(in_ECX + 0x2c) = 4;
  *(int *)(in_ECX + 0x18) = (int)((fVar4 / 480.0) * 45.0 + 0.5);
  *(int *)(in_ECX + 0x30) = (int)(((float)DAT_1018f430 / 640.0) * 10.0 + 0.5);
  *(int *)(in_ECX + 0x34) = (int)(((float)DAT_1018f434 / 480.0) * 10.0 + 0.5);
  fVar4 = (float)DAT_1018f430;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(int *)(in_ECX + 0x38) = (int)((fVar4 / 640.0) * 5.0 + 0.5);
  *(int *)(in_ECX + 0x40) = (int)(((float)DAT_1018f430 / 640.0) * 12.0 + 0.5);
  *(int *)(in_ECX + 0x44) = (int)(((float)DAT_1018f434 / 480.0) * 12.0 + 0.5);
  iVar1 = (*DAT_101b2744)("menu_settings.txt",5,0);
  if (iVar1 != 0) {
    for (iVar2 = (*DAT_101b2748)(iVar1,local_48); iVar2 != 0;
        iVar2 = (*DAT_101b2748)(iVar2,local_48)) {
      iVar3 = __stricmp((char *)local_48,"SizeX");
      if (iVar3 == 0) {
        iVar2 = (*DAT_101b2748)(iVar2,local_48);
        iVar3 = _atoi((char *)local_48);
        *(int *)(in_ECX + 0x14) = (int)(((float)DAT_1018f430 / 640.0) * (float)iVar3 + 0.5);
      }
      else {
        iVar3 = __stricmp((char *)local_48,"SizeY");
        if (iVar3 == 0) {
          iVar2 = (*DAT_101b2748)(iVar2,local_48);
          iVar3 = _atoi((char *)local_48);
          *(int *)(in_ECX + 0x18) = (int)(((float)DAT_1018f434 / 480.0) * (float)iVar3 + 0.5);
        }
        else {
          iVar3 = __stricmp((char *)local_48,"NumberSizeX");
          if (iVar3 == 0) {
            iVar2 = (*DAT_101b2748)(iVar2,local_48);
            iVar3 = _atoi((char *)local_48);
            *(int *)(in_ECX + 0x40) = (int)(((float)DAT_1018f430 / 640.0) * (float)iVar3 + 0.5);
          }
          else {
            iVar3 = __stricmp((char *)local_48,"NumberSizeY");
            if (iVar3 == 0) {
              iVar2 = (*DAT_101b2748)(iVar2,local_48);
              iVar3 = _atoi((char *)local_48);
              *(int *)(in_ECX + 0x44) = (int)(((float)DAT_1018f434 / 480.0) * (float)iVar3 + 0.5);
            }
            else {
              iVar3 = __stricmp((char *)local_48,"OfsX");
              if (iVar3 == 0) {
                iVar2 = (*DAT_101b2748)(iVar2,local_48);
                iVar3 = _atoi((char *)local_48);
                *(int *)(in_ECX + 0x30) = (int)(((float)DAT_1018f430 / 640.0) * (float)iVar3 + 0.5);
              }
              else {
                iVar3 = __stricmp((char *)local_48,"OfsY");
                if (iVar3 == 0) {
                  iVar2 = (*DAT_101b2748)(iVar2,local_48);
                  iVar3 = _atoi((char *)local_48);
                  *(int *)(in_ECX + 0x34) =
                       (int)(((float)DAT_1018f434 / 480.0) * (float)iVar3 + 0.5);
                }
                else {
                  iVar3 = __stricmp((char *)local_48,"SpaceX");
                  if (iVar3 == 0) {
                    iVar2 = (*DAT_101b2748)(iVar2,local_48);
                    iVar3 = _atoi((char *)local_48);
                    *(int *)(in_ECX + 0x38) =
                         (int)(((float)DAT_1018f430 / 640.0) * (float)iVar3 + 0.5);
                  }
                  else {
                    iVar3 = __stricmp((char *)local_48,"SpaceY");
                    if (iVar3 == 0) {
                      iVar2 = (*DAT_101b2748)(iVar2,local_48);
                      iVar3 = _atoi((char *)local_48);
                      *(int *)(in_ECX + 0x3c) =
                           (int)(((float)DAT_1018f434 / 480.0) * (float)iVar3 + 0.5);
                    }
                    else {
                      iVar3 = __stricmp((char *)local_48,"Scale");
                      if (iVar3 == 0) {
                        iVar2 = (*DAT_101b2748)(iVar2,local_48);
                        dVar5 = FID_conflict__atof(local_48);
                        *(float *)(in_ECX + 0x1c) = (float)dVar5;
                      }
                      else {
                        iVar3 = __stricmp((char *)local_48,"MinAlpha");
                        if (iVar3 == 0) {
                          iVar2 = (*DAT_101b2748)(iVar2,local_48);
                          dVar5 = FID_conflict__atof(local_48);
                          *(float *)(in_ECX + 0x20) = (float)dVar5;
                        }
                        else {
                          iVar3 = __stricmp((char *)local_48,"MaxAlpha");
                          if (iVar3 == 0) {
                            iVar2 = (*DAT_101b2748)(iVar2,local_48);
                            dVar5 = FID_conflict__atof(local_48);
                            *(float *)(in_ECX + 0x24) = (float)dVar5;
                          }
                          else {
                            iVar3 = __stricmp((char *)local_48,"Speed");
                            if (iVar3 == 0) {
                              iVar2 = (*DAT_101b2748)(iVar2,local_48);
                              dVar5 = FID_conflict__atof(local_48);
                              *(float *)(in_ECX + 0x28) = (float)dVar5;
                            }
                            else {
                              iVar3 = __stricmp((char *)local_48,"RenderMode");
                              if (iVar3 == 0) {
                                iVar2 = (*DAT_101b2748)(iVar2);
                                iVar3 = _atoi((char *)local_48);
                                *(int *)(in_ECX + 0x2c) = iVar3;
                              }
                              else {
                                (*DAT_101b26a8)("Error: unknown token %s in file menu_settings.txt\n"
                                                ,local_48);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x24) - *(float *)(in_ECX + 0x20);
    (*DAT_101b274c)(iVar1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*DAT_101b26a8)("Error: couldn\'t load menu_settings.txt, using default\n");
  *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x24) - *(float *)(in_ECX + 0x20);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

