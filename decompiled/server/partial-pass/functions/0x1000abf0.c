// rea decompile_all
// name: FUN_1000abf0
// address: 0x1000abf0
// body: available
// range: 0x1000abf0-0x1000afbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined ** FUN_1000abf0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined **ppuVar4;
  int *in_ECX;
  float10 fVar5;
  char *pcVar6;
  
  switch(in_ECX[0x89]) {
  case 0:
    pcVar6 = "MONSTERSTATE IS NONE!\n";
    break;
  case 1:
    if (((in_ECX[0xd6] != 0) && ((float)in_ECX[0xd9] < *DAT_10223188)) &&
       ((float)in_ECX[0xd9] != -1.0)) {
      iVar3 = FUN_10118590(0,(int)DAT_10223188[0x26] + in_ECX[0xd6]);
      if (iVar3 != 0) {
LAB_1000ac6d:
        uVar2 = FUN_1010b540();
        FUN_10017740(uVar2);
        ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0x2a);
        return ppuVar4;
      }
      in_ECX[0xd9] = -0x40800000;
    }
    if ((in_ECX[0x60] & 0x20000U) != 0) {
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(5);
      return ppuVar4;
    }
    iVar3 = FUN_100bdf30();
    if (iVar3 != 0) {
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(1);
      return ppuVar4;
    }
    ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(2);
    return ppuVar4;
  case 2:
    uVar1 = in_ECX[0x60];
    if ((uVar1 & 0x100000) != 0) {
      FUN_10017740(0);
      iVar3 = (**(code **)(*in_ECX + 0x208))();
      if (iVar3 != 0) {
        in_ECX[0x60] = in_ECX[0x60] & 0xffefffff;
        ppuVar4 = (undefined **)(**(code **)(*in_ECX + 400))();
        return ppuVar4;
      }
      FUN_100c2a70(3);
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 400))();
      return ppuVar4;
    }
    if ((uVar1 & 0x10000) != 0) {
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(3);
      return ppuVar4;
    }
    if (((uVar1 & 0x100) != 0) && ((*(byte *)(in_ECX + 0xbb) & 0x40) == 0)) {
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0x11);
      return ppuVar4;
    }
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x20) != 0) {
        ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0xc);
        return ppuVar4;
      }
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(10);
      return ppuVar4;
    }
    if ((uVar1 & 0x400) != 0) {
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0x18);
      return ppuVar4;
    }
    if ((uVar1 & 0x1000) != 0) {
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0x19);
      return ppuVar4;
    }
    if ((uVar1 & 0x800) != 0) {
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0x16);
      return ppuVar4;
    }
    if ((uVar1 & 0x2000) != 0) {
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0x17);
      return ppuVar4;
    }
    if ((uVar1 & 0xc00) == 0) {
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0xc);
      return ppuVar4;
    }
    iVar3 = FUN_100be5b0();
    if (iVar3 == 0) {
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(10);
      return ppuVar4;
    }
    pcVar6 = "No suitable combat schedule!\n";
    break;
  case 3:
    if (((in_ECX[0xd6] != 0) && ((float)in_ECX[0xd9] < *DAT_10223188)) &&
       ((float)in_ECX[0xd9] != -1.0)) {
      iVar3 = FUN_10118590(0,(int)DAT_10223188[0x26] + in_ECX[0xd6]);
      if (iVar3 != 0) goto LAB_1000ac6d;
      in_ECX[0xd9] = -0x40800000;
    }
    if (((in_ECX[0x60] & 0x100000U) != 0) && (iVar3 = FUN_1000e950(0x41), iVar3 != -1)) {
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0xe);
      return ppuVar4;
    }
    if ((in_ECX[0x60] & 0x300U) == 0) {
      if ((in_ECX[0x60] & 0x20000U) != 0) {
        ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(5);
        return ppuVar4;
      }
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(8);
      return ppuVar4;
    }
    fVar5 = (float10)FUN_100bed20();
    if (ABS((float)fVar5) < (1.0 - (float)in_ECX[0x82]) * 60.0) {
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0x14);
      return ppuVar4;
    }
    ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(6);
    return ppuVar4;
  default:
    pcVar6 = "Invalid State for GetSchedule!\n";
    break;
  case 5:
    ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0x26);
    return ppuVar4;
  case 6:
    if (in_ECX[0xd3] == 0) {
      (*DAT_1022303c)(2,"Script failed for %s\n",*(int *)in_ECX[1] + (int)DAT_10223188[0x26]);
      FUN_100fa530();
      ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(1);
      return ppuVar4;
    }
    ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0x28);
    return ppuVar4;
  case 8:
    ppuVar4 = (undefined **)(**(code **)(*in_ECX + 0x18c))(0x21);
    return ppuVar4;
  }
  (*DAT_1022303c)(2,pcVar6);
  return &PTR_DAT_10213310;
}

