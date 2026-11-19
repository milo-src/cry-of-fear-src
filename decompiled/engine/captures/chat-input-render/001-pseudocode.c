
void FUN_01d89a1f(void)

{
  char *local_8;
  
  for (local_8 = &DAT_027f8c40; (local_8 != (char *)0x0 && (*local_8 != '\0'));
      local_8 = local_8 + 1) {
    if (*local_8 == ';') {
      *local_8 = ',';
    }
  }
  return;
}

