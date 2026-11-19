// rea decompile_all
// name: FUN_1011fb60
// address: 0x1011fb60
// body: available
// range: 0x1011fb60-0x1011fc69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1011fb60(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  char *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  iVar2 = (*DAT_10222fa4)(param_1 - *(int *)(DAT_10223188 + 0x98));
  if ((iVar2 != 0) && (iVar3 = (*DAT_10223060)(iVar2), iVar3 != 0)) {
    iVar3 = *(int *)(iVar2 + 0x28c);
    if (((iVar3 != 0) || (iVar3 = (*DAT_1022305c)(0), iVar3 != 0)) &&
       (piVar1 = *(int **)(iVar3 + 0x7c), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x30))();
      _memset(&local_30,0,0x2c);
      iVar3 = (**(code **)(*piVar1 + 0x13c))(&local_30);
      if (iVar3 != 0) {
        (&DAT_10231888)[local_10 * 0xb] = local_30;
        (&DAT_1023188c)[local_10 * 0xb] = uStack_2c;
        (&DAT_10231890)[local_10 * 0xb] = pcStack_28;
        (&DAT_10231894)[local_10 * 0xb] = uStack_24;
        (&DAT_10231898)[local_10 * 0xb] = local_20;
        (&DAT_1023189c)[local_10 * 0xb] = uStack_1c;
        (&DAT_102318a0)[local_10 * 0xb] = uStack_18;
        *(undefined4 *)(&DAT_102318a4 + local_10 * 0x2c) = uStack_14;
        *(ulonglong *)(&DAT_102318a8 + local_10 * 0xb) = CONCAT44(uStack_c,local_10);
        *(undefined4 *)(&DAT_102318b0 + local_10 * 0x2c) = local_8;
        if ((pcStack_28 != (char *)0x0) && (*pcStack_28 != '\0')) {
          FUN_1011b4d0(pcStack_28);
        }
        if ((local_20 != (char *)0x0) && (*local_20 != '\0')) {
          FUN_1011b4d0(local_20);
        }
      }
    }
    (*DAT_10222fa0)(iVar2);
    return;
  }
  (*DAT_1022303c)(1,"NULL Ent in UTIL_PrecacheOtherWeapon\n");
  return;
}

