// rea decompile_all
// name: FUN_100256e0
// address: 0x100256e0
// body: available
// range: 0x100256e0-0x10025aea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100256e0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  float10 fVar5;
  float fVar6;
  double dVar7;
  
  fVar6 = *(float *)(*(int *)(in_ECX[0x58] + 4) + 0x24);
  fVar1 = *(float *)(*(int *)(in_ECX[0x58] + 4) + 0x20);
  dVar7 = (double)(fVar1 * fVar1 + fVar6 * fVar6);
  if (dVar7 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  fVar6 = (float)dVar7;
  if ((((in_ECX[0x7c] == 0) && (in_ECX[0x50] == 0)) && (in_ECX[0x4a] != 2)) &&
     ((float)in_ECX[0x73] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x73])) {
    iVar3 = FUN_100f5da0();
    if (iVar3 == 0) {
      if (in_ECX[0x4a] == 5) {
        (**(code **)(*in_ECX + 0x198))(0xd,1,0);
        uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                                *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
        fVar5 = (float10)FUN_1000f390(uVar4);
        in_ECX[0x73] = (int)((float)fVar5 + *DAT_10223188);
        fVar1 = *DAT_10223188;
        in_ECX[0x4a] = 0;
        in_ECX[0x76] = (int)((float)fVar5 + fVar1);
      }
    }
    else if (in_ECX[0x4a] == 0) {
      in_ECX[0x4a] = 5;
      (**(code **)(*in_ECX + 0x198))(0xc,1,0);
      uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                              *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar5 = (float10)FUN_1000f390(uVar4);
      in_ECX[0x73] = (int)((float)fVar5 * 0.5 + *DAT_10223188);
      in_ECX[0x4b] = (int)((float)fVar5 + *DAT_10223188);
    }
    if (((0.0 < fVar6) && ((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8) & 0x40000) != 0)) &&
       ((in_ECX[0x4a] != 5 && (in_ECX[0x4a] != 1)))) {
      in_ECX[0x4a] = 1;
      (**(code **)(*in_ECX + 0x198))(5,1,0);
      uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                              *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar5 = (float10)FUN_1000f390(uVar4);
      in_ECX[0x73] = (int)((float)fVar5 + *DAT_10223188);
      in_ECX[0x4b] = (int)((float)fVar5 + *DAT_10223188);
    }
    iVar3 = in_ECX[0x58];
    iVar2 = *(int *)(iVar3 + 4);
    if ((((*(uint *)(iVar2 + 0x1a8) & 0x40000) != 0) && (0.0 < fVar6)) &&
       ((in_ECX[0x4a] != 5 &&
        ((in_ECX[0x4a] == 1 &&
         ((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b])))))) {
      dVar7 = (double)(*(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                      *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24));
      if (dVar7 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      if ((float)dVar7 != 0.0) {
        (**(code **)(*in_ECX + 0x198))(6,1,0);
        uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                                *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
        fVar5 = (float10)FUN_1000f390(uVar4);
        iVar3 = in_ECX[0x58];
        in_ECX[0x4b] = (int)((float)fVar5 + *DAT_10223188);
      }
    }
    if (((((*(uint *)(*(int *)(iVar3 + 4) + 0x1a8) & 0x40000) == 0) || (fVar6 <= 0.0)) &&
        ((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b])) &&
       ((in_ECX[0x4a] != 5 && (in_ECX[0x4a] == 1)))) {
      (**(code **)(*in_ECX + 0x198))(7,1,0);
      uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                              *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar5 = (float10)FUN_1000f390(uVar4);
      in_ECX[0x73] = (int)((float)fVar5 + *DAT_10223188);
      fVar6 = *DAT_10223188;
      in_ECX[0x4a] = 0;
      in_ECX[0x76] = (int)((float)fVar5 + fVar6);
    }
  }
  FUN_1011d560();
  return;
}

