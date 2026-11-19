// rea decompile_all
// name: FUN_10114a20
// address: 0x10114a20
// body: available
// range: 0x10114a20-0x1011546d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10114a20(int param_1)

{
  uint *puVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float *pfVar5;
  int in_ECX;
  int iVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [8];
  float fStack_18;
  undefined1 auStack_14 [16];
  
  iVar2 = FUN_10118500();
  if (iVar2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
    (*DAT_1022303c)(1,"DEBUG: trigger_motion affects %s \"%s\":\n",
                    **(int **)(iVar2 + 4) + *(int *)(DAT_10223188 + 0x98),
                    (*(int **)(iVar2 + 4))[0x74] + *(int *)(DAT_10223188 + 0x98));
  }
  if (*(int *)(in_ECX + 0xdc) != 0) {
    if (*(int *)(in_ECX + 0xe0) == 0) {
      if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
        iVar6 = *(int *)(iVar2 + 4);
        (*DAT_1022303c)(1,"DEBUG: Set origin from %f %f %f ",(double)*(float *)(iVar6 + 8),
                        (double)*(float *)(iVar6 + 0xc),(double)*(float *)(iVar6 + 0x10));
      }
      puVar4 = (undefined8 *)FUN_100b8110(auStack_14);
      iVar6 = *(int *)(iVar2 + 4);
      *(undefined8 *)(iVar6 + 8) = *puVar4;
      fVar7 = *(float *)(puVar4 + 1);
    }
    else {
      if (*(int *)(in_ECX + 0xe0) != 1) goto LAB_10114c40;
      if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
        iVar6 = *(int *)(iVar2 + 4);
        (*DAT_1022303c)(1,"DEBUG: Set origin from %f %f %f ",(double)*(float *)(iVar6 + 8),
                        (double)*(float *)(iVar6 + 0xc),(double)*(float *)(iVar6 + 0x10));
      }
      pfVar3 = (float *)FUN_100b8240(auStack_14);
      iVar6 = *(int *)(iVar2 + 4);
      fVar7 = pfVar3[2] + *(float *)(iVar6 + 0x10);
      *(ulonglong *)(iVar6 + 8) =
           CONCAT44(pfVar3[1] + *(float *)(iVar6 + 0xc),*pfVar3 + *(float *)(iVar6 + 8));
      fStack_18 = fVar7;
    }
    *(float *)(iVar6 + 0x10) = fVar7;
    if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
      iVar6 = *(int *)(iVar2 + 4);
      (*DAT_1022303c)(1,"to %f %f %f\n",(double)*(float *)(iVar6 + 8),
                      (double)*(float *)(iVar6 + 0xc),(double)*(float *)(iVar6 + 0x10));
    }
    puVar1 = (uint *)(*(int *)(iVar2 + 4) + 0x1a8);
    *puVar1 = *puVar1 & 0xfffffdff;
  }
