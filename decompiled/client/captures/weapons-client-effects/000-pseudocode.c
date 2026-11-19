
void FUN_10080410(char *param_1,int param_2)

{
  char cVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *in_ECX;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  float10 fVar11;
  float fVar12;
  undefined8 local_210;
  char local_208 [256];
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if ((*in_ECX == '\0') || (DAT_105440a8 == (int *)0x0)) goto LAB_100806e8;
  iVar4 = FUN_100d3cf0(param_1,"weapons/");
  if (iVar4 != 0) {
    bVar3 = false;
    uVar10 = 0;
    uVar7 = 0;
    pcVar9 = param_1 + 1;
    local_210 = (double)CONCAT44(pcVar9,(undefined4)local_210);
    pcVar8 = param_1;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (pcVar8 != pcVar9) {
      do {
        cVar1 = param_1[uVar7];
        if (bVar3) {
          local_108[uVar10] = cVar1;
          uVar10 = uVar10 + 1;
        }
        else if ((cVar1 == '/') || (cVar1 == '\\')) {
          bVar3 = true;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)((int)pcVar8 - (int)pcVar9));
      if (bVar3) {
        if (0xff < uVar10) {
                    /* WARNING: Subroutine does not return */
          ___report_rangecheckfailure();
        }
        builtin_strncpy(local_208 + 8,"new/",4);
        local_108[uVar10] = '\0';
        builtin_strncpy(local_208,"weapons_",8);
        local_208[0xc] = 0;
        pcVar9 = local_108;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        uVar7 = (int)pcVar9 - (int)local_108;
        pcVar9 = (char *)((int)&local_210 + 7);
        do {
          pcVar8 = pcVar9 + 1;
          pcVar9 = pcVar9 + 1;
        } while (*pcVar8 != '\0');
        pcVar8 = local_108;
        for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        param_1 = local_208;
      }
    }
  }
  if (param_2 == 1) {
    if (DAT_105440ac != (int *)0x0) {
      (**(code **)(*DAT_105440ac + 0x18))();
    }
    uVar5 = (*DAT_101b2724)(param_1);
    FUN_1000c900(local_108,"%s/sound/%s",uVar5);
    DAT_105440ac = (int *)(**(code **)(*DAT_105440a8 + 8))(local_108,1,1,1,0,0);
    if (DAT_105440ac == (int *)0x0) goto LAB_100806e8;
    fVar11 = (float10)(*DAT_101b2644)("volume");
    fVar12 = (float)fVar11;
    local_210 = (double)CONCAT44(fVar12,(undefined4)local_210);
    fVar2 = 1.0;
    if (fVar12 <= 1.0) {
      fVar2 = fVar12;
    }
    fVar12 = 0.0;
    if (0.0 <= fVar2) {
      fVar12 = fVar2;
    }
    (**(code **)(*DAT_105440ac + 0x20))(fVar12);
    iVar4 = *DAT_105440ac;
    fVar11 = (float10)(*DAT_101b2714)(0xbdcccccd,0x3dcccccd);
    local_210 = (double)fVar11;
    (**(code **)(iVar4 + 0x60))((float)(local_210 + 1.0));
    iVar4 = *DAT_105440ac;
  }
  else {
    if (param_2 == 2) {
      if (DAT_105440ac != (int *)0x0) {
        (**(code **)(*DAT_105440ac + 0x18))();
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_100806e8;
    }
    uVar5 = (*DAT_101b2724)(param_1);
    FUN_1000c900(local_108,"%s/sound/%s",uVar5);
    piVar6 = (int *)(**(code **)(*DAT_105440a8 + 8))(local_108,0,1,1,0,0);
    if (piVar6 == (int *)0x0) goto LAB_100806e8;
    fVar11 = (float10)(*DAT_101b2644)("volume");
    fVar12 = (float)fVar11;
    local_210 = (double)CONCAT44(fVar12,(undefined4)local_210);
    fVar2 = 1.0;
    if (fVar12 <= 1.0) {
      fVar2 = fVar12;
    }
    fVar12 = 0.0;
    if (0.0 <= fVar2) {
      fVar12 = fVar2;
    }
    (**(code **)(*piVar6 + 0x20))(fVar12);
    iVar4 = *piVar6;
    fVar11 = (float10)(*DAT_101b2714)(0xbdcccccd,0x3dcccccd);
    local_210 = (double)fVar11;
    (**(code **)(iVar4 + 0x60))((float)(local_210 + 1.0));
    iVar4 = *piVar6;
  }
  (**(code **)(iVar4 + 0x10))(0);
LAB_100806e8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

