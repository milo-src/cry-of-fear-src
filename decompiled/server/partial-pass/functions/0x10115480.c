// rea decompile_all
// name: FUN_10115480
// address: 0x10115480
// body: available
// range: 0x10115480-0x1011565e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10115480(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int local_8c;
  int local_88 [33];
  
  local_88[0x20] = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  local_88[0x13] = 0;
  local_88[0x14] = 0;
  local_88[0x15] = 0;
  local_88[0x16] = 0;
  local_88[0x17] = 0;
  local_88[0x18] = 0;
  local_88[0x19] = 0;
  local_88[0x1a] = 0;
  local_88[0x1b] = 0;
  local_88[0x1c] = 0;
  local_88[0x1d] = 0;
  local_88[0x1e] = 0;
  local_88[0x1f] = 0;
  iVar1 = FUN_10118390(local_88,0x20,*(int *)(in_ECX + 4) + 0xdc,*(int *)(in_ECX + 4) + 0xe8,8);
  iVar3 = 0;
  local_8c = 0;
  if ((iVar1 == 0) || (iVar4 = 0, iVar1 < 1)) {
LAB_10115574:
    iVar1 = FUN_10118460(0,"player");
    if (iVar1 != 0) {
      iVar3 = FUN_100125e0(*(undefined4 *)(iVar1 + 4));
    }
  }
  else {
    do {
      if ((local_88[iVar4] != 0) && (iVar2 = FUN_10017d80(local_88[iVar4]), iVar2 != 0)) {
        if ((iVar3 == 0) && (iVar2 = (**(code **)(*(int *)local_88[iVar4] + 0xbc))(), iVar2 != 0)) {
          iVar3 = FUN_100125e0(*(undefined4 *)(local_88[iVar4] + 4));
        }
        if ((*(int *)(*(int *)(in_ECX + 4) + 0x248) == 0) ||
           (iVar2 = (**(code **)(*(int *)local_88[iVar4] + 0xbc))(), iVar2 != 0)) {
          local_8c = local_8c + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
    if (iVar3 == 0) goto LAB_10115574;
  }
  if (*(int *)(*(int *)(in_ECX + 4) + 0x1cc) == 0) {
    iVar1 = FUN_1010a470();
  }
  else {
    iVar1 = FUN_1010a400();
  }
  if (iVar3 != 0) {
    iVar4 = *(int *)(*(int *)(in_ECX + 4) + 0x1cc);
    if ((iVar4 == 0) || (iVar1 != local_8c)) {
      switch(local_8c) {
      case 0:
        iVar4 = *(int *)(*(int *)(in_ECX + 4) + 0x1d8);
        break;
      case 1:
        iVar4 = *(int *)(in_ECX + 0x180);
        break;
      case 2:
        iVar4 = *(int *)(in_ECX + 0x184);
        break;
      case 3:
        iVar4 = *(int *)(in_ECX + 0x188);
        break;
      case 4:
        iVar4 = *(int *)(in_ECX + 0x18c);
        break;
      default:
        goto switchD_101155dd_default;
      }
      if (iVar4 == 0) goto switchD_101155dd_default;
      iVar4 = *(int *)(DAT_10223188 + 0x98) + iVar4;
    }
    else {
      iVar4 = *(int *)(DAT_10223188 + 0x98) + iVar4;
    }
    FUN_10101ff0(iVar4,iVar3,iVar3,3,0);
  }
switchD_101155dd_default:
  if (*(int *)(*(int *)(in_ECX + 4) + 0x250) == 0) {
    *(undefined4 *)(in_ECX + 0x7c) = 0;
    FUN_10119900();
  }
  __security_check_cookie(local_88[0x20] ^ (uint)&stack0xfffffffc);
  return;
}

