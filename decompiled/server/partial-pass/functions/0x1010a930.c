// rea decompile_all
// name: FUN_1010a930
// address: 0x1010a930
// body: available
// range: 0x1010a930-0x1010aa78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1010a930(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  
  bVar1 = false;
  bVar6 = false;
  iVar7 = 0;
  if (0 < *(int *)(in_ECX + 0x184)) {
    piVar5 = (int *)(in_ECX + 0x188);
    bVar6 = false;
    bVar1 = false;
    do {
      piVar2 = (int *)FUN_10118500(0,*(int *)(DAT_10223188 + 0x98) + *piVar5,param_1);
      if (piVar2 == (int *)0x0) {
switchD_1010a9b9_caseD_2:
      }
      else {
        uVar8 = 0;
        uVar3 = (**(code **)(*piVar2 + 0x5c))();
        switch(uVar3) {
        case 0:
          uVar8 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) >> 4;
          break;
        case 1:
        case 3:
          uVar8 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) >> 5;
          break;
        case 2:
          uVar8 = ~(*(uint *)(*(int *)(in_ECX + 4) + 0x1a4) >> 3);
          break;
        case 4:
          if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 0x80) == 0) goto switchD_1010a991_default;
          iVar4 = *(int *)(in_ECX + 0x180);
          goto LAB_1010a9b3;
        default:
          goto switchD_1010a991_default;
        }
        uVar8 = uVar8 & 1;
switchD_1010a991_default:
        iVar4 = *(int *)(in_ECX + 0x180);
        if (uVar8 == 0) {
          if (iVar4 == 0) {
            return false;
          }
          if (iVar4 == 2) {
            return true;
          }
          goto switchD_1010a9b9_caseD_2;
        }
LAB_1010a9b3:
        switch(iVar4) {
        case 1:
          goto switchD_1010a9b9_caseD_1;
        default:
          goto switchD_1010a9b9_caseD_2;
        case 3:
          goto switchD_1010a9b9_caseD_3;
        case 4:
          if (bVar6 != false) {
            return false;
          }
          bVar1 = true;
          bVar6 = true;
          break;
        case 5:
          if (bVar6 != false) {
            return true;
          }
          bVar1 = true;
          bVar6 = true;
        }
      }
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x184));
  }
  switch(*(undefined4 *)(in_ECX + 0x180)) {
  case 0:
  case 3:
switchD_1010a9b9_caseD_1:
    return true;
  case 4:
    return bVar6;
  case 5:
    return !bVar1;
  }
switchD_1010a9b9_caseD_3:
  return false;
}

