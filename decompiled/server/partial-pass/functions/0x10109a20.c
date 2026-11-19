// rea decompile_all
// name: FUN_10109a20
// address: 0x10109a20
// body: available
// range: 0x10109a20-0x10109c35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10109a20(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  float fStack_34;
  int iStack_14;
  
  iVar3 = *(int *)(in_ECX + 4);
  if (*(float *)(iVar3 + 0x168) != 0.0) {
    iVar3 = param_1[1];
    iVar2 = *(int *)(param_2 + 4);
    fVar9 = *(float *)(iVar3 + 0xc) - *(float *)(iVar2 + 0xc);
    fVar7 = *(float *)(iVar3 + 8) - *(float *)(iVar2 + 8);
    fVar5 = *(float *)(iVar3 + 0x10) - *(float *)(iVar2 + 0x10);
    dVar6 = (double)(fVar9 * fVar9 + fVar7 * fVar7 + fVar5 * fVar5);
    if (dVar6 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    iVar3 = *(int *)(in_ECX + 4);
    if (*(float *)(iVar3 + 0x168) <= (float)dVar6 && (float)dVar6 != *(float *)(iVar3 + 0x168)) {
      return 0;
    }
  }
  if (*(float *)(iVar3 + 0x1b4) <= 360.0 && *(float *)(iVar3 + 0x1b4) != 360.0) {
    fVar5 = *(float *)(iVar3 + 0x164);
    FUN_10119320(param_1[1] + 0x50);
    fVar7 = *(float *)(*(int *)(param_2 + 4) + 8) - *(float *)(param_1[1] + 8);
    fVar9 = *(float *)(*(int *)(param_2 + 4) + 0xc) - *(float *)(param_1[1] + 0xc);
    dVar6 = (double)(fVar7 * fVar7 + fVar9 * fVar9);
    if (dVar6 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    fVar8 = 0.0;
    if ((float)dVar6 == 0.0) {
      fVar9 = 0.0;
    }
    else {
      fVar8 = 1.0 / (float)dVar6;
      fVar9 = fVar8 * fVar9;
      fVar8 = fVar8 * fVar7;
    }
    fVar7 = *(float *)(DAT_10223188 + 0x2c);
    fVar1 = *(float *)(DAT_10223188 + 0x28);
    if (*(float *)(*(int *)(in_ECX + 4) + 0x1b4) == -1.0) {
      iVar3 = (**(code **)(*param_1 + 0x78))();
      if (iVar3 == 0) {
        return 0;
      }
      fVar5 = *(float *)(iVar3 + 0x208);
    }
    if (fVar7 * fVar9 + fVar1 * fVar8 <= fVar5) {
      return 0;
    }
  }
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) == 0) {
    uVar4 = (**(code **)(*param_1 + 0x100))
                      (local_4c,*(int *)(param_2 + 4) + 8,1,1,*(undefined4 *)(param_1[1] + 0x20c),
                       local_40);
    FUN_1011a820(uVar4);
    if ((fStack_34 < 1.0) && (iStack_14 != *(int *)(*(int *)(param_2 + 4) + 0x20c))) {
      return 0;
    }
  }
  return 1;
}

