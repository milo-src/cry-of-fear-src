
void FUN_1001b3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char local_164 [128];
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 local_c4;
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_3,param_2);
  pcVar2 = (char *)FUN_10080a60();
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar3[(int)(local_164 + (-1 - (int)pcVar2))] = cVar1;
  } while (cVar1 != '\0');
  local_e4 = FUN_100808e0();
  local_dc = FUN_100808b0();
  if (local_dc == 0xff) {
    local_dc = -1;
  }
  local_e0 = FUN_100808e0();
  local_d8 = FUN_100808b0();
  if (local_d8 == 0xff) {
    local_d8 = -1;
  }
  local_d4 = FUN_100808e0();
  local_d0 = FUN_100808e0();
  iVar4 = FUN_100808e0();
  local_c8 = iVar4;
  local_cc = FUN_100808b0();
  local_c4 = 0;
  pcVar3 = local_164;
  puVar6 = (undefined4 *)(&DAT_101af810 + iVar4 * 0x15c);
  for (iVar5 = 0x57; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar6 = puVar6 + 1;
  }
  FUN_1001ab20(&DAT_101af810 + iVar4 * 0x15c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

