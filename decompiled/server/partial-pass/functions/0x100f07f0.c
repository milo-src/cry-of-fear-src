// rea decompile_all
// name: FUN_100f07f0
// address: 0x100f07f0
// body: available
// range: 0x100f07f0-0x100f0a94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f07f0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  char *_Str1;
  
  if (2 < param_1 - 1U) {
    return;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if ((*(uint *)(iVar2 + 0x1a8) & 0x1000) != 0) {
    return;
  }
  if (*(char *)(in_ECX + 0x1ee8) != '\0') {
    return;
  }
  iVar1 = FUN_100e4ed0();
  if (iVar1 != 0) {
    return;
  }
  if (*(float *)(iVar2 + 0x260) == 10.0) {
    return;
  }
  if ((((*(float *)(in_ECX + 0x5d8) < *DAT_10223188 || *(float *)(in_ECX + 0x5d8) == *DAT_10223188)
       || (DAT_10226718 == param_1)) || (DAT_10222ee4 == (int *)0x0)) ||
     (iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar2 != 0)) {
LAB_100f09eb:
    DAT_10226718 = param_1;
    *(float *)(in_ECX + 0x5d8) = *DAT_10223188 + 0.25;
    if (param_1 == 1) {
      _Str1 = (char *)(in_ECX + 0x204c);
    }
    else if (param_1 == 2) {
      _Str1 = (char *)(in_ECX + 0x20cc);
    }
    else {
      if (param_1 != 3) goto LAB_100f0a60;
LAB_100f0a2b:
      _Str1 = (char *)(in_ECX + 0x214c);
    }
  }
  else if (param_1 == 1) {
    if (DAT_10226718 == 1) {
      iVar2 = in_ECX + 0x204c;
    }
    else if (DAT_10226718 == 2) {
      iVar2 = in_ECX + 0x20cc;
    }
    else {
      if (DAT_10226718 != 3) goto LAB_100f09eb;
      iVar2 = in_ECX + 0x214c;
    }
    FUN_100dcb10(in_ECX + 0x204c,iVar2);
    DAT_10226718 = param_1;
    _Str1 = (char *)(in_ECX + 0x204c);
    *(float *)(in_ECX + 0x5d8) = *DAT_10223188 + 0.25;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) goto LAB_100f09eb;
      if (DAT_10226718 == 1) {
        iVar2 = in_ECX + 0x204c;
      }
      else if (DAT_10226718 == 2) {
        iVar2 = in_ECX + 0x20cc;
      }
      else {
        if (DAT_10226718 != 3) goto LAB_100f09eb;
        iVar2 = in_ECX + 0x214c;
      }
      FUN_100dcb10(in_ECX + 0x214c,iVar2);
      DAT_10226718 = param_1;
      *(float *)(in_ECX + 0x5d8) = *DAT_10223188 + 0.25;
      goto LAB_100f0a2b;
    }
    if (DAT_10226718 == 1) {
      iVar2 = in_ECX + 0x204c;
LAB_100f0945:
      FUN_100dcb10(in_ECX + 0x20cc,iVar2);
    }
    else {
      if (DAT_10226718 == 2) {
        iVar2 = in_ECX + 0x20cc;
        goto LAB_100f0945;
      }
      if (DAT_10226718 == 3) {
        iVar2 = in_ECX + 0x214c;
        goto LAB_100f0945;
      }
    }
    DAT_10226718 = param_1;
    _Str1 = (char *)(in_ECX + 0x20cc);
    *(float *)(in_ECX + 0x5d8) = *DAT_10223188 + 0.25;
  }
  iVar2 = _strncmp(_Str1,"weapon_",7);
  if ((iVar2 == 0) && (iVar2 = FUN_100e2380(_Str1), iVar2 != 0)) {
    FUN_100f1a50(_Str1);
    return;
  }
LAB_100f0a60:
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),3,"inventory/inventory_no.wav",
               0x3f800000,0x3f4ccccd,0,100);
  return;
}