LAB_10114c40:
  if (*(int *)(in_ECX + 0xe4) != 0) {
    iVar6 = *(int *)(in_ECX + 0xe8);
    if (iVar6 == 0) {
      puVar4 = (undefined8 *)FUN_100b8240(auStack_14);
      uStack_38 = *puVar4;
      fStack_30 = *(float *)(puVar4 + 1);
      if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
        iVar6 = *(int *)(iVar2 + 4);
        (*DAT_1022303c)(1,"DEBUG: Set angles from %f %f %f ",(double)*(float *)(iVar6 + 0x50),
                        (double)*(float *)(iVar6 + 0x54),(double)*(float *)(iVar6 + 0x58));
      }
      puVar4 = (undefined8 *)FUN_1011a8d0(auStack_14,&uStack_38);
      iVar6 = *(int *)(iVar2 + 4);
      *(undefined8 *)(iVar6 + 0x50) = *puVar4;
      fVar7 = *(float *)(puVar4 + 1);
    }
    else if (iVar6 == 1) {
      puVar4 = (undefined8 *)FUN_100b8240(auStack_14);
      uStack_38 = *puVar4;
      fStack_30 = *(float *)(puVar4 + 1);
      if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
        iVar6 = *(int *)(iVar2 + 4);
        (*DAT_1022303c)(1,"DEBUG: Rotate angles from %f %f %f ",(double)*(float *)(iVar6 + 0x50),
                        (double)*(float *)(iVar6 + 0x54),(double)*(float *)(iVar6 + 0x58));
      }
      pfVar3 = (float *)FUN_1011a8d0(auStack_14,&uStack_38);
      iVar6 = *(int *)(iVar2 + 4);
      fVar7 = pfVar3[2] + *(float *)(iVar6 + 0x58);
      *(ulonglong *)(iVar6 + 0x50) =
           CONCAT44(pfVar3[1] + *(float *)(iVar6 + 0x54),*pfVar3 + *(float *)(iVar6 + 0x50));
      fStack_18 = fVar7;
    }
    else {
      if (iVar6 != 2) goto LAB_10114ebf;
      FUN_1011a590(&uStack_38,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe4));
      if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
        iVar6 = *(int *)(iVar2 + 4);
        (*DAT_1022303c)(1,"DEBUG: Rotate angles from %f %f %f ",(double)*(float *)(iVar6 + 0x50),
                        (double)*(float *)(iVar6 + 0x54),(double)*(float *)(iVar6 + 0x58));
      }
      iVar6 = *(int *)(iVar2 + 4);
      fVar7 = *(float *)(iVar6 + 0x58) + fStack_30;
      *(ulonglong *)(iVar6 + 0x50) =
           CONCAT44(*(float *)(iVar6 + 0x54) + uStack_38._4_4_,
                    *(float *)(iVar6 + 0x50) + (float)uStack_38);
      fStack_18 = fVar7;
    }
    *(float *)(iVar6 + 0x58) = fVar7;
    if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
      iVar6 = *(int *)(iVar2 + 4);
      (*DAT_1022303c)(1,"to %f %f %f\n",(double)*(float *)(iVar6 + 0x50),
                      (double)*(float *)(iVar6 + 0x54),(double)*(float *)(iVar6 + 0x58));
    }
  }
LAB_10114ebf:
  iVar6 = *(int *)(in_ECX + 0xec);
  if (iVar6 == 0) goto switchD_10114edc_default;
  switch(*(undefined4 *)(in_ECX + 0xf0)) {
  case 0:
    if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
      iVar6 = *(int *)(iVar2 + 4);
      (*DAT_1022303c)(1,"DEBUG: Set velocity from %f %f %f ",(double)*(float *)(iVar6 + 0x20),
                      (double)*(float *)(iVar6 + 0x24),(double)*(float *)(iVar6 + 0x28));
    }
    puVar4 = (undefined8 *)FUN_100b8240(auStack_14);
    iVar6 = *(int *)(iVar2 + 4);
    *(undefined8 *)(iVar6 + 0x20) = *puVar4;
    *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(puVar4 + 1);
    break;
  case 1:
    if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
      iVar6 = *(int *)(iVar2 + 4);
      (*DAT_1022303c)(1,"DEBUG: Set velocity from %f %f %f ",(double)*(float *)(iVar6 + 0x20),
                      (double)*(float *)(iVar6 + 0x24),(double)*(float *)(iVar6 + 0x28));
    }
    pfVar3 = (float *)FUN_100b8240(auStack_14);
    iVar6 = *(int *)(iVar2 + 4);
    fStack_18 = pfVar3[2] + *(float *)(iVar6 + 0x28);
    *(ulonglong *)(iVar6 + 0x20) =
         CONCAT44(pfVar3[1] + *(float *)(iVar6 + 0x24),*(float *)(iVar6 + 0x20) + *pfVar3);
    *(float *)(iVar6 + 0x28) = fStack_18;
    break;
  case 2:
    uVar11 = CONCAT44(*(int *)(DAT_10223188 + 0x98) + iVar6,param_1);
    uVar10 = CONCAT44(in_ECX,auStack_14);
    puVar4 = (undefined8 *)FUN_100b8240(auStack_14);
    uStack_38 = *puVar4;
    fStack_30 = *(float *)(puVar4 + 1);
    pfVar3 = (float *)FUN_1011a8d0(auStack_14,*(int *)(iVar2 + 4) + 0x20,uVar10,uVar11);
    pfVar5 = (float *)FUN_1011a8d0(auStack_20,&uStack_38);
    fStack_28 = pfVar3[1] + pfVar5[1];
    fStack_2c = *pfVar3 + *pfVar5;
    fStack_24 = pfVar5[2] + pfVar3[2];
    FUN_10119320(&fStack_2c);
    if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
      iVar6 = *(int *)(iVar2 + 4);
      (*DAT_1022303c)(1,"DEBUG: Rotate velocity from %f %f %f ",(double)*(float *)(iVar6 + 0x20),
                      (double)*(float *)(iVar6 + 0x24),(double)*(float *)(iVar6 + 0x28));
    }
    iVar6 = *(int *)(iVar2 + 4);
    dVar8 = (double)(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                     *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                    *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
    if (dVar8 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar8 = SQRT(dVar8);
    }
    fVar7 = (float)dVar8;
    fVar9 = fVar7 * *(float *)(DAT_10223188 + 0x28);
    goto LAB_10115258;
  case 3:
    FUN_1011a590(&uStack_38,*(int *)(DAT_10223188 + 0x98) + iVar6);
    pfVar3 = (float *)FUN_1011a8d0(auStack_14,*(int *)(iVar2 + 4) + 0x20);
    fStack_2c = (float)uStack_38 + *pfVar3;
    fStack_28 = uStack_38._4_4_ + pfVar3[1];
    fStack_24 = fStack_30 + pfVar3[2];
    FUN_10119320();
    if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
      iVar6 = *(int *)(iVar2 + 4);
      (*DAT_1022303c)(1,"DEBUG: Rotate velocity from %f %f %f ",(double)*(float *)(iVar6 + 0x20),
                      (double)*(float *)(iVar6 + 0x24),(double)*(float *)(iVar6 + 0x28));
    }
    iVar6 = *(int *)(iVar2 + 4);
    dVar8 = (double)(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                     *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                    *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
    if (dVar8 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar8 = SQRT(dVar8);
    }
    fVar7 = (float)dVar8;
    fVar9 = *(float *)(DAT_10223188 + 0x28) * fVar7;
LAB_10115258:
    fStack_18 = *(float *)(DAT_10223188 + 0x30) * fVar7;
    *(ulonglong *)(iVar6 + 0x20) = CONCAT44(*(float *)(DAT_10223188 + 0x2c) * fVar7,fVar9);
    *(float *)(iVar6 + 0x28) = fStack_18;
    *(uint *)(*(int *)(iVar2 + 4) + 0x28) = *(uint *)(*(int *)(iVar2 + 4) + 0x28) ^ 0x80000000;
    break;
  default:
    goto switchD_10114edc_default;
  }
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
    iVar6 = *(int *)(iVar2 + 4);
    (*DAT_1022303c)(1,"to %f %f %f\n",(double)*(float *)(iVar6 + 0x20),
                    (double)*(float *)(iVar6 + 0x24),(double)*(float *)(iVar6 + 0x28));
  }
