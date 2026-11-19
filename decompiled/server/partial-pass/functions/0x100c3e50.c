// rea decompile_all
// name: FUN_100c3e50
// address: 0x100c3e50
// body: available
// range: 0x100c3e50-0x100c3f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100c3e50(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = param_1[0x18];
  if ((char)uVar1 < '\0') {
    uVar4 = uVar1 & 0xffffff7f;
    param_1[0x18] = uVar4;
    if ((uVar1 & 0x800) != 0) {
      param_1[0x18] = uVar1 & 0xfffff77f;
      (**(code **)*param_1)();
      uVar4 = param_1[0x18];
    }
    if ((uVar4 & 0x400) != 0) {
      iVar2 = param_1[1];
      param_1[0x18] = uVar4 & 0xfffffbff;
      iVar3 = *(int *)(param_1[7] + 4);
      (*DAT_1022303c)(1,
                      "DesiredInfo: pos %f %f %f, vel %f %f %f. Child pos %f %f %f, vel %f %f %f\n\n"
                      ,(double)*(float *)(iVar2 + 8),(double)*(float *)(iVar2 + 0xc),
                      (double)*(float *)(iVar2 + 0x10),(double)*(float *)(iVar2 + 0x20),
                      (double)*(float *)(iVar2 + 0x24),(double)*(float *)(iVar2 + 0x28),
                      (double)*(float *)(iVar3 + 8),(double)*(float *)(iVar3 + 0xc),
                      (double)*(float *)(iVar3 + 0x10),(double)*(float *)(iVar3 + 0x20),
                      (double)*(float *)(iVar3 + 0x24),(double)*(float *)(iVar3 + 0x28));
      uVar4 = param_1[0x18];
    }
    if ((uVar4 & 0x200) != 0) {
      param_1[0x18] = uVar4 & 0xfffffdff;
      FUN_100c41b0();
      uVar4 = param_1[0x18];
    }
    if ((uVar4 & 0x100) != 0) {
      param_1[0x18] = uVar4 & 0xfffffeff;
      (**(code **)(*param_1 + 0xe0))();
    }
    return 1;
  }
  return 0;
}

