// rea decompile_all
// name: FUN_100ead70
// address: 0x100ead70
// body: available
// range: 0x100ead70-0x100ef1a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ead70(void)

{
  float *pfVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  float unaff_ESI;
  int *piVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  int *piStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  int *piStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [16];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int iStack_98;
  char acStack_90 [16];
  undefined4 uStack_80;
  char acStack_7c [12];
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined1 uStack_6a;
  uint local_c;
  
  local_c = DAT_1021baf4 ^ (uint)&piStack_f8;
  if (((char)in_ECX[0x7ba] != '\0') && (iVar6 = in_ECX[0xe8], iVar6 != 0)) {
    if (iVar6 == 1) {
      if ((float)in_ECX[0xe7] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xe7]) {
        in_ECX[0xe8] = 2;
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"ambience/van_number.wav",0x3f800000,
                     0x3f4ccccd,0,100);
        in_ECX[0xe7] = (int)(*DAT_10223188 + 6.5);
      }
    }
    else if ((iVar6 == 2) &&
            ((float)in_ECX[0xe7] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xe7])) {
      in_ECX[0xe8] = 0;
      if (in_ECX[0x94b] != 0) {
        iVar6 = *(int *)(in_ECX[0x94b] + 4);
        pcVar9 = "weapon_mobile";
        iVar7 = *(int *)(iVar6 + 0x20c);
        pbVar8 = (byte *)(*(int *)(-(uint)(iVar7 != 0) & iVar7 + 0x80U) + (int)DAT_10223188[0x26]);
        do {
          bVar2 = *pbVar8;
          bVar12 = bVar2 < (byte)*pcVar9;
          if (bVar2 != *pcVar9) {
LAB_100eae30:
            uVar4 = -(uint)bVar12 | 1;
            goto LAB_100eae35;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar8[1];
          bVar12 = bVar2 < (byte)pcVar9[1];
          if (bVar2 != pcVar9[1]) goto LAB_100eae30;
          pbVar8 = pbVar8 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar2 != 0);
        uVar4 = 0;
LAB_100eae35:
        if ((uVar4 == 0) && (piVar5 = (int *)FUN_10052e30(iVar6), piVar5 != (int *)0x0)) {
          iVar6 = in_ECX[0x7a6];
          piVar5[0x76] = (int)(*DAT_10223188 + 1.1);
          if (iVar6 == 0) {
            uVar18 = 0xf;
          }
          else {
            uVar18 = 0x10;
          }
          (**(code **)(*piVar5 + 0x198))(uVar18,1,0);
          in_ECX[0xc2] = (int)(*DAT_10223188 + 1.1);
          *(undefined1 *)(in_ECX + 0x7ba) = 0;
          FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"phone/tone_send.wav",0x3f800000,
                       0x3f4ccccd,0,100);
          in_ECX[0x940] = in_ECX[0x940] & 0xfffffff7;
          in_ECX[0x7ad] = 0;
          *(undefined4 *)(in_ECX[1] + 0x260) = 0;
        }
      }
    }
  }
  iVar6 = in_ECX[0x94b];
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x168) == 10)) {
    iVar7 = in_ECX[1];
    fVar16 = *(float *)(*(int *)(iVar6 + 4) + 0x154);
    if (*(float *)(iVar7 + 0x154) != fVar16) {
      *(float *)(iVar7 + 0x154) = fVar16;
      iVar7 = in_ECX[1];
      iVar6 = in_ECX[0x94b];
    }
    fVar16 = *(float *)(*(int *)(iVar6 + 4) + 0x158);
    if (*(float *)(iVar7 + 0x158) != fVar16) {
      *(float *)(iVar7 + 0x158) = fVar16;
      iVar7 = in_ECX[1];
      iVar6 = in_ECX[0x94b];
    }
    fVar16 = *(float *)(*(int *)(iVar6 + 4) + 0x15c);
    if (*(float *)(iVar7 + 0x15c) != fVar16) {
      *(float *)(iVar7 + 0x15c) = fVar16;
      iVar7 = in_ECX[1];
      iVar6 = in_ECX[0x94b];
    }
    fVar16 = *(float *)(*(int *)(iVar6 + 4) + 0x150);
    if (*(float *)(iVar7 + 0x150) != fVar16) {
      *(float *)(iVar7 + 0x150) = fVar16;
    }
  }
  if (((DAT_10222ee4 != (int *)0x0) && (iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar6 != 0))
     && (fVar16 = *DAT_10223188, (float)in_ECX[0x136] <= fVar16 && fVar16 != (float)in_ECX[0x136]))
  {
    in_ECX[0x136] = (int)(fVar16 + 0.15);
    FUN_10119320(in_ECX[1] + 0x74);
    (**(code **)(*in_ECX + 0x228))(&fStack_f4);
    piStack_e8 = (int *)(DAT_10223188[10] * 384.0 + (float)piStack_f8);
    fStack_e4 = DAT_10223188[0xb] * 384.0 + fStack_f4;
    fStack_e0 = DAT_10223188[0xc] * 384.0 + fStack_f0;
    FUN_1011a800(&piStack_f8,&piStack_e8,0,*(undefined4 *)(in_ECX[1] + 0x20c),&fStack_cc);
    if (((iStack_98 == 0) || (piVar5 = *(int **)(iStack_98 + 0x7c), piVar5 == (int *)0x0)) ||
       ((iVar6 = (**(code **)(*piVar5 + 0xd0))(), iVar6 == 0 || (piVar5 == in_ECX)))) {
      if (in_ECX[0x137] != 0) {
        in_ECX[0x137] = 0;
        (*DAT_10223000)(1,DAT_102266d4,0,*(undefined4 *)(in_ECX[1] + 0x20c));
        (*DAT_10223008)(in_ECX[0x137]);
        (*DAT_10223004)();
      }
    }
    else {
      iVar6 = (*DAT_10223064)(*(undefined4 *)(piVar5[1] + 0x20c));
      if (in_ECX[0x137] != iVar6) {
        iVar6 = (*DAT_10223064)(*(undefined4 *)(piVar5[1] + 0x20c));
        in_ECX[0x137] = iVar6;
        (*DAT_10223000)(1,DAT_102266d4,0,*(undefined4 *)(in_ECX[1] + 0x20c));
        (*DAT_10223008)(in_ECX[0x137]);
        (*DAT_10223004)();
        in_ECX[0x138] = (int)(*DAT_10223188 + 0.15);
      }
    }
  }
  iVar6 = in_ECX[1];
  if (*(int *)(iVar6 + 0x108) == 8) {
    *(undefined4 *)(iVar6 + 0x108) = 3;
    iVar6 = in_ECX[1];
  }
  if ((*(uint *)(iVar6 + 0x1a8) & 0x40) != 0) {
    *(uint *)(iVar6 + 0x1a8) = *(uint *)(iVar6 + 0x1a8) & 0xffffffbf;
  }
  if ((*(char *)((int)in_ECX + 0x3aa) != '\0') &&
     (((*(uint *)(in_ECX[1] + 0x1a8) & 0x200) != 0 ||
      ((float)in_ECX[0xeb] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xeb])))) {
    *(undefined1 *)((int)in_ECX + 0x3aa) = 0;
  }
  if (((float)in_ECX[0x10e] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x10e]) &&
     (DAT_10226477 == '\0')) {
    in_ECX[0x199] = in_ECX[0x199] + 1;
    iVar6 = in_ECX[0x19a];
    if (0x3b < in_ECX[0x199]) {
      iVar6 = iVar6 + 1;
      in_ECX[0x199] = 0;
      in_ECX[0x19a] = iVar6;
    }
    if (0x3b < iVar6) {
      in_ECX[0x19b] = in_ECX[0x19b] + 1;
      in_ECX[0x19a] = 0;
    }
    in_ECX[0x10e] = (int)(*DAT_10223188 + 1.0);
  }
  if ((DAT_10222f04 != 0) || (iVar6 = (**(code **)(*in_ECX + 0xbc))(), iVar6 == 0))
  goto LAB_100ef068;
  iVar6 = FUN_10017780();
  if (iVar6 != 0) {
    piVar5 = (int *)FUN_100177a0();
    iVar6 = (**(code **)(*piVar5 + 0xbc))();
    if (iVar6 == 0) {
      FUN_10017740(0);
    }
  }
  if ((char)in_ECX[0xf2] != '\0') {
    fStack_f4 = 0.0;
    fStack_f0 = 0.0;
    fStack_ec = 0.0;
    FUN_10119c00();
    FUN_100deff0(0);
    uVar4 = in_ECX[0x940];
    if ((uVar4 & 8) == 0) {
      uVar4 = uVar4 | 8;
      in_ECX[0x940] = uVar4;
    }
    if ((uVar4 & 1) == 0) {
      in_ECX[0x940] = uVar4 | 1;
    }
    uVar4 = *(uint *)(in_ECX[1] + 0x1a8);
    if (-1 < (char)uVar4) {
      *(uint *)(in_ECX[1] + 0x1a8) = uVar4 | 0x80;
    }
    fVar16 = *DAT_10223188;
    if ((float)in_ECX[0xf3] <= fVar16 && fVar16 != (float)in_ECX[0xf3]) {
      in_ECX[0xf3] = (int)(fVar16 + 5.0);
      FUN_10119810();
    }
  }
  if ((float)in_ECX[0x185] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x185]) {
    iVar6 = in_ECX[1];
    fVar16 = (float)in_ECX[0x187] - *(float *)(iVar6 + 0xc);
    fVar17 = (float)in_ECX[0x186] - *(float *)(iVar6 + 8);
    *(undefined8 *)(in_ECX + 0x186) = *(undefined8 *)(iVar6 + 8);
    in_ECX[0x188] = *(int *)(iVar6 + 0x10);
    dVar15 = (double)(fVar16 * fVar16 + fVar17 * fVar17);
    if (dVar15 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar15 = SQRT(dVar15);
    }
    fVar16 = (float)dVar15 / 39.37008 + (float)in_ECX[0x197];
    in_ECX[0x197] = (int)fVar16;
    if (999.0 < fVar16) {
      in_ECX[0x197] = 0;
      in_ECX[0x198] = (int)((float)in_ECX[0x198] + 1.0);
    }
    in_ECX[0x185] = (int)(*DAT_10223188 + 0.1);
  }
  if (DAT_10226476 != '\0') {
    iVar6 = in_ECX[1];
    FUN_100f3bf0(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc),
                 *(undefined4 *)(iVar6 + 0x10));
    *(undefined1 *)(in_ECX + 0x7b2) = 0;
    DAT_10226476 = '\0';
    in_ECX[0x132] = 0;
    in_ECX[0x8a5] = 1000;
    if ((char)in_ECX[0x19e] != '\0') {
      fVar13 = (float10)(*DAT_1022302c)("difficulty");
      piStack_f8 = (int *)(float)fVar13;
      fVar14 = (float10)(*DAT_1022302c)("cof_subtitlelanguage");
      piStack_f8 = (int *)(float)fVar14;
      if ((int)fVar14 != in_ECX[0x1a1]) {
        (*DAT_10223034)("cof_subtitlelanguage",(float)in_ECX[0x1a1]);
      }
      if ((int)fVar13 != in_ECX[0x19f]) {
        (*DAT_10223034)("difficulty",(float)in_ECX[0x19f]);
      }
      if (DAT_10222ee4 != (int *)0x0) {
        (**(code **)*DAT_10222ee4)();
      }
    }
    in_ECX[0x10a] = 0;
    if (in_ECX[0xf7] != 0) {
      (*DAT_10223000)(1,DAT_10226690,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(1);
      (*DAT_10223008)(in_ECX[0xf7]);
      (*DAT_10223004)();
    }
    if (in_ECX[0xf8] != 0) {
      (*DAT_10223000)(1,DAT_10226690,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(2);
      (*DAT_10223008)(in_ECX[0xf8]);
      (*DAT_10223004)();
    }
    if (in_ECX[0xf9] != 0) {
      (*DAT_10223000)(1,DAT_10226690,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(3);
      (*DAT_10223008)(in_ECX[0xf9]);
      (*DAT_10223004)();
    }
    if ((DAT_102265e8 != 0) && ((char)in_ECX[0x89e] != '\0')) {
      (*DAT_10223000)(1,DAT_102265e8,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(10);
      (*DAT_10223008)(1);
      (*DAT_10223004)();
    }
    iVar6 = in_ECX[0x94b];
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x160) != 0)) {
      *(float *)(iVar6 + 0x1d8) = *DAT_10223188;
      (**(code **)(*(int *)in_ECX[0x94b] + 0x1c4))();
      _DAT_102119bc = *DAT_10223188;
      _DAT_102119c0 = *DAT_10223188;
      _DAT_102119b0 = *DAT_10223188;
      FUN_10038fc0(in_ECX);
    }
    if (*(float *)(in_ECX[1] + 0x268) != 0.0) {
      (*DAT_10223000)(1,DAT_102265f4,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(1);
      (*DAT_10223008)(10);
      (*DAT_10223020)(&DAT_101a2496);
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      in_ECX[0x8c0] = 1;
      fStack_f4 = 0.0;
      fStack_f0 = 0.0;
      fStack_ec = 0.0;
      FUN_10119c00();
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"unlockables/nv_on.wav",0x3f800000,
                   0x3f4ccccd,0,100);
      FUN_100f91b0(0xc1c00000,0x3f000000,0x3f000000);
    }
  }
  if (DAT_10226475 != '\0') {
    (*DAT_10223000)(1,DAT_102266e4,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223004)();
    DAT_10226475 = '\0';
  }
  if (in_ECX[0x8c5] != 0) {
    if (in_ECX[0x8c4] == 0) {
      (*DAT_10223000)();
      (*DAT_10223008)(0);
      (*DAT_10223008)(0);
      (*DAT_1022301c)(in_ECX[0x8c6]);
      (*DAT_10223020)("nothing");
      (*DAT_10223004)();
      in_ECX[0x8c6] = 0;
    }
    else {
      (*DAT_10223000)(1,DAT_10226544,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)((char)in_ECX[0x8c7] != '\0');
      (*DAT_10223008)(1);
      (*DAT_1022301c)(in_ECX[0x8c8]);
      (*DAT_10223020)((int)DAT_10223188[0x26] + in_ECX[0x8c4]);
      (*DAT_10223004)();
    }
    in_ECX[0x8c5] = 0;
  }
  if (in_ECX[0x8cf] != 0) {
    in_ECX[0x8a5] = 1000;
  }
  if (in_ECX[0x8c0] == 0x65) {
    piVar5 = (int *)in_ECX[0x94b];
    fVar16 = *DAT_10223188;
    if (piVar5 == (int *)0x0) {
      if ((float)in_ECX[0xfb] <= fVar16 && fVar16 != (float)in_ECX[0xfb]) {
        (*DAT_10223000)(1,DAT_102265f4,0,*(undefined4 *)(in_ECX[1] + 0x20c));
        (*DAT_10223008)(1);
        (*DAT_10223008)(10);
        (*DAT_10223020)(&DAT_101a2496);
        (*DAT_10223008)(*(float *)(in_ECX[1] + 0x268) == 0.0);
        (*DAT_10223004)();
        fStack_f4 = 0.0;
        fVar16 = *DAT_10223188;
        in_ECX[0x8c0] = 1;
        fStack_f0 = 0.0;
        fStack_ec = 0.0;
        in_ECX[0xfb] = (int)(fVar16 + 0.7);
        FUN_10119c00();
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"unlockables/nv_on.wav",0x3f800000,
                     0x3f4ccccd,0,100);
        FUN_100f91b0(0xc1c00000,0x3f000000,0x3f000000);
      }
    }
    else if ((((((float)piVar5[0x73] <= fVar16 && fVar16 != (float)piVar5[0x73]) &&
               ((float)piVar5[0x74] <= fVar16 && fVar16 != (float)piVar5[0x74])) &&
              ((float)piVar5[0x75] <= fVar16 && fVar16 != (float)piVar5[0x75])) &&
             ((piVar5[0x50] == 0 && (piVar5[0x4a] == 0)))) &&
            ((piVar5[0x7c] == 0 && ((float)in_ECX[0xc2] <= fVar16 && fVar16 != (float)in_ECX[0xc2]))
            )) {
      in_ECX[0xfc] = (int)piVar5;
      (**(code **)(*piVar5 + 0x14c))();
      uVar18 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX[0x94b] + 4) + 0x20c),
                               *(undefined4 *)(in_ECX[1] + 0x21c));
      fVar13 = (float10)FUN_1000f390(uVar18);
      fVar16 = *DAT_10223188;
      in_ECX[0x94b] = 0;
      in_ECX[0xfb] = (int)(float)(fVar13 + (float10)fVar16);
    }
  }
  if (in_ECX[0x8c0] == 100) {
    piVar5 = (int *)in_ECX[0x94b];
    fVar16 = *DAT_10223188;
    if (piVar5 == (int *)0x0) {
      if ((float)in_ECX[0xfb] <= fVar16 && fVar16 != (float)in_ECX[0xfb]) {
        (*DAT_10223000)(1,DAT_102265f4,0,*(undefined4 *)(in_ECX[1] + 0x20c));
        (*DAT_10223008)(0);
        (*DAT_10223008)(10);
        (*DAT_10223020)(&DAT_101a2496);
        (*DAT_10223008)(*(float *)(in_ECX[1] + 0x268) == 0.0);
        (*DAT_10223004)();
        fStack_f4 = 0.0;
        fVar16 = *DAT_10223188;
        in_ECX[0x8c0] = 0;
        fStack_f0 = 0.0;
        fStack_ec = 0.0;
        in_ECX[0xfb] = (int)(fVar16 + 0.7);
        FUN_10119c00();
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"unlockables/nv_off.wav",0x3f800000,
                     0x3f4ccccd,0,100);
        FUN_100f91b0(0xc1c00000,0xbf000000,0xbf000000);
      }
    }
    else if (((((float)piVar5[0x73] <= fVar16 && fVar16 != (float)piVar5[0x73]) &&
              ((float)piVar5[0x74] <= fVar16 && fVar16 != (float)piVar5[0x74])) &&
             (((float)piVar5[0x75] <= fVar16 && fVar16 != (float)piVar5[0x75] &&
              (((piVar5[0x50] == 0 && (piVar5[0x4a] == 0)) && (piVar5[0x7c] == 0)))))) &&
            ((float)in_ECX[0xc2] <= fVar16 && fVar16 != (float)in_ECX[0xc2])) {
      in_ECX[0xfc] = (int)piVar5;
      (**(code **)(*piVar5 + 0x14c))();
      uVar18 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX[0x94b] + 4) + 0x20c),
                               *(undefined4 *)(in_ECX[1] + 0x21c));
      fVar13 = (float10)FUN_1000f390(uVar18);
      fVar16 = *DAT_10223188;
      in_ECX[0x94b] = 0;
      in_ECX[0xfb] = (int)(float)(fVar13 + (float10)fVar16);
    }
  }
  if ((((int *)in_ECX[0xfc] != (int *)0x0) && ((float)in_ECX[0xfb] != 666.0)) &&
     ((float)in_ECX[0xfb] < *DAT_10223188)) {
    (**(code **)(*(int *)in_ECX[0xfc] + 0x144))();
    (**(code **)(*(int *)in_ECX[0xfc] + 0x150))();
    in_ECX[0x94b] = in_ECX[0xfc];
    in_ECX[0xfc] = 0;
  }
  if ((((char)in_ECX[0x7a9] != '\0') && (DAT_10222ee4 != (int *)0x0)) &&
     ((iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar6 != 0 &&
      (iVar6 = (**(code **)(*in_ECX + 0xbc))(), iVar6 != 0)))) {
    uVar4 = *(uint *)(in_ECX[1] + 0x118);
    if (-1 < (char)uVar4) {
      *(uint *)(in_ECX[1] + 0x118) = uVar4 | 0x80;
    }
  }
  iVar6 = in_ECX[1];
  if (*(float *)(iVar6 + 0x28c) != *(float *)(iVar6 + 0x260)) {
    *(float *)(iVar6 + 0x28c) = *(float *)(iVar6 + 0x260);
  }
  if (in_ECX[0x16b] != 0) {
    iVar6 = *(int *)(in_ECX[0x16b] + 4);
    iVar7 = *(int *)(iVar6 + 0x298);
    if (iVar7 != 0) {
      *(undefined8 *)(iVar6 + 8) = *(undefined8 *)(iVar7 + 0x88);
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar7 + 0x90);
    }
  }
  if (((char)in_ECX[0x143] != '\0') && (*(float *)(in_ECX[1] + 0x260) != 2.0)) {
    iVar6 = FUN_1000e9b0("taller_fall");
    if (iVar6 == -1) {
      iVar6 = 0;
    }
    iVar7 = in_ECX[1];
    if ((*(int *)(iVar7 + 300) != iVar6) || (in_ECX[0x3f] == 0)) {
      *(undefined4 *)(iVar7 + 0x134) = 0;
      iVar7 = in_ECX[1];
    }
    *(undefined4 *)(iVar7 + 0x130) = 0;
    uVar18 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),iVar6);
    fVar13 = (float10)FUN_1000f390(uVar18);
    in_ECX[0x13d] = (int)(float)(fVar13 + (float10)*DAT_10223188);
    if (*(int *)(in_ECX[1] + 300) != iVar6) {
      *(int *)(in_ECX[1] + 300) = iVar6;
      *(undefined4 *)(in_ECX[1] + 0x134) = 0;
      FUN_1000e9e0();
    }
  }
  iVar6 = in_ECX[1];
  if (((*(float *)(iVar6 + 0x260) == 2.0) && ((char)in_ECX[0x140] == '\0')) &&
     ((float)in_ECX[0x13d] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x13d])) {
    iVar7 = FUN_1000e9b0("taller_lie");
    if (iVar7 == -1) {
      iVar7 = 0;
    }
    iVar6 = in_ECX[1];
    if ((*(int *)(iVar6 + 300) != iVar7) || (in_ECX[0x3f] == 0)) {
      *(undefined4 *)(iVar6 + 0x134) = 0;
      iVar6 = in_ECX[1];
    }
    *(undefined4 *)(iVar6 + 0x130) = 0;
    uVar18 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),iVar7);
    fVar13 = (float10)FUN_1000f390(uVar18);
    iVar6 = in_ECX[1];
    in_ECX[0x13d] = (int)(float)(fVar13 + (float10)*DAT_10223188);
    if (*(int *)(iVar6 + 300) != iVar7) {
      *(int *)(iVar6 + 300) = iVar7;
      *(undefined4 *)(in_ECX[1] + 0x134) = 0;
      FUN_1000e9e0();
      iVar6 = in_ECX[1];
    }
  }
  if ((((char)in_ECX[0x143] != '\0') && ((*(uint *)(iVar6 + 0x1a8) & 0x200) != 0)) &&
     (*(float *)(iVar6 + 0x260) == 0.0)) {
    FUN_100fc9f0(*(undefined4 *)(iVar6 + 0x20c),0,"taller/taller_player_impact.wav",0x3f800000,
                 0x3f4ccccd,0,0x5a);
    iVar6 = FUN_1000e9b0("taller_land");
    if (iVar6 == -1) {
      iVar6 = 0;
    }
    iVar7 = in_ECX[1];
    if ((*(int *)(iVar7 + 300) != iVar6) || (in_ECX[0x3f] == 0)) {
      *(undefined4 *)(iVar7 + 0x134) = 0;
      iVar7 = in_ECX[1];
    }
    *(undefined4 *)(iVar7 + 0x130) = 0;
    uVar18 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),iVar6);
    fVar13 = (float10)FUN_1000f390(uVar18);
    iVar7 = in_ECX[1];
    in_ECX[0x13d] = (int)(float)(fVar13 + (float10)*DAT_10223188);
    if (*(int *)(iVar7 + 300) != iVar6) {
      *(int *)(iVar7 + 300) = iVar6;
      *(undefined4 *)(in_ECX[1] + 0x134) = 0;
      FUN_1000e9e0();
      iVar7 = in_ECX[1];
    }
    *(float *)(iVar7 + 0x20) = *(float *)(iVar7 + 0x20) * 0.5;
    *(float *)(in_ECX[1] + 0x24) = *(float *)(in_ECX[1] + 0x24) * 0.5;
    *(float *)(in_ECX[1] + 0x28) = *(float *)(in_ECX[1] + 0x28) * 0.5;
    if ((DAT_10222ee4 == (int *)0x0) || (iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar6 == 0))
    {
      fVar16 = *DAT_10223188 + 5.0;
    }
    else {
      fVar16 = *DAT_10223188 + 3.0;
    }
    in_ECX[0x7b3] = (int)fVar16;
    *(undefined1 *)(in_ECX + 0x7b4) = 1;
    *(undefined4 *)(in_ECX[1] + 0x260) = 0x40000000;
    (*DAT_10223000)(1,DAT_102265b4,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223008)(1);
    uVar18 = (*DAT_102230b0)(6,0xc);
    (*DAT_10223008)(uVar18);
    (*DAT_10223004)();
    FUN_100f3d90(100,0);
    iVar6 = (*DAT_102230b0)(0xffffffdd,0x23);
    fVar16 = (float)iVar6;
    iVar6 = (*DAT_102230b0)(0xffffffdd,0x23,fVar16);
    FUN_100f91b0(0xc1f00000,(float)iVar6,fVar16);
    FUN_100e9eb0();
    *(uint *)(in_ECX[1] + 0x1a8) = *(uint *)(in_ECX[1] + 0x1a8) & 0xfffbffff;
    uVar18 = DAT_102268b4;
    if ((*(uint *)(in_ECX[1] + 0x1a8) & 0x80000) == 0) {
      uVar18 = DAT_102268b0;
    }
    if ((char)in_ECX[0x7b2] != '\0') {
      uVar18 = DAT_102268bc;
    }
    *(undefined4 *)(in_ECX[1] + 0x214) = uVar18;
    pfVar1 = (float *)(in_ECX[1] + 0x214);
    if (*pfVar1 <= 30.0 && *pfVar1 != 30.0) {
      *(undefined4 *)(in_ECX[1] + 0x214) = 0x41f00000;
    }
  }
  if (*DAT_10223188 <= (float)in_ECX[0x166] && (float)in_ECX[0x166] != *DAT_10223188) {
    _DAT_1022670c = DAT_10226708;
    _DAT_10226710 = *DAT_10223188 - DAT_10226708;
    iVar6 = in_ECX[1];
    fStack_e4 = (float)in_ECX[0x167] - (*(float *)(iVar6 + 0x178) + *(float *)(iVar6 + 8));
    fStack_e0 = (float)in_ECX[0x168] - (*(float *)(iVar6 + 0x17c) + *(float *)(iVar6 + 0xc));
    fStack_dc = (float)in_ECX[0x169] - (*(float *)(iVar6 + 0x10) + *(float *)(iVar6 + 0x180));
    DAT_10226708 = *DAT_10223188;
    FUN_1011a8d0(&fStack_f4,&fStack_e4);
    iVar6 = in_ECX[1];
    fStack_f4 = -fStack_f4;
    if (360.0 < *(float *)(iVar6 + 0x54)) {
      *(float *)(iVar6 + 0x54) = *(float *)(iVar6 + 0x54) - 360.0;
      iVar6 = in_ECX[1];
    }
    if (*(float *)(iVar6 + 0x54) < 0.0) {
      *(float *)(iVar6 + 0x54) = *(float *)(iVar6 + 0x54) + 360.0;
      iVar6 = in_ECX[1];
    }
    *(float *)(iVar6 + 0x50) = fStack_f4;
    *(float *)(in_ECX[1] + 0x54) = fStack_f0;
    *(undefined4 *)(in_ECX[1] + 0xa0) = 1;
  }
  DAT_10226708 = *DAT_10223188;
  iVar6 = in_ECX[1];
  if (*(char *)((int)in_ECX + 0x5a9) == '\0') {
    if (*(int *)(iVar6 + 0x1c4) < 3) {
      iVar7 = in_ECX[1];
    }
    else {
      *(undefined1 *)((int)in_ECX + 0x5a9) = 1;
      FUN_100fc9f0(*(undefined4 *)(iVar6 + 0x20c),2,"common/null.wav",0x3f800000,0x3f4ccccd,0,100);
      iVar6 = in_ECX[1];
      iVar7 = iVar6;
    }
  }
  else {
    iVar7 = iVar6;
    if (*(int *)(iVar6 + 0x1c4) < 3) {
      *(undefined1 *)((int)in_ECX + 0x5a9) = 0;
    }
  }
  if ((*(int *)(iVar6 + 0x1c4) - 1U < 2) && ((*(uint *)(iVar6 + 0x1a8) & 0x200) == 0)) {
    if ((float)in_ECX[0x879] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x879]) {
      fStack_e4 = *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x178);
      fStack_e0 = *(float *)(iVar6 + 0xc) + *(float *)(iVar6 + 0x17c);
      fStack_dc = *(float *)(iVar6 + 0x10) + *(float *)(iVar6 + 0x180);
      fStack_f4 = fStack_e4 - 0.0;
      fStack_f0 = fStack_e0 - 0.0;
      fStack_ec = fStack_dc - 1024.0;
      FUN_1011a820(&fStack_e4,&fStack_f4,1,0,*(undefined4 *)(iVar6 + 0x20c),auStack_c8);
      if ((fStack_b8 != 1.0) && (iVar6 = FUN_10119780(&fStack_b4), iVar6 == -3)) {
        fStack_d8 = fStack_b4;
        fStack_d4 = fStack_b0;
        fStack_d0 = fStack_ac;
        iVar6 = FUN_10119780(&fStack_d8);
        while (iVar6 == -3) {
          fStack_d0 = fStack_d0 + 1.0;
          iVar6 = FUN_10119780(&fStack_d8);
        }
        fVar16 = *(float *)(in_ECX[1] + 0x24);
        fVar17 = *(float *)(in_ECX[1] + 0x20);
        dVar15 = (double)(fVar17 * fVar17 + fVar16 * fVar16);
        if (dVar15 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar15 = SQRT(dVar15);
        }
        if ((float)dVar15 <= 20.0) {
          (*DAT_10223000)(2,DAT_10226644,0,0);
          (*DAT_1022301c)(fStack_d8);
          (*DAT_1022301c)(fStack_d4);
          (*DAT_1022301c)(fStack_d0);
          uVar18 = 0x14;
        }
        else {
          (*DAT_10223000)();
          (*DAT_1022301c)(fStack_d8);
          (*DAT_1022301c)(fStack_d4);
          (*DAT_1022301c)(fStack_d0);
          uVar18 = 0x1e;
        }
        (*DAT_10223010)(uVar18);
        (*DAT_10223004)();
      }
      iVar7 = in_ECX[1];
      in_ECX[0x879] = (int)(*DAT_10223188 + 0.25);
    }
  }
  else if (*DAT_10223188 < (float)in_ECX[0x879]) {
    in_ECX[0x879] = (int)*DAT_10223188;
  }
  if (*(char *)((int)in_ECX + 0x21e2) == '\0') {
    if (0 < *(int *)(iVar7 + 0x1c4)) {
      *(undefined1 *)((int)in_ECX + 0x21e2) = 1;
    }
  }
  else if (*(int *)(iVar7 + 0x1c4) < 1) {
    *(undefined1 *)((int)in_ECX + 0x21e2) = 0;
  }
  if (((char)in_ECX[0x878] != '\0') && (*(int *)(iVar7 + 0x1c4) < 3)) {
    *(undefined1 *)(in_ECX + 0x878) = 0;
    FUN_100fc9f0(*(undefined4 *)(iVar7 + 0x20c),2,"player/vocal/water_surface.wav",0x3f800000,
                 0x3f4ccccd,0,100);
    iVar7 = in_ECX[1];
  }
  if (((char)in_ECX[0x16a] != '\0') && (*(int *)(iVar7 + 0x1c4) < 3)) {
    *(undefined1 *)(in_ECX + 0x16a) = 0;
  }
  if (*(char *)((int)in_ECX + 0x21e1) == '\0') {
    if (2 < *(int *)(iVar7 + 0x1c4)) {
      if ((*(uint *)(iVar7 + 0x1a8) & 0x200) == 0) {
        pcVar9 = "player/water_splash.wav";
        if (*(char *)((int)in_ECX + 0x21e2) != '\0') {
          pcVar9 = "player/water_small_splash.wav";
        }
      }
      else {
        pcVar9 = "player/water_small_splash.wav";
      }
      FUN_100fc9f0(*(undefined4 *)(iVar7 + 0x20c),0,pcVar9,0x3f800000,0x3f4ccccd,0,100);
      *(undefined1 *)((int)in_ECX + 0x21e1) = 1;
    }
  }
  else if (*(int *)(iVar7 + 0x1c4) < 3) {
    FUN_100fc9f0(*(undefined4 *)(iVar7 + 0x20c),0,"player/water_jump.wav",0x3f800000,0x3f4ccccd,0,
                 100);
    *(undefined1 *)((int)in_ECX + 0x21e1) = 0;
  }
  iVar6 = in_ECX[1];
  if (*(int *)(iVar6 + 0x1c4) < 3) {
    piVar5 = (int *)in_ECX[0x94b];
    if (piVar5 == (int *)0x0) {
LAB_100ec9f6:
      if (((*(uint *)(iVar6 + 0x184) & 0x800) != 0) &&
         ((float)in_ECX[0x131] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x131])) {
        iVar6 = FUN_100e2380("weapon_action");
        if (iVar6 == 0) {
          FUN_100e0a80("weapon_action",0,0);
          piVar5 = (int *)in_ECX[0x94b];
          piStack_f8 = piVar5;
        }
        else {
          piStack_f8 = (int *)in_ECX[0x94b];
        }
        if (piVar5 == (int *)0x0) {
LAB_100ecaa9:
          piVar5 = (int *)0x0;
        }
        else {
          pcVar9 = "weapon_action";
          pbVar8 = (byte *)(*(int *)(-(uint)(*(int *)(piVar5[1] + 0x20c) != 0) &
                                    *(int *)(piVar5[1] + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
          do {
            bVar2 = *pbVar8;
            bVar12 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_100ecaa0:
              uVar4 = -(uint)bVar12 | 1;
              goto LAB_100ecaa5;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar8[1];
            bVar12 = bVar2 < (byte)pcVar9[1];
            if (bVar2 != pcVar9[1]) goto LAB_100ecaa0;
            pbVar8 = pbVar8 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar2 != 0);
          uVar4 = 0;
LAB_100ecaa5:
          if (uVar4 == 0) goto LAB_100ecaa9;
        }
        in_ECX[0x94f] = (int)piVar5;
        iVar6 = FUN_100e2380("weapon_action");
        if (iVar6 != 0) {
          if (piStack_f8 != (int *)0x0) {
            pcVar9 = "weapon_action";
            pbVar8 = (byte *)(*(int *)(-(uint)(*(int *)(piStack_f8[1] + 0x20c) != 0) &
                                      *(int *)(piStack_f8[1] + 0x20c) + 0x80U) +
                             (int)DAT_10223188[0x26]);
            do {
              bVar2 = *pbVar8;
              bVar12 = bVar2 < (byte)*pcVar9;
              if (bVar2 != *pcVar9) {
LAB_100ecb14:
                uVar4 = -(uint)bVar12 | 1;
                goto LAB_100ecb19;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar8[1];
              bVar12 = bVar2 < (byte)pcVar9[1];
              if (bVar2 != pcVar9[1]) goto LAB_100ecb14;
              pbVar8 = pbVar8 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar2 != 0);
            uVar4 = 0;
LAB_100ecb19:
            if (uVar4 == 0) goto LAB_100ecbc8;
          }
          piStack_e8 = in_ECX + 0x945;
          piStack_f8 = (int *)0x0;
          piVar5 = (int *)0x0;
          do {
            piVar11 = (int *)*piStack_e8;
            if (piVar11 == (int *)0x0) {
              piVar11 = piVar5;
              if (piVar5 != (int *)0x0) goto LAB_100ecbae;
            }
            else {
              do {
                pcVar9 = "weapon_action";
                pbVar8 = (byte *)(*(int *)piVar11[1] + (int)DAT_10223188[0x26]);
                do {
                  bVar2 = *pbVar8;
                  bVar12 = bVar2 < (byte)*pcVar9;
                  if (bVar2 != *pcVar9) {
LAB_100ecb76:
                    uVar4 = -(uint)bVar12 | 1;
                    goto LAB_100ecb7b;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar12 = bVar2 < (byte)pcVar9[1];
                  if (bVar2 != pcVar9[1]) goto LAB_100ecb76;
                  pbVar8 = pbVar8 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar2 != 0);
                uVar4 = 0;
LAB_100ecb7b:
                piVar5 = piVar11;
                if (uVar4 == 0) goto LAB_100ecbae;
                piVar11 = (int *)piVar11[0x59];
              } while (piVar11 != (int *)0x0);
            }
            piStack_f8 = (int *)((int)piStack_f8 + 1);
            piStack_e8 = piStack_e8 + 1;
            piVar5 = piVar11;
          } while ((int)piStack_f8 < 6);
          if (piVar11 != (int *)0x0) {
LAB_100ecbae:
            (**(code **)(*piVar5 + 0x144))();
            (**(code **)(*piVar5 + 0x150))();
            in_ECX[0x94b] = (int)piVar5;
          }
        }
LAB_100ecbc8:
        if (in_ECX[0x94b] != 0) {
          pcVar9 = "weapon_action";
          iVar6 = *(int *)(*(int *)(in_ECX[0x94b] + 4) + 0x20c);
          pbVar8 = (byte *)(*(int *)(-(uint)(iVar6 != 0) & iVar6 + 0x80U) + (int)DAT_10223188[0x26])
          ;
          do {
            bVar2 = *pbVar8;
            bVar12 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_100ecc20:
              uVar4 = -(uint)bVar12 | 1;
              goto LAB_100ecc25;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar8[1];
            bVar12 = bVar2 < (byte)pcVar9[1];
            if (bVar2 != pcVar9[1]) goto LAB_100ecc20;
            pbVar8 = pbVar8 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar2 != 0);
          uVar4 = 0;
LAB_100ecc25:
          if (uVar4 == 0) {
            (**(code **)(*in_ECX + 8))(0x3e6e978d);
            in_ECX[0x1e] = (int)CBasePlayer::MeleeHitThinkPunch;
            in_ECX[0x131] = (int)(*DAT_10223188 + 1.0);
            FUN_10119320(in_ECX[1] + 0x74);
            (**(code **)(*in_ECX + 0x228))(&piStack_f8);
            fStack_ec = DAT_10223188[10] * 32.0 + unaff_ESI;
            piStack_e8 = (int *)(DAT_10223188[0xb] * 32.0 + (float)piStack_f8);
            fStack_e4 = DAT_10223188[0xc] * 32.0 + fStack_f4;
            FUN_1011a800(&stack0xffffff04,&fStack_ec,0,*(undefined4 *)(in_ECX[1] + 0x20c),&fStack_d0
                        );
            FUN_100f91b0(0x3f800000,0x3f800000,0x40400000);
            FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"weapons/mobile/punch_swing.wav",
                         0x3f800000,0x3f4ccccd,0,100);
            if (in_ECX[0x94b] != 0) {
              iVar6 = *(int *)(in_ECX[0x94b] + 4);
              pcVar9 = "weapon_action";
              iVar7 = *(int *)(iVar6 + 0x20c);
              if (1.0 <= fStack_b8) {
                pbVar8 = (byte *)(*(int *)(-(uint)(iVar7 != 0) & iVar7 + 0x80U) +
                                 (int)DAT_10223188[0x26]);
                do {
                  bVar2 = *pbVar8;
                  bVar12 = bVar2 < (byte)*pcVar9;
                  if (bVar2 != *pcVar9) {
LAB_100ece00:
                    uVar4 = -(uint)bVar12 | 1;
                    goto LAB_100ece05;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar12 = bVar2 < (byte)pcVar9[1];
                  if (bVar2 != pcVar9[1]) goto LAB_100ece00;
                  pbVar8 = pbVar8 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar2 != 0);
                uVar4 = 0;
LAB_100ece05:
                if ((uVar4 == 0) && (*(float *)(iVar6 + 0x168) != 5.0)) {
                  *(undefined4 *)(iVar6 + 0x168) = 0x41300000;
                }
              }
              else {
                pbVar8 = (byte *)(*(int *)(-(uint)(iVar7 != 0) & iVar7 + 0x80U) +
                                 (int)DAT_10223188[0x26]);
                do {
                  bVar2 = *pbVar8;
                  bVar12 = bVar2 < (byte)*pcVar9;
                  if (bVar2 != *pcVar9) {
LAB_100ecd98:
                    uVar4 = -(uint)bVar12 | 1;
                    goto LAB_100ecd9d;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar12 = bVar2 < (byte)pcVar9[1];
                  if (bVar2 != pcVar9[1]) goto LAB_100ecd98;
                  pbVar8 = pbVar8 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar2 != 0);
                uVar4 = 0;
LAB_100ecd9d:
                if ((uVar4 == 0) && (*(float *)(iVar6 + 0x168) != 4.0)) {
                  *(undefined4 *)(iVar6 + 0x168) = 0x41200000;
                }
              }
            }
          }
        }
      }
    }
    else {
      pcVar9 = "weapon_action";
      pbVar8 = (byte *)(*(int *)(-(uint)(*(int *)(piVar5[1] + 0x20c) != 0) &
                                *(int *)(piVar5[1] + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
      do {
        bVar2 = *pbVar8;
        bVar12 = bVar2 < (byte)*pcVar9;
        if (bVar2 != *pcVar9) {
LAB_100ec9d6:
          uVar4 = -(uint)bVar12 | 1;
          goto LAB_100ec9db;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar8[1];
        bVar12 = bVar2 < (byte)pcVar9[1];
        if (bVar2 != pcVar9[1]) goto LAB_100ec9d6;
        pbVar8 = pbVar8 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar2 != 0);
      uVar4 = 0;
LAB_100ec9db:
      if ((uVar4 == 0) && (iVar6 = in_ECX[1], *(float *)(iVar6 + 0x260) <= 0.0)) goto LAB_100ec9f6;
    }
    iVar6 = FUN_100e2530();
    if ((((iVar6 != 0) || ((*(uint *)(in_ECX[1] + 0x1a8) & 0x40000) == 0)) ||
        ((char)in_ECX[0x143] != '\0')) ||
       ((350.0 < (float)in_ECX[0x8b1] || (float)in_ECX[0x8b1] == 350.0 ||
        (*DAT_10223188 < (float)in_ECX[0xc2] || *DAT_10223188 == (float)in_ECX[0xc2])))) {
      iVar6 = FUN_100e2530();
      if ((iVar6 != 0) || ((in_ECX[0x94f] != 0 || (0.0 < *(float *)(in_ECX[1] + 0x260))))) {
        piVar5 = (int *)in_ECX[0x94b];
        if (piVar5 != (int *)0x0) {
          pcVar9 = "weapon_action";
          pbVar8 = (byte *)(*(int *)(-(uint)(*(int *)(piVar5[1] + 0x20c) != 0) &
                                    *(int *)(piVar5[1] + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
          do {
            bVar2 = *pbVar8;
            bVar12 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_100ed570:
              uVar4 = -(uint)bVar12 | 1;
              goto LAB_100ed575;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar8[1];
            bVar12 = bVar2 < (byte)pcVar9[1];
            if (bVar2 != pcVar9[1]) goto LAB_100ed570;
            pbVar8 = pbVar8 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar2 != 0);
          uVar4 = 0;
LAB_100ed575:
          if (((uVar4 == 0) && (fVar16 = *(float *)(piVar5[1] + 0x168), fVar16 != 20.0)) &&
             ((fVar16 == 3.0 || (fVar16 != 5.0)))) {
            (**(code **)(*piVar5 + 0x14c))();
            piVar5 = (int *)in_ECX[0x94f];
            in_ECX[0x94b] = 0;
            if ((piVar5 != (int *)0x0) &&
               (iVar6 = FUN_100e2380(*(int *)piVar5[1] + (int)DAT_10223188[0x26]), iVar6 != 0)) {
              (**(code **)(*piVar5 + 0x144))();
              (**(code **)(*(int *)in_ECX[0x94f] + 0x150))();
              iVar6 = in_ECX[0x94f];
              in_ECX[0x94f] = 0;
              in_ECX[0x94b] = iVar6;
            }
          }
        }
      }
      else if (((*(uint *)(in_ECX[1] + 0x184) & 0x800) != 0) &&
              ((float)in_ECX[0x131] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x131])) {
        iVar6 = FUN_100e2380("weapon_action");
        if (iVar6 == 0) {
          FUN_100e0a80("weapon_action",0,0);
        }
        iVar6 = in_ECX[0x94b];
        if (iVar6 != 0) {
          pcVar9 = "weapon_action";
          iVar7 = *(int *)(*(int *)(iVar6 + 4) + 0x20c);
          pbVar8 = (byte *)(*(int *)(-(uint)(iVar7 != 0) & iVar7 + 0x80U) + (int)DAT_10223188[0x26])
          ;
          do {
            bVar2 = *pbVar8;
            bVar12 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_100ed168:
              uVar4 = -(uint)bVar12 | 1;
              goto LAB_100ed16d;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar8[1];
            bVar12 = bVar2 < (byte)pcVar9[1];
            if (bVar2 != pcVar9[1]) goto LAB_100ed168;
            pbVar8 = pbVar8 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar2 != 0);
          uVar4 = 0;
LAB_100ed16d:
          if (uVar4 != 0) {
            in_ECX[0x94f] = iVar6;
          }
        }
        iVar7 = FUN_100e2380("weapon_action");
        if (iVar7 != 0) {
          if (iVar6 != 0) {
            pcVar9 = "weapon_action";
            iVar6 = *(int *)(*(int *)(iVar6 + 4) + 0x20c);
            pbVar8 = (byte *)(*(int *)(-(uint)(iVar6 != 0) & iVar6 + 0x80U) +
                             (int)DAT_10223188[0x26]);
            do {
              bVar2 = *pbVar8;
              bVar12 = bVar2 < (byte)*pcVar9;
              if (bVar2 != *pcVar9) {
LAB_100ed1d6:
                uVar4 = -(uint)bVar12 | 1;
                goto LAB_100ed1db;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar8[1];
              bVar12 = bVar2 < (byte)pcVar9[1];
              if (bVar2 != pcVar9[1]) goto LAB_100ed1d6;
              pbVar8 = pbVar8 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar2 != 0);
            uVar4 = 0;
LAB_100ed1db:
            if (uVar4 == 0) goto LAB_100ed289;
          }
          piStack_e8 = in_ECX + 0x945;
          piStack_f8 = (int *)0x0;
          piVar5 = (int *)0x0;
          do {
            piVar11 = (int *)*piStack_e8;
            if (piVar11 == (int *)0x0) {
              piVar11 = piVar5;
              if (piVar5 != (int *)0x0) goto LAB_100ed26f;
            }
            else {
              do {
                pcVar9 = "weapon_action";
                pbVar8 = (byte *)(*(int *)piVar11[1] + (int)DAT_10223188[0x26]);
                do {
                  bVar2 = *pbVar8;
                  bVar12 = bVar2 < (byte)*pcVar9;
                  if (bVar2 != *pcVar9) {
LAB_100ed237:
                    uVar4 = -(uint)bVar12 | 1;
                    goto LAB_100ed23c;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar12 = bVar2 < (byte)pcVar9[1];
                  if (bVar2 != pcVar9[1]) goto LAB_100ed237;
                  pbVar8 = pbVar8 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar2 != 0);
                uVar4 = 0;
LAB_100ed23c:
                piVar5 = piVar11;
                if (uVar4 == 0) goto LAB_100ed26f;
                piVar11 = (int *)piVar11[0x59];
              } while (piVar11 != (int *)0x0);
            }
            piStack_f8 = (int *)((int)piStack_f8 + 1);
            piStack_e8 = piStack_e8 + 1;
            piVar5 = piVar11;
          } while ((int)piStack_f8 < 6);
          if (piVar11 != (int *)0x0) {
LAB_100ed26f:
            (**(code **)(*piVar5 + 0x144))();
            (**(code **)(*piVar5 + 0x150))();
            in_ECX[0x94b] = (int)piVar5;
          }
        }
LAB_100ed289:
        if (in_ECX[0x94b] != 0) {
          iVar6 = *(int *)(in_ECX[0x94b] + 4);
          pcVar9 = "weapon_action";
          iVar7 = *(int *)(iVar6 + 0x20c);
          pbVar8 = (byte *)(*(int *)(-(uint)(iVar7 != 0) & iVar7 + 0x80U) + (int)DAT_10223188[0x26])
          ;
          do {
            bVar2 = *pbVar8;
            bVar12 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_100ed2e0:
              uVar4 = -(uint)bVar12 | 1;
              goto LAB_100ed2e5;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar8[1];
            bVar12 = bVar2 < (byte)pcVar9[1];
            if (bVar2 != pcVar9[1]) goto LAB_100ed2e0;
            pbVar8 = pbVar8 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar2 != 0);
          uVar4 = 0;
LAB_100ed2e5:
          if ((uVar4 == 0) && (*(float *)(iVar6 + 0x168) != 2.0)) {
            (**(code **)(*in_ECX + 8))(0x3e6e978d);
            in_ECX[0x1e] = (int)CBasePlayer::MeleeHitThinkPunch;
            in_ECX[0x131] = (int)(*DAT_10223188 + 1.0);
            FUN_10119320(in_ECX[1] + 0x74);
            (**(code **)(*in_ECX + 0x228))(&piStack_f8);
            fStack_ec = DAT_10223188[10] * 32.0 + unaff_ESI;
            piStack_e8 = (int *)(DAT_10223188[0xb] * 32.0 + (float)piStack_f8);
            fStack_e4 = DAT_10223188[0xc] * 32.0 + fStack_f4;
            FUN_1011a800(&stack0xffffff04,&fStack_ec,0,*(undefined4 *)(in_ECX[1] + 0x20c),&fStack_d0
                        );
            FUN_100f91b0(0x3f800000,0x3f800000,0x40400000);
            FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"weapons/mobile/punch_swing.wav",
                         0x3f800000,0x3f4ccccd,0,100);
            if (in_ECX[0x94b] != 0) {
              iVar6 = *(int *)(in_ECX[0x94b] + 4);
              pcVar9 = "weapon_action";
              iVar7 = *(int *)(iVar6 + 0x20c);
              if (1.0 <= fStack_b8) {
                pbVar8 = (byte *)(*(int *)(-(uint)(iVar7 != 0) & iVar7 + 0x80U) +
                                 (int)DAT_10223188[0x26]);
                do {
                  bVar2 = *pbVar8;
                  bVar12 = bVar2 < (byte)*pcVar9;
                  if (bVar2 != *pcVar9) {
LAB_100ed4e0:
                    uVar4 = -(uint)bVar12 | 1;
                    goto LAB_100ed4e5;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar12 = bVar2 < (byte)pcVar9[1];
                  if (bVar2 != pcVar9[1]) goto LAB_100ed4e0;
                  pbVar8 = pbVar8 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar2 != 0);
                uVar4 = 0;
LAB_100ed4e5:
                if ((uVar4 == 0) && (*(float *)(iVar6 + 0x168) != 5.0)) {
                  *(undefined4 *)(iVar6 + 0x168) = 0x41300000;
                }
              }
              else {
                pbVar8 = (byte *)(*(int *)(-(uint)(iVar7 != 0) & iVar7 + 0x80U) +
                                 (int)DAT_10223188[0x26]);
                do {
                  bVar2 = *pbVar8;
                  bVar12 = bVar2 < (byte)*pcVar9;
                  if (bVar2 != *pcVar9) {
LAB_100ed475:
                    uVar4 = -(uint)bVar12 | 1;
                    goto LAB_100ed47a;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar12 = bVar2 < (byte)pcVar9[1];
                  if (bVar2 != pcVar9[1]) goto LAB_100ed475;
                  pbVar8 = pbVar8 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar2 != 0);
                uVar4 = 0;
LAB_100ed47a:
                if ((uVar4 == 0) && (*(float *)(iVar6 + 0x168) != 4.0)) {
                  *(undefined4 *)(iVar6 + 0x168) = 0x41200000;
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar6 = FUN_100e2380("weapon_action");
      if (iVar6 == 0) {
        FUN_100e0a80("weapon_action",0,0);
      }
      iVar6 = in_ECX[0x94b];
      if (iVar6 != 0) {
        pcVar9 = "weapon_action";
        iVar7 = *(int *)(*(int *)(iVar6 + 4) + 0x20c);
        pbVar8 = (byte *)(*(int *)(-(uint)(iVar7 != 0) & iVar7 + 0x80U) + (int)DAT_10223188[0x26]);
        do {
          bVar2 = *pbVar8;
          bVar12 = bVar2 < (byte)*pcVar9;
          if (bVar2 != *pcVar9) {
LAB_100ecef1:
            uVar4 = -(uint)bVar12 | 1;
            goto LAB_100ecef6;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar8[1];
          bVar12 = bVar2 < (byte)pcVar9[1];
          if (bVar2 != pcVar9[1]) goto LAB_100ecef1;
          pbVar8 = pbVar8 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar2 != 0);
        uVar4 = 0;
LAB_100ecef6:
        if (uVar4 != 0) {
          in_ECX[0x94f] = iVar6;
        }
      }
      iVar7 = FUN_100e2380("weapon_action");
      if (iVar7 != 0) {
        if (iVar6 != 0) {
          pcVar9 = "weapon_action";
          iVar6 = *(int *)(*(int *)(iVar6 + 4) + 0x20c);
          pbVar8 = (byte *)(*(int *)(-(uint)(iVar6 != 0) & iVar6 + 0x80U) + (int)DAT_10223188[0x26])
          ;
          do {
            bVar2 = *pbVar8;
            bVar12 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_100ecf60:
              uVar4 = -(uint)bVar12 | 1;
              goto LAB_100ecf65;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar8[1];
            bVar12 = bVar2 < (byte)pcVar9[1];
            if (bVar2 != pcVar9[1]) goto LAB_100ecf60;
            pbVar8 = pbVar8 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar2 != 0);
          uVar4 = 0;
LAB_100ecf65:
          if (uVar4 == 0) goto LAB_100ed018;
        }
        piStack_e8 = in_ECX + 0x945;
        piStack_f8 = (int *)0x0;
        piVar5 = (int *)0x0;
        do {
          piVar11 = (int *)*piStack_e8;
          if (piVar11 == (int *)0x0) {
            piVar11 = piVar5;
            if (piVar5 != (int *)0x0) goto LAB_100ecffe;
          }
          else {
            do {
              pcVar9 = "weapon_action";
              pbVar8 = (byte *)(*(int *)piVar11[1] + (int)DAT_10223188[0x26]);
              do {
                bVar2 = *pbVar8;
                bVar12 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_100ecfc6:
                  uVar4 = -(uint)bVar12 | 1;
                  goto LAB_100ecfcb;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar8[1];
                bVar12 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_100ecfc6;
                pbVar8 = pbVar8 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              uVar4 = 0;
LAB_100ecfcb:
              piVar5 = piVar11;
              if (uVar4 == 0) goto LAB_100ecffe;
              piVar11 = (int *)piVar11[0x59];
            } while (piVar11 != (int *)0x0);
          }
          piStack_f8 = (int *)((int)piStack_f8 + 1);
          piStack_e8 = piStack_e8 + 1;
          piVar5 = piVar11;
        } while ((int)piStack_f8 < 6);
        if (piVar11 != (int *)0x0) {
LAB_100ecffe:
          (**(code **)(*piVar5 + 0x144))();
          (**(code **)(*piVar5 + 0x150))();
          in_ECX[0x94b] = (int)piVar5;
        }
      }
LAB_100ed018:
      if (in_ECX[0x94b] != 0) {
        iVar6 = *(int *)(in_ECX[0x94b] + 4);
        pcVar9 = "weapon_action";
        pbVar8 = (byte *)(*(int *)(-(uint)(*(int *)(iVar6 + 0x20c) != 0) &
                                  *(int *)(iVar6 + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
        do {
          bVar2 = *pbVar8;
          bVar12 = bVar2 < (byte)*pcVar9;
          if (bVar2 != *pcVar9) {
LAB_100ed070:
            uVar4 = -(uint)bVar12 | 1;
            goto LAB_100ed075;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar8[1];
          bVar12 = bVar2 < (byte)pcVar9[1];
          if (bVar2 != pcVar9[1]) goto LAB_100ed070;
          pbVar8 = pbVar8 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar2 != 0);
        uVar4 = 0;
LAB_100ed075:
        if ((uVar4 == 0) && (*(float *)(iVar6 + 0x168) != 2.0)) {
          *(undefined4 *)(iVar6 + 0x168) = 0x40000000;
        }
      }
    }
  }
  else {
    iVar6 = FUN_100e2380("weapon_action");
    if (iVar6 == 0) {
      FUN_100e0a80("weapon_action",0,0);
    }
    iVar6 = in_ECX[0x94b];
    if (iVar6 != 0) {
      pcVar9 = "weapon_action";
      iVar7 = *(int *)(*(int *)(iVar6 + 4) + 0x20c);
      pbVar8 = (byte *)(*(int *)(-(uint)(iVar7 != 0) & iVar7 + 0x80U) + (int)DAT_10223188[0x26]);
      do {
        bVar2 = *pbVar8;
        bVar12 = bVar2 < (byte)*pcVar9;
        if (bVar2 != *pcVar9) {
LAB_100ec7d0:
          uVar4 = -(uint)bVar12 | 1;
          goto LAB_100ec7d5;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar8[1];
        bVar12 = bVar2 < (byte)pcVar9[1];
        if (bVar2 != pcVar9[1]) goto LAB_100ec7d0;
        pbVar8 = pbVar8 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar2 != 0);
      uVar4 = 0;
LAB_100ec7d5:
      if (uVar4 != 0) {
        in_ECX[0x94f] = iVar6;
      }
    }
    iVar7 = FUN_100e2380("weapon_action");
    if (iVar7 != 0) {
      if (iVar6 != 0) {
        pcVar9 = "weapon_action";
        iVar6 = *(int *)(*(int *)(iVar6 + 4) + 0x20c);
        pbVar8 = (byte *)(*(int *)(-(uint)(iVar6 != 0) & iVar6 + 0x80U) + (int)DAT_10223188[0x26]);
        do {
          bVar2 = *pbVar8;
          bVar12 = bVar2 < (byte)*pcVar9;
          if (bVar2 != *pcVar9) {
LAB_100ec840:
            uVar4 = -(uint)bVar12 | 1;
            goto LAB_100ec845;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar8[1];
          bVar12 = bVar2 < (byte)pcVar9[1];
          if (bVar2 != pcVar9[1]) goto LAB_100ec840;
          pbVar8 = pbVar8 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar2 != 0);
        uVar4 = 0;
LAB_100ec845:
        if (uVar4 == 0) goto LAB_100ec8f8;
      }
      piStack_e8 = in_ECX + 0x945;
      piStack_f8 = (int *)0x0;
      piVar5 = (int *)0x0;
      do {
        piVar11 = (int *)*piStack_e8;
        if (piVar11 == (int *)0x0) {
          piVar11 = piVar5;
          if (piVar5 != (int *)0x0) goto LAB_100ec8de;
        }
        else {
          do {
            pcVar9 = "weapon_action";
            pbVar8 = (byte *)(*(int *)piVar11[1] + (int)DAT_10223188[0x26]);
            do {
              bVar2 = *pbVar8;
              bVar12 = bVar2 < (byte)*pcVar9;
              if (bVar2 != *pcVar9) {
LAB_100ec8a6:
                uVar4 = -(uint)bVar12 | 1;
                goto LAB_100ec8ab;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar8[1];
              bVar12 = bVar2 < (byte)pcVar9[1];
              if (bVar2 != pcVar9[1]) goto LAB_100ec8a6;
              pbVar8 = pbVar8 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar2 != 0);
            uVar4 = 0;
LAB_100ec8ab:
            piVar5 = piVar11;
            if (uVar4 == 0) goto LAB_100ec8de;
            piVar11 = (int *)piVar11[0x59];
          } while (piVar11 != (int *)0x0);
        }
        piStack_f8 = (int *)((int)piStack_f8 + 1);
        piStack_e8 = piStack_e8 + 1;
        piVar5 = piVar11;
      } while ((int)piStack_f8 < 6);
      if (piVar11 != (int *)0x0) {
LAB_100ec8de:
        (**(code **)(*piVar5 + 0x144))();
        (**(code **)(*piVar5 + 0x150))();
        in_ECX[0x94b] = (int)piVar5;
      }
    }
LAB_100ec8f8:
    if (in_ECX[0x94b] != 0) {
      iVar6 = *(int *)(in_ECX[0x94b] + 4);
      pcVar9 = "weapon_action";
      pbVar8 = (byte *)(*(int *)(-(uint)(*(int *)(iVar6 + 0x20c) != 0) &
                                *(int *)(iVar6 + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
      do {
        bVar2 = *pbVar8;
        bVar12 = bVar2 < (byte)*pcVar9;
        if (bVar2 != *pcVar9) {
LAB_100ec950:
          uVar4 = -(uint)bVar12 | 1;
          goto LAB_100ec955;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar8[1];
        bVar12 = bVar2 < (byte)pcVar9[1];
        if (bVar2 != pcVar9[1]) goto LAB_100ec950;
        pbVar8 = pbVar8 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar2 != 0);
      uVar4 = 0;
LAB_100ec955:
      if ((uVar4 == 0) && (*(float *)(iVar6 + 0x168) != 1.0)) {
        *(undefined4 *)(iVar6 + 0x168) = 0x3f800000;
      }
    }
  }
  iVar6 = FUN_10017780();
  if (iVar6 != 0) {
    iVar6 = FUN_100177a0();
    iVar6 = *(int *)(*(int *)(iVar6 + 4) + 0x20c);
    if (((iVar6 != 0) || (iVar6 = (*DAT_1022305c)(0), iVar6 != 0)) && (*(int *)(iVar6 + 0x7c) != 0))
    {
      FUN_1000eda0(0);
    }
  }
  if ((in_ECX[0xee] != 0) && ((*(uint *)(in_ECX[1] + 0x1a8) & 0x1000) == 0)) {
    FUN_100deff0(0);
  }
  iVar6 = in_ECX[1];
  dVar15 = (double)(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                   *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24));
  if (dVar15 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar15 = SQRT(dVar15);
  }
  *(float *)(iVar6 + 0x278) = (float)dVar15;
  if (DAT_10226704 != 0) {
    if (DAT_10226704 == 1) {
      iVar6 = in_ECX[1];
      fStack_e4 = (*(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x178)) - DAT_10223188[0x10] * 6.0;
      fStack_e0 = (*(float *)(iVar6 + 0x17c) + *(float *)(iVar6 + 0xc)) - DAT_10223188[0x11] * 6.0;
      fStack_dc = (*(float *)(iVar6 + 0x180) + *(float *)(iVar6 + 0x10)) - DAT_10223188[0x12] * 6.0;
      fStack_d8 = fStack_e4 - 0.0;
      fStack_d4 = fStack_e0 - 0.0;
      fStack_d0 = fStack_dc - 100.0;
      FUN_1011a820(&fStack_e4,&fStack_d8,1,0,*(undefined4 *)(iVar6 + 0x20c),auStack_c8);
      if ((fStack_b8 != 1.0) && (iVar6 = FUN_10119780(&fStack_b4), iVar6 == -3)) {
        fStack_f4 = fStack_b4;
        fStack_f0 = fStack_b0;
        fStack_ec = fStack_ac;
        iVar6 = FUN_10119780(&fStack_f4);
        while (iVar6 == -3) {
          fStack_ec = fStack_ec + 1.0;
          iVar6 = FUN_10119780(&fStack_f4);
        }
LAB_100edad6:
        (*DAT_10223000)(2,DAT_10226644,0,0);
        (*DAT_1022301c)(fStack_f4);
        (*DAT_1022301c)(fStack_f0);
        (*DAT_1022301c)(fStack_ec);
        uVar18 = 10;
LAB_100edb20:
        (*DAT_10223010)(uVar18);
        (*DAT_10223004)();
      }
    }
    else if (DAT_10226704 == 2) {
      iVar6 = in_ECX[1];
      fStack_e4 = *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x178) + DAT_10223188[0x10] * 6.0;
      fStack_e0 = *(float *)(iVar6 + 0xc) + *(float *)(iVar6 + 0x17c) + DAT_10223188[0x11] * 6.0;
      fStack_dc = *(float *)(iVar6 + 0x10) + *(float *)(iVar6 + 0x180) + DAT_10223188[0x12] * 6.0;
      fStack_d8 = fStack_e4 - 0.0;
      fStack_d4 = fStack_e0 - 0.0;
      fStack_d0 = fStack_dc - 100.0;
      FUN_1011a820(&fStack_e4,&fStack_d8,1,0,*(undefined4 *)(iVar6 + 0x20c),auStack_c8);
      if ((fStack_b8 != 1.0) && (iVar6 = FUN_10119780(&fStack_b4), iVar6 == -3)) {
        fStack_f4 = fStack_b4;
        fStack_f0 = fStack_b0;
        fStack_ec = fStack_ac;
        iVar6 = FUN_10119780(&fStack_f4);
        while (iVar6 == -3) {
          fStack_ec = fStack_ec + 1.0;
          iVar6 = FUN_10119780(&fStack_f4);
        }
        goto LAB_100edad6;
      }
    }
    else if (DAT_10226704 == 3) {
      iVar6 = in_ECX[1];
      fStack_e4 = *(float *)(iVar6 + 0x178) + *(float *)(iVar6 + 8);
      fStack_e0 = *(float *)(iVar6 + 0x17c) + *(float *)(iVar6 + 0xc);
      fStack_dc = *(float *)(iVar6 + 0x180) + *(float *)(iVar6 + 0x10);
      fStack_d8 = fStack_e4 - 0.0;
      fStack_d4 = fStack_e0 - 0.0;
      fStack_d0 = fStack_dc - 100.0;
      FUN_1011a820(&fStack_e4,&fStack_d8,1,0,*(undefined4 *)(iVar6 + 0x20c),auStack_c8);
      if ((fStack_b8 != 1.0) && (iVar6 = FUN_10119780(&fStack_b4), iVar6 == -3)) {
        fStack_f4 = fStack_b4;
        fStack_f0 = fStack_b0;
        fStack_ec = fStack_ac;
        iVar6 = FUN_10119780(&fStack_f4);
        while (iVar6 == -3) {
          fStack_ec = fStack_ec + 1.0;
          iVar6 = FUN_10119780(&fStack_f4);
        }
        (*DAT_10223000)(2,DAT_10226644,0,0);
        (*DAT_1022301c)(fStack_f4);
        (*DAT_1022301c)(fStack_f0);
        (*DAT_1022301c)(fStack_ec);
        uVar18 = 0x28;
        goto LAB_100edb20;
      }
    }
    DAT_10226704 = 0;
  }
  if (in_ECX[0x174] != in_ECX[0x175]) {
    in_ECX[0x175] = in_ECX[0x174];
    if ((DAT_10222ee4 != (int *)0x0) && (iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar6 != 0))
    {
      *(float *)(in_ECX[1] + 0x168) = (float)in_ECX[0x174];
      (*DAT_10223000)(2,DAT_102264f0,0,0);
      uVar18 = (*DAT_10223064)(*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(uVar18);
      (*DAT_10223010)((int)*(float *)(in_ECX[1] + 0x168));
      (*DAT_10223010)(in_ECX[0x994]);
      (*DAT_10223010)(0);
      iVar6 = (**(code **)(*DAT_10222ee4 + 0xd4))(in_ECX + 0x99a);
      (*DAT_10223010)(iVar6 + 1);
      (*DAT_10223004)();
    }
    (*DAT_10223000)(1,DAT_10226638,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223010)(in_ECX[0x174]);
    (*DAT_10223004)();
  }
  iVar6 = in_ECX[0x183];
  if (0 < iVar6) {
    if (iVar6 == 1) {
      if (*(float *)(in_ECX[1] + 0x164) <= 80.0) goto LAB_100edc81;
      *(undefined4 *)(in_ECX[1] + 0x164) = 0x42a00000;
      iVar6 = in_ECX[0x183];
    }
    if ((iVar6 == 2) && (66.0 < *(float *)(in_ECX[1] + 0x164))) {
      *(undefined4 *)(in_ECX[1] + 0x164) = 0x42840000;
    }
  }
LAB_100edc81:
  if ((((char)in_ECX[0x7c7] != '\0') && (in_ECX[0x7c5] == 0)) &&
     ((float)in_ECX[0x7c8] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x7c8])) {
    if (in_ECX[0x94b] == 0) {
LAB_100edd3a:
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"weapons/mobile/low_battery_warn.wav",
                   0x3e800000,0,0,100);
      uVar18 = 0x3e800000;
    }
    else {
      pcVar9 = "weapon_mobile";
      iVar6 = *(int *)(*(int *)(in_ECX[0x94b] + 4) + 0x20c);
      pbVar8 = (byte *)(*(int *)(-(uint)(iVar6 != 0) & iVar6 + 0x80U) + (int)DAT_10223188[0x26]);
      do {
        bVar2 = *pbVar8;
        bVar12 = bVar2 < (byte)*pcVar9;
        if (bVar2 != *pcVar9) {
LAB_100edd02:
          uVar4 = -(uint)bVar12 | 1;
          goto LAB_100edd07;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar8[1];
        bVar12 = bVar2 < (byte)pcVar9[1];
        if (bVar2 != pcVar9[1]) goto LAB_100edd02;
        pbVar8 = pbVar8 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar2 != 0);
      uVar4 = 0;
LAB_100edd07:
      if (uVar4 != 0) goto LAB_100edd3a;
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"weapons/mobile/low_battery_warn.wav",
                   0x3f800000,0,0,100);
      uVar18 = 0x3f800000;
    }
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"phone/phone_vibrate.wav",uVar18,0,0,100);
    in_ECX[0x7c8] = (int)(*DAT_10223188 + 10.0);
  }
  iVar6 = FUN_10017780();
  if (iVar6 != 0) {
    iVar6 = FUN_100177a0();
    pcVar9 = "camera";
    iVar6 = *(int *)(*(int *)(iVar6 + 4) + 0x20c);
    pbVar8 = (byte *)(*(int *)(-(uint)(iVar6 != 0) & iVar6 + 0x80U) + (int)DAT_10223188[0x26]);
    do {
      bVar2 = *pbVar8;
      bVar12 = bVar2 < (byte)*pcVar9;
      if (bVar2 != *pcVar9) {
LAB_100ede20:
        uVar4 = -(uint)bVar12 | 1;
        goto LAB_100ede25;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar8[1];
      bVar12 = bVar2 < (byte)pcVar9[1];
      if (bVar2 != pcVar9[1]) goto LAB_100ede20;
      pbVar8 = pbVar8 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar2 != 0);
    uVar4 = 0;
LAB_100ede25:
    if ((uVar4 == 0) && (iVar6 = FUN_100177a0(), *(int *)(*(int *)(iVar6 + 4) + 0x1d8) != 0)) {
      iVar6 = FUN_100177a0();
      FUN_10118590(0,(int)DAT_10223188[0x26] + *(int *)(*(int *)(iVar6 + 4) + 0x1d8));
    }
  }
  if (in_ECX[0x7c2] < 0xb) {
    if (in_ECX[0x7c2] < 0) {
      in_ECX[0x7c2] = 0;
    }
  }
  else {
    in_ECX[0x7c2] = 10;
  }
  iVar6 = in_ECX[1];
  uVar4 = -(uint)(*(int *)(iVar6 + 0x1a0) != 0) & *(int *)(iVar6 + 0x1a0) + 0x80U;
  if (((uVar4 != 0) && ((*(byte *)(uVar4 + 0x1a8) & 0x20) != 0)) &&
     ((*(uint *)(iVar6 + 0x1a8) & 0x200) != 0)) {
    fVar13 = (float10)(*DAT_1022302c)("cof_monsterpushstrength");
    iVar6 = in_ECX[1];
    piStack_f8 = (int *)(float)fVar13;
    fStack_ec = *(float *)(iVar6 + 0x28) - DAT_10223188[0xc] * (float)piStack_f8;
    *(ulonglong *)(iVar6 + 0x20) =
         CONCAT44(*(float *)(iVar6 + 0x24) - DAT_10223188[0xb] * (float)piStack_f8,
                  *(float *)(iVar6 + 0x20) - (float)piStack_f8 * DAT_10223188[10]);
    *(float *)(iVar6 + 0x28) = fStack_ec;
    iVar6 = in_ECX[1];
  }
  if (DAT_10226477 == '\0') {
    if (*(float *)(iVar6 + 0x150) != 255.0) {
      *(undefined4 *)(iVar6 + 0x150) = 0x437f0000;
    }
    cVar3 = FUN_100e4e00();
    if (cVar3 != '\0') {
      piVar5 = (int *)in_ECX[0x94b];
      if ((piVar5 != (int *)0x0) && ((char)piVar5[0x5e] != '\0')) {
        (**(code **)(*piVar5 + 0x130))();
      }
      DAT_10226477 = '\x01';
    }
  }
  else {
    if (*(float *)(iVar6 + 0x150) != 0.0) {
      *(undefined4 *)(iVar6 + 0x150) = 0;
    }
    cVar3 = FUN_100e4e00();
    if (cVar3 == '\0') {
      DAT_10226477 = '\0';
    }
  }
  if ((*(char *)((int)in_ECX + 0x1ef9) != '\0') &&
     ((float)in_ECX[0xc2] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xc2])) {
    piVar5 = (int *)in_ECX[0x94e];
    in_ECX[0x94d] = in_ECX[0x94b];
    in_ECX[0x94b] = (int)piVar5;
    if (piVar5 != (int *)0x0) {
      pcVar9 = "weapon_action";
      pbVar8 = (byte *)(*(int *)(-(uint)(*(int *)(piVar5[1] + 0x20c) != 0) &
                                *(int *)(piVar5[1] + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
      do {
        bVar2 = *pbVar8;
        bVar12 = bVar2 < (byte)*pcVar9;
        if (bVar2 != *pcVar9) {
LAB_100ee040:
          uVar4 = -(uint)bVar12 | 1;
          goto LAB_100ee045;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar8[1];
        bVar12 = bVar2 < (byte)pcVar9[1];
        if (bVar2 != pcVar9[1]) goto LAB_100ee040;
        pbVar8 = pbVar8 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar2 != 0);
      uVar4 = 0;
LAB_100ee045:
      if (uVar4 != 0) {
        (**(code **)(*piVar5 + 0x144))();
        (**(code **)(*(int *)in_ECX[0x94b] + 0x150))();
      }
    }
    *(undefined1 *)((int)in_ECX + 0x1ef9) = 0;
  }
  piStack_e8 = (int *)in_ECX[0x174];
  if (in_ECX[0x94b] == 0) {
    if (((uint)piStack_e8 & 1) != 0) {
      piVar5 = (int *)((uint)piStack_e8 & 0xfffffffe);
      in_ECX[0x174] = (int)piVar5;
      uVar4 = (uint)piStack_e8 & 2;
      piStack_e8 = piVar5;
      if ((uVar4 == 0) && (in_ECX[0x7c5] == 0)) {
        piStack_e8 = (int *)((uint)piVar5 | 2);
        in_ECX[0x174] = (int)piStack_e8;
      }
    }
    piVar5 = piStack_e8;
    if ((((uint)piStack_e8 & 2) != 0) &&
       ((iVar6 = FUN_100e2380("weapon_mobile"), iVar6 == 0 ||
        (piVar5 = piStack_e8, in_ECX[0x7c5] != 0)))) {
      piVar5 = (int *)((uint)piStack_e8 & 0xfffffffc);
      in_ECX[0x174] = (int)piVar5;
    }
    if (((uint)piVar5 & 4) != 0) {
      piVar5 = (int *)((uint)piVar5 & 0xfffffffb);
      in_ECX[0x174] = (int)piVar5;
    }
    if (((uint)piVar5 & 8) != 0) {
      piVar5 = (int *)((uint)piVar5 & 0xfffffff7);
      in_ECX[0x7aa] = 0;
      in_ECX[0x174] = (int)piVar5;
    }
    if (((uint)piVar5 & 0x10) != 0) {
      uVar4 = (uint)piVar5 & 0xffffffef;
LAB_100ee38d:
      in_ECX[0x174] = uVar4;
    }
  }
  else {
    if (((uint)piStack_e8 & 1) != 0) {
      if (in_ECX[0x7c5] == 0) {
        uVar18 = *(undefined4 *)(in_ECX[0x94b] + 4);
        iVar6 = FUN_1000aaf0(uVar18,"weapon_mobile");
        if (iVar6 == 0) {
          iVar6 = FUN_1000aaf0(uVar18,"weapon_dualweapon");
          if (iVar6 == 0) {
            piStack_e8 = (int *)((uint)piStack_e8 & 0xfffffffe | 2);
            goto LAB_100ee11e;
          }
          iVar6 = FUN_1002f180(uVar18);
          if ((*(int *)(iVar6 + 0x204) != 2) && (*(int *)(iVar6 + 0x200) != 2)) {
            uVar4 = in_ECX[0x174];
            in_ECX[0x174] = uVar4 & 0xfffffffe;
            if (in_ECX[0x7c5] == 0) {
              in_ECX[0x174] = uVar4 & 0xfffffffe | 2;
            }
          }
          piStack_e8 = (int *)in_ECX[0x174];
        }
      }
      else {
        piStack_e8 = (int *)((uint)piStack_e8 & 0xfffffffe);
LAB_100ee11e:
        in_ECX[0x174] = (int)piStack_e8;
      }
    }
    piStack_f8 = piStack_e8;
    if (((uint)piStack_e8 & 0x10) != 0) {
      fStack_cc = *(float *)(in_ECX[0x94b] + 4);
      iVar6 = FUN_1000aaf0(fStack_cc,"weapon_flare");
      piVar5 = piStack_e8;
      if (iVar6 == 0) {
        piStack_f8 = piStack_e8;
        iVar6 = FUN_1000aaf0(fStack_cc,"weapon_booklaser");
        if (iVar6 == 0) {
          piStack_f8 = (int *)((uint)piVar5 & 0xffffffef);
          in_ECX[0x174] = (int)piStack_f8;
        }
      }
    }
    if (((uint)piStack_f8 & 2) != 0) {
      if (in_ECX[0x7c5] == 0) {
        iVar6 = in_ECX[0x94b];
        iVar7 = FUN_1000aaf0(*(undefined4 *)(iVar6 + 4),"weapon_mobile");
        if (iVar7 != 0) {
          piStack_f8 = (int *)((uint)piStack_f8 & 0xfffffffd | 1);
          in_ECX[0x174] = (int)piStack_f8;
        }
        iVar7 = FUN_100e2380("weapon_mobile");
        if (iVar7 == 0) {
          in_ECX[0x174] = (uint)piStack_f8 & 0xfffffffc;
        }
        uVar18 = *(undefined4 *)(iVar6 + 4);
        iVar6 = FUN_1000aaf0(uVar18,"weapon_dualweapon");
        if (((iVar6 == 0) || (iVar6 = FUN_1002f180(uVar18), iVar6 == 0)) ||
           ((*(int *)(iVar6 + 0x204) != 2 && (*(int *)(iVar6 + 0x200) != 2)))) goto LAB_100ee23d;
        piStack_f8 = (int *)in_ECX[0x174];
        if (in_ECX[0x7c5] == 0) {
          piStack_f8 = (int *)((uint)piStack_f8 | 1);
        }
      }
      in_ECX[0x174] = (uint)piStack_f8 & 0xfffffffd;
    }
LAB_100ee23d:
    piStack_f8 = (int *)in_ECX[0x174];
    if (((uint)piStack_f8 & 4) != 0) {
      cVar3 = FUN_100e24a0();
      if (cVar3 == '\0') {
        piStack_f8 = (int *)(in_ECX[0x174] & 0xfffffffb);
        in_ECX[0x174] = (int)piStack_f8;
      }
      else {
        piVar5 = (int *)in_ECX[0x174];
        piStack_f8 = piVar5;
        iVar6 = FUN_1000aaf0(*(undefined4 *)(in_ECX[0x94b] + 4),"weapon_glock");
        if (iVar6 == 0) {
          piStack_f8 = (int *)((uint)piVar5 & 0xfffffffb);
          in_ECX[0x174] = (int)piStack_f8;
        }
      }
    }
    if (((uint)piStack_f8 & 8) != 0) {
      uVar18 = *(undefined4 *)(in_ECX[0x94b] + 4);
      iVar6 = FUN_1000aaf0(uVar18,"weapon_flashlight");
      if ((iVar6 == 0) && (iVar6 = FUN_1000aaf0(uVar18,"weapon_dualweapon"), iVar6 == 0)) {
        uVar4 = (uint)piStack_f8 & 0xfffffff7;
        in_ECX[0x7aa] = 0;
        goto LAB_100ee38d;
      }
    }
  }
  if ((((float)in_ECX[0x7b3] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x7b3]) &&
      ((char)in_ECX[0x7b4] != '\0')) && (iVar6 = (**(code **)(*in_ECX + 0xbc))(), iVar6 != 0)) {
    if ((char)in_ECX[0x143] == '\0') {
      (*DAT_10223000)(1,DAT_102265b4,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      *(undefined4 *)(in_ECX[1] + 0x260) = 0;
    }
    else {
      if ((DAT_10222ee4 != (int *)0x0) &&
         (iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar6 != 0)) {
        if ((char)in_ECX[0x140] == '\0') {
          FUN_100ea240("taller_getup",0);
          fVar16 = (float)in_ECX[0x13d];
          *(undefined1 *)(in_ECX + 0x140) = 1;
          in_ECX[0x13f] = (int)fVar16;
        }
        else {
          fVar16 = (float)in_ECX[0x13f];
        }
        if (fVar16 < *DAT_10223188) {
          (*DAT_10223000)(1,DAT_102265b4,0,*(undefined4 *)(in_ECX[1] + 0x20c));
          (*DAT_10223008)(0);
          (*DAT_10223004)();
          in_ECX[0x13e] = -1;
          in_ECX[0x142] = -1;
          if (*(float *)(in_ECX[1] + 0x260) == 2.0) {
            *(undefined1 *)((int)in_ECX + 0x1ef9) = 1;
          }
          *(undefined4 *)(in_ECX[1] + 0x260) = 0;
          *(undefined1 *)(in_ECX + 0x7b4) = 0;
          *(undefined1 *)(in_ECX + 0x143) = 0;
          FUN_100f2a50(1);
        }
        goto LAB_100ee5ed;
      }
      (*DAT_10223000)(1,DAT_102265b4,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      if (*(float *)(in_ECX[1] + 0x260) == 2.0) {
        *(undefined1 *)((int)in_ECX + 0x1ef9) = 1;
      }
      iVar6 = FUN_1000e9b0("taller_getup");
      if (iVar6 == -1) {
        iVar6 = 0;
      }
      iVar7 = in_ECX[1];
      if ((*(int *)(iVar7 + 300) != iVar6) || (in_ECX[0x3f] == 0)) {
        *(undefined4 *)(iVar7 + 0x134) = 0;
        iVar7 = in_ECX[1];
      }
      *(undefined4 *)(iVar7 + 0x130) = 0;
      uVar18 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),iVar6);
      fVar13 = (float10)FUN_1000f390(uVar18);
      iVar7 = in_ECX[1];
      in_ECX[0x13d] = (int)(float)(fVar13 + (float10)*DAT_10223188);
      if (*(int *)(iVar7 + 300) != iVar6) {
        *(int *)(iVar7 + 300) = iVar6;
        *(undefined4 *)(in_ECX[1] + 0x134) = 0;
        FUN_1000e9e0();
        iVar7 = in_ECX[1];
      }
      *(undefined4 *)(iVar7 + 0x260) = 0;
      *(undefined1 *)(in_ECX + 0x143) = 0;
    }
    *(undefined1 *)(in_ECX + 0x7b4) = 0;
  }
LAB_100ee5ed:
  iVar6 = in_ECX[0x7b1];
  iVar7 = FUN_100e4ed0();
  if (iVar7 == 0) {
    if (iVar6 != 0) {
      (*DAT_10223000)(1,DAT_102265b0,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(0);
      (*DAT_1022301c)(0);
      (*DAT_1022301c)(0);
      (*DAT_1022301c)(0);
      (*DAT_10223004)();
      *(uint *)(in_ECX[1] + 0x1a8) = *(uint *)(in_ECX[1] + 0x1a8) & 0xfffdffff;
      in_ECX[0x7b1] = 0;
    }
  }
  else if (iVar6 == 0) {
    (*DAT_10223000)(1,DAT_102265b0,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223008)(1);
    (*DAT_1022301c)(in_ECX[0x7b5]);
    (*DAT_1022301c)(in_ECX[0x7b6]);
    (*DAT_1022301c)(in_ECX[0x7b7]);
    (*DAT_10223004)();
    *(uint *)(in_ECX[1] + 0x1a8) = *(uint *)(in_ECX[1] + 0x1a8) | 0x20000;
    in_ECX[0x7b1] = 1;
  }
  if (in_ECX[0x80f] != in_ECX[0x80e]) {
    (*DAT_10223000)(1,DAT_102265a8,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223010)(in_ECX[0x80e]);
    (*DAT_10223004)();
    in_ECX[0x80f] = in_ECX[0x80e];
  }
  FUN_100f4d70();
  FUN_100db780();
  FUN_100e2560();
  iVar6 = in_ECX[1];
  if ((*(uint *)(iVar6 + 0x1a8) & 0x40000) == 0) {
    if (*(float *)(iVar6 + 0x27c) != 0.0) {
      *(undefined4 *)(iVar6 + 0x27c) = 0;
    }
  }
  else if (*(float *)(iVar6 + 0x27c) != 1.0) {
    *(undefined4 *)(iVar6 + 0x27c) = 0x3f800000;
  }
  if ((char)in_ECX[0x89e] != '\0') {
    fVar16 = *DAT_10223188;
    if ((float)in_ECX[0x110] <= fVar16 && fVar16 != (float)in_ECX[0x110]) {
      in_ECX[0x110] = (int)(fVar16 + 11.0);
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"player/morphine_dream.wav",0x3f266666,
                   0x3f4ccccd,0,100);
      if ((char)in_ECX[0x89e] == '\0') goto LAB_100ee823;
    }
    if ((float)in_ECX[0x89f] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x89f]) {
      FUN_100f5c90();
    }
  }
LAB_100ee823:
  if (in_ECX[0x7ac] != in_ECX[0x7ad]) {
    (*DAT_10223000)(1,DAT_10226570,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223008)(in_ECX[0x7ad]);
    (*DAT_10223004)();
    in_ECX[0x7ac] = in_ECX[0x7ad];
  }
  cVar3 = FUN_100def20(in_ECX[0xe2],in_ECX[0xe3],in_ECX[0x170],in_ECX[0x171]);
  if (cVar3 != '\0') {
    iVar6 = FUN_10017780();
    if (iVar6 == 0) {
      (*DAT_10223000)();
      (*DAT_10223010)(0xffffffff);
      (*DAT_10223008)(0);
    }
    else {
      (*DAT_10223000)(1,DAT_1022664c,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      iVar6 = FUN_100177a0();
      uVar18 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c));
      (*DAT_10223010)(uVar18);
      (*DAT_10223008)(0);
    }
    (*DAT_10223004)();
    in_ECX[0x170] = in_ECX[0xe2];
    in_ECX[0x171] = in_ECX[0xe3];
  }
  cVar3 = FUN_100def20(in_ECX[0xe0],in_ECX[0xe1],in_ECX[0x16e],in_ECX[0x16f]);
  if (cVar3 != '\0') {
    iVar6 = FUN_10017780();
    if (iVar6 == 0) {
      (*DAT_10223000)();
      (*DAT_10223010)(0xffffffff);
    }
    else {
      (*DAT_10223000)(1,DAT_10226640,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      iVar6 = FUN_100177a0();
      uVar18 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c));
      (*DAT_10223010)(uVar18);
    }
    (*DAT_10223004)();
    in_ECX[0x16e] = in_ECX[0xe0];
    in_ECX[0x16f] = in_ECX[0xe1];
  }
  if (in_ECX[0x7a3] != in_ECX[0x7a4]) {
    in_ECX[0x7a3] = in_ECX[0x7a4];
    fVar13 = (float10)(*DAT_1022302c)("cof_subtitlelanguage");
    fStack_cc = (float)fVar13;
    switch((int)fVar13) {
    default:
      builtin_strncpy(acStack_90 + 8,"/hints.t",8);
      uStack_80._0_1_ = 'x';
      uStack_80._1_1_ = 't';
      uStack_80._2_1_ = '\0';
      break;
    case 2:
      builtin_strncpy(acStack_90 + 8,"/languag",8);
      uStack_70._0_1_ = 'x';
      uStack_70._1_1_ = 't';
      uStack_70._2_1_ = '\0';
      uStack_80._0_1_ = 'e';
      uStack_80._1_1_ = 's';
      uStack_80._2_1_ = '/';
      uStack_80._3_1_ = 'd';
      builtin_strncpy(acStack_7c,"utch/hints.t",0xc);
      break;
    case 3:
      uStack_70._0_1_ = 't';
      uStack_70._1_1_ = 'x';
      uStack_70._2_1_ = 't';
      uStack_70._3_1_ = '\0';
      builtin_strncpy(acStack_90 + 8,"/languag",8);
      uStack_80._0_1_ = 'e';
      uStack_80._1_1_ = 's';
      uStack_80._2_1_ = '/';
      uStack_80._3_1_ = 'f';
      builtin_strncpy(acStack_7c,"rench/hints.",0xc);
      break;
    case 4:
      uStack_70._0_1_ = 't';
      uStack_70._1_1_ = 'x';
      uStack_70._2_1_ = 't';
      uStack_70._3_1_ = '\0';
      builtin_strncpy(acStack_90 + 8,"/languag",8);
      uStack_80._0_1_ = 'e';
      uStack_80._1_1_ = 's';
      uStack_80._2_1_ = '/';
      uStack_80._3_1_ = 'g';
      builtin_strncpy(acStack_7c,"erman/hints.",0xc);
      break;
    case 5:
      uStack_70._0_1_ = 't';
      uStack_70._1_1_ = 's';
      uStack_70._2_1_ = '.';
      uStack_70._3_1_ = 't';
      builtin_strncpy(acStack_90 + 8,"/languag",8);
      uStack_6c = 0x7478;
      uStack_6a = 0;
      uStack_80._0_1_ = 'e';
      uStack_80._1_1_ = 's';
      uStack_80._2_1_ = '/';
      uStack_80._3_1_ = 'n';
      builtin_strncpy(acStack_7c,"orwegian/hin",0xc);
      break;
    case 6:
      uStack_70._0_1_ = '.';
      uStack_70._1_1_ = 't';
      uStack_70._2_1_ = 'x';
      uStack_70._3_1_ = 't';
      builtin_strncpy(acStack_90 + 8,"/languag",8);
      uStack_6c = (ushort)uStack_6c._1_1_ << 8;
      uStack_80._0_1_ = 'e';
      uStack_80._1_1_ = 's';
      uStack_80._2_1_ = '/';
      uStack_80._3_1_ = 's';
      builtin_strncpy(acStack_7c,"panish/hints",0xc);
      break;
    case 7:
      uStack_70._0_1_ = '.';
      uStack_70._1_1_ = 't';
      uStack_70._2_1_ = 'x';
      uStack_70._3_1_ = 't';
      builtin_strncpy(acStack_90 + 8,"/languag",8);
      uStack_6c = (ushort)uStack_6c._1_1_ << 8;
      uStack_80._0_1_ = 'e';
      uStack_80._1_1_ = 's';
      uStack_80._2_1_ = '/';
      uStack_80._3_1_ = 's';
      builtin_strncpy(acStack_7c,"wedish/hints",0xc);
    }
    builtin_strncpy(acStack_90,"txtfiles",8);
    if (in_ECX[0x108] != 0) {
      pcVar9 = (char *)((int)DAT_10223188[0x26] + in_ECX[0x108]);
      pcVar10 = acStack_90;
      do {
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        *pcVar10 = cVar3;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
    }
    in_ECX[0x108] = 0;
    (*DAT_10223000)(1,DAT_1022669c,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223020)((int)DAT_10223188[0x26] + in_ECX[0x7a4]);
    (*DAT_10223020)(acStack_90);
    bVar12 = DAT_10222e54 != '\0';
    if (bVar12) {
      DAT_10222e54 = '\0';
    }
    (*DAT_10223008)(bVar12);
    (*DAT_10223004)();
  }
  if (in_ECX[0x7ae] != in_ECX[0x7af]) {
    (*DAT_10223000)(1,DAT_10226574,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223008)(in_ECX[0x7af]);
    (*DAT_10223004)();
    in_ECX[0x7ae] = in_ECX[0x7af];
  }
  if (in_ECX[0x7ab] != in_ECX[0x7aa]) {
    (*DAT_10223000)(1,DAT_1022656c,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223008)(in_ECX[0x7aa]);
    (*DAT_10223004)();
    in_ECX[0x7ab] = in_ECX[0x7aa];
  }
  iVar6 = FUN_10017780();
  if (iVar6 != 0) {
    piVar5 = (int *)FUN_100177a0();
    iVar6 = (**(code **)(*piVar5 + 0xb4))(in_ECX[1]);
    if ((iVar6 == 0) || (*(int *)(in_ECX[1] + 0xc0) != 0)) {
      piVar5 = (int *)FUN_100177a0();
      (**(code **)(*piVar5 + 0xe8))();
      FUN_10017740(0);
    }
  }
  if ((int *)in_ECX[0x8c3] != (int *)0x0) {
    iVar6 = (**(code **)(*(int *)in_ECX[0x8c3] + 0xb4))(in_ECX[1]);
    if ((iVar6 == 0) || (*(int *)(in_ECX[1] + 0xc0) != 0)) {
      (**(code **)(*(int *)in_ECX[0x8c3] + 0xe8))();
      in_ECX[0x8c3] = 0;
    }
    else {
      (**(code **)(*(int *)in_ECX[0x8c3] + 0xe8))();
    }
  }
  FUN_100e4f80();
  cVar3 = FUN_10038dc0(in_ECX);
  if (cVar3 != '\0') {
    FUN_10038fc0(in_ECX);
  }
  iVar6 = in_ECX[1];
  if (((((*(uint *)(iVar6 + 0x1a8) & 0x200) != 0) && (0.0 < *(float *)(iVar6 + 0x164))) &&
      (175.0 < (float)in_ECX[0x8b1])) && ((float)in_ECX[0x8b1] < 350.0)) {
    *(uint *)(iVar6 + 0x1a8) = *(uint *)(iVar6 + 0x1a8) | 0x200;
    iVar6 = in_ECX[1];
    if ((*(int *)(iVar6 + 0x1c8) == -3) &&
       ((*(int *)(iVar6 + 0x1a0) == 0 || (*(float *)(*(int *)(iVar6 + 0x1a0) + 0xa8) == 0.0)))) {
      FUN_1011a2f0();
      iVar6 = in_ECX[1];
    }
  }
  if ((((*(uint *)(iVar6 + 0x1a8) & 0x200) != 0) && (0.0 < *(float *)(iVar6 + 0x164))) &&
     (350.0 <= (float)in_ECX[0x8b1])) {
    if (*(int *)(iVar6 + 0x1c8) == -3) {
      if ((*(int *)(iVar6 + 0x1a0) == 0) || (*(float *)(*(int *)(iVar6 + 0x1a0) + 0xa8) == 0.0)) {
        FUN_1011a2f0();
      }
    }
    else if (580.0 < (float)in_ECX[0x8b1]) {
      fVar13 = (float10)(**(code **)(*DAT_10222ee4 + 0x44))();
      piStack_f8 = (int *)(float)fVar13;
      pfVar1 = (float *)(in_ECX[1] + 0x164);
      if (*pfVar1 <= (float)piStack_f8 && (float)piStack_f8 != *pfVar1) {
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),3,"common/bodysplat.wav",0x3f800000,
                     0x3f4ccccd,0,100);
      }
      if (0.0 < (float)piStack_f8) {
        FUN_100f6aa0();
        iVar6 = *in_ECX;
        uVar18 = FUN_100f9010(0,piStack_f8,0x20);
        uVar18 = FUN_100f9010(0,uVar18);
        (**(code **)(iVar6 + 100))(uVar18);
        *(undefined4 *)(in_ECX[1] + 0x68) = 0;
      }
    }
    iVar6 = (**(code **)(*in_ECX + 0xbc))();
    if (iVar6 != 0) {
      FUN_100f2a50(1);
    }
  }
  if ((*(uint *)(in_ECX[1] + 0x1a8) & 0x200) != 0) {
    if (((64.0 < (float)in_ECX[0x8b1]) && (DAT_10222ee4 != (int *)0x0)) &&
       (iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar6 == 0)) {
      FUN_10100820(4,in_ECX[1] + 8,(int)(float)in_ECX[0x8b1],0x3e4ccccd);
    }
    in_ECX[0x8b1] = 0;
  }
  iVar6 = (**(code **)(*in_ECX + 0xbc))();
  if (iVar6 != 0) {
    iVar6 = in_ECX[1];
    if ((*(float *)(iVar6 + 0x20) == 0.0) && (*(float *)(iVar6 + 0x24) == 0.0)) {
      uVar18 = 0;
    }
    else {
      if (((*(uint *)(iVar6 + 0x1a8) & 0x200) == 0) && (*(int *)(iVar6 + 0x1c4) < 2))
      goto LAB_100eefef;
      uVar18 = 1;
    }
    FUN_100f2a50(uVar18);
  }
LAB_100eefef:
  fVar13 = (float10)FUN_1000eda0(0);
  fStack_cc = (float)fVar13;
  FUN_1000e5f0(fStack_cc);
  if (in_ECX[0x16b] != 0) {
    fVar13 = (float10)FUN_1000eda0(0);
    fStack_cc = (float)fVar13;
    FUN_1000e5f0(fStack_cc);
  }
  FUN_100dcaf0(in_ECX[1]);
  FUN_100f86e0();
  in_ECX[0x8ab] = *(int *)(in_ECX[1] + 0x184);
LAB_100ef068:
  if (in_ECX[0x80f] != in_ECX[0x80e]) {
    (*DAT_10223000)(1,DAT_102265a8,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223010)(in_ECX[0x80e]);
    (*DAT_10223004)();
    in_ECX[0x80f] = in_ECX[0x80e];
  }
  if (in_ECX[0x8c5] != 0) {
    if (in_ECX[0x8c4] == 0) {
      (*DAT_10223000)();
      (*DAT_10223008)(0);
      (*DAT_10223008)(0);
      (*DAT_1022301c)(in_ECX[0x8c6]);
      (*DAT_10223020)("nothing");
      (*DAT_10223004)();
      in_ECX[0x8c6] = 0;
    }
    else {
      (*DAT_10223000)(1,DAT_10226544,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)((char)in_ECX[0x8c7] != '\0');
      (*DAT_10223008)(1);
      (*DAT_1022301c)(in_ECX[0x8c8]);
      (*DAT_10223020)((int)DAT_10223188[0x26] + in_ECX[0x8c4]);
      (*DAT_10223004)();
    }
    in_ECX[0x8c5] = 0;
  }
  __security_check_cookie(local_c ^ (uint)&piStack_f8);
  return;
}

