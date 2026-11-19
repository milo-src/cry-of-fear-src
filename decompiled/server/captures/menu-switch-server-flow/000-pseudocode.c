
void FUN_100a0aa0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (*(int *)(iVar1 + 0x248) == 1) {
    (*DAT_10222fe4)("map c_difficulty_settings\n");
    iVar1 = *(int *)(in_ECX + 4);
  }
  if (*(int *)(iVar1 + 0x248) == 2) {
    (*DAT_10222fe4)("map c_video_stress_test\n");
  }
  return;
}

