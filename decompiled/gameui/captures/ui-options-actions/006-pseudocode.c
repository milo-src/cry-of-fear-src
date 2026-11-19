
void __fastcall FUN_1005717d(void *param_1)

{
  char cVar1;
  undefined1 local_10;
  
  cVar1 = FUN_10045264(*(int **)((int)param_1 + 0x1f0));
  if (cVar1 == '\0') {
    cVar1 = FUN_10045264(*(int **)((int)param_1 + 500));
    if (cVar1 == '\0') {
      local_10 = '\0';
      goto LAB_100571c4;
    }
  }
  local_10 = '\x01';
LAB_100571c4:
  FUN_10045090(*(int **)((int)param_1 + 0x1f0));
  FUN_10045090(*(int **)((int)param_1 + 500));
  FUN_100572a9(param_1,local_10);
  return;
}

