// rea decompile_all
// name: FUN_100fd680
// address: 0x100fd680
// body: available
// range: 0x100fd680-0x100fd7e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fd680(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0x1d8));
  if (*(int *)(in_ECX[1] + 0x1d8) != 0) {
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((1 < (uint)((int)pcVar3 - (int)(pcVar4 + 1))) && (*pcVar4 != '!')) {
      FUN_10116a30(pcVar4);
    }
  }
  FUN_100fccc0();
  if (((*(byte *)(in_ECX[1] + 0x1a4) & 0x10) == 0) && (in_ECX[0x52] != 0)) {
    in_ECX[0x51] = 1;
  }
  iVar2 = *(int *)(in_ECX[1] + 0x1cc);
  if (iVar2 != 0) {
    iVar2 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + iVar2);
    if (iVar2 == 0) {
      (*DAT_1022303c)(1,
                      "WARNING: ambient_generic \"%s\" can\'t find \"%s\", its entity to play from.\n"
                      ,*(int *)(in_ECX[1] + 0x1d0) + *(int *)(DAT_10223188 + 0x98),
                      *(int *)(in_ECX[1] + 0x1cc) + *(int *)(DAT_10223188 + 0x98));
    }
    else {
      in_ECX[0x53] = *(int *)(*(int *)(iVar2 + 4) + 0x20c);
    }
  }
  if (in_ECX[0x51] != 0) {
    if ((in_ECX[0x53] == 0) && (iVar2 = in_ECX[1], (*(byte *)(iVar2 + 0x1a4) & 0x40) == 0)) {
      FUN_101182b0(*(undefined4 *)(iVar2 + 0x20c),iVar2 + 8,pcVar4,(float)in_ECX[0x4b] * 0.01,
                   in_ECX[0x37],0x100,in_ECX[0x47]);
      (**(code **)(*in_ECX + 8))(0x3dcccccd);
      return;
    }
    in_ECX[0x1e] = (int)CAmbientGeneric::StartPlayFrom;
    (**(code **)(*in_ECX + 8))(0x3dcccccd);
  }
  return;
}

