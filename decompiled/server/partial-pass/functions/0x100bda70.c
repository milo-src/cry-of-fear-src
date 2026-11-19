// rea decompile_all
// name: FUN_100bda70
// address: 0x100bda70
// body: available
// range: 0x100bda70-0x100bdbe0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100bda70(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  bool bVar3;
  
  if (in_ECX[0xcc] != 0) {
    switch(in_ECX[0xcc]) {
    case 1:
      iVar2 = FUN_10017780();
      if (iVar2 == 0) {
        return 0;
      }
      piVar1 = (int *)FUN_100177a0();
      iVar2 = (**(code **)(*piVar1 + 0xd0))();
      if (iVar2 == 0) {
        return 0;
      }
      bVar3 = (*(byte *)(in_ECX + 0x60) & 0x10) == 0;
      break;
    case 2:
      bVar3 = (in_ECX[0x60] & 0x300U) == 0;
      break;
    case 3:
      iVar2 = (**(code **)(*in_ECX + 0xbc))();
      if (iVar2 == 0) {
        return 0;
      }
      if (*(float *)(in_ECX[1] + 0x1b4) * 0.5 < *(float *)(in_ECX[1] + 0x164)) {
        return 0;
      }
      goto LAB_100bdb9a;
    case 4:
      bVar3 = *(int *)(in_ECX[1] + 0x174) == 0;
      break;
    default:
      goto switchD_100bda8c_caseD_5;
    case 7:
      if ((in_ECX[0x60] & 0x20000U) == 0) {
        return 0;
      }
      bVar3 = (*(byte *)(in_ECX + 0xb6) & 2) == 0;
      break;
    case 8:
      if ((in_ECX[0x60] & 0x20000U) == 0) {
        return 0;
      }
      bVar3 = (*(byte *)(in_ECX + 0xb6) & 4) == 0;
      break;
    case 9:
      if ((in_ECX[0x60] & 0x20000U) == 0) {
        return 0;
      }
      bVar3 = (*(byte *)(in_ECX + 0xb6) & 1) == 0;
      break;
    case 10:
      bVar3 = ((uint)in_ECX[0x60] >> 0x15 & 1) == 0;
      break;
    case 0xb:
      if ((in_ECX[0x60] & 0x200000U) == 0) {
        return 0;
      }
      iVar2 = in_ECX[0x89];
      if (iVar2 == 2) {
        return 0;
      }
      if (iVar2 == 5) {
        return 0;
      }
      bVar3 = iVar2 == 6;
    }
    if (!bVar3) {
LAB_100bdb9a:
      (*DAT_1022303c)(2,"AI Trigger Fire Target\n");
      FUN_10101ff0(in_ECX[0xcd] + *(int *)(DAT_10223188 + 0x98));
      in_ECX[0xcc] = 0;
      return 1;
    }
  }
switchD_100bda8c_caseD_5:
  return 0;
}

