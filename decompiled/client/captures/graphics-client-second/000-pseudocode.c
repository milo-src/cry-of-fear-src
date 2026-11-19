
void FUN_100863f0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  iVar2 = (*DAT_10545850)();
  if (iVar2 != 1) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar2 = FUN_10086520(param_1);
  if (*in_ECX == 0) {
    FUN_10086670();
  }
  if (iVar2 != 0) goto LAB_10086501;
  uVar3 = (*DAT_101b2724)(param_1);
  FUN_1000c900(local_88,"%s/cgshaders/%s",uVar3);
  cVar1 = FUN_10086580(local_88,param_2);
  if (cVar1 == '\0') goto LAB_10086501;
  iVar2 = FUN_100b44cb(0x30);
  iVar4 = iVar2 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    param_1[iVar4 + -1] = cVar1;
  } while (cVar1 != '\0');
  if (param_2 == 1) {
    iVar4 = in_ECX[2];
LAB_100864c0:
    uVar3 = cgCreateProgramFromFile(*in_ECX,0x1010,local_88,iVar4,&DAT_10151090,0);
    *(undefined4 *)(iVar2 + 0x24) = uVar3;
  }
  else if (param_2 == 2) {
    iVar4 = in_ECX[1];
    goto LAB_100864c0;
  }
  *(int *)(iVar2 + 0x20) = param_2;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(int *)(iVar2 + 0x28) = in_ECX[3];
  if (in_ECX[3] != 0) {
    *(int *)(in_ECX[3] + 0x2c) = iVar2;
  }
  in_ECX[3] = iVar2;
  cgGLLoadProgram(*(undefined4 *)(iVar2 + 0x24));
LAB_10086501:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

