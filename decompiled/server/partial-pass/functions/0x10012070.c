// rea decompile_all
// name: FUN_10012070
// address: 0x10012070
// body: available
// range: 0x10012070-0x100121d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012070(int *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int in_ECX;
  float unaff_ESI;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_3c [3];
  float fStack_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  if ((0.0 < *(float *)(iVar1 + 0x1e4)) && (iVar2 = param_1[1], *(float *)(iVar2 + 0x170) != 0.0)) {
    local_3c[0] = *(float *)(iVar1 + 0x1fc) * *(float *)(iVar1 + 0x1e4) * 0.01;
    if (local_3c[0] < 0.0) {
      local_3c[0] = -local_3c[0];
    }
    (**(code **)(*param_1 + 100))(iVar1,iVar1,local_3c[0],1);
    pfVar3 = (float *)FUN_10012420(local_3c,*(undefined4 *)(in_ECX + 4));
    fVar4 = *(float *)(iVar2 + 0xc) - pfVar3[1];
    fVar8 = *(float *)(iVar2 + 8) - *pfVar3;
    fVar9 = *(float *)(iVar2 + 0x10) - pfVar3[2];
    dVar5 = (double)(fVar4 * fVar4 + fVar8 * fVar8 + fVar9 * fVar9);
    if (dVar5 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    fVar6 = 1.0;
    fVar7 = fStack_30;
    if ((float)dVar5 != fStack_30) {
      fVar7 = 1.0 / (float)dVar5;
      fStack_30 = fVar7 * fVar4;
      fVar6 = fVar7 * fVar9;
      fVar7 = fVar7 * fVar8;
    }
    *(ulonglong *)(iVar2 + 0x20) = CONCAT44(fStack_30 * unaff_ESI,fVar7 * unaff_ESI);
    *(float *)(iVar2 + 0x28) = fVar6 * unaff_ESI;
  }
  return;
}

