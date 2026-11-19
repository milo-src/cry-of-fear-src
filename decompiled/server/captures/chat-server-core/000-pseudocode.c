
void FUN_1001e130(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char *local_18c;
  char local_188 [255];
  char cStack_89;
  char local_88 [128];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  pcVar2 = (char *)(*DAT_10223094)(0);
  iVar3 = (*DAT_10223098)();
  if (((iVar3 != 0) &&
      (iVar3 = FUN_100125e0(param_1 + 0x80),
      *(float *)(iVar3 + 0x27d8) < *DAT_10223188 || *(float *)(iVar3 + 0x27d8) == *DAT_10223188)) &&
     (*(int *)(iVar3 + 0x1ea0) != 1)) {
    iVar4 = __stricmp(pcVar2,"say");
    if ((iVar4 == 0) || (iVar4 = __stricmp(pcVar2,"say_team"), iVar4 == 0)) {
      iVar4 = (*DAT_10223098)();
      if (iVar4 < 2) goto LAB_1001e55a;
      local_18c = (char *)(*DAT_10223090)();
    }
    else {
      iVar4 = (*DAT_10223098)();
      if (iVar4 < 2) {
        FUN_1001f160(local_188,&DAT_101a124c,pcVar2);
        local_18c = local_188;
      }
      else {
        uVar5 = (*DAT_10223090)();
        FUN_1001f160(local_188,"%s %s",pcVar2,uVar5);
        local_18c = local_188;
      }
    }
    pcVar2 = local_18c;
    if (*local_18c == '\"') {
      pcVar2 = local_18c + 1;
      pcVar7 = pcVar2;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar2[(int)(pcVar7 + (-1 - (int)(local_18c + 2)))] = '\0';
      local_18c = pcVar2;
    }
    for (; pcVar2 != (char *)0x0; pcVar2 = pcVar2 + 1) {
      if (*pcVar2 == '\0') goto LAB_1001e55a;
      iVar4 = _isprint((int)*pcVar2);
      if ((iVar4 != 0) && (iVar4 = _isspace((int)*pcVar2), iVar4 == 0)) break;
    }
    pcVar2 = "%c(TEAM) %s: ";
    if (param_2 == 0) {
      pcVar2 = "%c%s: ";
    }
    FUN_1001f160(local_88,pcVar2,2,(int)DAT_10223188[0x26] + *(int *)(param_1 + 0x254));
    pcVar2 = local_88;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar4 = 0x7e - ((int)pcVar2 - (int)(local_88 + 1));
    pcVar2 = local_18c;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar7 = local_18c;
    if (iVar4 < (int)pcVar2 - (int)(local_18c + 1)) {
      local_18c[iVar4] = '\0';
    }
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar9 = (int)pcVar7 - (int)local_18c;
    pcVar2 = &cStack_89;
    do {
      pcVar7 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = local_18c;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar2 = pcVar2 + 1;
    }
    pcVar2 = &cStack_89;
    do {
      pcVar7 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar7 != '\0');
    pcVar2[0] = '\n';
    pcVar2[1] = '\0';
    *(float *)(iVar3 + 0x27d8) = *DAT_10223188 + 1.0;
    piVar6 = (int *)FUN_10118460(0,"player");
    while (((piVar6 != (int *)0x0 && (*(int *)(piVar6[1] + 0x20c) != 0)) &&
           (iVar4 = (*DAT_10223060)(*(int *)(piVar6[1] + 0x20c)), iVar4 != 0))) {
      if (((piVar6[1] != 0) && (*(int *)(piVar6[1] + 0x20c) != param_1)) &&
         ((iVar4 = (**(code **)(*piVar6 + 0xd4))(), iVar4 != 0 &&
          (cVar1 = FUN_10001430(piVar6,iVar3), cVar1 == '\0')))) {
        if (param_2 != 0) {
          iVar4 = param_1;
          if ((param_1 == 0) && (iVar4 = (*DAT_1022305c)(0), iVar4 == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(iVar4 + 0x7c);
          }
          iVar4 = (**(code **)(*DAT_10222ee4 + 0xd0))(piVar6,uVar5);
          if (iVar4 != 1) goto LAB_1001e452;
        }
        (*DAT_10223000)(1,DAT_10226518,0,*(undefined4 *)(piVar6[1] + 0x20c));
        uVar5 = (*DAT_10223064)(param_1);
        (*DAT_10223008)(uVar5);
        (*DAT_10223020)(local_88);
        (*DAT_10223004)();
      }
LAB_1001e452:
      piVar6 = (int *)FUN_10118460(piVar6,"player");
    }
    (*DAT_10223000)(1,DAT_10226518,0,*(undefined4 *)(param_1 + 0x28c));
    uVar5 = (*DAT_10223064)(param_1);
    (*DAT_10223008)(uVar5);
    (*DAT_10223020)(local_88);
    (*DAT_10223004)();
    (*DAT_1022308c)(local_88);
    pcVar2 = "say";
    if (param_2 != 0) {
      pcVar2 = "say_team";
    }
    if (DAT_10222ee8 == 0) {
      uVar5 = (*DAT_1022310c)(param_1,pcVar2,local_18c);
      uVar5 = (*DAT_10223184)(param_1,uVar5);
      uVar5 = (*DAT_1022310c)(param_1,uVar5);
      iVar3 = (int)DAT_10223188[0x26] + *(int *)(param_1 + 0x254);
      pcVar2 = "\"%s<%i><%s><%i>\" %s \"%s\"\n";
    }
    else {
      uVar5 = (*DAT_102230f0)(param_1,"model");
      uVar5 = (*DAT_102230f4)(uVar5);
      uVar5 = (*DAT_10223184)(param_1,uVar5);
      uVar5 = (*DAT_1022310c)(param_1,uVar5);
      iVar3 = (int)DAT_10223188[0x26] + *(int *)(param_1 + 0x254);
      pcVar2 = "\"%s<%i><%s><%s>\" %s \"%s\"\n";
    }
    FUN_10119200(pcVar2,iVar3,uVar5);
  }
LAB_1001e55a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

