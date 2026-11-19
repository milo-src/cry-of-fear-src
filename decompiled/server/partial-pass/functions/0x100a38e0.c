// rea decompile_all
// name: FUN_100a38e0
// address: 0x100a38e0
// body: available
// range: 0x100a38e0-0x100a3aca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a38e0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  
  if (DAT_10223190 != 0) {
    if (*(int *)(in_ECX + 0xdc) != 0) {
      *(int *)(DAT_10223190 + 0xe0) = *(int *)(in_ECX + 0xdc);
    }
    if (*(int *)(in_ECX + 0xe0) != 0) {
      *(int *)(DAT_10223190 + 0xe4) = *(int *)(in_ECX + 0xe0);
    }
    if (*(int *)(in_ECX + 0xe4) != 0) {
      *(int *)(DAT_10223190 + 0xe8) = *(int *)(in_ECX + 0xe4);
    }
    if (*(int *)(in_ECX + 0xe8) != 0) {
      *(int *)(DAT_10223190 + 0xec) = *(int *)(in_ECX + 0xe8);
    }
    if (*(int *)(in_ECX + 0xec) != 0) {
      *(int *)(DAT_10223190 + 0xf0) = *(int *)(in_ECX + 0xec);
    }
    if (*(int *)(in_ECX + 0xf0) != 0) {
      *(int *)(DAT_10223190 + 0xf4) = *(int *)(in_ECX + 0xf0);
    }
    if (*(int *)(in_ECX + 0xf4) != 0) {
      *(int *)(DAT_10223190 + 0xf8) = *(int *)(in_ECX + 0xf4);
    }
    iVar4 = 1;
    if (0 < *(int *)(DAT_10223188 + 0x90)) {
      do {
        iVar1 = FUN_10119680(iVar4);
        if (iVar1 != 0) {
          if (*(int *)(in_ECX + 0xec) != 0) {
            (*DAT_10223000)(1,DAT_102266e8,0,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c));
            (*DAT_10223020)(*(int *)(DAT_10223190 + 0xf0) + *(int *)(DAT_10223188 + 0x98));
            (*DAT_10223004)();
          }
          if (*(int *)(in_ECX + 0xf0) != 0) {
            (*DAT_10223000)(1,DAT_102266ec,0,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c));
            (*DAT_10223020)(*(int *)(DAT_10223190 + 0xf4) + *(int *)(DAT_10223188 + 0x98));
            (*DAT_10223004)();
          }
          if (*(int *)(in_ECX + 0xf4) != 0) {
            (*DAT_10223000)(1,DAT_102266f0,0,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c));
            (*DAT_10223020)(*(int *)(DAT_10223190 + 0xf8) + *(int *)(DAT_10223188 + 0x98));
            (*DAT_10223004)();
          }
          if ((DAT_10222ee4 != (int *)0x0) &&
             (iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar2 != 0)) {
            uVar3 = (*DAT_102230f0)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c));
            (**(code **)(*DAT_10222ee4 + 0x6c))(iVar1,uVar3);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)(DAT_10223188 + 0x90));
    }
  }
  return;
}

