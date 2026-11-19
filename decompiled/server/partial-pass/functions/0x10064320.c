// rea decompile_all
// name: FUN_10064320
// address: 0x10064320
// body: available
// range: 0x10064320-0x10064b80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064320(void)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  float10 fVar6;
  float fVar7;
  double dVar8;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((((char)in_ECX[0x7f] != '\0') && (*(char *)((int)in_ECX + 0x1fd) == '\0')) &&
     ((*(byte *)(in_ECX[0x58] + 0x22b0) & 1) != 0)) {
    *(undefined1 *)((int)in_ECX + 0x1fd) = 1;
  }
  if (in_ECX[0x50] == 2) {
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    FUN_10119c00(in_ECX[0x58],&local_14,0x3f000000,0x3f000000,0x80,0);
    if ((*(uint *)(in_ECX[0x58] + 0x22b0) & 0x801) != 0) {
      in_ECX[0x52] = in_ECX[0x52] + 1;
      iVar4 = (*DAT_102230b0)(5,9,0x3e19999a,0x40000000);
      iVar4 = (*DAT_102230b0)(5,9,(float)iVar4);
      FUN_10119de0(*(int *)(in_ECX[0x58] + 4) + 8,(float)iVar4);
      iVar4 = (*DAT_102230b0)(0,2);
      if (iVar4 == 2) {
        iVar4 = (*DAT_102230b0)(0,0xf);
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),0,
                     "weapons/mobile/punch_swing.wav",0x3f800000,0x3f4ccccd,0,iVar4 + 0x5a);
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
      (**(code **)(*in_ECX + 0x198))(0xe,1,0);
    }
  }
  if (((in_ECX[0x4a] == 0) && (in_ECX[0x50] == 0)) &&
     ((fVar7 = *DAT_10223188, (float)in_ECX[0x73] <= fVar7 && fVar7 != (float)in_ECX[0x73] &&
      (((((float)in_ECX[0x74] <= fVar7 && fVar7 != (float)in_ECX[0x74] &&
         ((float)in_ECX[0x75] <= fVar7 && fVar7 != (float)in_ECX[0x75])) &&
        (fVar6 = (float10)(*DAT_1022302c)("ironsights_toggle"), (float)fVar6 == 0.0)) &&
       (((char)in_ECX[0x5e] != '\0' &&
        (iVar4 = in_ECX[0x58],
        ((*(uint *)(*(int *)(iVar4 + 4) + 0x184) | *(uint *)(iVar4 + 0x22b4) |
         *(uint *)(iVar4 + 0x22b0)) & 0x40) == 0)))))))) {
    *(undefined1 *)(in_ECX + 0x5e) = 0;
    (**(code **)(*in_ECX + 0x130))();
  }
  if ((((char)in_ECX[0x69] != '\0') && (*(char *)(in_ECX[0x58] + 0x1ee8) == '\0')) &&
     (((fVar7 = *DAT_10223188, *(float *)(in_ECX[0x58] + 0x1ee4) <= fVar7 &&
       ((((float)in_ECX[0x73] <= fVar7 && ((float)in_ECX[0x74] <= fVar7)) &&
        ((float)in_ECX[0x75] <= fVar7)))) && ((in_ECX[0x4a] == 0 && (in_ECX[0x50] == 0)))))) {
    if ((char)in_ECX[0x5e] == '\0') {
      *(undefined1 *)(in_ECX + 0x69) = 0;
      (**(code **)(*in_ECX + 0x1c0))();
    }
    else {
      *(undefined1 *)(in_ECX + 0x5e) = 0;
      (**(code **)(*in_ECX + 0x130))();
    }
  }
  fVar7 = *(float *)(*(int *)(in_ECX[0x58] + 4) + 0x24);
  fVar2 = *(float *)(*(int *)(in_ECX[0x58] + 4) + 0x20);
  dVar8 = (double)(fVar2 * fVar2 + fVar7 * fVar7);
  if (dVar8 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar8 = SQRT(dVar8);
  }
  fVar7 = (float)dVar8;
  if (((in_ECX[0x7c] == 0) && (in_ECX[0x50] == 0)) &&
     ((in_ECX[0x4a] != 2 &&
      ((float)in_ECX[0x73] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x73])))) {
    iVar4 = FUN_100f5da0();
    if (((iVar4 == 0) || ((char)in_ECX[0x5e] != '\0')) ||
       (*DAT_10223188 < (float)in_ECX[0x75] || *DAT_10223188 == (float)in_ECX[0x75])) {
      if (in_ECX[0x4a] == 5) {
        uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                                *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
        fVar6 = (float10)FUN_1000f390(uVar5);
        (**(code **)(*in_ECX + 0x198))(0xe,1,0);
        in_ECX[0x73] = (int)(*DAT_10223188 + (float)fVar6);
        fVar2 = *DAT_10223188;
        in_ECX[0x4a] = 0;
        in_ECX[0x76] = (int)(fVar2 + (float)fVar6);
      }
    }
    else if (in_ECX[0x4a] == 0) {
      in_ECX[0x4a] = 5;
      (**(code **)(*in_ECX + 0x198))(0xc,1,0);
      uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                              *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar6 = (float10)FUN_1000f390(uVar5);
      in_ECX[0x73] = (int)((float)fVar6 * 0.5 + *DAT_10223188);
      in_ECX[0x4b] = (int)(*DAT_10223188 + (float)fVar6);
    }
    if (((0.0 < fVar7) && ((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8) & 0x40000) != 0)) &&
       ((in_ECX[0x4a] != 5 && (in_ECX[0x4a] != 1)))) {
      in_ECX[0x4a] = 1;
      (**(code **)(*in_ECX + 0x198))(0xc,1,0);
      uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                              *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar6 = (float10)FUN_1000f390(uVar5);
      in_ECX[0x73] = (int)(*DAT_10223188 + (float)fVar6);
      in_ECX[0x4b] = (int)(*DAT_10223188 + (float)fVar6);
    }
    iVar4 = in_ECX[0x58];
    iVar3 = *(int *)(iVar4 + 4);
    if ((((*(uint *)(iVar3 + 0x1a8) & 0x40000) != 0) && (0.0 < fVar7)) &&
       ((in_ECX[0x4a] != 5 &&
        ((in_ECX[0x4a] == 1 &&
         ((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b])))))) {
      dVar8 = (double)(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                      *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24));
      if (dVar8 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar8 = SQRT(dVar8);
      }
      if ((float)dVar8 != 0.0) {
        (**(code **)(*in_ECX + 0x198))(0xd,1,0);
        uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                                *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
        fVar6 = (float10)FUN_1000f390(uVar5);
        iVar4 = in_ECX[0x58];
        in_ECX[0x4b] = (int)(*DAT_10223188 + (float)fVar6);
      }
    }
    if (((((*(uint *)(*(int *)(iVar4 + 4) + 0x1a8) & 0x40000) == 0) || (fVar7 <= 0.0)) &&
        ((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b])) &&
       ((in_ECX[0x4a] != 5 && (in_ECX[0x4a] == 1)))) {
      (**(code **)(*in_ECX + 0x198))(0xe,1,0);
      uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                              *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar6 = (float10)FUN_1000f390(uVar5);
      in_ECX[0x73] = (int)(*DAT_10223188 + (float)fVar6);
      fVar7 = *DAT_10223188;
      in_ECX[0x4a] = 0;
      in_ECX[0x76] = (int)(fVar7 + (float)fVar6);
    }
  }
  if ((*(char *)((int)in_ECX + 0x1fe) != '\0') &&
     ((float)in_ECX[0x80] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x80])) {
    *(undefined1 *)((int)in_ECX + 0x1fe) = 0;
    if ((*(int *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4) != 0) && (in_ECX[0x79] < 5)) {
      in_ECX[0x79] = in_ECX[0x79] + 1;
      piVar1 = (int *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4);
      *piVar1 = *piVar1 + -1;
      FUN_100f5eb0();
      (*DAT_10223000)(1,DAT_102264e8,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
      (*DAT_10223008)(in_ECX[0x77]);
      iVar4 = *(int *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4);
      if (iVar4 < 0xfe) {
        if (iVar4 < 1) {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = 0xfe;
      }
      (*DAT_10223010)(iVar4);
      (*DAT_10223004)();
    }
  }
  FUN_1011d560();
  return;
}

