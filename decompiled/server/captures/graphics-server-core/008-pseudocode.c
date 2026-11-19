
void FUN_10099460(void)

{
  int *in_ECX;
  
  if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
    in_ECX[0x1e] = (int)CEnvFog::ResumeThink;
    (**(code **)(*in_ECX + 8))(0x3dcccccd);
  }
  return;
}

