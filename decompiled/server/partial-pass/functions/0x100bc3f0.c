// rea decompile_all
// name: FUN_100bc3f0
// address: 0x100bc3f0
// body: available
// range: 0x100bc3f0-0x100bc78c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100bc3f0(void)

{
  int iVar1;
  int in_ECX;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [20];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  iVar1 = *(int *)(in_ECX + 4);
  fVar7 = *(float *)(iVar1 + 0xf4) * 0.5;
  fVar8 = *(float *)(iVar1 + 0xf8) * 0.5;
  local_58 = *(float *)(iVar1 + 8) + fVar7;
  local_54 = *(float *)(iVar1 + 0xc) + fVar8;
  local_4c = local_58 - 0.0;
  local_48 = local_54 - 0.0;
  local_50 = *(float *)(iVar1 + 0x10);
  local_44 = local_50 - 100.0;
  FUN_1011a800(&local_58,&local_4c,1,*(undefined4 *)(iVar1 + 0x20c),local_40);
  fVar2 = local_58 - fStack_2c;
  iVar1 = *(int *)(in_ECX + 4);
  local_58 = *(float *)(iVar1 + 8) - fVar7;
  fVar3 = local_54 - fStack_28;
  local_4c = local_58 - 0.0;
  fVar4 = local_50 - fStack_24;
  local_44 = local_50 - 100.0;
  local_54 = *(float *)(iVar1 + 0xc) - fVar8;
  local_48 = local_54 - 0.0;
  FUN_1011a800(&local_58,&local_4c,1,*(undefined4 *)(iVar1 + 0x20c),local_40);
  dVar5 = (double)((local_54 - fStack_28) * (local_54 - fStack_28) +
                   (local_58 - fStack_2c) * (local_58 - fStack_2c) +
                  (local_50 - fStack_24) * (local_50 - fStack_24));
  if (dVar5 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  dVar6 = (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  if (dVar6 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  if ((float)dVar5 <= (float)dVar6) {
    iVar1 = *(int *)(in_ECX + 4);
    local_58 = *(float *)(iVar1 + 8) - fVar7;
    local_4c = local_58 - 0.0;
    local_54 = *(float *)(iVar1 + 0xc) + fVar8;
    local_48 = local_54 - 0.0;
    local_44 = local_50 - 100.0;
    FUN_1011a800(&local_58,&local_4c,1,*(undefined4 *)(iVar1 + 0x20c),local_40);
    dVar6 = (double)((local_54 - fStack_28) * (local_54 - fStack_28) +
                     (local_58 - fStack_2c) * (local_58 - fStack_2c) +
                    (local_50 - fStack_24) * (local_50 - fStack_24));
    if (dVar6 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    if ((float)dVar6 <= (float)dVar5) {
      iVar1 = *(int *)(in_ECX + 4);
      local_58 = *(float *)(iVar1 + 8) + fVar7;
      local_4c = local_58 - 0.0;
      local_54 = *(float *)(iVar1 + 0xc) - fVar8;
      local_48 = local_54 - 0.0;
      local_44 = local_50 - 100.0;
      FUN_1011a800(&local_58,&local_4c,1,*(undefined4 *)(iVar1 + 0x20c),local_40);
      dVar5 = (double)((local_54 - fStack_28) * (local_54 - fStack_28) +
                       (local_58 - fStack_2c) * (local_58 - fStack_2c) +
                      (local_50 - fStack_24) * (local_50 - fStack_24));
      if (dVar5 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar5 = SQRT(dVar5);
      }
      if ((float)dVar5 <= (float)dVar6) {
        return 1;
      }
    }
  }
  return 0;
}

