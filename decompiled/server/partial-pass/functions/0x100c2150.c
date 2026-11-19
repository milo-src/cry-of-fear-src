// rea decompile_all
// name: FUN_100c2150
// address: 0x100c2150
// body: available
// range: 0x100c2150-0x100c2380 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_100c2150(float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int in_ECX;
  int unaff_EBX;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(int *)(in_ECX + 0x34c) != 0) {
    iVar1 = FUN_10017780();
    if ((iVar1 != 0) && (*(int *)(*(int *)(in_ECX + 0x34c) + 0x388) == 1)) {
      iVar1 = FUN_100177a0();
      iVar1 = *(int *)(iVar1 + 4);
      iVar2 = FUN_100177a0();
      iVar2 = *(int *)(iVar2 + 4);
      local_14 = (*(float *)(iVar1 + 0xd0) + *(float *)(iVar2 + 0xc4)) * 0.5 - *param_2;
      local_10 = (*(float *)(iVar1 + 0xd4) + *(float *)(iVar2 + 200)) * 0.5 - param_2[1];
      local_c = (*(float *)(iVar1 + 0xd8) + *(float *)(iVar2 + 0xcc)) * 0.5 - param_2[2];
      FUN_10017e70(param_1);
      return param_1;
    }
  }
  iVar2 = FUN_10017780();
  iVar1 = DAT_10223188;
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_100177a0();
    iVar1 = FUN_100177a0();
    iVar1 = *(int *)(iVar1 + 4);
    pfVar4 = (float *)(**(code **)(*piVar3 + 0x108))(&local_14,param_2);
    fVar5 = ((pfVar4[1] - *(float *)(iVar1 + 0xc)) + *(float *)(unaff_EBX + 0x2f8)) - param_2[1];
    fVar10 = ((*pfVar4 - *(float *)(iVar1 + 8)) + *(float *)(unaff_EBX + 0x2f4)) - *param_2;
    fVar9 = ((pfVar4[2] - *(float *)(iVar1 + 0x10)) + *(float *)(unaff_EBX + 0x2fc)) - param_2[2];
    dVar7 = (double)(fVar5 * fVar5 + fVar10 * fVar10 + fVar9 * fVar9);
    if (dVar7 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    fVar8 = 0.0;
    if ((float)dVar7 == 0.0) {
      fVar9 = 1.0;
      fVar10 = 0.0;
    }
    else {
      fVar6 = 1.0 / (float)dVar7;
      fVar9 = fVar9 * fVar6;
      fVar8 = fVar5 * fVar6;
      fVar10 = fVar10 * fVar6;
    }
    *param_1 = fVar10;
    param_1[1] = fVar8;
    param_1[2] = fVar9;
    return param_1;
  }
  *param_1 = *(float *)(DAT_10223188 + 0x28);
  param_1[1] = *(float *)(iVar1 + 0x2c);
  param_1[2] = *(float *)(iVar1 + 0x30);
  return param_1;
}

