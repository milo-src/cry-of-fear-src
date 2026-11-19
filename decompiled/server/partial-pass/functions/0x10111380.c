// rea decompile_all
// name: FUN_10111380
// address: 0x10111380
// body: available
// range: 0x10111380-0x1011171f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10111380(int *param_1)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_1[0x94b] == 0) {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0xbc))();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = param_1[0x94b];
  bVar3 = false;
  iVar5 = *(int *)(iVar4 + 0x168);
  if ((((iVar5 == 0xf) && (*(char *)(iVar4 + 0x178) == '\0')) &&
      (fVar1 = *DAT_10223188,
      *(float *)(iVar4 + 0x1cc) <= fVar1 && fVar1 != *(float *)(iVar4 + 0x1cc))) &&
     ((*(float *)(iVar4 + 0x1d0) <= fVar1 && fVar1 != *(float *)(iVar4 + 0x1d0) &&
      (*(float *)(iVar4 + 0x1d4) <= fVar1 && fVar1 != *(float *)(iVar4 + 0x1d4))))) {
    iVar4 = param_1[0x79c];
    if ((((iVar4 == 3) || ((iVar4 == 7 || (iVar4 == 0x15)))) || (iVar4 == 0x13)) || (iVar4 == 0x17))
    {
      iVar5 = iVar4;
    }
    iVar4 = param_1[0x79d];
    if ((((iVar4 == 3) || (iVar4 == 7)) || (iVar4 == 0x15)) || ((iVar4 == 0x13 || (iVar4 == 0x17))))
    {
      iVar5 = iVar4;
    }
    bVar3 = true;
    iVar4 = FUN_100e0310(iVar5);
    FUN_100f1a50((int)DAT_10223188[0x26] + **(int **)(iVar4 + 4));
  }
  switch(iVar5) {
  case 3:
    iVar4 = FUN_100e0310(iVar5);
    if (iVar4 == 0) {
      return;
    }
    if (*(char *)(iVar4 + 0x1f8) != '\0') {
      return;
    }
    cVar2 = *(char *)(iVar4 + 0x178);
    break;
  default:
    goto switchD_1011146e_caseD_5;
  case 0xb:
    iVar4 = FUN_100e0310(iVar5);
    if (((iVar4 != 0) && (*(char *)(iVar4 + 0x178) == '\0')) &&
       ((*(int *)(iVar4 + 0x200) == 0 &&
        ((((*(char *)(iVar4 + 0x208) == '\0' && (*(char *)(iVar4 + 0x106) == '\0')) &&
          (fVar1 = *DAT_10223188,
          *(float *)(iVar4 + 0x1cc) <= fVar1 && fVar1 != *(float *)(iVar4 + 0x1cc))) &&
         ((*(float *)(iVar4 + 0x1d0) <= fVar1 && fVar1 != *(float *)(iVar4 + 0x1d0) &&
          (*(float *)(iVar4 + 0x1d4) <= fVar1 && fVar1 != *(float *)(iVar4 + 0x1d4))))))))) {
      if (bVar3) {
        iVar4 = FUN_100e0310(iVar5);
        *(undefined4 *)(iVar4 + 0x140) = 0x29a;
      }
      else {
        *(undefined4 *)(iVar4 + 0x140) = 1;
      }
    }
  case 4:
    iVar4 = FUN_100e0310(iVar5);
    if (iVar4 == 0) {
      return;
    }
    if (*(char *)(iVar4 + 0x178) != '\0') {
      return;
    }
    if (*(int *)(iVar4 + 0x1f8) != 0) {
      return;
    }
    fVar1 = *DAT_10223188;
    if (fVar1 < *(float *)(iVar4 + 0x1cc) || fVar1 == *(float *)(iVar4 + 0x1cc)) {
      return;
    }
    if (fVar1 < *(float *)(iVar4 + 0x1d0) || fVar1 == *(float *)(iVar4 + 0x1d0)) {
      return;
    }
    if (fVar1 < *(float *)(iVar4 + 0x1d4) || fVar1 == *(float *)(iVar4 + 0x1d4)) {
      return;
    }
    goto joined_r0x101115e9;
  case 0xe:
    iVar4 = FUN_100e0310(iVar5);
    if (((iVar4 != 0) && (*(char *)(iVar4 + 0x178) == '\0')) &&
       ((fVar1 = *DAT_10223188,
        *(float *)(iVar4 + 0x1cc) <= fVar1 && fVar1 != *(float *)(iVar4 + 0x1cc) &&
        ((*(float *)(iVar4 + 0x1d0) <= fVar1 && fVar1 != *(float *)(iVar4 + 0x1d0) &&
         (*(float *)(iVar4 + 0x1d4) <= fVar1 && fVar1 != *(float *)(iVar4 + 0x1d4))))))) {
      if (bVar3) {
        iVar4 = FUN_100e0310(iVar5);
        *(undefined4 *)(iVar4 + 0x140) = 0x29a;
      }
      else {
        *(undefined4 *)(iVar4 + 0x140) = 1;
      }
    }
  case 0x1b:
    iVar4 = FUN_100e0310(iVar5);
    if ((((iVar4 != 0) && (*(char *)(iVar4 + 0x178) == '\0')) &&
        (fVar1 = *DAT_10223188,
        *(float *)(iVar4 + 0x1cc) <= fVar1 && fVar1 != *(float *)(iVar4 + 0x1cc))) &&
       ((*(float *)(iVar4 + 0x1d0) <= fVar1 && fVar1 != *(float *)(iVar4 + 0x1d0) &&
        (*(float *)(iVar4 + 0x1d4) <= fVar1 && fVar1 != *(float *)(iVar4 + 0x1d4))))) {
      if (bVar3) {
        iVar4 = FUN_100e0310(iVar5);
        *(undefined4 *)(iVar4 + 0x140) = 0x29a;
      }
      else {
        *(undefined4 *)(iVar4 + 0x140) = 1;
      }
    }
  case 7:
  case 9:
  case 0x13:
  case 0x17:
    iVar4 = FUN_100e0310(iVar5);
    if (iVar4 == 0) {
      return;
    }
    if (*(char *)(iVar4 + 0x178) != '\0') {
      return;
    }
    fVar1 = *DAT_10223188;
    if (fVar1 < *(float *)(iVar4 + 0x1cc) || fVar1 == *(float *)(iVar4 + 0x1cc)) {
      return;
    }
    if (fVar1 < *(float *)(iVar4 + 0x1d0) || fVar1 == *(float *)(iVar4 + 0x1d0)) {
      return;
    }
    if (fVar1 < *(float *)(iVar4 + 0x1d4) || fVar1 == *(float *)(iVar4 + 0x1d4)) {
      return;
    }
    if (!bVar3) {
      *(undefined4 *)(iVar4 + 0x140) = 1;
      return;
    }
    goto LAB_101116f6;
  case 0x15:
    iVar4 = FUN_100e0310(iVar5);
    if (iVar4 == 0) {
      return;
    }
    if (*(char *)(iVar4 + 0x178) != '\0') {
      return;
    }
    if (*(char *)(iVar4 + 0x1fc) != '\0') {
      return;
    }
    cVar2 = *(char *)(iVar4 + 0x1fd);
  }
  if (((cVar2 != '\0') ||
      (fVar1 = *DAT_10223188,
      fVar1 < *(float *)(iVar4 + 0x1cc) || fVar1 == *(float *)(iVar4 + 0x1cc))) ||
     ((fVar1 < *(float *)(iVar4 + 0x1d0) || fVar1 == *(float *)(iVar4 + 0x1d0) ||
      (fVar1 < *(float *)(iVar4 + 0x1d4) || fVar1 == *(float *)(iVar4 + 0x1d4))))) {
switchD_1011146e_caseD_5:
    return;
  }
joined_r0x101115e9:
  if (!bVar3) {
    *(undefined4 *)(iVar4 + 0x140) = 1;
    return;
  }
LAB_101116f6:
  iVar4 = FUN_100e0310(iVar5);
  *(undefined4 *)(iVar4 + 0x140) = 0x29a;
  return;
}

