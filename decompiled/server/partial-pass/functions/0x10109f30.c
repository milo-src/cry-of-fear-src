// rea decompile_all
// name: FUN_10109f30
// address: 0x10109f30
// body: available
// range: 0x10109f30-0x1010a1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10109f30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint local_1028;
  int local_1020;
  int local_101c;
  uint auStack_1014 [512];
  int aiStack_814 [512];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019e140;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_101c = 0;
  iVar2 = FUN_10118460(0,"trigger_changelevel",local_14);
  if (iVar2 != 0) {
    do {
      iVar3 = FUN_10107770(*(undefined4 *)(iVar2 + 4));
      if (iVar3 != 0) {
        iVar4 = FUN_1010ada0(iVar3 + 0x1a0);
        if (((iVar4 != 0) &&
            (iVar3 = FUN_10108e10(param_1,local_101c,iVar3 + 0x180,iVar3 + 0x1a0,iVar4), iVar3 != 0)
            ) && (local_101c = local_101c + 1, param_2 <= local_101c)) break;
      }
      iVar2 = FUN_10118460(iVar2,"trigger_changelevel");
    } while (iVar2 != 0);
    iVar2 = *(int *)(DAT_10223188 + 0x9c);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x28) != 0)) {
      FUN_10116020(iVar2);
      local_8 = 0;
      local_1028 = 0;
      if (0 < local_101c) {
        puVar5 = (undefined4 *)(param_1 + 0x40);
        do {
          iVar3 = 0;
          local_1020 = 0;
          iVar2 = (*DAT_10222f90)(*puVar5);
          while ((iVar2 != 0 && (iVar4 = (*DAT_10223060)(iVar2), iVar4 != 0))) {
            piVar1 = *(int **)(iVar2 + 0x7c);
            if ((piVar1 == (int *)0x0) ||
               (uVar6 = (**(code **)(*piVar1 + 0x40))(), iVar3 = local_1020, (int)uVar6 < 0)) {
LAB_1010a10f:
              iVar2 = *(int *)(iVar2 + 0x20c);
            }
            else {
              uVar6 = (uVar6 & 2) << 0x1c;
              if ((*(int *)(piVar1[1] + 4) != 0) && (iVar4 = FUN_10017e10(), iVar4 == 0)) {
                uVar6 = uVar6 | 0x10000000;
              }
              if (uVar6 == 0) goto LAB_1010a10f;
              aiStack_814[local_1020] = (int)piVar1;
              auStack_1014[local_1020] = uVar6;
              iVar3 = local_1020 + 1;
              local_1020 = iVar3;
              if (iVar3 < 0x201) goto LAB_1010a10f;
              (*DAT_1022303c)(4,"Too many entities across a transition!");
              iVar2 = *(int *)(iVar2 + 0x20c);
            }
          }
          iVar2 = 0;
          if (0 < iVar3) {
            do {
              uVar6 = auStack_1014[iVar2];
              if ((uVar6 != 0) && (iVar4 = FUN_1010b9c0(aiStack_814[iVar2],puVar5 + -8), iVar4 != 0)
                 ) {
                uVar7 = FUN_10116550(aiStack_814[iVar2]);
                FUN_10116450(uVar7,uVar6 | 1 << (local_1028 & 0x1f));
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < iVar3);
          }
          local_1028 = local_1028 + 1;
          puVar5 = puVar5 + 0x14;
        } while ((int)local_1028 < local_101c);
      }
      FUN_10116080();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

