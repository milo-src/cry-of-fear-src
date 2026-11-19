// rea decompile_all
// name: FUN_10116570
// address: 0x10116570
// body: available
// range: 0x10116570-0x1011666f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10116570(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  double dVar5;
  
  puVar3 = &DAT_1021aae0;
  uVar4 = 0;
  do {
    iVar1 = __stricmp((char *)puVar3[1],*(char **)(param_2 + 4));
    if (iVar1 == 0) {
      switch(*puVar3) {
      case 0:
      case 0xf:
        dVar5 = FID_conflict__atof(*(wchar_t **)(param_2 + 8));
        *(float *)(param_1 + puVar3[2]) = (float)dVar5;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      case 1:
      case 0x10:
      case 0x11:
        uVar2 = (*DAT_10223054)(*(undefined4 *)(param_2 + 8));
        *(undefined4 *)(param_1 + puVar3[2]) = uVar2;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      default:
        (*DAT_1022303c)(4,"Bad field in entity!!\n");
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      case 7:
      case 8:
        FUN_1011a6c0(puVar3[2] + param_1,*(undefined4 *)(param_2 + 8));
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      case 10:
        iVar1 = _atoi(*(char **)(param_2 + 8));
        *(int *)(param_1 + puVar3[2]) = iVar1;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
    uVar4 = uVar4 + 0x10;
    puVar3 = puVar3 + 4;
  } while (uVar4 < 0x660);
  return;
}

