// rea decompile_all
// name: FUN_100ad150
// address: 0x100ad150
// body: available
// range: 0x100ad150-0x100ad3cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100ad150(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar3 = param_1[1];
  bVar1 = false;
  if ((((*(uint *)(iVar3 + 0x1a8) & 0x200) == 0) || (*(int *)(iVar3 + 0x1a0) == 0)) ||
     (iVar2 = *(int *)(in_ECX + 4), *(int *)(iVar3 + 0x1a0) + 0x80 != iVar2)) {
    iVar2 = (**(code **)(*param_1 + 0xd0))();
    if (iVar2 == 0) {
      fVar5 = 0.25;
    }
    else {
      if ((param_2 != 0) && ((*(byte *)(iVar3 + 0x184) & 0x28) == 0)) {
        return;
      }
      bVar1 = true;
      if ((*(uint *)(iVar3 + 0x1a8) & 0x200) == 0) {
        if (*(int *)(*(int *)(in_ECX + 4) + 0x1c4) < 1) {
          return;
        }
        if (*(int *)(*(int *)(in_ECX + 4) + 0x1c8) < -0x10) {
          return;
        }
        fVar5 = 0.1;
      }
      else {
        fVar5 = 1.0;
      }
    }
    if (param_2 == 0) {
      fVar5 = fVar5 * 0.5;
    }
    *(float *)(*(int *)(in_ECX + 4) + 0x20) =
         *(float *)(iVar3 + 0x20) * fVar5 + *(float *)(*(int *)(in_ECX + 4) + 0x20);
    *(float *)(*(int *)(in_ECX + 4) + 0x24) =
         *(float *)(iVar3 + 0x24) * fVar5 + *(float *)(*(int *)(in_ECX + 4) + 0x24);
    fVar5 = *(float *)(*(int *)(in_ECX + 4) + 0x20);
    fVar6 = *(float *)(*(int *)(in_ECX + 4) + 0x24);
    dVar4 = (double)(fVar5 * fVar5 + fVar6 * fVar6);
    if (dVar4 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar4 = SQRT(dVar4);
    }
    fVar6 = (float)dVar4;
    if ((param_2 != 0) && (*(float *)(in_ECX + 0x120) < fVar6)) {
      *(float *)(*(int *)(in_ECX + 4) + 0x20) = (fVar5 * *(float *)(in_ECX + 0x120)) / fVar6;
      *(float *)(*(int *)(in_ECX + 4) + 0x24) =
           (*(float *)(*(int *)(in_ECX + 4) + 0x24) * *(float *)(in_ECX + 0x120)) / fVar6;
    }
    if (bVar1) {
      *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20);
      *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24);
      if (0.7 < *DAT_10223188 - *(float *)(in_ECX + 0x124)) {
        *(float *)(in_ECX + 0x124) = *DAT_10223188;
        if ((fVar6 <= 0.0) || ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x200) == 0)) {
          iVar3 = *(int *)(in_ECX + 0x11c);
          uVar9 = 0x20;
          uVar8 = 0;
          uVar7 = 0;
        }
        else {
          iVar3 = (*DAT_102230b0)(0,2);
          *(int *)(in_ECX + 0x11c) = iVar3;
          uVar9 = 0;
          uVar8 = 0x3f4ccccd;
          uVar7 = 0x3f000000;
        }
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),1,
                     (&PTR_s_debris_pushbox1_wav_1021451c)[iVar3],uVar7,uVar8,uVar9,100);
      }
    }
  }
  else if ((0 < *(int *)(iVar2 + 0x1c4)) && (-0x11 < *(int *)(iVar2 + 0x1c8))) {
    *(float *)(iVar2 + 0x28) = *(float *)(iVar3 + 0x28) * 0.1 + *(float *)(iVar2 + 0x28);
    return;
  }
  return;
}