switchD_10114edc_default:
  if (*(int *)(in_ECX + 0xf8) == 0) {
    FUN_1011a590(&uStack_38,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xf4));
    if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
      iVar6 = *(int *)(iVar2 + 4);
      (*DAT_1022303c)(1,"DEBUG: Set avelocity from %f %f %f ",(double)*(float *)(iVar6 + 0x5c),
                      (double)*(float *)(iVar6 + 0x60),(double)*(float *)(iVar6 + 100));
    }
    iVar6 = *(int *)(iVar2 + 4);
    *(undefined8 *)(iVar6 + 0x5c) = uStack_38;
    fVar7 = fStack_30;
  }
  else {
    if (*(int *)(in_ECX + 0xf8) != 1) {
      return;
    }
    FUN_1011a590(&uStack_38,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xf4));
    if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
      iVar6 = *(int *)(iVar2 + 4);
      (*DAT_1022303c)(1,"DEBUG: Set avelocity from %f %f %f ",(double)*(float *)(iVar6 + 0x5c),
                      (double)*(float *)(iVar6 + 0x60),(double)*(float *)(iVar6 + 100));
    }
    iVar6 = *(int *)(iVar2 + 4);
    fStack_18 = *(float *)(iVar6 + 100) + fStack_30;
    *(ulonglong *)(iVar6 + 0x5c) =
         CONCAT44(*(float *)(iVar6 + 0x60) + uStack_38._4_4_,
                  (float)uStack_38 + *(float *)(iVar6 + 0x5c));
    fVar7 = fStack_18;
  }
  *(float *)(iVar6 + 100) = fVar7;
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
    iVar2 = *(int *)(iVar2 + 4);
    (*DAT_1022303c)(1,"to %f %f %f\n",(double)*(float *)(iVar2 + 0x5c),
                    (double)*(float *)(iVar2 + 0x60),(double)*(float *)(iVar2 + 100));
  }
  return;
}

