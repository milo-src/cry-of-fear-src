// rea decompile_all
// name: FUN_100a7990
// address: 0x100a7990
// body: available
// range: 0x100a7990-0x100a7c11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a7990(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  undefined4 local_10;
  undefined4 uStack_c;
  float local_8;
  
  if ((param_1 != (int *)0x0) && (*(int *)(*(int *)(in_ECX + 4) + 0x1cc) != 0)) {
    iVar3 = *(int *)(*(int *)(in_ECX + 4) + 0x1d8);
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + iVar3);
    }
    iVar3 = (**(code **)(*param_1 + 0xd0))();
    if (((iVar3 == 0) || (piVar4 = (int *)FUN_100125e0(param_1[1]), piVar4 == (int *)0x0)) ||
       (*(int *)(*(int *)(in_ECX + 4) + 0x1d8) != 0)) {
      if (((*(int *)(*(int *)(in_ECX + 4) + 0x1d8) != 0) && (iVar5 != 0)) &&
         (iVar3 = FUN_10118590(0,*(int *)(*(int *)(in_ECX + 4) + 0x1cc) +
                                 *(int *)(DAT_10223188 + 0x98)), iVar3 != 0)) {
        iVar2 = *(int *)(iVar3 + 4);
        local_10 = *(undefined4 *)(iVar2 + 8);
        uStack_c = *(undefined4 *)(iVar2 + 0xc);
        local_8 = *(float *)(iVar2 + 0x10) + 1.0;
        FUN_10119fe0(iVar5,&local_10);
        iVar3 = *(int *)(iVar3 + 4);
        iVar2 = *(int *)(iVar5 + 4);
        *(undefined8 *)(iVar2 + 0x50) = *(undefined8 *)(iVar3 + 0x50);
        *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
        iVar3 = *(int *)(iVar5 + 4);
        *(undefined8 *)(iVar3 + 0x2c) = DAT_10222f34;
        *(undefined4 *)(iVar3 + 0x34) = DAT_10222f3c;
        iVar3 = *(int *)(iVar5 + 4);
        *(undefined8 *)(iVar3 + 0x20) = *(undefined8 *)(iVar3 + 0x2c);
        *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar3 + 0x34);
        puVar1 = (uint *)(*(int *)(iVar5 + 4) + 0x1a8);
        *puVar1 = *puVar1 & 0xfffffdff;
        *(undefined4 *)(*(int *)(iVar5 + 4) + 0xa0) = 1;
      }
    }
    else {
      iVar3 = FUN_10118590(0,*(int *)(*(int *)(in_ECX + 4) + 0x1cc) + *(int *)(DAT_10223188 + 0x98))
      ;
      if (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + 4);
        local_10 = *(undefined4 *)(iVar5 + 8);
        uStack_c = *(undefined4 *)(iVar5 + 0xc);
        local_8 = *(float *)(iVar5 + 0x10);
        iVar5 = (**(code **)(*piVar4 + 0xd0))();
        if (iVar5 != 0) {
          local_8 = local_8 - *(float *)(piVar4[1] + 0xe4);
        }
        local_8 = local_8 + 1.0;
        FUN_10119fe0(piVar4,&local_10);
        iVar5 = piVar4[1];
        *(ulonglong *)(piVar4 + 0x186) = CONCAT44(uStack_c,local_10);
        piVar4[0x188] = (int)local_8;
        iVar2 = *(int *)(iVar3 + 4);
        *(undefined8 *)(iVar5 + 0x50) = *(undefined8 *)(iVar2 + 0x50);
        *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
        iVar5 = piVar4[1];
        *(undefined8 *)(iVar5 + 0x2c) = DAT_10222f34;
        *(undefined4 *)(iVar5 + 0x34) = DAT_10222f3c;
        iVar5 = piVar4[1];
        *(undefined8 *)(iVar5 + 0x20) = *(undefined8 *)(iVar5 + 0x2c);
        *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar5 + 0x34);
        iVar5 = (**(code **)(*piVar4 + 0xd0))();
        if (iVar5 != 0) {
          *(undefined4 *)(piVar4[1] + 0x78) = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x54);
          *(undefined4 *)(piVar4[1] + 0xa0) = 1;
        }
        *(uint *)(piVar4[1] + 0x1a8) = *(uint *)(piVar4[1] + 0x1a8) & 0xfffffdff;
        *(undefined4 *)(piVar4[1] + 0xa0) = 1;
        *(undefined1 *)(piVar4 + 0x7a9) = 0;
        return;
      }
    }
  }
  return;
}

