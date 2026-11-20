
void FUN_01d46622(char *param_1,char *param_2)

{
  for (; ((param_1 != (char *)0x0 && (param_2 != (char *)0x0)) && (*param_2 != '\0'));
      param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *param_1 = '\0';
  return;
}

