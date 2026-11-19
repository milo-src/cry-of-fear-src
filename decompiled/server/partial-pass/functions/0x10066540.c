// rea decompile_all
// name: FUN_10066540
// address: 0x10066540
// body: available
// range: 0x10066540-0x10066f50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066540(void)

{
  float fVar1;
  CRifle CVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  CRifle *in_ECX;
  float10 fVar6;
  float fVar7;
  double dVar8;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar4 = *(int *)(in_ECX + 0x160);
  if (iVar4 == 0) {
LAB_10066643:
    if (iVar4 != 0) {
LAB_1006664b:
      if (in_ECX[0x106] == (CRifle)0x0) goto LAB_10066654;
      iVar3 = *(int *)(in_ECX + 0x1f8);
      if (iVar3 == 1) {
        if (*DAT_10223188 < *(float *)(in_ECX + 0x1fc) ||
            *DAT_10223188 == *(float *)(in_ECX + 0x1fc)) goto LAB_1006678c;
        *(undefined4 *)(in_ECX + 0x1f8) = 2;
        *(float *)(in_ECX + 0x1fc) = *DAT_10223188 + 0.33;
        FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c),1,
                     "weapons/rifle/rifle_cock_back.wav",0x3f800000,0x3f4ccccd,0,100);
        FUN_100f91b0(0,0,0x41700000);
        iVar3 = *(int *)(in_ECX + 0x1f8);
        iVar4 = *(int *)(in_ECX + 0x160);
      }
      if ((iVar3 == 2) &&
         (*(float *)(in_ECX + 0x1fc) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x1fc)
         )) {
        *(undefined4 *)(in_ECX + 0x1f8) = 0;
        FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c),1,
                     "weapons/rifle/rifle_cock_forward.wav",0x3f800000,0x3f4ccccd,0,100);
        FUN_100f91b0(0,0,0xc1700000);
      }
    }
  }
  else {
    if (in_ECX[0x106] != (CRifle)0x0) {
      if (((((*(uint *)(*(int *)(iVar4 + 4) + 0x184) & 0x1000) != 0) &&
           (1.0 <= *(float *)(iVar4 + 0x21f0))) && (*(char *)(iVar4 + 0x3bc) == '\0')) &&
         (*(float *)(iVar4 + 0x3c0) <= *DAT_10223188 && *DAT_10223188 != *(float *)(iVar4 + 0x3c0)))
      {
        (*DAT_10223000)(8,DAT_102266c4,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
        (*DAT_10223008)(1);
        (*DAT_10223004)();
        *(undefined1 *)(*(int *)(in_ECX + 0x160) + 0x3bc) = 1;
        *(float *)(*(int *)(in_ECX + 0x160) + 0x3c0) = *DAT_10223188 + 1.0;
        FUN_100fc9f0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c),2,
                     "player/vocal/breathing/hold_breath.wav",0x3f800000,0x3f4ccccd,0,100);
        iVar4 = *(int *)(in_ECX + 0x160);
        goto LAB_10066643;
      }
      goto LAB_1006664b;
    }
LAB_10066654:
    if (0 < *(int *)(in_ECX + 0x1f8)) {
      *(undefined4 *)(in_ECX + 0x1f8) = 0;
    }
  }
