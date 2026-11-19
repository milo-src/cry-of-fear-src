// rea decompile_all
// name: FUN_100c2d10
// address: 0x100c2d10
// body: available
// range: 0x100c2d10-0x100c300e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c2d10(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  float10 fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if (*param_1 != 2) {
    FUN_100bf310(param_1);
    return;
  }
  *(uint *)(in_ECX[1] + 0x1a8) = *(uint *)(in_ECX[1] + 0x1a8) & 0xfffffdff;
  FUN_10119fe0();
  FUN_10119320(in_ECX[1] + 0x50);
  iVar3 = FUN_10017780();
  if (iVar3 == 0) {
    fStack_20 = DAT_10223188[0xf] * 350.0;
    fStack_18 = DAT_10223188[0xb] * 350.0;
    fStack_1c = DAT_10223188[10] * 350.0;
  }
  else {
    fVar7 = 1.0;
    if (1.0 <= *(float *)(DAT_10222ed8 + 0xc)) {
      fVar7 = *(float *)(DAT_10222ed8 + 0xc);
    }
    iVar3 = FUN_100177a0();
    fVar1 = *(float *)(*(int *)(iVar3 + 4) + 0x180);
    iVar3 = FUN_100177a0();
    fVar8 = (*(float *)(*(int *)(iVar3 + 4) + 0x10) + fVar1) - *(float *)(in_ECX[1] + 0x10);
    fVar1 = 16.0;
    if (16.0 <= fVar8) {
      fVar1 = fVar8;
    }
    dVar9 = (double)(fVar1 * (fVar7 + fVar7));
    if (dVar9 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    fStack_20 = (float)dVar9;
    iVar3 = FUN_100177a0();
    iVar3 = *(int *)(iVar3 + 4);
    iVar4 = FUN_100177a0();
    fStack_18 = 1.0 / (fStack_20 / fVar7);
    fStack_1c = ((*(float *)(*(int *)(iVar4 + 4) + 8) + *(float *)(iVar3 + 0x178)) -
                *(float *)(in_ECX[1] + 8)) * fStack_18;
    fStack_18 = ((*(float *)(*(int *)(iVar4 + 4) + 0xc) + *(float *)(iVar3 + 0x17c)) -
                *(float *)(in_ECX[1] + 0xc)) * fStack_18;
    dVar9 = (double)(fStack_18 * fStack_18 + fStack_1c * fStack_1c + fStack_20 * fStack_20);
    if (dVar9 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    if (650.0 < (float)dVar9) {
      fVar7 = 650.0 / (float)dVar9;
      fStack_20 = fVar7 * fStack_20;
      fStack_18 = fStack_18 * fVar7;
      fStack_1c = fStack_1c * fVar7;
    }
  }
  iVar3 = (*DAT_102230b0)(0,2);
  if (iVar3 != 0) {
    uVar2 = *(undefined4 *)(in_ECX[1] + 0x20c);
    uVar5 = (**(code **)(*in_ECX + 0x248))();
    fVar6 = (float10)(**(code **)(*in_ECX + 0x24c))(0x40000000,0,uVar5);
    FUN_100fc9f0(uVar2,2,(&PTR_s_headcrab_hc_attack1_wav_10217778)[iVar3],(float)fVar6);
  }
  iVar3 = in_ECX[1];
  *(float *)(iVar3 + 0x20) = fStack_1c;
  *(float *)(iVar3 + 0x24) = fStack_18;
  *(float *)(iVar3 + 0x28) = fStack_20;
  in_ECX[0xc2] = (int)(*DAT_10223188 + 2.0);
  return;
}

