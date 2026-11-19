// rea decompile_all
// name: FUN_100165a0
// address: 0x100165a0
// body: available
// range: 0x100165a0-0x1001673c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100165a0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = 0;
  if (0 < in_ECX[0x97]) {
    do {
      iVar3 = iVar3 + 1;
      iVar2 = FUN_10017790();
      if (iVar2 == param_2) break;
    } while (iVar3 < in_ECX[0x97]);
  }
  if (iVar3 <= in_ECX[0x97]) {
    iVar2 = (**(code **)(*in_ECX + 0x5c))();
    in_ECX[iVar3 + 0x76] = in_ECX[iVar3 + 0x76] ^ 1;
    iVar3 = (**(code **)(*in_ECX + 0x5c))();
    if (iVar2 != iVar3) {
      if (iVar2 == 2) {
        if (*(int *)(in_ECX[1] + 0x1d4) != 0) {
          (*DAT_1022303c)(2,"Multisource %s deactivated (%d inputs)\n",
                          *(int *)(in_ECX[1] + 0x1d0) + *(int *)(DAT_10223188 + 0x98),in_ECX[0x97]);
          FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0x1d4),0);
          return;
        }
      }
      else if (iVar2 == 0) {
        (*DAT_1022303c)(2,"Multisource %s enabled (%d inputs)\n",
                        *(int *)(in_ECX[1] + 0x1d0) + *(int *)(DAT_10223188 + 0x98),in_ECX[0x97]);
        FUN_10102a80(0,(in_ECX[0x98] == 0) * '\x02' + '\x01',0);
      }
    }
    return;
  }
  piVar1 = *(int **)(param_2 + 4);
  iVar3 = *(int *)(DAT_10223188 + 0x98);
  if (piVar1[0x74] != 0) {
    (*DAT_1022303c)(1,"multisource \"%s\": Used by non-member %s \"%s\"\n",
                    *(int *)(in_ECX[1] + 0x1d0) + iVar3,*piVar1 + iVar3,piVar1[0x74] + iVar3);
    return;
  }
  (*DAT_1022303c)(1,"multisource \"%s\": Used by non-member %s\n",
                  *(int *)(in_ECX[1] + 0x1d0) + iVar3,*piVar1 + iVar3);
  return;
}

