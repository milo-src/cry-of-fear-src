
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cee0(uint param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  int *in_ECX;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined1 local_c18 [12];
  float local_c0c;
  float local_c08;
  float local_c04;
  uint local_c00;
  float local_bfc;
  float fStack_bf8;
  float local_bf4;
  uint local_bf0;
  int *local_bec;
  float local_be8;
  float local_be4;
  int local_be0;
  int local_bdc;
  undefined4 local_bd8;
  undefined4 local_bd4;
  undefined4 local_bd0;
  undefined1 *local_bcc;
  int local_bc8;
  float local_bc4;
  undefined4 local_bc0 [665];
  undefined4 local_15c [4];
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_104;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  local_bec = in_ECX;
  iVar4 = (*DAT_105457c8)();
  in_ECX[0xc] = iVar4;
  if (iVar4 == 0) goto LAB_1008d3fb;
  local_bc8 = in_ECX[6];
  if ((DAT_10542bc0 != 0) && (DAT_10542bc0 == iVar4)) {
    in_ECX[6] = 0;
  }
  iVar4 = (*DAT_105457d4)();
  if ((iVar4 == in_ECX[0xc]) && (((byte)DAT_1018d1dc & 1) != 0)) goto LAB_1008d3fb;
  if ((DAT_105458c0 != 0) && (iVar4 = (*DAT_101b26d4)(), iVar4 != 0)) {
    DAT_105458c0 = 0;
    FUN_1004bb80(iVar4 + 0xb48);
  }
  (*DAT_105457d8)(in_ECX + 8,in_ECX + 2,in_ECX + 4);
  (*DAT_105457e0)(in_ECX + 0x1023,in_ECX + 0x101a,in_ECX + 0x101d,in_ECX + 0x1020);
  (*DAT_105457ec)(in_ECX + 0x1018,in_ECX + 0x1019);
  iVar4 = in_ECX[0xc];
  if (*(int *)(iVar4 + 0x304) == 0x11) {
    if (0 < *(int *)(iVar4 + 0x2fc)) {
      iVar4 = *(int *)(iVar4 + 0x2fc);
      iVar5 = (*DAT_101b2698)();
      if (iVar4 <= iVar5) {
        puVar6 = (undefined4 *)(*DAT_105457d0)(iVar4 + -1);
        puVar10 = local_15c;
        for (iVar4 = 0x55; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
        iVar4 = local_bec[0xc];
        iVar5 = local_bec[6];
        local_15c[1] = *(undefined4 *)(iVar4 + 0x2fc);
        local_a8 = 0;
        local_a4 = 0;
        local_104 = 0;
        local_140 = *(undefined4 *)(iVar4 + 0x2cc);
        pcVar1 = *(code **)(*local_bec + 0xc);
        local_13c = *(undefined4 *)(iVar4 + 0x2d0);
        local_138 = *(undefined4 *)(iVar4 + 0x2d4);
        local_14c = *(undefined4 *)(iVar4 + 0x2c0);
        local_148 = *(undefined4 *)(iVar4 + 0x2c4);
        local_144 = *(undefined4 *)(iVar4 + 0x2c8);
        local_bec[6] = 0;
        (*pcVar1)(param_1,local_15c);
        local_bec[6] = iVar5;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    goto LAB_1008d3fb;
  }
  iVar4 = *(int *)(iVar4 + 0xb94);
  in_ECX[0xd] = iVar4;
  iVar4 = (*DAT_105457c0)(iVar4);
  in_ECX[0x11] = iVar4;
  (*DAT_1054583c)(iVar4);
  (*DAT_10545840)(in_ECX[0xd]);
  if ((*(float *)(DAT_104cd508 + 0xc) != 0.0) && (*(float *)(DAT_104cd538 + 0xc) != 0.0)) {
    FUN_10068c80();
  }
  (**(code **)(*in_ECX + 0x14))(0);
  iVar4 = (*DAT_105457d4)();
  if ((((in_ECX[0xc] == iVar4) && (DAT_1018d578 != 0)) && (*(int *)(DAT_1018d578 + 0x9c) == 0xf)) &&
     (DAT_10545868 == 0xd)) {
    *(float *)(in_ECX[0x1028] + 4) = *(float *)(in_ECX[0x1028] + 4) * -1.0;
    *(float *)(in_ECX[0x1028] + 0x14) = *(float *)(in_ECX[0x1028] + 0x14) * -1.0;
    *(float *)(in_ECX[0x1028] + 0x24) = *(float *)(in_ECX[0x1028] + 0x24) * -1.0;
    (**(code **)(DAT_101b2750 + 0x28))(1);
  }
  local_bf0 = param_1 & 1;
  if (local_bf0 == 0) {
LAB_1008d21c:
    iVar4 = in_ECX[0xc];
    iVar5 = (*DAT_105457d4)();
    if (((iVar4 == iVar5) && (DAT_1018d578 != 0)) && (*(int *)(DAT_1018d578 + 0x9c) == 0x15)) {
      bVar8 = ~(byte)(int)((DAT_101b2f18 / 360.0) * 255.0);
      *(byte *)(iVar4 + 0x318) = bVar8;
      *(byte *)(in_ECX[0xc] + 0x319) = bVar8;
      *(byte *)(in_ECX[0xc] + 0x31a) = bVar8;
      *(undefined1 *)(in_ECX[0xc] + 0xb3c) = *(undefined1 *)(in_ECX[0xc] + 0x318);
      *(undefined1 *)(in_ECX[0xc] + 0xb3d) = *(undefined1 *)(in_ECX[0xc] + 0x319);
      *(undefined1 *)(in_ECX[0xc] + 0xb3e) = *(undefined1 *)(in_ECX[0xc] + 0x31a);
      iVar4 = in_ECX[0xc];
    }
    if (*(int *)(iVar4 + 0x308) == 0xc) {
      (**(code **)(*in_ECX + 0x24))(in_ECX[0xd]);
    }
    else {
      (**(code **)(*in_ECX + 0x18))();
    }
    (**(code **)(*in_ECX + 0x20))();
    local_c00 = param_1 & 2;
    if (local_c00 != 0) {
      (**(code **)(*in_ECX + 0x1c))();
      (*DAT_10545830)();
      if (0 < *(int *)in_ECX[0xc]) {
        iVar5 = (*DAT_101b26dc)(*(int *)in_ECX[0xc]);
        iVar4 = in_ECX[0xc];
        uVar7 = *(undefined4 *)(iVar4 + 0xb64);
        uVar2 = *(undefined4 *)(iVar4 + 0xb68);
        uVar3 = *(undefined4 *)(iVar4 + 0xb6c);
        *(undefined4 *)(iVar5 + 0xb60) = *(undefined4 *)(iVar4 + 0xb60);
        *(undefined4 *)(iVar5 + 0xb64) = uVar7;
        *(undefined4 *)(iVar5 + 0xb68) = uVar2;
        *(undefined4 *)(iVar5 + 0xb6c) = uVar3;
        uVar7 = *(undefined4 *)(iVar4 + 0xb74);
        uVar2 = *(undefined4 *)(iVar4 + 0xb78);
        uVar3 = *(undefined4 *)(iVar4 + 0xb7c);
        *(undefined4 *)(iVar5 + 0xb70) = *(undefined4 *)(iVar4 + 0xb70);
        *(undefined4 *)(iVar5 + 0xb74) = uVar7;
        *(undefined4 *)(iVar5 + 0xb78) = uVar2;
        *(undefined4 *)(iVar5 + 0xb7c) = uVar3;
        uVar7 = *(undefined4 *)(iVar4 + 0xb84);
        uVar2 = *(undefined4 *)(iVar4 + 0xb88);
        uVar3 = *(undefined4 *)(iVar4 + 0xb8c);
        *(undefined4 *)(iVar5 + 0xb80) = *(undefined4 *)(iVar4 + 0xb80);
        *(undefined4 *)(iVar5 + 0xb84) = uVar7;
        *(undefined4 *)(iVar5 + 0xb88) = uVar2;
        *(undefined4 *)(iVar5 + 0xb8c) = uVar3;
      }
    }
    uVar9 = local_bf0;
    if (local_bf0 != 0) {
      if (((*(float *)(DAT_104cd508 + 0xc) == 0.0) || (*(float *)(DAT_104cd538 + 0xc) == 0.0)) ||
         (*(int *)(in_ECX[0xc] + 0x304) == 0x3c)) {
        local_bcc = local_c18;
        (*DAT_10545808)(in_ECX[0xc],&local_be0);
        (*DAT_1054580c)(&local_be0);
        iVar4 = *(int *)(in_ECX[0xc] + 0x304);
        if (iVar4 == 0x3c) {
          DAT_10550f0c = local_bd8;
          DAT_10550f10 = local_bd4;
          DAT_10550f14 = local_bd0;
          DAT_1054585c = (float)local_bdc / 192.0;
          goto LAB_1008d3f2;
        }
        if (((iVar4 == 0x46) || (iVar4 == 0x89)) || (iVar4 == 0xb8)) {
          if (DAT_104ce070 != -1) {
            local_be0 = DAT_104ce070;
          }
          if (DAT_104ce074 != -1) {
            local_bdc = DAT_104ce074;
          }
        }
        (*DAT_10545810)(&local_be0);
      }
      else {
        FUN_100678d0();
      }
      iVar4 = *(int *)(in_ECX[0xc] + 0x304);
      if (((iVar4 == 0x46) || (iVar4 == 0x89)) || (iVar4 == 0xb8)) {
        local_bc4 = DAT_105595cc - DAT_104ce480;
        local_be8 = DAT_105595d0 - DAT_104ce484;
        local_be4 = DAT_105595d4 - DAT_104ce488;
        if (DAT_104ce06c != 0.0) {
          local_be4 = local_be4 - (DAT_105595d4 - _DAT_104ce494) / DAT_104ce06c;
          local_be8 = local_be8 - (DAT_105595d0 - _DAT_104ce490) / DAT_104ce06c;
          local_bc4 = local_bc4 - (DAT_105595cc - _DAT_104ce48c) / DAT_104ce06c;
        }
        (*DAT_101be744)(local_bc4,local_be8,local_be4);
        (*DAT_101be680)(0x9999999a,0x3fe99999,0xcccccccd,0x3feccccc);
        (**(code **)(*in_ECX + 0x48))();
        (*DAT_101be744)(-local_bc4,-local_be8,-local_be4);
        (*DAT_101be680)(0,0x3fe999999999999a);
      }
      else {
        (**(code **)(*in_ECX + 0x48))();
      }
      iVar4 = *(int *)(in_ECX[0xc] + 0x304);
      if ((iVar4 == 0x32) || (iVar4 == 0x31)) {
        FUN_1008b3f0(in_ECX[0xc]);
        if (*(int *)(in_ECX[0xc] + 0x304) == 0x31) {
          pcVar11 = "models/zombie_eyes.mdl";
        }
        else {
          pcVar11 = "models/mask.mdl";
        }
        uVar7 = (*DAT_105457bc)(pcVar11,1);
        iVar4 = (*DAT_105457c0)(uVar7);
        in_ECX[0x11] = iVar4;
        (*DAT_1054583c)(iVar4);
        if ((*(float *)(DAT_104cd508 + 0xc) != 0.0) && (*(float *)(DAT_104cd538 + 0xc) != 0.0)) {
          FUN_10068c80();
        }
        (**(code **)(*in_ECX + 0x24))(uVar7);
        local_be0 = 0x80;
        local_bdc = 0xc0;
        if ((*(float *)(DAT_104cd508 + 0xc) == 0.0) || (*(float *)(DAT_104cd538 + 0xc) == 0.0)) {
          (*DAT_10545810)(&local_be0);
        }
        else {
          FUN_100678d0();
        }
        (**(code **)(DAT_101b2750 + 4))(5);
        *(undefined4 *)(in_ECX[0xc] + 0x2fc) = 0xff;
        (**(code **)(*in_ECX + 0x48))();
        (**(code **)(DAT_101b2750 + 4))(0);
        (**(code **)(*in_ECX + 0x1c))();
        puVar6 = local_bc0;
        puVar10 = (undefined4 *)in_ECX[0xc];
        for (iVar4 = 0x2ee; uVar9 = local_bf0, in_ECX = local_bec, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
      }
    }
    if (((-1 < DAT_101905e0) && (-1 < DAT_101905e4)) &&
       (iVar4 = in_ECX[0xc], DAT_101905e0 == *(int *)(iVar4 + 0x2e4))) {
      _DAT_10550f00 = *(undefined8 *)(iVar4 + 0xb60 + DAT_101905e0 * 0xc);
      DAT_10550f08 = *(undefined4 *)(iVar4 + 0xb68 + DAT_101905e0 * 0xc);
    }
    if (*(int *)(in_ECX[0xc] + 0x304) == 0x15) {
      *(undefined4 *)(in_ECX[0xc] + 0x304) = 0;
      *(float *)(in_ECX[0x1028] + 0x28) = *(float *)(in_ECX[0x1028] + 0x28) * -1.0;
      (**(code **)(DAT_101b2750 + 0x28))(1);
      if (uVar9 != 0) {
        iVar4 = (*DAT_10545804)();
        if (iVar4 == 0) goto LAB_1008d3f2;
        *(int *)in_ECX[0x1027] = *(int *)in_ECX[0x1027] + 1;
        *(int *)in_ECX[0x1026] = *(int *)in_ECX[0x1026] + 1;
        if (*(int *)(in_ECX[0x11] + 0xcc) == 0) goto LAB_1008daa2;
      }
      if (*(int *)(in_ECX[0xc] + 0x308) == 0xc) {
        (**(code **)(*in_ECX + 0x24))(in_ECX[0xd]);
      }
      else {
        (**(code **)(*in_ECX + 0x18))();
      }
      (**(code **)(*in_ECX + 0x20))();
      if (local_c00 != 0) {
        (**(code **)(*in_ECX + 0x1c))();
        (*DAT_10545830)();
        if (0 < *(int *)in_ECX[0xc]) {
          iVar5 = (*DAT_101b26dc)(*(int *)in_ECX[0xc]);
          iVar4 = in_ECX[0xc];
          uVar7 = *(undefined4 *)(iVar4 + 0xb64);
          uVar2 = *(undefined4 *)(iVar4 + 0xb68);
          uVar3 = *(undefined4 *)(iVar4 + 0xb6c);
          *(undefined4 *)(iVar5 + 0xb60) = *(undefined4 *)(iVar4 + 0xb60);
          *(undefined4 *)(iVar5 + 0xb64) = uVar7;
          *(undefined4 *)(iVar5 + 0xb68) = uVar2;
          *(undefined4 *)(iVar5 + 0xb6c) = uVar3;
          uVar7 = *(undefined4 *)(iVar4 + 0xb74);
          uVar2 = *(undefined4 *)(iVar4 + 0xb78);
          uVar3 = *(undefined4 *)(iVar4 + 0xb7c);
          *(undefined4 *)(iVar5 + 0xb70) = *(undefined4 *)(iVar4 + 0xb70);
          *(undefined4 *)(iVar5 + 0xb74) = uVar7;
          *(undefined4 *)(iVar5 + 0xb78) = uVar2;
          *(undefined4 *)(iVar5 + 0xb7c) = uVar3;
          uVar7 = *(undefined4 *)(iVar4 + 0xb84);
          uVar2 = *(undefined4 *)(iVar4 + 0xb88);
          uVar3 = *(undefined4 *)(iVar4 + 0xb8c);
          *(undefined4 *)(iVar5 + 0xb80) = *(undefined4 *)(iVar4 + 0xb80);
          *(undefined4 *)(iVar5 + 0xb84) = uVar7;
          *(undefined4 *)(iVar5 + 0xb88) = uVar2;
          *(undefined4 *)(iVar5 + 0xb8c) = uVar3;
        }
      }
      if (uVar9 != 0) {
        if ((*(float *)(DAT_104cd508 + 0xc) == 0.0) || (*(float *)(DAT_104cd538 + 0xc) == 0.0)) {
          local_bcc = local_c18;
          (*DAT_10545808)(in_ECX[0xc],&local_be0);
          (*DAT_1054580c)(&local_be0);
          (*DAT_10545810)(&local_be0);
        }
        else {
          FUN_100678d0();
        }
        (**(code **)(*in_ECX + 0x48))();
      }
      (**(code **)(DAT_101b2750 + 0x28))(0);
      *(undefined4 *)(in_ECX[0xc] + 0x304) = 0x15;
    }
    if ((DAT_10542bbc != 0) && (in_ECX[0xc] == DAT_10542bbc)) {
      DAT_105458d0 = *(undefined4 *)(in_ECX[0xc] + 0xb60);
      DAT_105458d4 = *(undefined4 *)(in_ECX[0xc] + 0xb64);
      DAT_105458d8 = *(undefined4 *)(in_ECX[0xc] + 0xb68);
    }
    if ((DAT_10542bb8 != 0) && (in_ECX[0xc] == DAT_10542bb8)) {
      DAT_105458dc = *(undefined4 *)(in_ECX[0xc] + 0xb60);
      DAT_105458e0 = *(undefined4 *)(in_ECX[0xc] + 0xb64);
      DAT_105458e4 = *(undefined4 *)(in_ECX[0xc] + 0xb68);
    }
    if ((DAT_10542bc0 != 0) && (in_ECX[0xc] == DAT_10542bc0)) {
      DAT_10550324 = *(undefined4 *)(in_ECX[0xc] + 0xb60);
      DAT_10550328 = *(undefined4 *)(in_ECX[0xc] + 0xb64);
      DAT_1055032c = *(undefined4 *)(in_ECX[0xc] + 0xb68);
      iVar4 = in_ECX[0xc];
      local_bfc = *(float *)(iVar4 + 0xb6c) - *(float *)(iVar4 + 0xb60);
      fStack_bf8 = *(float *)(iVar4 + 0xb70) - *(float *)(iVar4 + 0xb64);
      local_bf4 = *(float *)(iVar4 + 0xb74) - *(float *)(iVar4 + 0xb68);
      FUN_100945e0(&local_bfc,&local_bfc);
      _DAT_1055033c = CONCAT44(fStack_bf8,local_bfc) ^ 0x80000000;
      DAT_10550344 = local_bf4;
      iVar4 = in_ECX[0xc];
      local_c0c = *(float *)(iVar4 + 0xb84) - *(float *)(iVar4 + 0xb60);
      local_c08 = *(float *)(iVar4 + 0xb88) - *(float *)(iVar4 + 0xb64);
      local_c04 = *(float *)(iVar4 + 0xb8c) - *(float *)(iVar4 + 0xb68);
      local_bfc = -local_bfc;
      FUN_100945e0(&local_c0c,&local_c0c);
      DAT_10550344 = local_c0c;
      DAT_10542bb3 = 1;
    }
LAB_1008daa2:
    in_ECX[6] = local_bc8;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = *(int *)(in_ECX[0xc] + 0x304);
  if (((iVar4 == 0x46) || (iVar4 == 0x89)) || (iVar4 == 0xb8)) {
    iVar5 = FUN_10053c70();
    iVar4 = DAT_101be7f8;
    if (iVar5 != 0) goto joined_r0x1008d1f6;
  }
  else {
    iVar4 = (*DAT_10545804)();
joined_r0x1008d1f6:
    if (iVar4 != 0) {
      *(int *)in_ECX[0x1027] = *(int *)in_ECX[0x1027] + 1;
      *(int *)in_ECX[0x1026] = *(int *)in_ECX[0x1026] + 1;
      if (*(int *)(in_ECX[0x11] + 0xcc) == 0) goto LAB_1008daa2;
      goto LAB_1008d21c;
    }
  }
LAB_1008d3f2:
  in_ECX[6] = local_bc8;
LAB_1008d3fb:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

