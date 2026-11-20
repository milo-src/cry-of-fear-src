
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_10069630(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  int aiStack_c0c24 [3];
  byte *pbStack_c0c18;
  undefined4 uStack_c0c14;
  int iStack_c0c10;
  uint uStack_c0c0c;
  byte abStack_c0c08 [786432];
  undefined1 local_c08 [3072];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  aiStack_c0c24[2] = param_1;
  iVar3 = FUN_10053c70();
  if (iVar3 == 0) {
    FUN_1007d400("CreateTexture error: glmanager is not initialized!\n");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  aiStack_c0c24[1] = 0;
  pbVar4 = (byte *)(*DAT_101b2744)(param_1,5,aiStack_c0c24 + 1);
  pbStack_c0c18 = pbVar4;
  if (pbVar4 == (byte *)0x0) {
    FUN_1007d4d0("CreateTexture failed to load file: %s\n",param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((pbVar4[2] != 2) || (pbVar4[0x10] != 0x18)) {
    FUN_1007d400("Error: texture %s uses unsupported data format -->\n(only 24-bit noncompressed TGA supported)\n"
                 ,param_1);
    (*DAT_101b274c)(pbVar4);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*DAT_101be6b8)(0xd33,aiStack_c0c24);
  uVar1 = *(ushort *)(pbVar4 + 0xc);
  uVar5 = (uint)uVar1;
  if ((int)uVar5 <= aiStack_c0c24[0]) {
    uVar2 = *(ushort *)(pbVar4 + 0xe);
    uVar7 = (uint)uVar2;
    param_1 = aiStack_c0c24[2];
    if ((int)uVar7 <= aiStack_c0c24[0]) {
      iStack_c0c10 = 0x100;
      uStack_c0c14 = 0x200;
      uStack_c0c0c = 0x400;
      if ((((((uVar5 != 0x10) && (uVar5 != 0x20)) && (uVar5 != 0x40)) &&
           ((uVar1 != 0x80 && (uVar1 != 0x100)))) && ((uVar1 != 0x200 && (uVar1 != 0x400)))) ||
         ((((uVar7 != 0x10 && (uVar7 != 0x20)) && (uVar7 != 0x40)) &&
          ((((uVar2 != 0x80 && (uVar2 != 0x100)) && (uVar2 != 0x200)) && (uVar2 != 0x400)))))) {
        (*DAT_101b274c)(pbVar4);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      iVar3 = uVar7 * uVar5;
      if (iVar3 < 0x40001) {
        if (0 < iVar3) {
          pbVar8 = abStack_c0c08 + 2;
          pbVar11 = pbVar4 + *pbVar4 + 0x12;
          do {
            pbVar8[-2] = pbVar11[2];
            pbVar8[-1] = pbVar11[1];
            *pbVar8 = *pbVar11;
            pbVar8 = pbVar8 + 3;
            iVar3 = iVar3 + -1;
            pbVar11 = pbVar11 + 3;
          } while (iVar3 != 0);
          uVar2 = *(ushort *)(pbVar4 + 0xe);
        }
        if (((pbVar4[0x11] & 0x20) == 0) && (iStack_c0c10 = 0, (uVar2 & 0xfffe) != 0)) {
          uVar1 = *(ushort *)(pbVar4 + 0xe);
          do {
            uStack_c0c0c = (uint)uVar1;
            uVar5 = (uint)*(ushort *)(pbVar4 + 0xc);
            iVar9 = uVar5 * iStack_c0c10;
            iVar3 = uVar5 * 3;
            FUN_100d31f0(local_c08,abStack_c0c08 + iVar9 * 3,iVar3);
            FUN_100d31f0(abStack_c0c08 + iVar9 * 3,
                         abStack_c0c08 + ((uStack_c0c0c - iStack_c0c10) + -1) * uVar5 * 3,iVar3);
            iVar9 = iStack_c0c10;
            pbVar4 = pbStack_c0c18;
            FUN_100d31f0(abStack_c0c08 +
                         (((uint)*(ushort *)(pbStack_c0c18 + 0xe) - iStack_c0c10) + -1) *
                         (uint)*(ushort *)(pbStack_c0c18 + 0xc) * 3,local_c08,iVar3);
            uVar1 = *(ushort *)(pbVar4 + 0xe);
            iStack_c0c10 = iVar9 + 1;
          } while (iStack_c0c10 < (int)(uint)(uVar1 >> 1));
        }
        uStack_c0c0c = 0x2600;
        if ((param_2 == 1) || (param_2 == 2)) {
          uStack_c0c0c = 0x2701;
        }
        iVar3 = DAT_1018fe8c;
        if (param_3 != 0) {
          iVar3 = param_3;
        }
        (*DAT_101be64c)(0xde1,iVar3);
        (*DAT_101be73c)(0xde1,0x2801,(float)(int)uStack_c0c0c);
        (*DAT_101be73c)(0xde1,0x2800,0x46180400);
        (*DAT_101be734)(0xde1,0,3,*(undefined2 *)(pbVar4 + 0xc),*(undefined2 *)(pbVar4 + 0xe),0,
                        0x1907,0x1401,abStack_c0c08);
        if ((param_2 == 1) || (param_2 == 2)) {
          uVar5 = (uint)*(ushort *)(pbVar4 + 0xc);
          uVar7 = (uint)*(ushort *)(pbVar4 + 0xe);
          uStack_c0c0c = 0;
          while ((1 < uVar5 || (pbVar4 = pbStack_c0c18, 1 < uVar7))) {
            FUN_10069f50(abStack_c0c08,uVar5,uVar7);
            uVar6 = (int)uVar5 >> 1;
            uVar10 = (int)uVar7 >> 1;
            uVar5 = 1;
            if (uVar6 != 0) {
              uVar5 = uVar6;
            }
            uVar7 = 1;
            if (uVar10 != 0) {
              uVar7 = uVar10;
            }
            if (param_2 == 2) {
              FUN_1006a310(abStack_c0c08,uVar5,uVar7);
            }
            uStack_c0c0c = uStack_c0c0c + 1;
            (*DAT_101be734)(0xde1,uStack_c0c0c,3,uVar5,uVar7,0,0x1907,0x1401,abStack_c0c08);
          }
        }
        (*DAT_101b274c)(pbVar4);
        pcVar12 = "bad mipmaps mode";
        if (param_2 == 0) {
          pcVar12 = "no mips";
        }
        else if (param_2 == 1) {
          pcVar12 = "generated mips";
        }
        else if (param_2 == 2) {
          pcVar12 = "normalized mips";
        }
        FUN_1007d4d0("Loaded texture %s, %s\n",aiStack_c0c24[2],pcVar12);
        if (param_3 == 0) {
          DAT_1018fe8c = DAT_1018fe8c + 1;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pcVar12 = "Error: texture %s (%d x %d) doesn\'t fit in static buffer\n";
      goto LAB_10069aa0;
    }
  }
  uVar7 = (uint)*(ushort *)(pbVar4 + 0xe);
  pcVar12 = "Error: texture %s: sizes %d x %d are not supported by your hardware\n";
LAB_10069aa0:
  FUN_1007d400(pcVar12,param_1,uVar5,uVar7);
  (*DAT_101b274c)(pbVar4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

