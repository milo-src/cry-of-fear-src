// rea decompile_all
// name: FUN_100f58e0
// address: 0x100f58e0
// body: available
// range: 0x100f58e0-0x100f5a71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f58e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 uStack_60;
  int iStack_5c;
  char *pcStack_58;
  undefined1 local_48 [20];
  float local_34;
  float local_30;
  float local_2c;
  float local_10;
  float local_c;
  float local_8;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (((*(float *)(iVar1 + 0x178) != (float)DAT_10222f34) ||
      (*(float *)(iVar1 + 0x17c) != DAT_10222f34._4_4_)) ||
     (*(float *)(iVar1 + 0x180) != DAT_10222f3c)) {
    pcStack_58 = "info_intermission";
    iStack_5c = 0;
    uStack_60 = 0x100f593d;
    iVar1 = FUN_10118460();
    if (iVar1 != 0) {
      pcStack_58 = (char *)0x3;
      iStack_5c = 0;
      uStack_60 = 0x100f5950;
      for (iVar2 = (*DAT_102230b0)(); 0 < iVar2; iVar2 = iVar2 + -1) {
        pcStack_58 = "info_intermission";
        uStack_60 = 0x100f596b;
        iStack_5c = iVar1;
        iVar3 = FUN_10118590();
        if (iVar3 != 0) {
          iVar1 = iVar3;
        }
      }
      iVar2 = *(int *)(iVar1 + 4);
      uStack_60 = *(undefined4 *)(iVar2 + 0x74);
      iStack_5c = *(undefined4 *)(iVar2 + 0x78);
      pcStack_58 = *(char **)(iVar2 + 0x7c);
      iVar1 = *(int *)(iVar1 + 4);
      FUN_100f5a80(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                   *(undefined4 *)(iVar1 + 0x10));
      return;
    }
    iVar1 = *(int *)(in_ECX + 4);
    pcStack_58 = local_48;
    iStack_5c = *(undefined4 *)(iVar1 + 0x20c);
    uStack_60 = 1;
    local_10 = *(float *)(iVar1 + 8) + 0.0;
    local_c = *(float *)(iVar1 + 0xc) + 0.0;
    local_8 = *(float *)(iVar1 + 0x10) + 128.0;
    FUN_1011a800((float *)(iVar1 + 8),&local_10);
    iVar1 = *(int *)(in_ECX + 4);
    local_10 = local_34 - *(float *)(iVar1 + 8);
    local_c = local_30 - *(float *)(iVar1 + 0xc);
    local_8 = local_2c - *(float *)(iVar1 + 0x10);
    FUN_1011a8d0(&uStack_60,&local_10);
    FUN_100f5a80(local_34,local_30,local_2c);
  }
  return;
}

