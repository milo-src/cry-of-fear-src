
undefined4 FUN_10080710(char param_1)

{
  int *piVar1;
  char *in_ECX;
  
  piVar1 = DAT_105440a8;
  if ((*in_ECX != '\0') && (DAT_105440a8 != (int *)0x0)) {
    if (param_1 != '\0') {
      in_ECX[0xbc] = '\x01';
      in_ECX[0xbd] = '\0';
      in_ECX[0xbe] = '\0';
      in_ECX[0xbf] = '\0';
      (**(code **)(*piVar1 + 0x18))(1);
      return 1;
    }
    in_ECX[0xbc] = '\0';
    in_ECX[0xbd] = '\0';
    in_ECX[0xbe] = '\0';
    in_ECX[0xbf] = '\0';
    (**(code **)(*piVar1 + 0x18))(0);
    return 1;
  }
  return 0;
}

