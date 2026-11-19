// rea decompile_all
// name: FUN_10077e40
// address: 0x10077e40
// body: available
// range: 0x10077e40-0x10077f00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10077e40(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  char *pcVar4;
  undefined1 local_10 [12];
  
  FUN_1000eb40(0,1);
  iVar1 = (*DAT_102230b0)(0xfffffffb,5);
  iVar2 = (*DAT_102230b0)(0,1);
  pcVar4 = "baby/b_attack1.wav";
  if (iVar2 != 1) {
    pcVar4 = "baby/b_attack2.wav";
  }
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),3,pcVar4,0x3f800000,0x3f4ccccd,0,
               iVar1 + 100);
  for (piVar3 = (int *)FUN_101186b0(0,local_10,0x42800000); piVar3 != (int *)0x0;
      piVar3 = (int *)FUN_101186b0(piVar3,local_10,0x42800000)) {
    (**(code **)(*piVar3 + 100))
              (*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 4),DAT_102267ac,0);
  }
  return;
}

