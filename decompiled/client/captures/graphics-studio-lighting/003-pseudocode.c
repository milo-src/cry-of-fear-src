
void FUN_10068c80(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  char *pcVar3;
  char *pcVar4;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)(in_ECX + 0x44);
  if ((*(int *)(iVar2 + 0xb4) != 0) && (*(int *)(iVar2 + 0xb8) != 0)) {
    *(int *)(in_ECX + 0x40b0) = iVar2;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar3 = *(char **)(in_ECX + 0x34);
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar4[(int)(local_108 + (-1 - (int)pcVar3))] = cVar1;
  } while (cVar1 != '\0');
  pcVar4 = local_108;
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  builtin_strncpy(pcVar3 + (int)(local_108 + (-4 - (int)(local_108 + 1))) + 1,"T.md",4);
  (pcVar4 + (int)(local_108 + -(int)(local_108 + 1)))[0] = 'l';
  (pcVar4 + (int)(local_108 + -(int)(local_108 + 1)))[1] = '\0';
  iVar2 = (*DAT_105457bc)(local_108,0);
  if (iVar2 == 0) {
    *(undefined4 *)(in_ECX + 0x40b0) = 0;
    pcVar4 = "Mod_ForName: failed for %s\n";
  }
  else {
    iVar2 = (*DAT_105457c0)(iVar2);
    *(int *)(in_ECX + 0x40b0) = iVar2;
    if (iVar2 != 0) goto LAB_10068d5c;
    pcVar4 = "Mod_Extradata: failed for %s\n";
  }
  (*DAT_101b26a8)(pcVar4,local_108);
LAB_10068d5c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

