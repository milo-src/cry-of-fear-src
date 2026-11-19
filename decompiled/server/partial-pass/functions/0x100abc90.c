// rea decompile_all
// name: FUN_100abc90
// address: 0x100abc90
// body: available
// range: 0x100abc90-0x100abe9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100abc90(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_2c;
  float fStack_28;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  iVar1 = FUN_10119780(param_1);
  if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) >> 1 & 1) != (uint)(iVar1 == -3)) {
    *param_3 = 0.0;
    return 1;
  }
  iVar2 = FUN_10119780(param_2);
  if (iVar2 == iVar1) {
    *param_3 = 1.0;
    return 0;
  }
  fVar3 = *param_2 - *param_1;
  fVar7 = param_2[1] - param_1[1];
  fVar8 = param_2[2] - param_1[2];
  dVar6 = (double)(fVar3 * fVar3 + fVar7 * fVar7 + fVar8 * fVar8);
  if (dVar6 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  fVar9 = 1.0;
  fStack_28 = 0.0;
  fVar4 = (float)dVar6;
  if (fVar4 == 0.0) {
    fVar3 = 0.0;
    fVar7 = 0.0;
  }
  else {
    fVar9 = 1.0 / fVar4;
    fVar3 = fVar9 * fVar3;
    fVar7 = fVar9 * fVar7;
    fVar9 = fVar9 * fVar8;
  }
  fVar5 = fVar4 - 0.0;
  fVar8 = fVar4;
  while (1.0 < fVar5) {
    fVar5 = fVar5 * 0.5 + fStack_28;
    fStack_14 = fVar3 * fVar5 + *param_1;
    fStack_10 = fVar7 * fVar5 + param_1[1];
    fStack_c = fVar9 * fVar5 + param_1[2];
    iVar2 = FUN_10119780(&fStack_14);
    fStack_2c = fVar5;
    if (iVar2 == iVar1) {
      fStack_2c = fVar8;
      fStack_28 = fVar5;
    }
    fVar8 = fStack_2c;
    fVar5 = fStack_2c - fStack_28;
  }
  *param_3 = fStack_28 / fVar4;
  return 1;
}

