// rea decompile_all
// name: FUN_1003df70
// address: 0x1003df70
// body: available
// range: 0x1003df70-0x1003e778 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003df70(void)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  float10 fVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar10;
  
  iVar6 = in_ECX[0x58];
  iVar4 = *(int *)(iVar6 + 4);
  dVar9 = (double)(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                  *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24));
  if (dVar9 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar9 = SQRT(dVar9);
  }
  fVar8 = (float)dVar9;
  if (((DAT_10226477 != '\0') && (iVar6 != 0)) && (*(int *)(in_ECX[1] + 0x248) == 1)) {
    FUN_100fc9f0(*(undefined4 *)(iVar4 + 0x20c),1,"weapons/flare/flare_burn.wav",0,0,0x20,100);
    in_ECX[0x7f] = (int)*DAT_10223188;
  }
  if (((in_ECX[0x7c] == 0) && (in_ECX[0x50] == 0)) &&
     ((in_ECX[0x4a] != 2 &&
      ((float)in_ECX[0x73] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x73])))) {
    iVar6 = FUN_100f5da0();
    if (iVar6 == 0) {
      if (in_ECX[0x4a] == 5) {
        if (*(int *)(in_ECX[1] + 0x248) == 1) {
          uVar10 = 0x1e;
        }
        else {
          uVar10 = 0x1c;
        }
        (**(code **)(*in_ECX + 0x198))(uVar10,1,0);
        uVar10 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                                 *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
        fVar7 = (float10)FUN_1000f390(uVar10);
        in_ECX[0x73] = (int)(*DAT_10223188 + (float)fVar7);
        fVar3 = *DAT_10223188;
        in_ECX[0x4a] = 0;
        in_ECX[0x76] = (int)(fVar3 + (float)fVar7);
      }
    }
    else if (in_ECX[0x4a] == 0) {
      in_ECX[0x4a] = 5;
      if (*(int *)(in_ECX[1] + 0x248) == 1) {
        uVar10 = 0x1d;
      }
      else {
        uVar10 = 0x1b;
      }
      (**(code **)(*in_ECX + 0x198))(uVar10,1,0);
      uVar10 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                               *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar7 = (float10)FUN_1000f390(uVar10);
      in_ECX[0x73] = (int)((float)fVar7 * 0.5 + *DAT_10223188);
      in_ECX[0x4b] = (int)(*DAT_10223188 + (float)fVar7);
    }
    if (((0.0 < fVar8) && ((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8) & 0x40000) != 0)) &&
       ((in_ECX[0x4a] != 5 && (in_ECX[0x4a] != 1)))) {
      in_ECX[0x4a] = 1;
      if (*(int *)(in_ECX[1] + 0x248) == 1) {
        uVar10 = 0xc;
      }
      else {
        uVar10 = 9;
      }
      (**(code **)(*in_ECX + 0x198))(uVar10,1,0);
      uVar10 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                               *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      fVar7 = (float10)FUN_1000f390(uVar10);
      in_ECX[0x73] = (int)((float)fVar7 * 0.5 + *DAT_10223188);
      in_ECX[0x4b] = (int)(*DAT_10223188 + (float)fVar7);
    }
    iVar6 = in_ECX[0x58];
    iVar4 = *(int *)(iVar6 + 4);
    if (((((*(uint *)(iVar4 + 0x1a8) & 0x40000) != 0) && (0.0 < fVar8)) && (in_ECX[0x4a] != 5)) &&
       ((in_ECX[0x4a] == 1 &&
        ((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b])))) {
      dVar9 = (double)(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                      *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24));
      if (dVar9 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar9 = SQRT(dVar9);
      }
      if ((float)dVar9 != 0.0) {
        if (*(int *)(in_ECX[1] + 0x248) == 1) {
          uVar10 = 0xd;
        }
        else {
          uVar10 = 10;
        }
        (**(code **)(*in_ECX + 0x198))(uVar10,1,0);
        uVar10 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                                 *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
        fVar7 = (float10)FUN_1000f390(uVar10);
        iVar6 = in_ECX[0x58];
        in_ECX[0x4b] = (int)(*DAT_10223188 + (float)fVar7);
      }
    }
    if ((((*(uint *)(*(int *)(iVar6 + 4) + 0x1a8) & 0x40000) == 0) || (fVar8 <= 0.0)) &&
       (((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b] &&
        ((in_ECX[0x4a] != 5 && (in_ECX[0x4a] == 1)))))) {
      if (*(int *)(in_ECX[1] + 0x248) == 1) {
        uVar10 = 0xe;
      }
      else {
        uVar10 = 0xb;
      }
      (**(code **)(*in_ECX + 0x198))(uVar10,1,0);
      uVar10 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                               *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
      FUN_1000f390(uVar10);
      in_ECX[0x73] = (int)(*DAT_10223188 + 0.33);
      fVar8 = *DAT_10223188;
      in_ECX[0x4a] = 0;
      in_ECX[0x76] = (int)(fVar8 + 0.35);
    }
  }
  pfVar1 = (float *)(in_ECX[1] + 0x208);
  if (((*pfVar1 <= *DAT_10223188 && *DAT_10223188 != *pfVar1) && (*(int *)(in_ECX[1] + 0x248) == 1))
     && ((char)in_ECX[0x7e] == '\0')) {
    *(uint *)(in_ECX[0x58] + 0x5d0) = *(uint *)(in_ECX[0x58] + 0x5d0) & 0xffffffef;
    *(undefined4 *)(in_ECX[1] + 0x248) = 2;
    *(undefined4 *)(in_ECX[1] + 0x114) = 0;
    FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),1,
                 "weapons/flare/flare_burn.wav",0,0,0x20,100);
    (*DAT_10223000)(8,DAT_10226660,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    (*DAT_10223000)(1,DAT_10226490,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
    uVar10 = (*DAT_10223064)(*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223010)(uVar10);
    (*DAT_10223020)("aurora/flare_extinguish.aur");
    (*DAT_10223008)(1);
    (*DAT_10223020)("models/weapons/flare/v_flare.mdl");
    (*DAT_10223010)(0);
    (*DAT_10223004)();
    iVar6 = in_ECX[0x58];
    if (*(char *)(iVar6 + 0x21ea) == '\0') {
      piVar2 = (int *)(iVar6 + 0x2540 + in_ECX[0x77] * 4);
      *piVar2 = *piVar2 + -1;
      iVar6 = in_ECX[0x58];
    }
    if (*(int *)(iVar6 + 0x2540 + in_ECX[0x77] * 4) < 0) {
      *(undefined4 *)(iVar6 + 0x2540 + in_ECX[0x77] * 4) = 0;
      iVar6 = in_ECX[0x58];
    }
    (*DAT_10223000)(1,DAT_102265b8,0,*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c));
    (*DAT_10223008)(in_ECX[0x5a]);
    (*DAT_10223008)(*(undefined4 *)(&DAT_102318a4 + in_ECX[0x5a] * 0x2c));
    (*DAT_10223010)(*(undefined4 *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4));
    (*DAT_10223004)();
    in_ECX[0x48] = *(int *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4);
    if ((*(char *)((int)in_ECX + 0x1fa) == '\0') && ((char)in_ECX[0x7e] == '\0')) {
      (**(code **)(*in_ECX + 0x198))(0x10,1,0);
      in_ECX[0x1e] = (int)CFlare::Redeploy;
      (**(code **)(*in_ECX + 8))(0x3f800000);
      fVar8 = *DAT_10223188 + 1.5;
      *(float *)(in_ECX[0x58] + 0x308) = fVar8;
      in_ECX[0x76] = (int)fVar8;
      in_ECX[0x74] = (int)fVar8;
      in_ECX[0x73] = (int)fVar8;
    }
  }
  iVar6 = in_ECX[0x58];
  uVar5 = *(uint *)(iVar6 + 0x5d0);
  if (*(int *)(in_ECX[1] + 0x248) == 1) {
    if (((uVar5 & 0x10) == 0) && (*(char *)((int)in_ECX + 0x1f9) == '\0')) {
      *(uint *)(iVar6 + 0x5d0) = uVar5 | 0x10;
    }
    if (((float)in_ECX[0x7f] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x7f]) &&
       (DAT_10226477 == '\0')) {
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),1,
                   "weapons/flare/flare_burn.wav",0x3e99999a,0x3f4ccccd,0,100);
      in_ECX[0x7f] = (int)(*DAT_10223188 + 6.9);
      FUN_1011d560();
      return;
    }
  }
  else if ((uVar5 & 0x10) != 0) {
    *(uint *)(iVar6 + 0x5d0) = uVar5 & 0xffffffef;
  }
  FUN_1011d560();
  return;
}

