// rea decompile_all
// name: FUN_10092b90
// address: 0x10092b90
// body: available
// range: 0x10092b90-0x10092cdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_10092b90(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int in_ECX;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  iVar5 = *(int *)(in_ECX + 4);
  if ((*(byte *)(iVar5 + 0x1a4) & 4) == 0) {
    if (*(int *)(iVar5 + 0x1cc) != 0) {
      FUN_100b8110(param_1);
      return param_1;
    }
    goto LAB_10092c90;
  }
  if (param_2 == (int *)0x0) {
LAB_10092bca:
    iVar5 = (*DAT_10223068)(1);
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0xd0))();
    if (iVar5 == 0) goto LAB_10092bca;
    iVar5 = *(int *)(param_2[1] + 0x20c);
  }
  if (iVar5 != 0) {
    fVar6 = (float10)(*DAT_102230b4)(0xc1200000,0x41200000);
    fVar7 = (float10)(*DAT_102230b4)(0xc1200000,0x41200000);
    fVar8 = (float10)(*DAT_102230b4)(0xc1200000,0x41200000);
    fVar1 = *(float *)(iVar5 + 0x200);
    fVar2 = *(float *)(iVar5 + 0x90);
    fVar3 = *(float *)(iVar5 + 0x88);
    fVar4 = *(float *)(iVar5 + 0x1f8);
    param_1[1] = *(float *)(iVar5 + 0x8c) + *(float *)(iVar5 + 0x1fc) + (float)fVar7;
    param_1[2] = fVar2 + fVar1 + (float)fVar8;
    *param_1 = fVar3 + fVar4 + (float)fVar6;
    return param_1;
  }
  iVar5 = *(int *)(in_ECX + 4);
LAB_10092c90:
  *param_1 = *(float *)(iVar5 + 8);
  param_1[1] = *(float *)(iVar5 + 0xc);
  param_1[2] = *(float *)(iVar5 + 0x10);
  return param_1;
}

