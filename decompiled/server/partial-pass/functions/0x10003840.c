// rea decompile_all
// name: FUN_10003840
// address: 0x10003840
// body: available
// range: 0x10003840-0x10003956 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 int param_13)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_stack_00000044;
  int *in_stack_00000048;
  
  uVar6 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar7 = 0;
  iVar4 = *(int *)(DAT_10220c50 + 0x45490);
  if (0 < iVar4) {
    piVar8 = (int *)(DAT_10220c50 + 0x454c4);
    do {
      if (*piVar8 == param_13) goto LAB_100038a1;
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 0x11;
    } while (iVar7 < iVar4);
  }
  if (iVar7 == iVar4) {
    iVar7 = *in_stack_00000048;
    iVar2 = in_stack_00000048[1];
    iVar3 = in_stack_00000048[2];
    if (599 < iVar4) {
      (**(code **)(DAT_10220c50 + 0x4f568))("Too many entities were touched!\n");
    }
    iVar5 = DAT_10220c50;
    iVar4 = *(int *)(DAT_10220c50 + 0x45490);
    puVar1 = (undefined4 *)(DAT_10220c50 + 0x45494 + iVar4 * 0x44);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    puVar1 = (undefined4 *)(iVar5 + 0x454a4 + iVar4 * 0x44);
    *puVar1 = param_5;
    puVar1[1] = param_6;
    puVar1[2] = param_7;
    puVar1[3] = param_8;
    puVar1 = (undefined4 *)(iVar5 + 0x454b4 + iVar4 * 0x44);
    *puVar1 = param_9;
    puVar1[1] = param_10;
    puVar1[2] = param_11;
    puVar1[3] = param_12;
    piVar8 = (int *)(iVar5 + 0x454c4 + iVar4 * 0x44);
    *piVar8 = param_13;
    piVar8[1] = iVar7;
    piVar8[2] = iVar2;
    piVar8[3] = iVar3;
    *(undefined4 *)(iVar5 + 0x454d4 + iVar4 * 0x44) = in_stack_00000044;
    *(int *)(DAT_10220c50 + 0x45490) = *(int *)(DAT_10220c50 + 0x45490) + 1;
    __security_check_cookie(uVar6 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_100038a1:
  __security_check_cookie(uVar6 ^ (uint)&stack0xfffffffc);
  return;
}

