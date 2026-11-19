// rea decompile_all
// name: FUN_100b4810
// address: 0x100b4810
// body: available
// range: 0x100b4810-0x100b49ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b4810(void)

{
  float fVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  FUN_1000eda0(0);
  (**(code **)(*in_ECX + 8))(0x3e4ccccd);
  iVar2 = in_ECX[1];
  fVar1 = *(float *)(iVar2 + 0x1e8);
  if (fVar1 != 0.0) {
    if (fVar1 < *DAT_10223188) {
      FUN_10119900();
      return;
    }
    fVar3 = (float10)(*DAT_102230b4)(0,fVar1 - (float)in_ECX[0xda]);
    local_8 = (float)fVar3;
    if (*(float *)(iVar2 + 0x1e8) - *DAT_10223188 < local_8) {
      return;
    }
  }
  fVar3 = (float10)(*DAT_102230b4)(*(undefined4 *)(iVar2 + 0xc4),*(undefined4 *)(iVar2 + 0xd0));
  local_14 = (float)fVar3;
  fVar3 = (float10)(*DAT_102230b4)(*(undefined4 *)(in_ECX[1] + 200),
                                   *(undefined4 *)(in_ECX[1] + 0xd4));
  local_10 = (float)fVar3;
  fVar3 = (float10)(*DAT_102230b4)(*(undefined4 *)(in_ECX[1] + 0xcc),
                                   *(undefined4 *)(in_ECX[1] + 0xd8));
  local_c = (float)fVar3;
  (*DAT_10223000)(4,0x17,&local_14,0);
  (*DAT_10223008)(5);
  (*DAT_1022301c)(local_14);
  (*DAT_1022301c)(local_10);
  (*DAT_1022301c)(local_c);
  (*DAT_10223010)((int)DAT_10231f14);
  iVar2 = (*DAT_102230b0)(0,0x31);
  (*DAT_10223008)(iVar2 + 0x32);
  iVar2 = (*DAT_102230b0)(0,3);
  (*DAT_10223008)(iVar2 + 8);
  (*DAT_10223004)();
  return;
}

