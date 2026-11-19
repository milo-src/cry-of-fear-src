// rea decompile_all
// name: FUN_1006d3e0
// address: 0x1006d3e0
// body: available
// range: 0x1006d3e0-0x1006dc81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006d3e0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  float10 fVar5;
  float fVar6;
  double dVar7;
  char *pcVar8;
  double local_18;
  undefined4 local_10;
  
  if ((((in_ECX[0x72] != 0) && ((*(byte *)(in_ECX[0x58] + 0x22b0) & 1) != 0)) &&
      (*(int *)(in_ECX[1] + 0x24c) == 0)) && (0 < in_ECX[0x79])) {
    *(undefined4 *)(in_ECX[1] + 0x24c) = 1;
  }
  if (in_ECX[0x50] == 2) {
    local_18 = 0.0;
    local_10 = 0;
    FUN_10119c00(in_ECX[0x58],&local_18,0x3f000000,0x3f000000,0x80,0);
    if ((*(uint *)(in_ECX[0x58] + 0x22b0) & 0x801) != 0) {
      in_ECX[0x52] = in_ECX[0x52] + 1;
      iVar3 = (*DAT_102230b0)(5,9,0x3e19999a,0x40000000);
      iVar3 = (*DAT_102230b0)(5,9,(float)iVar3);
      FUN_10119de0(*(int *)(in_ECX[0x58] + 4) + 8,(float)iVar3);
      iVar3 = (*DAT_102230b0)(0,2);
      if (iVar3 == 2) {
        iVar3 = (*DAT_102230b0)(0,0xf);
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),0,
                     "weapons/mobile/punch_swing.wav",0x3f800000,0x3f4ccccd,0,iVar3 + 0x5a);
      }
    }
    if (in_ECX[0x51] <= in_ECX[0x52]) {
      (**(code **)(*in_ECX + 0x17c))();
    }
  }
  if (in_ECX[0x50] == 1) {
    if ((in_ECX[0x4a] == 0) ||
       (fVar6 = *DAT_10223188, fVar6 < (float)in_ECX[0x4b] || fVar6 == (float)in_ECX[0x4b])) {
      if (((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b]) &&
         (in_ECX[0x4a] == 0)) {
        in_ECX[0x50] = 2;
        (**(code **)(*in_ECX + 0x178))();
      }
    }
    else {
      in_ECX[0x73] = (int)(fVar6 + 0.33);
      in_ECX[0x76] = (int)(*DAT_10223188 + 0.35);
      fVar6 = *DAT_10223188;
      in_ECX[0x4a] = 0;
      in_ECX[0x4b] = (int)(fVar6 + 0.33);
      (**(code **)(*in_ECX + 0x198))(10,1,0);
    }
  }
  if ((((((char)in_ECX[0x69] != '\0') && (in_ECX[0x72] == 0)) &&
       ((*(char *)(in_ECX[0x58] + 0x1ee8) == '\0' &&
        (((fVar6 = *DAT_10223188, *(float *)(in_ECX[0x58] + 0x1ee4) <= fVar6 &&
          ((float)in_ECX[0x73] <= fVar6)) && ((float)in_ECX[0x74] <= fVar6)))))) &&
      (((float)in_ECX[0x75] <= fVar6 && (in_ECX[0x4a] == 0)))) && (in_ECX[0x50] == 0)) {
    if ((char)in_ECX[0x5e] == '\0') {
      *(undefined1 *)(in_ECX + 0x69) = 0;
      (**(code **)(*in_ECX + 0x1c0))();
    }
    else {
      *(undefined1 *)(in_ECX + 0x5e) = 0;
      (**(code **)(*in_ECX + 0x130))();
    }
  }
  local_18 = 0.5;
  if ((*DAT_10223188 < (float)in_ECX[0x76] || *DAT_10223188 == (float)in_ECX[0x76]) ||
     (in_ECX[0x72] == 0)) goto LAB_1006d857;
  iVar3 = in_ECX[1];
  if (*(int *)(iVar3 + 0x24c) == 0) {
    if ((in_ECX[0x79] != 5) && (*(int *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4) != 0)) {
      (**(code **)(*in_ECX + 0x1c0))();
      goto LAB_1006d857;
    }
    if (*(int *)(iVar3 + 0x248) != 0) {
      (**(code **)(*in_ECX + 0x198))(5,1);
      pcVar8 = "shotgun_reload_endempty";
      dVar7 = (double)*DAT_10223188 + 0.6;
      goto LAB_1006d7f9;
    }
    FUN_100ea240("shotgun_reloadend",0);
    (**(code **)(*in_ECX + 0x198))(4,1,0);
    in_ECX[0x73] = (int)(float)((double)*DAT_10223188 + local_18);
  }
  else {
    if (*(int *)(iVar3 + 0x248) == 0) {
      (**(code **)(*in_ECX + 0x198))(4,1,0);
      pcVar8 = "shotgun_reload_end";
      dVar7 = (double)*DAT_10223188 + local_18;
    }
    else {
      (**(code **)(*in_ECX + 0x198))(5);
      pcVar8 = "shotgun_reload_endempty";
      dVar7 = (double)*DAT_10223188 + 0.6;
    }
LAB_1006d7f9:
    in_ECX[0x73] = (int)(float)dVar7;
    FUN_100ea240(pcVar8,0);
  }
  in_ECX[0x4a] = 0;
  *(undefined4 *)(in_ECX[1] + 0x248) = 0;
  in_ECX[0x72] = 0;
  in_ECX[0x76] = (int)(*DAT_10223188 + 1.0);
  *(undefined4 *)(in_ECX[1] + 0x24c) = 0;
