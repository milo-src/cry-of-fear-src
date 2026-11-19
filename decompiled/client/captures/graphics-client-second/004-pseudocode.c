
void FUN_10086cb0(void)

{
  char cVar1;
  undefined4 *in_ECX;
  
  cVar1 = FUN_10089830();
  if (((cVar1 != '\0') && (in_ECX[0x12] != 0)) && (in_ECX[0x13] != 0)) {
    (*(code *)*in_ECX)(0x84c1);
    glGetIntegerv(0x8069,in_ECX + 0x12);
    (*(code *)*in_ECX)(0x84c2);
    glGetIntegerv(0x8069,in_ECX + 0x13);
    (*(code *)*in_ECX)(0x84c0);
  }
  return;
}

