
void FUN_10047550(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  char local_408 [256];
  char local_308 [256];
  char local_208 [256];
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x1434) == 0) goto LAB_10048387;
  FUN_10047100(*(int *)(DAT_101b2600 + 0x1434) + 0xec);
  FUN_10047100(*(int *)(DAT_101b2600 + 0x1434) + 0xfc);
  FUN_10047100(*(int *)(DAT_101b2600 + 0x1434) + 0x10c);
  FUN_10047100(*(int *)(DAT_101b2600 + 0x1434) + 0x11c);
  FUN_10047100(*(int *)(DAT_101b2600 + 0x1434) + 0x15c);
  FUN_10047100(*(int *)(DAT_101b2600 + 0x1434) + 300);
  pcVar2 = (char *)FUN_10080a60();
  pcVar5 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0xec);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_10080a60();
  pcVar5 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0xfc);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_10080a60();
  pcVar5 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x10c);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_10080a60();
  pcVar5 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x11c);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)FUN_10080a60();
  pcVar2 = pcVar5;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_108 + -(int)pcVar5)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)FUN_10080a60();
  pcVar2 = pcVar5;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_208 + -(int)pcVar5)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)FUN_10080a60();
  pcVar2 = pcVar5;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_308 + -(int)pcVar5)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)FUN_10080a60();
  pcVar2 = pcVar5;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_408 + -(int)pcVar5)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_10080a60();
  pcVar5 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 300);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  fVar8 = (float10)(*DAT_101b2644)("cof_subtitlelanguage");
  iVar7 = (int)fVar8;
  iVar3 = FUN_100d3cf0(local_108,"apnote");
  if ((((iVar3 == 0) && (iVar3 = FUN_100d3cf0(local_108,"magazine"), iVar3 == 0)) &&
      (iVar3 = FUN_100d3cf0(local_108,"purnellnote"), iVar3 == 0)) &&
     ((iVar3 = FUN_100d3cf0(local_108,"sewernote"), iVar3 == 0 &&
      (iVar3 = FUN_100d3cf0(local_108,"subnote"), iVar3 == 0)))) goto switchD_100477e3_default;
  switch(iVar7) {
  case 0:
  case 1:
    pcVar2 = local_108;
    pcVar5 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x15c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    goto switchD_100477e3_default;
  case 2:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x15c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x160),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x164),"s/du",4);
    builtin_strncpy((char *)(iVar3 + 0x168),"tch/",4);
    *(undefined1 *)(iVar3 + 0x16c) = 0;
    pcVar2 = local_108;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_108;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x15b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 3:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x15c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x160),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x164),"s/fr",4);
    builtin_strncpy((char *)(iVar3 + 0x168),"ench",4);
    *(undefined2 *)(iVar3 + 0x16c) = 0x2f;
    pcVar2 = local_108;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_108;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x15b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 4:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x15c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x160),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x164),"s/ge",4);
    builtin_strncpy((char *)(iVar3 + 0x168),"rman",4);
    *(undefined2 *)(iVar3 + 0x16c) = 0x2f;
    pcVar2 = local_108;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_108;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x15b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 5:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x15c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x160),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x164),"s/no",4);
    builtin_strncpy((char *)(iVar3 + 0x168),"rweg",4);
    builtin_strncpy((char *)(iVar3 + 0x16c),"ian/",4);
    *(undefined1 *)(iVar3 + 0x170) = 0;
    pcVar2 = local_108;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_108;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x15b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 6:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x15c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x160),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x164),"s/sp",4);
    builtin_strncpy((char *)(iVar3 + 0x168),"anis",4);
    *(undefined2 *)(iVar3 + 0x16c) = 0x2f68;
    *(undefined1 *)(iVar3 + 0x16e) = 0;
    pcVar2 = local_108;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_108;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x15b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 7:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x15c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x160),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x164),"s/sw",4);
    builtin_strncpy((char *)(iVar3 + 0x168),"edis",4);
    *(undefined2 *)(iVar3 + 0x16c) = 0x2f68;
    *(undefined1 *)(iVar3 + 0x16e) = 0;
    pcVar2 = local_108;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_108;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x15b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  default:
    goto switchD_100477e3_default;
  }
  pcVar5 = local_108;
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
switchD_100477e3_default:
  iVar3 = FUN_100d3cf0(local_208,"apnote");
  if (((iVar3 == 0) && (iVar3 = FUN_100d3cf0(local_208,"magazine"), iVar3 == 0)) &&
     ((iVar3 = FUN_100d3cf0(local_208,"purnellnote"), iVar3 == 0 &&
      ((iVar3 = FUN_100d3cf0(local_208,"sewernote"), iVar3 == 0 &&
       (iVar3 = FUN_100d3cf0(local_208,"subnote"), iVar3 == 0)))))) goto switchD_10047adb_default;
  switch(iVar7) {
  case 0:
  case 1:
    pcVar2 = local_208;
    pcVar5 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x16c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    goto switchD_10047adb_default;
  case 2:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x16c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x170),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x174),"s/du",4);
    builtin_strncpy((char *)(iVar3 + 0x178),"tch/",4);
    *(undefined1 *)(iVar3 + 0x17c) = 0;
    pcVar2 = local_208;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_208;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x16b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 3:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x16c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x170),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x174),"s/fr",4);
    builtin_strncpy((char *)(iVar3 + 0x178),"ench",4);
    *(undefined2 *)(iVar3 + 0x17c) = 0x2f;
    pcVar2 = local_208;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_208;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x16b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 4:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x16c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x170),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x174),"s/ge",4);
    builtin_strncpy((char *)(iVar3 + 0x178),"rman",4);
    *(undefined2 *)(iVar3 + 0x17c) = 0x2f;
    pcVar2 = local_208;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_208;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x16b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 5:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x16c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x170),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x174),"s/no",4);
    builtin_strncpy((char *)(iVar3 + 0x178),"rweg",4);
    builtin_strncpy((char *)(iVar3 + 0x17c),"ian/",4);
    *(undefined1 *)(iVar3 + 0x180) = 0;
    pcVar2 = local_208;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_208;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x16b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 6:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x16c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x170),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x174),"s/sp",4);
    builtin_strncpy((char *)(iVar3 + 0x178),"anis",4);
    *(undefined2 *)(iVar3 + 0x17c) = 0x2f68;
    *(undefined1 *)(iVar3 + 0x17e) = 0;
    pcVar2 = local_208;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_208;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x16b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 7:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x16c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x170),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x174),"s/sw",4);
    builtin_strncpy((char *)(iVar3 + 0x178),"edis",4);
    *(undefined2 *)(iVar3 + 0x17c) = 0x2f68;
    *(undefined1 *)(iVar3 + 0x17e) = 0;
    pcVar2 = local_208;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_208;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x16b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  default:
    goto switchD_10047adb_default;
  }
  pcVar5 = local_208;
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
switchD_10047adb_default:
  iVar3 = FUN_100d3cf0(local_308,"apnote");
  if ((((iVar3 == 0) && (iVar3 = FUN_100d3cf0(local_308,"magazine"), iVar3 == 0)) &&
      (iVar3 = FUN_100d3cf0(local_308,"purnellnote"), iVar3 == 0)) &&
     ((iVar3 = FUN_100d3cf0(local_308,"sewernote"), iVar3 == 0 &&
      (iVar3 = FUN_100d3cf0(local_308,"subnote"), iVar3 == 0)))) goto switchD_10047ddb_default;
  switch(iVar7) {
  case 0:
  case 1:
    pcVar2 = local_308;
    pcVar5 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x17c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    goto switchD_10047ddb_default;
  case 2:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x17c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x180),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x184),"s/du",4);
    builtin_strncpy((char *)(iVar3 + 0x188),"tch/",4);
    *(undefined1 *)(iVar3 + 0x18c) = 0;
    pcVar2 = local_308;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_308;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x17b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 3:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x17c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x180),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x184),"s/fr",4);
    builtin_strncpy((char *)(iVar3 + 0x188),"ench",4);
    *(undefined2 *)(iVar3 + 0x18c) = 0x2f;
    pcVar2 = local_308;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_308;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x17b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 4:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x17c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x180),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x184),"s/ge",4);
    builtin_strncpy((char *)(iVar3 + 0x188),"rman",4);
    *(undefined2 *)(iVar3 + 0x18c) = 0x2f;
    pcVar2 = local_308;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_308;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x17b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 5:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x17c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x180),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x184),"s/no",4);
    builtin_strncpy((char *)(iVar3 + 0x188),"rweg",4);
    builtin_strncpy((char *)(iVar3 + 0x18c),"ian/",4);
    *(undefined1 *)(iVar3 + 400) = 0;
    pcVar2 = local_308;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_308;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x17b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 6:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x17c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x180),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x184),"s/sp",4);
    builtin_strncpy((char *)(iVar3 + 0x188),"anis",4);
    *(undefined2 *)(iVar3 + 0x18c) = 0x2f68;
    *(undefined1 *)(iVar3 + 0x18e) = 0;
    pcVar2 = local_308;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_308;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x17b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 7:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x17c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 0x180),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x184),"s/sw",4);
    builtin_strncpy((char *)(iVar3 + 0x188),"edis",4);
    *(undefined2 *)(iVar3 + 0x18c) = 0x2f68;
    *(undefined1 *)(iVar3 + 0x18e) = 0;
    pcVar2 = local_308;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_308;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x17b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  default:
    goto switchD_10047ddb_default;
  }
  pcVar5 = local_308;
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
switchD_10047ddb_default:
  iVar3 = FUN_100d3cf0(local_408,"apnote");
  if (((iVar3 == 0) && (iVar3 = FUN_100d3cf0(local_408,"magazine"), iVar3 == 0)) &&
     ((iVar3 = FUN_100d3cf0(local_408,"purnellnote"), iVar3 == 0 &&
      ((iVar3 = FUN_100d3cf0(local_408,"sewernote"), iVar3 == 0 &&
       (iVar3 = FUN_100d3cf0(local_408,"subnote"), iVar3 == 0)))))) goto switchD_100480db_default;
  switch(iVar7) {
  case 0:
  case 1:
    pcVar2 = local_408;
    pcVar5 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x18c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    goto switchD_100480db_default;
  case 2:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x18c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 400),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x194),"s/du",4);
    builtin_strncpy((char *)(iVar3 + 0x198),"tch/",4);
    *(undefined1 *)(iVar3 + 0x19c) = 0;
    pcVar2 = local_408;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_408;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x18b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 3:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x18c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 400),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x194),"s/fr",4);
    builtin_strncpy((char *)(iVar3 + 0x198),"ench",4);
    *(undefined2 *)(iVar3 + 0x19c) = 0x2f;
    pcVar2 = local_408;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_408;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x18b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 4:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x18c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 400),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x194),"s/ge",4);
    builtin_strncpy((char *)(iVar3 + 0x198),"rman",4);
    *(undefined2 *)(iVar3 + 0x19c) = 0x2f;
    pcVar2 = local_408;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_408;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x18b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 5:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x18c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 400),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x194),"s/no",4);
    builtin_strncpy((char *)(iVar3 + 0x198),"rweg",4);
    builtin_strncpy((char *)(iVar3 + 0x19c),"ian/",4);
    *(undefined1 *)(iVar3 + 0x1a0) = 0;
    pcVar2 = local_408;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_408;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x18b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 6:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x18c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 400),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x194),"s/sp",4);
    builtin_strncpy((char *)(iVar3 + 0x198),"anis",4);
    *(undefined2 *)(iVar3 + 0x19c) = 0x2f68;
    *(undefined1 *)(iVar3 + 0x19e) = 0;
    pcVar2 = local_408;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_408;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x18b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  case 7:
    iVar3 = *(int *)(DAT_101b2600 + 0x1434);
    builtin_strncpy((char *)(iVar3 + 0x18c),"lang",4);
    builtin_strncpy((char *)(iVar3 + 400),"uage",4);
    builtin_strncpy((char *)(iVar3 + 0x194),"s/sw",4);
    builtin_strncpy((char *)(iVar3 + 0x198),"edis",4);
    *(undefined2 *)(iVar3 + 0x19c) = 0x2f68;
    *(undefined1 *)(iVar3 + 0x19e) = 0;
    pcVar2 = local_408;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar2 - (int)local_408;
    pcVar2 = (char *)(*(int *)(DAT_101b2600 + 0x1434) + 0x18b);
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    break;
  default:
    goto switchD_100480db_default;
  }
  pcVar5 = local_408;
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
switchD_100480db_default:
  *(undefined4 *)(*(int *)(DAT_101b2600 + 0x1434) + 0xe8) = 1;
  FUN_10048b90(1);
LAB_10048387:
  FUN_100aa7f0(0x1f);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

