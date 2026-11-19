
void FUN_10086c40(void)

{
  char cVar1;
  undefined4 *in_ECX;
  
  cVar1 = FUN_10089830();
  if (cVar1 != '\0') {
    (*(code *)*in_ECX)(0x84c1);
    glDisable(0xde1);
    glBindTexture(0xde1,in_ECX[0x12]);
    (*(code *)*in_ECX)(0x84c2);
    glDisable(0xde1);
    glBindTexture(0xde1,in_ECX[0x13]);
    (*(code *)*in_ECX)(0x84c3);
    glDisable(0xde1);
    (*(code *)*in_ECX)(0x84c0);
  }
  return;
}

