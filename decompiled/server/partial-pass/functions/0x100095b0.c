// rea decompile_all
// name: FUN_100095b0
// address: 0x100095b0
// body: available
// range: 0x100095b0-0x10009799 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100095b0(void)

{
  int iVar1;
  undefined1 local_b8 [88];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffff0;
  local_20 = *(float *)(DAT_10220c50 + 0x38);
  local_1c = *(float *)(DAT_10220c50 + 0x3c);
  local_18 = *(float *)(DAT_10220c50 + 0x40);
  if (((*(int *)(DAT_10220c50 + 0xe0) != -1) && ((*(uint *)(DAT_10220c50 + 0xb8) & 0x4000) != 0)) &&
     (*(int *)(DAT_10220c50 + 0x90) == 0)) {
    local_20 = (*(float *)(DAT_10220c50 + 0x4f504) - *(float *)(DAT_10220c50 + 0x4f4f8)) + local_20;
    local_1c = (*(float *)(DAT_10220c50 + 0x4f508) - *(float *)(DAT_10220c50 + 0x4f4fc)) + local_1c;
    local_18 = (*(float *)(DAT_10220c50 + 0x4f50c) - *(float *)(DAT_10220c50 + 0x4f500)) + local_18;
  }
  iVar1 = (**(code **)(DAT_10220c50 + 0x4f584))(local_b8,&local_20,&local_20,0,0xffffffff);
  local_60 = *(undefined4 *)(iVar1 + 0x10);
  uStack_5c = *(undefined4 *)(iVar1 + 0x14);
  uStack_58 = *(undefined4 *)(iVar1 + 0x18);
  uStack_54 = *(undefined4 *)(iVar1 + 0x1c);
  local_50 = *(undefined4 *)(iVar1 + 0x20);
  uStack_4c = *(undefined4 *)(iVar1 + 0x24);
  uStack_48 = *(undefined4 *)(iVar1 + 0x28);
  uStack_44 = *(undefined4 *)(iVar1 + 0x2c);
  local_40 = *(undefined4 *)(iVar1 + 0x30);
  uStack_3c = *(undefined4 *)(iVar1 + 0x34);
  uStack_38 = *(undefined4 *)(iVar1 + 0x38);
  uStack_34 = *(undefined4 *)(iVar1 + 0x3c);
  if (*(int *)(iVar1 + 4) == 0) {
    *(undefined4 *)(DAT_10220c50 + 0xbc) = 0;
    iVar1 = (**(code **)(DAT_10220c50 + 0x4f584))(local_b8,&local_20,&local_20,0,0xffffffff);
    local_60 = *(undefined4 *)(iVar1 + 0x10);
    uStack_5c = *(undefined4 *)(iVar1 + 0x14);
    uStack_58 = *(undefined4 *)(iVar1 + 0x18);
    uStack_54 = *(undefined4 *)(iVar1 + 0x1c);
    local_50 = *(undefined4 *)(iVar1 + 0x20);
    uStack_4c = *(undefined4 *)(iVar1 + 0x24);
    uStack_48 = *(undefined4 *)(iVar1 + 0x28);
    uStack_44 = *(undefined4 *)(iVar1 + 0x2c);
    local_40 = *(undefined4 *)(iVar1 + 0x30);
    uStack_3c = *(undefined4 *)(iVar1 + 0x34);
    uStack_38 = *(undefined4 *)(iVar1 + 0x38);
    uStack_34 = *(undefined4 *)(iVar1 + 0x3c);
    if (*(int *)(iVar1 + 4) != 0) {
      *(undefined4 *)(DAT_10220c50 + 0xbc) = 1;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
      return;
    }
    *(uint *)(DAT_10220c50 + 0xb8) = *(uint *)(DAT_10220c50 + 0xb8) & 0xffffbfff;
    *(undefined4 *)(DAT_10220c50 + 0x90) = 0;
    *(undefined4 *)(DAT_10220c50 + 0x88) = 0x41e00000;
    *(undefined4 *)(DAT_10220c50 + 0x8c) = 0;
    *(float *)(DAT_10220c50 + 0x38) = local_20;
    *(float *)(DAT_10220c50 + 0x3c) = local_1c;
    *(float *)(DAT_10220c50 + 0x40) = local_18;
    FUN_10003c70();
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

