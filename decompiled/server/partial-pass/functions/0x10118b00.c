// rea decompile_all
// name: FUN_10118b00
// address: 0x10118b00
// body: available
// range: 0x10118b00-0x10118bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10118b00(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int local_84;
  int iStack_80;
  int local_74;
  int iStack_70;
  
  fVar1 = *(float *)(DAT_10223188 + 0x50);
  uVar6 = *(undefined4 *)(DAT_10223188 + 0x74);
  iVar7 = *(int *)(DAT_10223188 + 0x60);
  iVar8 = *(int *)(DAT_10223188 + 0x6c);
  fVar2 = *(float *)(DAT_10223188 + 0x7c);
  uVar9 = *(undefined4 *)(DAT_10223188 + 0x80);
  fVar3 = *(float *)(DAT_10223188 + 0x78);
  iVar4 = *(int *)(DAT_10223188 + 0x54);
  iVar5 = *(int *)(DAT_10223188 + 0x70);
  local_84 = (int)*(undefined8 *)(DAT_10223188 + 0x58);
  iStack_80 = (int)((ulonglong)*(undefined8 *)(DAT_10223188 + 0x58) >> 0x20);
  local_74 = (int)*(undefined8 *)(DAT_10223188 + 100);
  iStack_70 = (int)((ulonglong)*(undefined8 *)(DAT_10223188 + 100) >> 0x20);
  *param_1 = (int)*(float *)(DAT_10223188 + 0x4c);
  param_1[1] = (int)fVar1;
  param_1[2] = (int)fVar3;
  param_1[3] = (int)fVar2;
  param_1[4] = iVar4;
  param_1[5] = local_84;
  param_1[6] = iStack_80;
  param_1[7] = iVar7;
  param_1[8] = iVar5;
  param_1[9] = local_74;
  param_1[10] = iStack_70;
  param_1[0xb] = iVar8;
  *(ulonglong *)(param_1 + 0xc) = CONCAT44(uVar9,uVar6);
  return;
}

