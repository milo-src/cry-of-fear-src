// rea decompile_all
// name: FUN_10010b10
// address: 0x10010b10
// body: available
// range: 0x10010b10-0x10010ca8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010b10(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  char *pcVar5;
  int iVar6;
  
  iVar6 = in_ECX[1];
  iVar3 = *(int *)(iVar6 + 0x1d8);
  pcVar1 = (char *)(iVar3 + *(int *)(DAT_10223188 + 0x98));
  if (iVar3 == 0) {
LAB_10010b52:
    switch(in_ECX[0x3b]) {
    case 1:
      FUN_10116a30("fans/fan1.wav");
      *(int *)(in_ECX[1] + 0x1f8) = (int)"fans/fan1.wav" - *(int *)(DAT_10223188 + 0x98);
      break;
    case 2:
      FUN_10116a30("fans/fan2.wav");
      *(int *)(in_ECX[1] + 0x1f8) = (int)"fans/fan2.wav" - *(int *)(DAT_10223188 + 0x98);
      break;
    case 3:
      FUN_10116a30("fans/fan3.wav");
      *(int *)(in_ECX[1] + 0x1f8) = (int)"fans/fan3.wav" - *(int *)(DAT_10223188 + 0x98);
      break;
    case 4:
      FUN_10116a30("fans/fan4.wav");
      *(int *)(in_ECX[1] + 0x1f8) = (int)"fans/fan4.wav" - *(int *)(DAT_10223188 + 0x98);
      break;
    case 5:
      FUN_10116a30("fans/fan5.wav");
      *(int *)(in_ECX[1] + 0x1f8) = (int)"fans/fan5.wav" - *(int *)(DAT_10223188 + 0x98);
      break;
    default:
      if (iVar3 != 0) {
        pcVar5 = pcVar1;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (pcVar5 != pcVar1 + 1) goto LAB_10010c4e;
      }
      *(int *)(iVar6 + 0x1f8) = (int)"common/null.wav" - *(int *)(DAT_10223188 + 0x98);
    }
  }
  else {
    pcVar5 = pcVar1;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 == pcVar1 + 1) {
      iVar6 = in_ECX[1];
      goto LAB_10010b52;
    }
LAB_10010c4e:
    FUN_10116a30(pcVar1);
    uVar4 = (*DAT_10223054)(pcVar1);
    *(undefined4 *)(in_ECX[1] + 0x1f8) = uVar4;
  }
  if ((float)in_ECX[0x3c] != 0.0) {
    in_ECX[0x1e] = (int)CFuncRotating::SpinUp;
    (**(code **)(*in_ECX + 8))(0x3fc00000);
  }
  return;
}

