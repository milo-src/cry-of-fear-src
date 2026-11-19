// rea decompile_all
// name: FUN_10112aa0
// address: 0x10112aa0
// body: available
// range: 0x10112aa0-0x10112dc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10112aa0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  float local_c;
  
  if (in_ECX[0x3c] != 0) {
    iVar1 = in_ECX[1];
    iVar2 = *(int *)(in_ECX[0x3c] + 4);
    *(undefined8 *)(iVar2 + 8) = *(undefined8 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(float *)(*(int *)(in_ECX[0x3c] + 4) + 8) =
         *(float *)(in_ECX[1] + 0x164) + *(float *)(*(int *)(in_ECX[0x3c] + 4) + 8);
  }
  if (in_ECX[0x3b] != 0) {
    iVar1 = in_ECX[1];
    iVar2 = *(int *)(in_ECX[0x3e] + 4);
    fVar3 = *(float *)(iVar2 + 0xc) - *(float *)(iVar1 + 0xc);
    fVar5 = *(float *)(iVar2 + 8) - *(float *)(iVar1 + 8);
    fVar6 = *(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10);
    dVar4 = (double)(fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6);
    if (dVar4 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar4 = SQRT(dVar4);
    }
    if ((float)dVar4 == 0.0) {
      local_20 = 0.0;
      local_1c = 0.0;
      local_18 = 1.0;
    }
    else {
      local_18 = 1.0 / (float)dVar4;
      local_20 = local_18 * fVar5;
      local_1c = local_18 * fVar3;
      local_18 = local_18 * fVar6;
    }
    FUN_10117660(&local_14,&local_20,*(undefined4 *)(iVar1 + 0x1c0));
    iVar1 = in_ECX[1];
    fVar3 = *(float *)(iVar1 + 0x164);
    local_18 = local_c * fVar3 + *(float *)(iVar1 + 0x10);
    iVar2 = *(int *)(in_ECX[0x3b] + 4);
    *(ulonglong *)(iVar2 + 8) =
         CONCAT44(fStack_10 * fVar3 + *(float *)(iVar1 + 0xc),
                  local_14 * fVar3 + *(float *)(iVar1 + 8));
    *(float *)(iVar2 + 0x10) = local_18;
  }
  if (in_ECX[0x3d] != 0) {
    iVar1 = in_ECX[1];
    iVar2 = *(int *)(in_ECX[0x3e] + 4);
    fVar3 = *(float *)(iVar2 + 0xc) - *(float *)(iVar1 + 0xc);
    fVar5 = *(float *)(iVar2 + 8) - *(float *)(iVar1 + 8);
    fVar6 = *(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10);
    dVar4 = (double)(fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6);
    if (dVar4 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar4 = SQRT(dVar4);
    }
    if ((float)dVar4 == 0.0) {
      local_20 = 0.0;
      local_1c = 0.0;
      local_18 = 1.0;
    }
    else {
      local_18 = 1.0 / (float)dVar4;
      local_20 = local_18 * fVar5;
      local_1c = local_18 * fVar3;
      local_18 = local_18 * fVar6;
    }
    FUN_101175c0(&local_14,&local_20,*(undefined4 *)(iVar1 + 0x1c0));
    iVar1 = in_ECX[1];
    iVar2 = *(int *)(in_ECX[0x3d] + 4);
    *(undefined8 *)(iVar2 + 8) = *(undefined8 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    iVar1 = *(int *)(in_ECX[0x3d] + 4);
    *(ulonglong *)(iVar1 + 0x50) = CONCAT44(fStack_10,local_14);
    *(float *)(iVar1 + 0x58) = local_c;
  }
  iVar1 = in_ECX[1];
  *(float *)(iVar1 + 0x1c0) = *(float *)(iVar1 + 0x1bc) * 0.1 + *(float *)(iVar1 + 0x1c0);
  (**(code **)(*in_ECX + 8))(0x3dcccccd);
  return;
}

