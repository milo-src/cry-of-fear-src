// rea decompile_all
// name: FUN_10005ea0
// address: 0x10005ea0
// body: available
// range: 0x10005ea0-0x100060eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005ea0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_e8 [8];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_78 [76];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar6 = DAT_10220c50;
  local_14 = DAT_1021baf4 ^ (uint)auStack_e8;
  if (*(float *)(DAT_10220c50 + 0xcc) == 0.0) {
    local_e0 = *(float *)(DAT_10220c50 + 0x5c);
    pfVar1 = (float *)(DAT_10220c50 + 0x5c);
    local_dc = *(float *)(DAT_10220c50 + 0x60);
    local_d4 = *(float *)(DAT_10220c50 + 100);
    dVar7 = (double)(local_e0 * local_e0 + local_dc * local_dc + local_d4 * local_d4);
    if (dVar7 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    local_d8 = (float)dVar7;
    if (0.1 <= local_d8) {
      fVar10 = 0.0;
      fVar8 = local_e0;
      fVar11 = local_dc;
      fVar12 = local_d4;
      if (*(int *)(iVar6 + 0xe0) != -1) {
        local_2c = (local_e0 / local_d8) * 16.0 + *(float *)(iVar6 + 0x38);
        local_28 = (local_dc / local_d8) * 16.0 + *(float *)(iVar6 + 0x3c);
        local_18 = *(float *)(iVar6 + (*(int *)(iVar6 + 0xbc) + 0x69c0) * 0xc) +
                   *(float *)(iVar6 + 0x40);
        local_24 = local_18 - 34.0;
        local_20 = local_2c;
        local_1c = local_28;
        puVar5 = (undefined4 *)
                 (**(code **)(iVar6 + 0x4f584))(local_78,&local_20,&local_2c,0,0xffffffff);
        uStack_d0 = *puVar5;
        uStack_cc = puVar5[1];
        uStack_c8 = puVar5[2];
        uStack_c4 = puVar5[3];
        uStack_b0 = puVar5[8];
        uStack_ac = puVar5[9];
        uStack_a8 = puVar5[10];
        uStack_a4 = puVar5[0xb];
        uStack_a0 = puVar5[0xc];
        uStack_9c = puVar5[0xd];
        uStack_98 = puVar5[0xe];
        uStack_94 = puVar5[0xf];
        iVar4 = *(int *)(DAT_10220c50 + 0x4f4f4);
        if ((float)puVar5[4] == 1.0) {
          fVar8 = *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x1c);
        }
        else {
          fVar8 = *(float *)(iVar4 + 0x1c);
        }
        fVar11 = *(float *)(iVar4 + 4);
        if (*(float *)(iVar4 + 4) <= local_d8) {
          fVar11 = local_d8;
        }
        pfVar2 = (float *)(iVar6 + 0x60);
        pfVar3 = (float *)(iVar6 + 100);
        fVar10 = fVar11 * *(float *)(DAT_10220c50 + 0xc4) * fVar8 * *(float *)(DAT_10220c50 + 0x10)
                 + 0.0;
        iVar6 = DAT_10220c50;
        fVar8 = *pfVar1;
        fVar11 = *pfVar2;
        fVar12 = *pfVar3;
      }
      fVar9 = 0.0;
      if (0.0 <= local_d8 - fVar10) {
        fVar9 = local_d8 - fVar10;
      }
      fVar9 = fVar9 / local_d8;
      *(float *)(iVar6 + 0x5c) = fVar8 * fVar9;
      *(float *)(DAT_10220c50 + 0x60) = fVar11 * fVar9;
      *(float *)(DAT_10220c50 + 100) = fVar12 * fVar9;
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_e8);
  return;
}

