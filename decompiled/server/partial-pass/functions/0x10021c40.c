// rea decompile_all
// name: CBoat::BoatThink
// address: 0x10021c40
// body: available
// range: 0x10021c40-0x10022682 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBoat::BoatThink(void) */

void __thiscall CBoat::BoatThink(CBoat *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined *puVar6;
  char *pcVar7;
  float *pfVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  undefined4 uVar17;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [16];
  
                    /* 0x21c40  24  ?BoatThink@CBoat@@QAEXXZ */
  FUN_1000eda0(0);
  FUN_1000e7c0(1,&local_44,local_20);
  FUN_1000e7c0(2,&local_38,local_14);
  for (iVar3 = FUN_101186b0(0,*(int *)(this + 4) + 8,0x43960000); iVar3 != 0;
      iVar3 = FUN_101186b0(iVar3,*(int *)(this + 4) + 8,0x43960000)) {
    pcVar7 = "boat_exit";
    pbVar4 = (byte *)((int)DAT_10223188[0x26] + **(int **)(iVar3 + 4));
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_10021ce6:
        uVar5 = -(uint)bVar9 | 1;
        goto LAB_10021ceb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10021ce6;
      pbVar4 = pbVar4 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10021ceb:
    if (((uVar5 == 0) && (iVar3 != *(int *)(this + 0x114))) &&
       (iVar16 = *(int *)(this + 0x118), iVar16 != 0)) {
      *(int *)(this + 0x114) = iVar3;
      iVar2 = *(int *)(*(int *)(iVar3 + 4) + 0x1d8);
      if (iVar2 == 0) {
        puVar6 = &DAT_101aa6a8;
      }
      else {
        puVar6 = (undefined *)FUN_1011a8a0(&DAT_101aa690,(int)DAT_10223188[0x26] + iVar2,5,0);
        iVar16 = *(int *)(this + 0x118);
      }
      FUN_10119810(iVar16,puVar6);
    }
  }
  iVar3 = FUN_10119780(&local_44);
  if (((iVar3 != -3) && (iVar3 = FUN_10119780(&local_38), iVar3 != -3)) &&
     (*(float *)(*(int *)(this + 4) + 0x168) != 0.0)) {
    FUN_10023330(local_44,uStack_40,uStack_3c);
    FUN_10023330(local_38,uStack_34,uStack_30);
    *(undefined4 *)(*(int *)(this + 4) + 0x168) = 0;
  }
  iVar3 = FUN_10119780(&local_44);
  if (((iVar3 == -3) && (iVar3 = FUN_10119780(&local_38), iVar3 != -3)) &&
     (*(float *)(*(int *)(this + 4) + 0x168) != 1.0)) {
    FUN_10023330(local_44,uStack_40,uStack_3c);
    *(undefined4 *)(*(int *)(this + 4) + 0x168) = 0x3f800000;
  }
  iVar3 = FUN_10119780(&local_44);
  if (((iVar3 != -3) && (iVar3 = FUN_10119780(&local_38), iVar3 == -3)) &&
     (*(float *)(*(int *)(this + 4) + 0x168) != 2.0)) {
    FUN_10023330(local_38,uStack_34,uStack_30);
    *(undefined4 *)(*(int *)(this + 4) + 0x168) = 0x40000000;
  }
  iVar3 = FUN_10119780(&local_44);
  if (((iVar3 == -3) && (iVar3 = FUN_10119780(&local_38), iVar3 == -3)) &&
     (*(float *)(*(int *)(this + 4) + 0x168) != 3.0)) {
    FUN_10023330(local_44,uStack_40,uStack_3c);
    FUN_10023330(local_38,uStack_34,uStack_30);
    *(undefined4 *)(*(int *)(this + 4) + 0x168) = 0x40400000;
  }
  iVar3 = *(int *)(this + 4);
  if (*(int *)(this + 0x118) == 0) {
    if (*(int *)(iVar3 + 0x114) != 1) {
      *(undefined4 *)(iVar3 + 0x114) = 1;
    }
  }
  else if (*(int *)(iVar3 + 0x114) != 0) {
    *(undefined4 *)(iVar3 + 0x114) = 0;
  }
  iVar3 = *(int *)(this + 4);
  if ((2.0 < *(float *)(iVar3 + 0x60)) || (*(float *)(iVar3 + 0x60) < -2.0)) {
    if (*(int *)(iVar3 + 0x24c) == 1) {
      *(undefined4 *)(iVar3 + 0x24c) = 5;
      FUN_1000eb70(0,0xc2700000);
      iVar3 = *(int *)(this + 4);
    }
    if (*(int *)(iVar3 + 0x24c) != 2) goto LAB_1002204e;
    *(undefined4 *)(iVar3 + 0x24c) = 5;
    uVar17 = 0x42700000;
  }
  else {
    *(undefined4 *)(iVar3 + 0x24c) = 0;
    uVar17 = 0;
  }
  FUN_1000eb70(0,uVar17);
LAB_1002204e:
  if (*(float *)(this + 0x104) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x104)) {
    FUN_10119320(*(int *)(this + 4) + 0x50);
    iVar3 = *(int *)(this + 4);
    *(ulonglong *)(iVar3 + 0x20) =
         CONCAT44(*(float *)(iVar3 + 0x24) * 0.85,*(float *)(iVar3 + 0x20) * 0.85);
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) * 0.85;
    iVar3 = *(int *)(this + 4);
    fStack_48 = *(float *)(iVar3 + 100) * 0.85;
    *(ulonglong *)(iVar3 + 0x5c) =
         CONCAT44(*(float *)(iVar3 + 0x60) * 0.85,*(float *)(iVar3 + 0x5c) * 0.85);
    *(float *)(iVar3 + 100) = fStack_48;
    iVar3 = *(int *)(this + 4);
    dVar12 = (double)(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                      *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                     *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
    if (dVar12 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar12 = SQRT(dVar12);
    }
    fVar13 = (float)dVar12;
    if (70.0 < fVar13) {
      fStack_48 = 1.0;
      if (fVar13 == 0.0) {
        fVar14 = 0.0;
        fVar15 = 0.0;
      }
      else {
        fVar13 = 1.0 / fVar13;
        fVar14 = fVar13 * *(float *)(iVar3 + 0x20);
        fVar15 = fVar13 * *(float *)(iVar3 + 0x24);
        fStack_48 = fVar13 * *(float *)(iVar3 + 0x28);
      }
      fStack_48 = fStack_48 * 70.0;
      *(ulonglong *)(iVar3 + 0x20) = CONCAT44(fVar15 * 70.0,fVar14 * 70.0);
      *(float *)(iVar3 + 0x28) = fStack_48;
      iVar3 = *(int *)(this + 4);
    }
    dVar12 = (double)(*(float *)(iVar3 + 0x5c) * *(float *)(iVar3 + 0x5c) +
                      *(float *)(iVar3 + 0x60) * *(float *)(iVar3 + 0x60) +
                     *(float *)(iVar3 + 100) * *(float *)(iVar3 + 100));
    if (dVar12 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar12 = SQRT(dVar12);
    }
    fVar13 = (float)dVar12;
    if (20.0 < fVar13) {
      fStack_48 = 1.0;
      if (fVar13 == 0.0) {
        fVar14 = 0.0;
        fVar15 = 0.0;
      }
      else {
        fVar13 = 1.0 / fVar13;
        fVar14 = fVar13 * *(float *)(iVar3 + 0x5c);
        fVar15 = fVar13 * *(float *)(iVar3 + 0x60);
        fStack_48 = fVar13 * *(float *)(iVar3 + 100);
      }
      fStack_48 = fStack_48 * 20.0;
      *(ulonglong *)(iVar3 + 0x5c) = CONCAT44(fVar15 * 20.0,fVar14 * 20.0);
      *(float *)(iVar3 + 100) = fStack_48;
    }
    *(float *)(this + 0x104) = *DAT_10223188 + 0.1;
  }
  if ((*(float *)(this + 0x100) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x100)) &&
     (*(float *)(*(int *)(this + 4) + 0x168) != 0.0)) {
    FUN_1000e7c0(1,&fStack_50,auStack_2c);
    fVar10 = (float10)(*DAT_102230b4)(0,0x3f800000);
    fVar11 = (float10)(*DAT_102230b4)(0,0x3f800000);
    if ((*(float *)(*(int *)(this + 4) + 0x168) == 1.0) ||
       (*(float *)(*(int *)(this + 4) + 0x168) == 3.0)) {
      iVar3 = FUN_10119780(&fStack_50);
      while (iVar3 == -3) {
        fStack_48 = fStack_48 + 1.0;
        iVar3 = FUN_10119780(&fStack_50);
      }
      (*DAT_10223000)(2,DAT_10226644,0,0);
      (*DAT_1022301c)(fStack_50 + (float)fVar10);
      (*DAT_1022301c)(fStack_4c + (float)fVar11);
      (*DAT_1022301c)(fStack_48);
      (*DAT_10223010)(10);
      (*DAT_10223004)();
    }
    fVar10 = (float10)(*DAT_102230b4)(0,0x3f800000);
    fVar11 = (float10)(*DAT_102230b4)(0,0x3f800000);
    fStack_58 = (float)fVar11;
    FUN_1000e7c0(2,&fStack_50,auStack_2c);
    if ((*(float *)(*(int *)(this + 4) + 0x168) == 2.0) ||
       (*(float *)(*(int *)(this + 4) + 0x168) == 3.0)) {
      iVar3 = FUN_10119780(&fStack_50);
      while (iVar3 == -3) {
        fStack_48 = fStack_48 + 1.0;
        iVar3 = FUN_10119780(&fStack_50);
      }
      (*DAT_10223000)(2,DAT_10226644,0,0);
      (*DAT_1022301c)(fStack_50 + (float)fVar10);
      (*DAT_1022301c)(fStack_4c + fStack_58);
      (*DAT_1022301c)(fStack_48);
      (*DAT_10223010)(10);
      (*DAT_10223004)();
    }
    *(float *)(this + 0x100) = *DAT_10223188 + 0.1;
  }
  pfVar8 = DAT_10223188;
  if (*(float *)(this + 0x10c) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x10c)) {
    iVar3 = *(int *)(this + 4);
    dVar12 = (double)(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                      *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                     *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
    if (dVar12 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar12 = SQRT(dVar12);
    }
    if (10.0 < (float)dVar12) {
      iVar3 = 3;
      do {
        fVar10 = (float10)(*DAT_102230b4)(0,0x40800000);
        fStack_58 = (float)fVar10;
        fVar10 = (float10)(*DAT_102230b4)(0,0x40800000);
        (*DAT_10223000)(2,DAT_10226644,0,0);
        (*DAT_1022301c)(*(float *)(*(int *)(this + 4) + 8) + fStack_58);
        (*DAT_1022301c)(*(float *)(*(int *)(this + 4) + 0xc) + (float)fVar10);
        (*DAT_1022301c)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
        (*DAT_10223010)(0x3c);
        (*DAT_10223004)();
        iVar3 = iVar3 + -1;
        pfVar8 = DAT_10223188;
      } while (iVar3 != 0);
    }
    *(float *)(this + 0x10c) = *pfVar8 + 0.25;
  }
  if ((*(float *)(this + 0x108) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x108)) &&
     (iVar3 = FUN_1000e9b0(&DAT_101aa610), *(int *)(*(int *)(this + 4) + 300) != iVar3)) {
    FUN_10023130(&DAT_101aa610);
    *(undefined4 *)(*(int *)(this + 4) + 0x248) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x168) = 0;
  }
  (**(code **)(*(int *)this + 8))(0);
  FUN_1000e5f0(fStack_58);
  return;
}

