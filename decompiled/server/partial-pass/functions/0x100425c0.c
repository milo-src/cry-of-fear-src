// rea decompile_all
// name: FUN_100425c0
// address: 0x100425c0
// body: available
// range: 0x100425c0-0x1004269b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100425c0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float fVar3;
  
  iVar1 = in_ECX[1];
  if (*(int *)(iVar1 + 0x250) == 0) {
    iVar2 = *(int *)(iVar1 + 0x254);
    if (iVar2 == 0) {
      fVar3 = *(float *)(iVar1 + 0x50);
    }
    else if (iVar2 == 1) {
      fVar3 = *(float *)(iVar1 + 0x54);
    }
    else {
      if (iVar2 != 2) {
        return;
      }
      fVar3 = *(float *)(iVar1 + 0x58);
    }
    if ((float)*(int *)(iVar1 + 0x248) <= fVar3) {
      FUN_10101ff0(*(int *)(iVar1 + 0x1cc) + *(int *)(DAT_10223188 + 0x98));
      (**(code **)(*in_ECX + 8))(0);
      *(undefined4 *)(in_ECX[1] + 0x250) = 1;
      FUN_1001e990(*(undefined4 *)(in_ECX[1] + 0x20c),6,"buttons/valve_turn.wav");
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),3,"buttons/valve_end.wav",0x3f800000,
                   0x3f4ccccd,0,100);
    }
  }
  return;
}

