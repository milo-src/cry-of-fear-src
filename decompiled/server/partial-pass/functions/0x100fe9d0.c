// rea decompile_all
// name: FUN_100fe9d0
// address: 0x100fe9d0
// body: available
// range: 0x100fe9d0-0x100fea9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fe9d0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  char *pcVar4;
  
  if (in_ECX[0x37] == 0) {
    iVar3 = in_ECX[1];
    if (*(int *)(iVar3 + 0x1d8) != 0) {
      pcVar4 = (char *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar3 + 0x1d8));
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      if (pcVar4 != pcVar1) goto LAB_100fea62;
    }
    (*DAT_1022303c)(4,"SPEAKER with no Level/Sentence! at: %f, %f, %f\n",
                    (double)*(float *)(iVar3 + 8),(double)*(float *)(iVar3 + 0xc),
                    (double)*(float *)(iVar3 + 0x10));
    (**(code **)(*in_ECX + 8))();
    in_ECX[0x1e] = (int)CBaseEntity::SUB_Remove;
    return;
  }
LAB_100fea62:
  *(undefined4 *)(in_ECX[1] + 0x10c) = 0;
  *(undefined4 *)(in_ECX[1] + 0x108) = 0;
  in_ECX[0x1e] = (int)CSpeaker::SpeakerThink;
  FUN_10017ad0();
  in_ECX[0x20] = (int)CSpeaker::ToggleUse;
                    /* WARNING: Could not recover jumptable at 0x100fea9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x30))();
  return;
}

