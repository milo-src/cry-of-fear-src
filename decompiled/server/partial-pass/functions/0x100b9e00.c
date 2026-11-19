// rea decompile_all
// name: FUN_100b9e00
// address: 0x100b9e00
// body: available
// range: 0x100b9e00-0x100b9fb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b9e00(undefined4 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *in_ECX;
  undefined4 uVar4;
  float10 fVar5;
  float fVar6;
  undefined1 local_28 [12];
  undefined8 local_1c;
  undefined8 local_14;
  float local_c;
  undefined4 local_8;
  
  local_1c = DAT_10222f34;
  local_14 = DAT_10222f34;
  local_8 = DAT_10222f3c;
  local_c = 0.0;
  uVar4 = DAT_10222f3c;
  if (in_ECX[0x37] != 0) {
    puVar2 = (undefined8 *)FUN_100b8110(local_28);
    local_1c = *puVar2;
    uVar4 = *(undefined4 *)(puVar2 + 1);
  }
  if (in_ECX[0x38] != 0) {
    puVar2 = (undefined8 *)FUN_100b8240(local_28);
    local_14 = *puVar2;
    local_8 = *(undefined4 *)(puVar2 + 1);
  }
  if (in_ECX[0x39] == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar5 = (float10)FUN_100b81e0(param_1,*(int *)(DAT_10223188 + 0x98) + in_ECX[0x39]);
    fVar6 = (float)fVar5;
    local_c = fVar6;
  }
  if (in_ECX[0x3a] == 0) {
    iVar1 = in_ECX[1];
    *(undefined8 *)(iVar1 + 8) = local_1c;
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
    iVar1 = in_ECX[1];
    *(undefined8 *)(iVar1 + 0x44) = local_14;
    *(undefined4 *)(iVar1 + 0x4c) = local_8;
    *(float *)(in_ECX[1] + 0x168) = fVar6;
    piVar3 = in_ECX;
  }
  else {
    piVar3 = (int *)FUN_100b80b0(0);
    *(int *)piVar3[1] = (int)&DAT_101d3698 - *(int *)(DAT_10223188 + 0x98);
    iVar1 = piVar3[1];
    *(undefined8 *)(iVar1 + 8) = local_1c;
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
    iVar1 = piVar3[1];
    *(undefined8 *)(iVar1 + 0x44) = local_14;
    *(undefined4 *)(iVar1 + 0x4c) = local_8;
    *(float *)(piVar3[1] + 0x168) = local_c;
    *(int *)(piVar3[1] + 0x1d0) = in_ECX[0x3a];
    (**(code **)(*piVar3 + 8))(in_ECX[0x3c]);
  }
  FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + in_ECX[0x3b],piVar3);
  return;
}

