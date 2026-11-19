// rea decompile_all
// name: FUN_100b23a0
// address: 0x100b23a0
// body: available
// range: 0x100b23a0-0x100b2527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100b23a0(int param_1,int param_2,undefined8 *param_3,float param_4)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  undefined1 local_54 [16];
  float local_44;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float fStack_c;
  float local_8;
  
  if (*(int *)(param_1 + 0x1c4) == 3) {
    bVar2 = *(int *)(param_2 + 0x1c4) == 0;
  }
  else {
    bVar2 = *(int *)(param_2 + 0x1c4) == 3;
  }
  if (!bVar2) {
    iVar1 = 0;
    local_1c = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 8);
    local_18 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0xc);
    local_14 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x10);
    do {
      local_10 = *(float *)(param_2 + 8);
      fStack_c = *(float *)(param_2 + 0xc);
      local_8 = *(float *)(param_2 + 0x10);
      fVar3 = (float10)(*DAT_102230b4)(*(float *)(param_2 + 0xdc) + param_4,
                                       *(float *)(param_2 + 0xe8) - param_4);
      local_10 = (float)(fVar3 + (float10)local_10);
      fVar3 = (float10)(*DAT_102230b4)(*(float *)(param_2 + 0xe0) + param_4,
                                       *(float *)(param_2 + 0xec) - param_4);
      fStack_c = (float)(fVar3 + (float10)fStack_c);
      fVar3 = (float10)(*DAT_102230b4)(*(float *)(param_2 + 0xe4) + param_4,
                                       *(float *)(param_2 + 0xf0) - param_4);
      local_8 = (float)(fVar3 + (float10)local_8);
      FUN_1011a820(&local_1c,&local_10,1,1,*(undefined4 *)(param_1 + 0x20c),local_54);
      if (local_44 == 1.0) {
        *param_3 = CONCAT44(fStack_c,local_10);
        *(float *)(param_3 + 1) = local_8;
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
  }
  return 0;
}

