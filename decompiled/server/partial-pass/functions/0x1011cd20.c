// rea decompile_all
// name: FUN_1011cd20
// address: 0x1011cd20
// body: available
// range: 0x1011cd20-0x1011cf07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1011cd20(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 int param_13,int param_14,int param_15,int param_16,int param_17,int param_18,
                 int param_19)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x168))();
  if (iVar2 == -1) {
    return;
  }
  iVar3 = FUN_100dfe60(&DAT_101db140);
  if (((((((iVar2 != iVar3) &&
          (iVar3 = FUN_100dfe60(&DAT_101db144), param_3 = param_4, iVar2 != iVar3)) &&
         (iVar3 = FUN_100dfe60(&DAT_101b91e0), param_3 = param_5, iVar2 != iVar3)) &&
        ((iVar3 = FUN_100dfe60("bolts"), param_3 = param_6, iVar2 != iVar3 &&
         (iVar3 = FUN_100dfe60("ARgrenades"), param_3 = param_7, iVar2 != iVar3)))) &&
       ((iVar3 = FUN_100dfe60("uranium"), param_3 = param_9, iVar2 != iVar3 &&
        ((iVar3 = FUN_100dfe60("rockets"), param_3 = param_8, iVar2 != iVar3 &&
         (iVar3 = FUN_100dfe60("Satchel Charge"), param_3 = param_10, iVar2 != iVar3)))))) &&
      (iVar3 = FUN_100dfe60("Snarks"), param_3 = param_11, iVar2 != iVar3)) &&
     ((((iVar3 = FUN_100dfe60("Trip Mine"), param_3 = param_12, iVar2 != iVar3 &&
        (iVar3 = FUN_100dfe60("Hand Grenade"), param_3 = param_13, iVar2 != iVar3)) &&
       (iVar3 = FUN_100dfe60(&DAT_101db1a8), param_3 = param_14, iVar2 != iVar3)) &&
      (((iVar3 = FUN_100dfe60("barret"), param_3 = param_15, iVar2 != iVar3 &&
        (iVar3 = FUN_100dfe60(&DAT_101db1b4), param_3 = param_16, iVar2 != iVar3)) &&
       ((iVar3 = FUN_100dfe60("asval"), param_3 = param_17, iVar2 != iVar3 &&
        ((iVar3 = FUN_100dfe60(&DAT_101db1c0), param_3 = param_18, iVar2 != iVar3 &&
         (iVar3 = FUN_100dfe60("groza"), param_3 = param_19, iVar2 != iVar3)))))))))) {
    return;
  }
  if (param_3 < 1) {
    if (param_3 < -1) goto LAB_1011ceec;
  }
  else {
    piVar1 = in_ECX + 0x79;
    *piVar1 = *piVar1 - param_3;
    if (-1 < *piVar1) goto LAB_1011ceec;
  }
  in_ECX[0x79] = 0;
LAB_1011ceec:
  if (param_2 == 0) {
    *(int *)(param_1 + 0x2540 + iVar2 * 4) = in_ECX[0x79];
  }
  return;
}

