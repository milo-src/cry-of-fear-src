// rea decompile_all
// name: FUN_10051540
// address: 0x10051540
// body: available
// range: 0x10051540-0x10051c60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051540(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  float10 fVar6;
  float fVar7;
  double dVar8;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar5 = in_ECX[0x4a];
  if ((iVar5 == 2) && (in_ECX[0x7c] == 0)) {
    in_ECX[0x4a] = 0;
    iVar5 = 0;
  }
  if (((((((char)in_ECX[0x69] != '\0') && (*(char *)(in_ECX[0x58] + 0x1ee8) == '\0')) &&
        (fVar7 = *DAT_10223188, *(float *)(in_ECX[0x58] + 0x1ee4) <= fVar7)) &&
       (((float)in_ECX[0x73] <= fVar7 && ((float)in_ECX[0x74] <= fVar7)))) &&
      ((float)in_ECX[0x75] <= fVar7)) && ((iVar5 == 0 && (in_ECX[0x50] == 0)))) {
    if ((char)in_ECX[0x5e] == '\0') {
      *(undefined1 *)(in_ECX + 0x69) = 0;
      (**(code **)(*in_ECX + 0x1c0))();
    }
    else {
      *(undefined1 *)(in_ECX + 0x5e) = 0;
      (**(code **)(*in_ECX + 0x130))();
    }
  }
  if (in_ECX[0x50] == 2) {
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    FUN_10119c00(in_ECX[0x58],&local_14,0x3f000000,0x3f000000,0x80,0);
    if ((*(uint *)(in_ECX[0x58] + 0x22b0) & 0x801) != 0) {
      in_ECX[0x52] = in_ECX[0x52] + 1;
      iVar5 = (*DAT_102230b0)(5,9,0x3e19999a,0x40000000);
      iVar5 = (*DAT_102230b0)(5,9,(float)iVar5);
      FUN_10119de0(*(int *)(in_ECX[0x58] + 4) + 8,(float)iVar5);
      iVar5 = (*DAT_102230b0)(0,2);
      if (iVar5 == 2) {
        iVar5 = (*DAT_102230b0)(0,0xf);
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),0,
                     "weapons/mobile/punch_swing.wav",0x3f800000,0x3f4ccccd,0,iVar5 + 0x5a);
      }
    }
    if (in_ECX[0x51] <= in_ECX[0x52]) {
      (**(code **)(*in_ECX + 0x17c))();
    }
  }
  if (in_ECX[0x50] == 1) {
    if ((in_ECX[0x4a] == 0) ||
       (fVar7 = *DAT_10223188, fVar7 < (float)in_ECX[0x4b] || fVar7 == (float)in_ECX[0x4b])) {
      if (((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b]) &&
         (in_ECX[0x4a] == 0)) {
        in_ECX[0x50] = 2;
        (**(code **)(*in_ECX + 0x178))();
      }
    }
    else {
      in_ECX[0x73] = (int)(fVar7 + 0.33);
      in_ECX[0x76] = (int)(*DAT_10223188 + 0.35);
      fVar7 = *DAT_10223188;
      in_ECX[0x4a] = 0;
      in_ECX[0x4b] = (int)(fVar7 + 0.33);
      (**(code **)(*in_ECX + 0x198))(0x10,1,0);
    }
  }
  fVar7 = *(float *)(*(int *)(in_ECX[0x58] + 4) + 0x24);
  fVar1 = *(float *)(*(int *)(in_ECX[0x58] + 4) + 0x20);
  dVar8 = (double)(fVar1 * fVar1 + fVar7 * fVar7);
  if (dVar8 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar8 = SQRT(dVar8);
  }
  fVar7 = (float)dVar8;
  if ((((in_ECX[0x7c] == 0) && (in_ECX[0x50] == 0)) && (in_ECX[0x4a] != 2)) &&
     ((float)in_ECX[0x73] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x73])) {
    iVar5 = FUN_100f5da0();
    if (((iVar5 == 0) || ((char)in_ECX[0x5e] != '\0')) ||
       (*DAT_10223188 < (float)in_ECX[0x75] || *DAT_10223188 == (float)in_ECX[0x75])) {
      if (in_ECX[0x4a] == 5) {
        (**(code **)(*in_ECX + 0x198))(0x10,1,0);
        uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                                *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
        fVar6 = (float10)FUN_1000f390(uVar4);
        in_ECX[0x73] = (int)((float)fVar6 + *DAT_10223188);
        fVar1 = *DAT_10223188;
        in_ECX[0x4a] = 0;
        in_ECX[0x76] = (int)((float)fVar6 + fVar1);
      }
    }
    else if (in_ECX[0x4a] == 0) {
      in_ECX[0x4a] = 5;
      (**(code **)(*in_ECX + 0x198))(0xe,1,0);
      uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                              *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar6 = (float10)FUN_1000f390(uVar4);
      in_ECX[0x73] = (int)((float)fVar6 * 0.5 + *DAT_10223188);
      in_ECX[0x4b] = (int)((float)fVar6 + *DAT_10223188);
    }
    if (((0.0 < fVar7) && ((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8) & 0x40000) != 0)) &&
       ((in_ECX[0x4a] != 5 && (in_ECX[0x4a] != 1)))) {
      in_ECX[0x4a] = 1;
      (**(code **)(*in_ECX + 0x198))(0xe,1,0);
      uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                              *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar6 = (float10)FUN_1000f390(uVar4);
      fVar1 = (float)fVar6;
      fVar3 = fVar1 * 0.5 + *DAT_10223188;
      in_ECX[0x74] = (int)fVar3;
      in_ECX[0x73] = (int)fVar3;
      in_ECX[0x4b] = (int)(fVar1 + *DAT_10223188);
      in_ECX[0x76] = (int)(fVar1 * 0.5 + *DAT_10223188);
    }
    iVar5 = in_ECX[0x58];
    iVar2 = *(int *)(iVar5 + 4);
    if (((((*(uint *)(iVar2 + 0x1a8) & 0x40000) != 0) && (0.0 < fVar7)) && (in_ECX[0x4a] != 5)) &&
       ((in_ECX[0x4a] == 1 &&
        ((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b])))) {
      dVar8 = (double)(*(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                      *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24));
      if (dVar8 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar8 = SQRT(dVar8);
      }
      if ((float)dVar8 != 0.0) {
        (**(code **)(*in_ECX + 0x198))(0xf,1,0);
        uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                                *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
        fVar6 = (float10)FUN_1000f390(uVar4);
        iVar5 = in_ECX[0x58];
        in_ECX[0x4b] = (int)((float)fVar6 + *DAT_10223188);
      }
    }
    if ((((*(uint *)(*(int *)(iVar5 + 4) + 0x1a8) & 0x40000) == 0) || (fVar7 <= 0.0)) &&
       (((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b] &&
        ((in_ECX[0x4a] != 5 && (in_ECX[0x4a] == 1)))))) {
      (**(code **)(*in_ECX + 0x198))(0x10,1,0);
      uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                              *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar6 = (float10)FUN_1000f390(uVar4);
      fVar7 = (float)fVar6 + *DAT_10223188;
      in_ECX[0x74] = (int)fVar7;
      in_ECX[0x73] = (int)fVar7;
      fVar7 = *DAT_10223188;
      in_ECX[0x4a] = 0;
      in_ECX[0x76] = (int)((float)fVar6 + fVar7);
    }
  }
  FUN_1011d560();
  return;
}

