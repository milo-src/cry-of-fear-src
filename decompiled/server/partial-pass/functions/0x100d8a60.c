// rea decompile_all
// name: FUN_100d8a60
// address: 0x100d8a60
// body: available
// range: 0x100d8a60-0x100d8d71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d8a60(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_20;
  float local_18;
  
  iVar5 = *(int *)(in_ECX + 4);
  fVar13 = *(float *)(iVar5 + 0x20);
  fVar7 = *(float *)(iVar5 + 0x24);
  fVar12 = *(float *)(iVar5 + 0x28);
  if (*(code **)(in_ECX + 0x78) == CBaseToggle::LinearMoveNow) {
    if (*(int *)(in_ECX + 0x14) == 0) {
      uVar4 = *(undefined8 *)(in_ECX + 0x158);
      fVar12 = *(float *)(in_ECX + 0x160);
      local_20._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
      local_20._0_4_ = (float)uVar4;
      fVar13 = (float)local_20;
      fVar7 = local_20._4_4_;
      local_20 = uVar4;
      local_18 = fVar12;
    }
    else {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x14) + 4);
      fVar12 = *(float *)(iVar6 + 0x10) + *(float *)(in_ECX + 0x160);
      fVar13 = *(float *)(iVar6 + 8) + *(float *)(in_ECX + 0x158);
      fVar7 = *(float *)(iVar6 + 0xc) + *(float *)(in_ECX + 0x15c);
    }
    fVar7 = fVar7 - *(float *)(iVar5 + 0xc);
    fVar13 = fVar13 - *(float *)(iVar5 + 8);
    fVar12 = fVar12 - *(float *)(iVar5 + 0x10);
    dVar11 = (double)(fVar7 * fVar7 + fVar13 * fVar13 + fVar12 * fVar12);
    if (dVar11 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar11 = SQRT(dVar11);
    }
    fVar14 = (float)dVar11 / *(float *)(in_ECX + 0x164);
    fVar7 = fVar7 / fVar14;
    fVar12 = fVar12 / fVar14;
    fVar13 = fVar13 / fVar14;
  }
  else {
    fVar14 = *(float *)(iVar5 + 0x104) - *(float *)(iVar5 + 0x100);
  }
  iVar5 = *(int *)(*(int *)(in_ECX + 0x1a8) + 4);
  *(float *)(iVar5 + 0x20) = fVar13;
  *(float *)(iVar5 + 0x24) = fVar7;
  *(float *)(iVar5 + 0x28) = fVar12;
  iVar5 = *(int *)(in_ECX + 4);
  iVar6 = *(int *)(*(int *)(in_ECX + 0x1a8) + 4);
  *(undefined8 *)(iVar6 + 0x5c) = *(undefined8 *)(iVar5 + 0x5c);
  *(undefined4 *)(iVar6 + 100) = *(undefined4 *)(iVar5 + 100);
  FUN_100d6810(*(float *)(*(int *)(*(int *)(in_ECX + 0x1a8) + 4) + 0x100) + fVar14,0);
  if (0.0 < fVar14) {
    iVar5 = *(int *)(in_ECX + 4);
    iVar6 = *(int *)(*(int *)(in_ECX + 0x1a8) + 4);
    fVar8 = *(float *)(iVar6 + 8) - *(float *)(iVar5 + 8);
    fVar9 = *(float *)(iVar6 + 0xc) - *(float *)(iVar5 + 0xc);
    fVar10 = *(float *)(iVar6 + 0x10) - *(float *)(iVar5 + 0x10);
    local_18 = param_1[2] - *(float *)(iVar5 + 0x58);
    local_20 = CONCAT44(param_1[1] - *(float *)(iVar5 + 0x54),*param_1 - *(float *)(iVar5 + 0x50));
    FUN_101192a0(&local_20,DAT_10223188);
    fVar14 = 1.0 / fVar14;
    fVar1 = *(float *)(DAT_10223188 + 0x38);
    fVar2 = *(float *)(DAT_10223188 + 0x34);
    fVar3 = *(float *)(DAT_10223188 + 0x3c);
    iVar5 = *(int *)(*(int *)(in_ECX + 0x1a8) + 4);
    *(ulonglong *)(iVar5 + 0x20) =
         CONCAT44(((*(float *)(DAT_10223188 + 0x44) * fVar9 +
                    *(float *)(DAT_10223188 + 0x40) * fVar8 +
                   *(float *)(DAT_10223188 + 0x48) * fVar10) - fVar9) * fVar14 + fVar7,
                  ((*(float *)(DAT_10223188 + 0x2c) * fVar9 +
                    fVar8 * *(float *)(DAT_10223188 + 0x28) +
                   *(float *)(DAT_10223188 + 0x30) * fVar10) - fVar8) * fVar14 + fVar13);
    *(float *)(iVar5 + 0x28) =
         ((fVar1 * fVar9 + fVar2 * fVar8 + fVar3 * fVar10) - fVar10) * fVar14 + fVar12;
  }
  return;
}

