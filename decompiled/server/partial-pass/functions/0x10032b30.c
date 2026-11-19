// rea decompile_all
// name: FUN_10032b30
// address: 0x10032b30
// body: available
// range: 0x10032b30-0x10032da2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10032b30(void)

{
  int iVar1;
  int *in_ECX;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  
  switch(in_ECX[0x81]) {
  case 1:
  case 0xc:
  case 0x15:
    iVar4 = 2;
    break;
  case 2:
    iVar1 = in_ECX[0x58];
    if (*(int *)(iVar1 + 0x1e98) == 0) {
      iVar4 = 3;
    }
    else {
      if (*(int *)(iVar1 + 0x1e98) != 1) goto switchD_10032b47_caseD_4;
      iVar4 = 9;
    }
    goto LAB_10032b9d;
  case 3:
  case 7:
    iVar1 = in_ECX[0x58];
    iVar4 = 9 - (uint)(*(int *)(iVar1 + 0x5dc) != 0);
    goto LAB_10032b9d;
  default:
    goto switchD_10032b47_caseD_4;
  case 6:
    iVar4 = 7;
    break;
  case 10:
    iVar4 = 4;
    break;
  case 0x10:
    iVar4 = 0x12;
    break;
  case 0x13:
    iVar4 = 3;
  }
  iVar1 = in_ECX[0x58];
LAB_10032b9d:
  FUN_10038f10(iVar1,iVar4);
switchD_10032b47_caseD_4:
  switch(in_ECX[0x80]) {
  case 1:
  case 0xc:
  case 0x15:
    uVar3 = 2;
    break;
  case 2:
    if (*(int *)(in_ECX[0x58] + 0x1e98) == 0) goto switchD_10032bbe_caseD_13;
    if (*(int *)(in_ECX[0x58] + 0x1e98) != 1) goto switchD_10032bbe_caseD_4;
    uVar3 = 9;
    break;
  case 3:
  case 7:
    if (*(int *)(in_ECX[0x58] + 0x5e0) == 0) {
      (**(code **)(*in_ECX + 0x198))(9,1,0);
    }
    else {
      (**(code **)(*in_ECX + 0x198))(8,1,0);
    }
  default:
    goto switchD_10032bbe_caseD_4;
  case 6:
    uVar3 = 7;
    break;
  case 10:
    uVar3 = 4;
    break;
  case 0xd:
    iVar4 = FUN_100e0310(0xd);
    if (iVar4 == 0) {
LAB_10032cb8:
      (**(code **)(*in_ECX + 0x198))(6,1,0);
      *(float *)(in_ECX[0x58] + 0x308) = *DAT_10223188 + 0.5;
      if (iVar4 == 0) goto switchD_10032bbe_caseD_4;
    }
    else {
      iVar1 = *(int *)(iVar4 + 4);
      if (*(int *)(iVar1 + 0x248) == 1) {
        (**(code **)(*in_ECX + 0x198))(8,1,0);
        (**(code **)(*in_ECX + 8))(0x3f666666);
        in_ECX[0x1e] = (int)CDualWeapon::ThrowRemove;
        *(undefined1 *)(iVar4 + 0x1f8) = 1;
        fVar2 = *DAT_10223188 + 1.0;
        *(float *)(in_ECX[0x58] + 0x308) = fVar2;
        in_ECX[0x76] = (int)fVar2;
        in_ECX[0x74] = (int)fVar2;
        in_ECX[0x73] = (int)fVar2;
        iVar1 = *(int *)(iVar4 + 4);
      }
      if (*(int *)(iVar1 + 0x248) == 0) goto LAB_10032cb8;
    }
    if (*(int *)(*(int *)(iVar4 + 4) + 0x248) == 2) {
      *(float *)(in_ECX[0x58] + 0x308) = *DAT_10223188 + 0.5;
    }
    goto switchD_10032bbe_caseD_4;
  case 0x10:
    uVar3 = 0x12;
    break;
  case 0x13:
switchD_10032bbe_caseD_13:
    uVar3 = 3;
  }
  (**(code **)(*in_ECX + 0x198))(uVar3,1,0);
switchD_10032bbe_caseD_4:
  _DAT_102119b0 = *DAT_10223188 + 1.5;
  *(float *)(in_ECX[0x58] + 0x308) = *DAT_10223188 + 1.0;
  return;
}

