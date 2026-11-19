// rea decompile_all
// name: FUN_10015750
// address: 0x10015750
// body: available
// range: 0x10015750-0x10015954 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015750(void)

{
  int iVar1;
  int in_ECX;
  char *pcVar2;
  
  if (*(int *)(in_ECX + 0xdc) != 1) {
    if (*(int *)(in_ECX + 0xdc) != 3) {
      return;
    }
    iVar1 = *(int *)(in_ECX + 4);
    *(undefined4 *)(in_ECX + 0xdc) = 0;
    if ((*(byte *)(iVar1 + 0x1a4) & 2) != 0) {
      (*DAT_1022303c)(1,"DEBUG: env_state \"%s\" turned itself off",
                      *(int *)(iVar1 + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
      iVar1 = *(int *)(in_ECX + 4);
      if (*(int *)(iVar1 + 0x1cc) != 0) {
        (*DAT_1022303c)(1,": firing %s",*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 0x1cc));
        iVar1 = *(int *)(in_ECX + 4);
      }
      if (*(int *)(iVar1 + 500) != 0) {
        (*DAT_1022303c)(1," and %s",*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 500));
      }
      (*DAT_1022303c)(1,&DAT_101a53d8);
      iVar1 = *(int *)(in_ECX + 4);
    }
    FUN_10101ff0(*(int *)(iVar1 + 0x1cc) + *(int *)(DAT_10223188 + 0x98));
    iVar1 = *(int *)(*(int *)(in_ECX + 4) + 500);
    goto LAB_10015931;
  }
  *(undefined4 *)(in_ECX + 0xdc) = 2;
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0) {
    (*DAT_1022303c)(1,"DEBUG: env_state \"%s\" turned itself on",
                    *(int *)(*(int *)(in_ECX + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
    iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x1cc);
    if (iVar1 == 0) {
      iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x1f0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(DAT_10223188 + 0x98) + iVar1;
        pcVar2 = ": firing %s";
        goto LAB_10015808;
      }
    }
    else {
      (*DAT_1022303c)(1,": firing %s",*(int *)(DAT_10223188 + 0x98) + iVar1);
      iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x1f0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(DAT_10223188 + 0x98) + iVar1;
        pcVar2 = " and %s";
LAB_10015808:
        (*DAT_1022303c)(1,pcVar2,iVar1);
      }
    }
    (*DAT_1022303c)(1,&DAT_101a53d8);
  }
  FUN_10101ff0(*(int *)(*(int *)(in_ECX + 4) + 0x1cc) + *(int *)(DAT_10223188 + 0x98));
  iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x1f0);
LAB_10015931:
  FUN_10101ff0(iVar1 + *(int *)(DAT_10223188 + 0x98));
  return;
}

