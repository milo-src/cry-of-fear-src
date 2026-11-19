// rea decompile_all
// name: FUN_1008c390
// address: 0x1008c390
// body: available
// range: 0x1008c390-0x1008c4c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008c390(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 int param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  
  fVar1 = *(float *)(param_6 + 0x14);
  fVar2 = *(float *)(param_6 + 0x18);
  fVar3 = *(float *)(param_6 + 0x1c);
  if (*(float *)(in_ECX[1] + 0x170) != 0.0) {
    FUN_1011b640(param_1);
    iVar5 = (**(code **)(*in_ECX + 0x70))();
    if (iVar5 != -1) {
      iVar4 = in_ECX[1];
      FUN_1011f900(fVar1 - param_3 * 4.0,fVar2 - param_4 * 4.0,fVar3 - param_5 * 4.0,iVar5,param_2,
                   *(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24),
                   *(undefined4 *)(iVar4 + 0x28));
      (**(code **)(*in_ECX + 0x74))(param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return;
}

