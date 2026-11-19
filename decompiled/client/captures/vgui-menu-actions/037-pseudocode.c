
void FUN_10040540(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (param_1 == in_ECX + 0x10) {
    cVar1 = FUN_10003b10();
    if (cVar1 != '\0') {
      (*DAT_101b2658)("dev_commentary 1");
      return;
    }
    (*DAT_101b2658)("dev_commentary 0");
  }
  return;
}

