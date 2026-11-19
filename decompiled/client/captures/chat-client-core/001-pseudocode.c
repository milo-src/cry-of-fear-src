
void FUN_1008a5a0(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 *puVar9;
  int local_14;
  int local_10;
  char *local_c;
  char local_8 [4];
  
  pcVar2 = &DAT_10545128 + param_1 * 0x100;
  local_10 = 0;
  (*DAT_101b267c)(pcVar2,&local_10,&DAT_10545760);
  if (local_10 + 10 <= DAT_1018f430 + -0x28) {
    return;
  }
  local_14 = 0;
  pcVar8 = (char *)0x0;
  iVar5 = 10;
  cVar1 = *pcVar2;
  pcVar7 = pcVar2;
  while( true ) {
    if (cVar1 == '\0') {
      return;
    }
    if ((cVar1 == '/') && (pcVar7[1] == '(')) {
      cVar1 = pcVar7[2];
      pcVar7 = pcVar7 + 2;
      if (cVar1 == '\0') {
        return;
      }
      while (pcVar7 = pcVar7 + 1, cVar1 != ')') {
        cVar1 = *pcVar7;
        if (cVar1 == '\0') {
          return;
        }
      }
      if (*pcVar7 == '\0') {
        return;
      }
    }
    local_8[0] = *pcVar7;
    local_8[1] = 0;
    if ((local_8[0] == ' ') && (pcVar7 != pcVar2)) {
      pcVar8 = pcVar7;
    }
    (*DAT_101b267c)(local_8,&local_14,&DAT_10545760);
    iVar5 = iVar5 + local_14;
    if (DAT_1018f430 + -0x28 < iVar5) break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 1;
  }
  local_c = pcVar7 + -1;
  if (pcVar8 != (char *)0x0) {
    local_c = pcVar8;
  }
  do {
    iVar5 = 0;
    pcVar2 = &DAT_10545128;
    do {
      if (*pcVar2 == '\0') break;
      pcVar2 = pcVar2 + 0x100;
      iVar5 = iVar5 + 1;
    } while ((int)pcVar2 < 0x10545628);
    if (iVar5 != 5) break;
    iVar5 = FUN_1008a9e0();
    local_c = local_c + iVar5 * -0x100;
  } while( true );
  iVar3 = iVar5 * 0x100;
  pcVar2 = &DAT_10545128 + iVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar7 = local_c;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (*local_c == ' ') {
    pcVar8 = local_c;
    if (0x100 < (int)(pcVar2 + (-((int)pcVar7 - (int)(local_c + 1)) - (int)(&DAT_10545129 + iVar3)))
       ) goto LAB_1008a77b;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar8 - (int)local_c;
    pcVar2 = (char *)(iVar3 + 0x10545127);
    do {
      pcVar7 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar7 != '\0');
  }
  else {
    if ((char *)0xff <
        pcVar2 + (-((int)pcVar7 - (int)(local_c + 1)) - (int)(&DAT_10545129 + iVar3)) + -2)
    goto LAB_1008a77b;
    puVar9 = (undefined2 *)(iVar3 + 0x10545127);
    do {
      pcVar2 = (char *)((int)puVar9 + 1);
      puVar9 = (undefined2 *)((int)puVar9 + 1);
    } while (*pcVar2 != '\0');
    *puVar9 = 0x20;
    pcVar2 = local_c;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_c;
    pcVar2 = (char *)(iVar3 + 0x10545127);
    do {
      pcVar7 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar7 != '\0');
  }
  pcVar7 = local_c;
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
LAB_1008a77b:
  *local_c = '\0';
  FUN_1008a5a0(iVar5);
  return;
}

