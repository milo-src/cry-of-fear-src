// rea decompile_all
// name: FUN_10102c50
// address: 0x10102c50
// body: available
// range: 0x10102c50-0x10102dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10102c50(void)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_10223190 == 0) {
    (*DAT_1022303c)(1,"UpdateOnRemove has no AssistList!\n");
    return;
  }
  piVar1 = (int *)(DAT_10223190 + 0x3c);
  iVar2 = *(int *)(DAT_10223190 + 0x3c);
  while (iVar2 != 0) {
    if (in_ECX == iVar2) {
      *piVar1 = *(int *)(in_ECX + 0x3c);
      *(undefined4 *)(in_ECX + 0x3c) = 0;
      break;
    }
    piVar1 = (int *)(iVar2 + 0x3c);
    iVar2 = *piVar1;
  }
  iVar2 = *(int *)(in_ECX + 0x14);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x1c) == in_ECX) {
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(in_ECX + 0x20);
    }
    else {
      piVar1 = (int *)(*(int *)(iVar2 + 0x1c) + 0x20);
      iVar2 = *piVar1;
      while (iVar2 != 0) {
        if (iVar2 == in_ECX) {
          *piVar1 = *(int *)(in_ECX + 0x20);
          break;
        }
        piVar1 = (int *)(iVar2 + 0x20);
        iVar2 = *piVar1;
      }
    }
  }
  iVar2 = *(int *)(in_ECX + 0x1c);
  iVar4 = DAT_102238cc;
  while (DAT_102238cc = iVar4, iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 0x20);
    FUN_100c4db0(iVar2,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c,100);
    FUN_100c4c90(iVar2,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c,100);
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    iVar2 = iVar4;
    iVar4 = DAT_102238cc;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (((*(uint *)(iVar2 + 0x1a8) & 0x10000) != 0) && (iVar3 = 0, 0 < iVar4)) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + 8 + DAT_102238c0) == *(int *)(in_ECX + 4)) {
        *(undefined4 *)(iVar2 + 8 + DAT_102238c0) = 0;
        iVar4 = DAT_102238cc;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar3 < iVar4);
    iVar2 = *(int *)(in_ECX + 4);
  }
  if (*(int *)(iVar2 + 4) != 0) {
    FUN_10120710(*(int *)(iVar2 + 4),2);
  }
  return;
}

