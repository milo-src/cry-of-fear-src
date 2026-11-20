
/* WARNING: Removing unreachable block (ram,0x01d467b2) */

undefined4 FUN_01d4676f(char *param_1,char *param_2)

{
  while( true ) {
    if (*param_1 != *param_2) {
      return 0xffffffff;
    }
    if (*param_1 == '\0') break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}