LAB_1006678c:
  if ((*(int *)(in_ECX + 0x200) != 0) &&
     (*(float *)(in_ECX + 0x204) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x204))) {
    if (*(int *)(in_ECX + 0x200) == 2) {
      *(int *)(in_ECX + 0x1e4) = *(int *)(in_ECX + 0x1e4) + -1;
    }
    *(undefined4 *)(in_ECX + 0x200) = 0;
    CRifle::RifleEjectBrass(in_ECX);
  }
  if (*(int *)(in_ECX + 0x140) == 2) {
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    FUN_10119c00(*(undefined4 *)(in_ECX + 0x160),&uStack_14,0x3f000000,0x3f000000,0x80,0);
    iVar4 = *(int *)(in_ECX + 0x160);
    if ((*(uint *)(iVar4 + 0x22b0) & 0x801) != 0) {
      *(int *)(in_ECX + 0x148) = *(int *)(in_ECX + 0x148) + 1;
      iVar3 = (*DAT_102230b0)(5,9,0x3e19999a,0x40000000);
      iVar3 = (*DAT_102230b0)(5,9,(float)iVar3);
      FUN_10119de0(*(int *)(iVar4 + 4) + 8,(float)iVar3);
      iVar4 = (*DAT_102230b0)(0,2);
      if (iVar4 == 2) {
        iVar4 = (*DAT_102230b0)(0,0xf);
        FUN_100fc9f0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c),0,
                     "weapons/mobile/punch_swing.wav",0x3f800000,0x3f4ccccd,0,iVar4 + 0x5a);
      }
    }
    if (*(int *)(in_ECX + 0x144) <= *(int *)(in_ECX + 0x148)) {
      (**(code **)(*(int *)in_ECX + 0x17c))();
    }
  }
  if (*(int *)(in_ECX + 0x140) == 1) {
    if ((*(int *)(in_ECX + 0x128) == 0) ||
       (fVar7 = *DAT_10223188, fVar7 < *(float *)(in_ECX + 300) || fVar7 == *(float *)(in_ECX + 300)
       )) {
      if ((*(float *)(in_ECX + 300) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 300))
         && (*(int *)(in_ECX + 0x128) == 0)) {
        *(undefined4 *)(in_ECX + 0x140) = 2;
        (**(code **)(*(int *)in_ECX + 0x178))();
      }
    }
    else {
      *(float *)(in_ECX + 0x1cc) = fVar7 + 0.33;
      *(float *)(in_ECX + 0x1d8) = *DAT_10223188 + 0.35;
      fVar7 = *DAT_10223188;
      *(undefined4 *)(in_ECX + 0x128) = 0;
      *(float *)(in_ECX + 300) = fVar7 + 0.33;
      (**(code **)(*(int *)in_ECX + 0x198))(0xb,1,0);
    }
  }
  if ((in_ECX[0x106] != (CRifle)0x0) && (DAT_10226477 != '\0')) {
    in_ECX[0x106] = (CRifle)0x0;
    (**(code **)(*(int *)in_ECX + 0x198))(8,1,0);
    CRifle::PostZoom(in_ECX);
    iVar4 = *(int *)(in_ECX + 0x160);
    if (*(char *)(iVar4 + 0x3bc) != '\0') {
      *(undefined1 *)(iVar4 + 0x3bc) = 0;
      (*DAT_10223000)(8,DAT_102266c4,0,
                      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c));
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      FUN_100fc9f0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c),2,
                   "player/vocal/breathing/release_breath.wav",0x3f800000,0x3f4ccccd,0,100);
      iVar4 = *(int *)(in_ECX + 0x160);
    }
    (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
    (*DAT_1022301c)(0x44268000);
    (*DAT_10223008)(0);
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x274) = 0x42b40000;
  }
  if (in_ECX[0x208] != (CRifle)0x0) {
    (**(code **)(*(int *)in_ECX + 0x1c0))();
  }
  CVar2 = in_ECX[0x104];
  if (((CVar2 != (CRifle)0x0) && ((*(byte *)(*(int *)(in_ECX + 0x160) + 0x22b0) & 1) != 0)) &&
     (in_ECX[0x105] == (CRifle)0x0)) {
    in_ECX[0x105] = (CRifle)0x1;
  }
  iVar4 = *(int *)(in_ECX + 0x128);
  if ((iVar4 == 2) && (CVar2 == (CRifle)0x0)) {
    *(undefined4 *)(in_ECX + 0x128) = 0;
    iVar4 = 0;
  }
  fVar7 = *(float *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x24);
  fVar1 = *(float *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20);
  dVar8 = (double)(fVar1 * fVar1 + fVar7 * fVar7);
  if (dVar8 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar8 = SQRT(dVar8);
  }
  fVar7 = (float)dVar8;
  if (((CVar2 == (CRifle)0x0) && (iVar4 != 2)) &&
     (*(float *)(in_ECX + 0x1cc) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x1cc))) {
    iVar4 = FUN_100f5da0();
    if (((iVar4 == 0) || (in_ECX[0x178] != (CRifle)0x0)) ||
       (*DAT_10223188 < *(float *)(in_ECX + 0x1d4) || *DAT_10223188 == *(float *)(in_ECX + 0x1d4)))
    {
      if ((*(int *)(in_ECX + 0x128) == 5) && (in_ECX[0x104] == (CRifle)0x0)) {
        (**(code **)(*(int *)in_ECX + 0x198))(0x15,1,0);
        uVar5 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),
                                *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x21c));
        fVar6 = (float10)FUN_1000f390(uVar5);
        *(float *)(in_ECX + 0x1cc) = (float)fVar6 + *DAT_10223188;
        fVar1 = *DAT_10223188;
        *(undefined4 *)(in_ECX + 0x128) = 0;
        *(float *)(in_ECX + 0x1d8) = (float)fVar6 + fVar1;
      }
    }
    else if (*(int *)(in_ECX + 0x128) == 0) {
      *(undefined4 *)(in_ECX + 0x128) = 5;
      (**(code **)(*(int *)in_ECX + 0x198))(0x14,1,0);
      uVar5 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),
                              *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x21c));
      fVar6 = (float10)FUN_1000f390(uVar5);
      *(float *)(in_ECX + 0x1cc) = (float)fVar6 + *DAT_10223188;
      *(float *)(in_ECX + 300) = (float)fVar6 + *DAT_10223188;
    }
    if (((0.0 < fVar7) && (in_ECX[0x104] == (CRifle)0x0)) &&
       (((*(uint *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x1a8) & 0x40000) != 0 &&
        ((*(int *)(in_ECX + 0x128) != 5 && (*(int *)(in_ECX + 0x128) != 1)))))) {
      *(undefined4 *)(in_ECX + 0x128) = 1;
      (**(code **)(*(int *)in_ECX + 0x198))(9,1,0);
      uVar5 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),
                              *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x21c));
      fVar6 = (float10)FUN_1000f390(uVar5);
      *(float *)(in_ECX + 0x1cc) = (float)fVar6 + *DAT_10223188;
      *(float *)(in_ECX + 300) = (float)fVar6 + *DAT_10223188;
    }
    if (in_ECX[0x104] == (CRifle)0x0) {
      iVar4 = *(int *)(*(int *)(in_ECX + 0x160) + 4);
      if (((((*(uint *)(iVar4 + 0x1a8) & 0x40000) != 0) && (0.0 < fVar7)) &&
          (*(int *)(in_ECX + 0x128) != 5)) &&
         ((*(int *)(in_ECX + 0x128) == 1 &&
          (*(float *)(in_ECX + 300) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 300))))
         ) {
        dVar8 = (double)(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                        *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24));
        if (dVar8 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar8 = SQRT(dVar8);
        }
        if ((float)dVar8 != 0.0) {
          (**(code **)(*(int *)in_ECX + 0x198))(10,1,0);
          uVar5 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),
                                  *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x21c));
          fVar6 = (float10)FUN_1000f390(uVar5);
          *(float *)(in_ECX + 300) = (float)fVar6 + *DAT_10223188;
          if (in_ECX[0x104] != (CRifle)0x0) goto LAB_10066f43;
        }
      }
      if ((((*(uint *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x1a8) & 0x40000) == 0) ||
          (fVar7 <= 0.0)) &&
         ((*(float *)(in_ECX + 300) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 300) &&
          ((*(int *)(in_ECX + 0x128) != 5 && (*(int *)(in_ECX + 0x128) == 1)))))) {
        (**(code **)(*(int *)in_ECX + 0x198))(0xb,1,0);
        uVar5 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),
                                *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x21c));
        fVar6 = (float10)FUN_1000f390(uVar5);
        *(float *)(in_ECX + 0x1cc) = (float)fVar6 + *DAT_10223188;
        fVar7 = *DAT_10223188;
        *(undefined4 *)(in_ECX + 0x128) = 0;
        *(float *)(in_ECX + 0x1d8) = (float)fVar6 + fVar7;
      }
    }
  }
LAB_10066f43:
  FUN_1011d560();
  return;
}

