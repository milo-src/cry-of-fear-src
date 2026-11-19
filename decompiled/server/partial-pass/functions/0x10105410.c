// rea decompile_all
// name: FUN_10105410
// address: 0x10105410
// body: available
// range: 0x10105410-0x101057c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10105410(int *param_1)

{
  int iVar1;
  int *in_ECX;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  
  switch(*param_1) {
  case 0x5c:
    iVar1 = FUN_10104f50();
    if ((iVar1 == 0) || (iVar1 = FUN_10017780(), iVar1 == 0)) {
      FUN_10104e20(in_ECX[1] + 8);
      FUN_10104110();
      iVar1 = (*DAT_102230b0)(0,in_ECX[0xdb] * 0x14);
      if (iVar1 == 0) {
        FUN_101041f0();
      }
    }
    else {
      iVar1 = FUN_100177a0();
      FUN_10104e20(*(int *)(iVar1 + 4) + 8);
    }
    FUN_1000b2f0(param_1);
    if (in_ECX[0x8b] == 4) {
      FUN_10104e20(in_ECX[1] + 8);
      return;
    }
    break;
  default:
    iVar1 = FUN_10104f50();
    if ((iVar1 != 0) && (iVar1 = FUN_10017780(), iVar1 != 0)) {
      iVar1 = FUN_100177a0();
      FUN_10104e20(*(int *)(iVar1 + 4) + 8);
      FUN_1000b2f0(param_1);
      return;
    }
    FUN_1000eb70(0,0);
    FUN_1000b2f0(param_1);
    break;
  case 0x60:
    fVar5 = (float)in_ECX[0xb8] - *(float *)(in_ECX[1] + 0xc);
    fVar7 = (float)in_ECX[0xb7] - *(float *)(in_ECX[1] + 8);
    dVar6 = (double)(fVar5 * fVar5 + fVar7 * fVar7);
    if (dVar6 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    if (((float)param_1[1] <= (float)dVar6 && (float)dVar6 != (float)param_1[1]) ||
       (in_ECX[0xae] == 0)) {
      if ((in_ECX[0x60] & 0x40000000U) == 0) {
        in_ECX[0x8b] = 4;
      }
      FUN_100c1a70();
      return;
    }
    break;
  case 0x67:
  case 0x68:
    if (((in_ECX[0x89] != 1) || (iVar1 = (**(code **)(*in_ECX + 0x9c))(), iVar1 != 0)) ||
       (iVar1 = FUN_10104f50(), iVar1 != 0)) {
LAB_101055e6:
      in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
      return;
    }
    iVar1 = (*DAT_10223068)(1);
    if (iVar1 != 0) {
      FUN_10104e20(iVar1 + 0x88);
    }
    if (*param_1 == 0x68) {
      fVar5 = *(float *)(iVar1 + 0x8c) - *(float *)(in_ECX[1] + 0xc);
      fVar7 = *(float *)(iVar1 + 0x88) - *(float *)(in_ECX[1] + 8);
      dVar6 = (double)(fVar5 * fVar5 + fVar7 * fVar7);
      if (dVar6 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar6 = SQRT(dVar6);
      }
      if (128.0 < (float)dVar6) {
        in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
      }
      FUN_10119320(iVar1 + 0xd0);
      fVar4 = (float10)FUN_101181f0((float *)(iVar1 + 0x88),in_ECX[1] + 8,DAT_10223188 + 10);
      if ((float)fVar4 < (float)in_ECX[0x82]) {
        in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
      }
    }
    bVar3 = *DAT_10223188 == (float)in_ECX[0x83];
    bVar2 = *DAT_10223188 < (float)in_ECX[0x83];
    goto LAB_10105537;
  case 0x69:
    iVar1 = (**(code **)(*in_ECX + 0x9c))();
    if (((iVar1 == 0) && (iVar1 = FUN_10104f50(), iVar1 != 0)) &&
       (iVar1 = FUN_10017780(), iVar1 != 0)) {
      iVar1 = FUN_100177a0();
      FUN_10104e20(*(int *)(iVar1 + 4) + 8);
      return;
    }
    goto LAB_1010553d;
  case 0x6b:
    iVar1 = (*DAT_10223068)(1);
    if (iVar1 == 0) goto LAB_101055e6;
    FUN_100c00f0(*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                 *(undefined4 *)(iVar1 + 0x90));
    (**(code **)(*in_ECX + 0x130))((int)*(float *)(in_ECX[1] + 0xb0));
    FUN_10104e20((undefined4 *)(iVar1 + 0x88));
    if (*DAT_10223188 < (float)in_ECX[0x83] || *DAT_10223188 == (float)in_ECX[0x83]) {
      return;
    }
    fVar4 = (float10)FUN_100bed20();
    bVar3 = (float)fVar4 == 10.0;
    bVar2 = 10.0 < (float)fVar4;
LAB_10105537:
    if (!bVar2 && !bVar3) {
LAB_1010553d:
      if ((in_ECX[0x60] & 0x40000000U) == 0) {
        in_ECX[0x8b] = 4;
        return;
      }
    }
  }
  return;
}