LAB_1006d857:
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
  if ((((in_ECX[0x7e] == 0) && (in_ECX[0x50] == 0)) && (in_ECX[0x4a] != 2)) &&
     ((float)in_ECX[0x73] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x73])) {
    iVar3 = FUN_100f5da0();
    if (((iVar3 == 0) || ((char)in_ECX[0x5e] != '\0')) ||
       (*DAT_10223188 < (float)in_ECX[0x75] || *DAT_10223188 == (float)in_ECX[0x75])) {
      if (in_ECX[0x4a] == 5) {
        (**(code **)(*in_ECX + 0x198))(10,1,0);
        uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                                *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
        fVar5 = (float10)FUN_1000f390(uVar4);
        in_ECX[0x73] = (int)(*DAT_10223188 + (float)fVar5);
        fVar1 = *DAT_10223188;
        in_ECX[0x4a] = 0;
        in_ECX[0x76] = (int)(fVar1 + (float)fVar5);
      }
    }
    else if (in_ECX[0x4a] == 0) {
      in_ECX[0x4a] = 5;
      (**(code **)(*in_ECX + 0x198))(8,1,0);
      uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                              *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar5 = (float10)FUN_1000f390(uVar4);
      in_ECX[0x73] = (int)(float)((double)(float)fVar5 * local_18 + (double)*DAT_10223188);
      in_ECX[0x4b] = (int)(*DAT_10223188 + (float)fVar5);
    }
    if (((0.0 < fVar6) && ((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8) & 0x40000) != 0)) &&
       ((in_ECX[0x4a] != 5 && (in_ECX[0x4a] != 1)))) {
      in_ECX[0x4a] = 1;
      (**(code **)(*in_ECX + 0x198))(8,1,0);
      uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                              *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar5 = (float10)FUN_1000f390(uVar4);
      in_ECX[0x73] = (int)(float)((double)(float)fVar5 * local_18 + (double)*DAT_10223188);
      in_ECX[0x4b] = (int)(*DAT_10223188 + (float)fVar5);
    }
    iVar3 = in_ECX[0x58];
    iVar2 = *(int *)(iVar3 + 4);
    if (((((*(uint *)(iVar2 + 0x1a8) & 0x40000) != 0) && (0.0 < fVar6)) && (in_ECX[0x4a] != 5)) &&
       ((in_ECX[0x4a] == 1 &&
        ((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b])))) {
      dVar7 = (double)(*(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                      *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24));
      if (dVar7 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      if ((float)dVar7 != 0.0) {
        (**(code **)(*in_ECX + 0x198))(9,1,0);
        uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                                *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
        fVar5 = (float10)FUN_1000f390(uVar4);
        iVar3 = in_ECX[0x58];
        in_ECX[0x4b] = (int)(*DAT_10223188 + (float)fVar5);
      }
    }
    if ((((*(uint *)(*(int *)(iVar3 + 4) + 0x1a8) & 0x40000) == 0) || (fVar6 <= 0.0)) &&
       (((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b] &&
        ((in_ECX[0x4a] != 5 && (in_ECX[0x4a] == 1)))))) {
      (**(code **)(*in_ECX + 0x198))(10,1,0);
      uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                              *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar5 = (float10)FUN_1000f390(uVar4);
      fVar6 = *DAT_10223188;
      in_ECX[0x4a] = 0;
      in_ECX[0x73] = (int)(fVar6 + (float)fVar5);
    }
  }
  FUN_1011d560();
  return;
}

