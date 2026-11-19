// rea decompile_all
// name: FUN_100bb160
// address: 0x100bb160
// body: available
// range: 0x100bb160-0x100bb222 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100bb160(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  int in_ECX;
  float fVar2;
  
  iVar1 = FUN_100ba460(param_1);
  if (iVar1 == 0) {
    return;
  }
  switch(param_3) {
  case 0:
    iVar1 = *(int *)(in_ECX + 4);
    fVar2 = *(float *)(iVar1 + 0x168) - 1.0;
    break;
  case 1:
  case 3:
    iVar1 = *(int *)(in_ECX + 4);
    fVar2 = *(float *)(iVar1 + 0x168) + 1.0;
    break;
  case 2:
    iVar1 = *(int *)(in_ECX + 4);
    fVar2 = (float)(int)param_4;
    break;
  default:
    goto switchD_100bb17e_default;
  }
  *(float *)(iVar1 + 0x168) = fVar2;
switchD_100bb17e_default:
  if ((int)*(float *)(*(int *)(in_ECX + 4) + 0x168) == (int)*(float *)(*(int *)(in_ECX + 4) + 0x164)
     ) {
    FUN_10102a80(param_1,3,0);
    iVar1 = *(int *)(in_ECX + 4);
    if ((*(byte *)(iVar1 + 0x1a4) & 1) != 0) {
      FUN_10119900();
      iVar1 = *(int *)(in_ECX + 4);
    }
    if ((*(byte *)(iVar1 + 0x1a4) & 2) != 0) {
      *(undefined4 *)(iVar1 + 0x168) = *(undefined4 *)(iVar1 + 0x1e4);
    }
  }
  return;
}

