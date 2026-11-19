// rea decompile_all
// name: FUN_10005880
// address: 0x10005880
// body: available
// range: 0x10005880-0x10005e8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005880(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  undefined1 local_168 [104];
  float local_100;
  int iStack_fc;
  float fStack_f8;
  int iStack_f4;
  float local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  float local_c0;
  int iStack_bc;
  float fStack_b8;
  int iStack_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float *local_9c;
  float local_98;
  float local_94;
  int local_90;
  float *local_8c;
  uint local_88;
  int local_84;
  float local_80;
  int iStack_7c;
  float local_78;
  undefined1 local_74 [48];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float local_24;
  undefined8 local_20;
  float local_18;
  uint local_14;
  
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffff0;
  local_a4 = *(float *)(DAT_10220c50 + 0x5c);
  pfVar12 = (float *)(DAT_10220c50 + 0x60);
  local_88 = 0;
  pfVar10 = (float *)(DAT_10220c50 + 0x5c);
  local_94 = *(float *)(DAT_10220c50 + 0x10);
  pfVar13 = (float *)0x0;
  local_a0 = *pfVar12;
  local_20 = *(undefined8 *)(DAT_10220c50 + 0x5c);
  pfVar14 = (float *)(DAT_10220c50 + 100);
  local_a8 = *pfVar14;
  local_98 = 0.0;
  local_90 = 0;
  local_18 = local_a8;
  while( true ) {
    if (((*pfVar10 == 0.0) && (*pfVar12 == 0.0)) && (*pfVar14 == 0.0)) goto LAB_10005de5;
    local_44 = *pfVar10 * local_94 + *(float *)(DAT_10220c50 + 0x38);
    local_40 = *pfVar12 * local_94 + *(float *)(DAT_10220c50 + 0x3c);
    local_3c = *pfVar14 * local_94 + *(float *)(DAT_10220c50 + 0x40);
    piVar9 = (int *)(**(code **)(DAT_10220c50 + 0x4f584))
                              (local_168,(float *)(DAT_10220c50 + 0x38),&local_44,0,0xffffffff);
    local_d0 = (float)piVar9[4];
    iStack_cc = piVar9[5];
    iStack_c8 = piVar9[6];
    iStack_c4 = piVar9[7];
    iVar1 = piVar9[0x10];
    iVar2 = piVar9[1];
    iVar3 = piVar9[2];
    iVar4 = piVar9[3];
    local_100 = (float)piVar9[8];
    iStack_fc = piVar9[9];
    fStack_f8 = (float)piVar9[10];
    iStack_f4 = piVar9[0xb];
    iVar5 = piVar9[0xc];
    iVar6 = piVar9[0xd];
    iVar7 = piVar9[0xe];
    iVar8 = piVar9[0xf];
    local_98 = local_d0 + local_98;
    local_c0 = local_100;
    iStack_bc = iStack_fc;
    fStack_b8 = fStack_f8;
    iStack_b4 = iStack_f4;
    if (*piVar9 != 0) {
      *(undefined4 *)(DAT_10220c50 + 0x5c) = DAT_10220c40;
      *(undefined4 *)(DAT_10220c50 + 0x60) = DAT_10220c44;
      *(undefined4 *)(DAT_10220c50 + 100) = DAT_10220c48;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
      return;
    }
    pfVar12 = pfVar13;
    if (0.0 < local_d0) {
      *(int *)(DAT_10220c50 + 0x38) = iStack_cc;
      *(int *)(DAT_10220c50 + 0x3c) = iStack_c8;
      *(int *)(DAT_10220c50 + 0x40) = iStack_c4;
      local_20 = *(undefined8 *)(DAT_10220c50 + 0x5c);
      local_18 = *(float *)(DAT_10220c50 + 100);
      pfVar12 = (float *)0x0;
    }
    if (local_d0 == 1.0) goto LAB_10005de5;
    FUN_10003840(0,iVar2,iVar3,iVar4,local_d0,iStack_cc,iStack_c8,iStack_c4,local_100,iStack_fc,
                 fStack_f8,iStack_f4,iVar5,iVar6,iVar7,iVar8,iVar1,DAT_10220c50 + 0x5c);
    iVar1 = DAT_10220c50;
    if (0.7 < fStack_b8) {
      local_88 = local_88 | 1;
    }
    if (fStack_b8 == 0.0) {
      local_88 = local_88 | 2;
    }
    local_94 = local_94 - local_d0 * local_94;
    if (4 < (int)pfVar12) break;
    pfVar13 = (float *)((int)pfVar12 + 1);
    (&local_80)[(int)pfVar12 * 3] = local_100;
    (&iStack_7c)[(int)pfVar12 * 3] = iStack_fc;
    (&local_78)[(int)pfVar12 * 3] = fStack_b8;
    local_84 = DAT_10220c50;
    local_9c = pfVar13;
    if ((*(int *)(DAT_10220c50 + 0xdc) == 3) &&
       ((*(int *)(DAT_10220c50 + 0xe0) == -1 || (*(float *)(DAT_10220c50 + 0xc4) != 1.0)))) {
      if (0 < (int)pfVar13) {
        pfVar12 = &local_80;
        local_8c = pfVar13;
        do {
          if (pfVar12[2] <= 0.7) {
            FUN_10004eb0(&local_20,pfVar12,&local_2c,
                         (1.0 - *(float *)(iVar1 + 0xc4)) *
                         *(float *)(*(int *)(iVar1 + 0x4f4f4) + 0x2c) + 1.0);
          }
          else {
            FUN_10004eb0(&local_20,pfVar12,&local_2c,0x3f800000);
            local_20 = CONCAT44(fStack_28,local_2c);
            local_18 = local_24;
          }
          pfVar12 = pfVar12 + 3;
          local_8c = (float *)((int)local_8c + -1);
        } while (local_8c != (float *)0x0);
        local_8c = (float *)0x0;
      }
      pfVar10 = (float *)(local_84 + 0x5c);
      local_18 = local_24;
      *pfVar10 = local_2c;
      pfVar12 = (float *)(DAT_10220c50 + 0x60);
      *pfVar12 = fStack_28;
      pfVar14 = (float *)(DAT_10220c50 + 100);
      *pfVar14 = local_24;
      local_20 = CONCAT44(fStack_28,local_2c);
      pfVar13 = local_9c;
      local_9c = pfVar10;
    }
    else {
      pfVar12 = (float *)0x0;
      if (0 < (int)pfVar13) {
        local_8c = &local_80;
        pfVar10 = (float *)(DAT_10220c50 + 0x5c);
        do {
          local_84 = DAT_10220c50;
          FUN_10004eb0(&local_20,local_8c,pfVar10,0x3f800000);
          local_84 = DAT_10220c50;
          pfVar11 = (float *)0x0;
          pfVar10 = (float *)(DAT_10220c50 + 0x5c);
          pfVar14 = &local_80;
          do {
            if ((pfVar11 != pfVar12) &&
               (pfVar14[1] * *(float *)(DAT_10220c50 + 0x60) + *pfVar14 * *pfVar10 +
                pfVar14[2] * *(float *)(DAT_10220c50 + 100) < 0.0)) break;
            pfVar11 = (float *)((int)pfVar11 + 1);
            pfVar14 = pfVar14 + 3;
          } while ((int)pfVar11 < (int)pfVar13);
          if (pfVar11 == pfVar13) goto LAB_10005d31;
          pfVar12 = (float *)((int)pfVar12 + 1);
          local_8c = local_8c + 3;
        } while ((int)pfVar12 < (int)pfVar13);
      }
      local_84 = DAT_10220c50;
      if (pfVar12 == pfVar13) {
        if (pfVar13 != (float *)0x2) {
          *(undefined4 *)(DAT_10220c50 + 0x5c) = DAT_10220c40;
          goto LAB_10005dbb;
        }
        FUN_10002e30(&local_80,local_74,&local_38);
        FUN_10003490(&local_38,
                     *(float *)(DAT_10220c50 + 0x60) * local_34 +
                     local_38 * *(float *)(DAT_10220c50 + 0x5c) +
                     *(float *)(DAT_10220c50 + 100) * local_30,(float *)(DAT_10220c50 + 0x5c));
      }
LAB_10005d31:
      pfVar12 = (float *)(DAT_10220c50 + 0x60);
      pfVar10 = (float *)(DAT_10220c50 + 0x5c);
      pfVar14 = (float *)(DAT_10220c50 + 100);
      if (*pfVar12 * local_a0 + local_a4 * *(float *)(DAT_10220c50 + 0x5c) + *pfVar14 * local_a8 <=
          0.0) {
        *(undefined4 *)(DAT_10220c50 + 0x5c) = DAT_10220c40;
        goto LAB_10005dbb;
      }
    }
    local_90 = local_90 + 1;
    if (3 < local_90) {
LAB_10005de5:
      if (local_98 == 0.0) {
        *(undefined4 *)(DAT_10220c50 + 0x5c) = DAT_10220c40;
        *(undefined4 *)(DAT_10220c50 + 0x60) = DAT_10220c44;
        *(undefined4 *)(DAT_10220c50 + 100) = DAT_10220c48;
      }
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
      return;
    }
  }
  *(undefined4 *)(DAT_10220c50 + 0x5c) = DAT_10220c40;
LAB_10005dbb:
  *(undefined4 *)(DAT_10220c50 + 0x60) = DAT_10220c44;
  *(undefined4 *)(DAT_10220c50 + 100) = DAT_10220c48;
  goto LAB_10005de5;
}

