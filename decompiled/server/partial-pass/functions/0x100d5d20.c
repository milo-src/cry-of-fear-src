// rea decompile_all
// name: CFuncTrain::Next
// address: 0x100d5d20
// body: available
// range: 0x100d5d20-0x100d6724 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CFuncTrain::Next(void) */

void __thiscall CFuncTrain::Next(CFuncTrain *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  bool bVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  char *pcVar25;
  undefined8 uVar26;
  
                    /* 0xd5d20  213  ?Next@CFuncTrain@@QAEXXZ */
  piVar9 = (int *)(**(code **)(*(int *)this + 0xdc))();
  if (piVar9 == (int *)0x0) {
    *(undefined4 *)(this + 0x194) = 0;
    FUN_100c4ed0(this,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c);
    FUN_100c4b90(this,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c);
    iVar12 = *(int *)(this + 4);
    if (*(int *)(iVar12 + 0x1ec) != 0) {
      FUN_100fc9f0(*(undefined4 *)(iVar12 + 0x20c),6,
                   *(int *)(DAT_10223188 + 0x98) + *(int *)(iVar12 + 0x1ec),0,0,0x20,100);
      iVar12 = *(int *)(this + 4);
    }
    if (*(int *)(iVar12 + 0x1f0) == 0) {
      return;
    }
    FUN_100fc9f0(*(undefined4 *)(iVar12 + 0x20c),2,
                 *(int *)(DAT_10223188 + 0x98) + *(int *)(iVar12 + 0x1f0),
                 *(undefined4 *)(this + 0x184),0x3f4ccccd,0,100);
    return;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x1d8) = *(undefined4 *)(*(int *)(this + 4) + 0x1cc);
  if (((*(uint *)(*(int *)(this + 4) + 0x1a4) & 0x800000) == 0) || (*(int *)(this + 0x188) == 0)) {
    *(undefined4 *)(*(int *)(this + 4) + 0x1cc) = *(undefined4 *)(piVar9[1] + 0x1cc);
  }
  else {
    for (piVar11 = *(int **)(*(int *)(this + 0x188) + 0xfc); piVar11 != (int *)0x0;
        piVar11 = (int *)(**(code **)(*piVar11 + 0xdc))()) {
      pbVar13 = (byte *)(*(int *)(*(int *)(this + 4) + 0x1cc) + *(int *)(DAT_10223188 + 0x98));
      pbVar14 = (byte *)(*(int *)(piVar11[1] + 0x1cc) + *(int *)(DAT_10223188 + 0x98));
      do {
        bVar6 = *pbVar14;
        bVar15 = bVar6 < *pbVar13;
        if (bVar6 != *pbVar13) {
LAB_100d5eb5:
          uVar10 = -(uint)bVar15 | 1;
          goto LAB_100d5eba;
        }
        if (bVar6 == 0) break;
        bVar6 = pbVar14[1];
        bVar15 = bVar6 < pbVar13[1];
        if (bVar6 != pbVar13[1]) goto LAB_100d5eb5;
        pbVar14 = pbVar14 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar6 != 0);
      uVar10 = 0;
LAB_100d5eba:
      if (uVar10 == 0) {
        *(undefined4 *)(*(int *)(this + 4) + 0x1cc) = *(undefined4 *)(piVar11[1] + 0x1d0);
        break;
      }
    }
  }
  fVar16 = (float10)(**(code **)(*piVar9 + 0x98))();
  iVar12 = *(int *)(this + 0x18c);
  *(float *)(this + 0x10c) = (float)fVar16;
  if (iVar12 != 0) {
    fVar18 = *(float *)(iVar12 + 0x1fc);
    if (fVar18 != 0.0) {
      iVar12 = (int)*(float *)(iVar12 + 0x1bc);
      if (iVar12 == 0) {
        *(float *)(*(int *)(this + 4) + 0x1fc) = fVar18;
        iVar12 = *(int *)(*(int *)(this + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98);
        dVar20 = (double)*(float *)(*(int *)(this + 4) + 0x1fc);
        pcVar25 = "Train %s speed set to %4.2f\n";
      }
      else if (iVar12 == 1) {
        *(float *)(*(int *)(this + 4) + 0x1fc) = fVar18 + *(float *)(*(int *)(this + 4) + 0x1fc);
        iVar12 = *(int *)(*(int *)(this + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98);
        dVar20 = (double)*(float *)(*(int *)(this + 4) + 0x1fc);
        pcVar25 = "Train %s speed accel to %4.2f\n";
      }
      else {
        if (iVar12 != 2) goto LAB_100d6113;
        iVar12 = *(int *)(this + 4);
        iVar7 = piVar9[1];
        if ((*(byte *)(iVar12 + 0x1a4) & 2) == 0) {
          fVar21 = *(float *)(iVar12 + 8) -
                   (*(float *)(iVar7 + 8) -
                   (*(float *)(iVar12 + 0xe8) + *(float *)(iVar12 + 0xdc)) * 0.5);
          fVar24 = *(float *)(iVar12 + 0xc) -
                   (*(float *)(iVar7 + 0xc) -
                   (*(float *)(iVar12 + 0xec) + *(float *)(iVar12 + 0xe0)) * 0.5);
          fVar17 = *(float *)(iVar12 + 0x10) -
                   (*(float *)(iVar7 + 0x10) -
                   (*(float *)(iVar12 + 0xf0) + *(float *)(iVar12 + 0xe4)) * 0.5);
          fVar21 = fVar24 * fVar24 + fVar21 * fVar21;
        }
        else {
          fVar24 = *(float *)(iVar12 + 0xc) - *(float *)(iVar7 + 0xc);
          fVar21 = *(float *)(iVar12 + 8) - *(float *)(iVar7 + 8);
          fVar17 = *(float *)(iVar12 + 0x10) - *(float *)(iVar7 + 0x10);
          fVar21 = fVar24 * fVar24 + fVar21 * fVar21;
        }
        dVar20 = (double)(fVar21 + fVar17 * fVar17);
        if (dVar20 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar20 = SQRT(dVar20);
        }
        *(float *)(*(int *)(this + 4) + 0x1fc) = (float)dVar20 / fVar18;
        iVar12 = *(int *)(*(int *)(this + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98);
        dVar20 = (double)*(float *)(*(int *)(this + 4) + 0x1fc);
        pcVar25 = "Train %s speed to %4.2f (timed)\n";
      }
      (*DAT_1022303c)(2,pcVar25,iVar12,dVar20);
    }
LAB_100d6113:
    iVar12 = *(int *)(this + 0x18c);
    if ((*(uint *)(iVar12 + 0x1a4) & 0x800000) != 0) {
      iVar12 = piVar9[1];
      *(undefined8 *)(this + 0x19c) = *(undefined8 *)(iVar12 + 0x5c);
      *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(iVar12 + 100);
      FUN_100c4b90(this,*(undefined4 *)(this + 0x19c),*(undefined4 *)(this + 0x1a0),
                   *(undefined4 *)(this + 0x1a4));
      iVar12 = *(int *)(this + 0x18c);
    }
    if (*(float *)(iVar12 + 0x1c0) != 0.0) {
      FUN_100c48e0(this,*(undefined4 *)(iVar12 + 0x50),*(undefined4 *)(iVar12 + 0x54),
                   *(undefined4 *)(iVar12 + 0x58));
    }
  }
  *(int *)(this + 0x18c) = piVar9[1];
  *(undefined4 *)(*(int *)(this + 4) + 0x194) = *(undefined4 *)(piVar9[1] + 0x20c);
  if ((*(byte *)(piVar9[1] + 0x1a4) & 2) == 0) {
    if (*(int *)(this + 0x194) == 0) {
      iVar12 = *(int *)(this + 4);
      if (*(int *)(iVar12 + 0x1ec) != 0) {
        FUN_1001e990(*(undefined4 *)(iVar12 + 0x20c),6,
                     *(int *)(DAT_10223188 + 0x98) + *(int *)(iVar12 + 0x1ec));
        iVar12 = *(int *)(this + 4);
      }
      if (*(int *)(iVar12 + 0x1ec) != 0) {
        FUN_100fc9f0(*(undefined4 *)(iVar12 + 0x20c),6,
                     *(int *)(DAT_10223188 + 0x98) + *(int *)(iVar12 + 0x1ec),
                     *(undefined4 *)(this + 0x184),0x3f4ccccd,0,100);
      }
    }
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffffdf;
    *(code **)(this + 0x154) = Wait;
    if (*(float *)(piVar9[1] + 0x1c0) != 0.0) {
      iVar12 = *(int *)(this + 4);
      uVar1 = *(undefined4 *)(iVar12 + 0x50);
      uVar2 = *(undefined4 *)(iVar12 + 0x54);
      uVar3 = *(undefined4 *)(iVar12 + 0x58);
      FUN_100d4a40();
      FUN_100c48e0(this,uVar1,uVar2,uVar3);
      iVar12 = *(int *)(this + 4);
      iVar7 = piVar9[1];
      fVar23 = *(float *)(iVar7 + 0xc) - *(float *)(iVar12 + 0xc);
      fVar22 = *(float *)(iVar7 + 8) - *(float *)(iVar12 + 8);
      fVar18 = *(float *)(iVar7 + 0x50);
      fVar17 = *(float *)(iVar12 + 0x50);
      fVar19 = *(float *)(iVar7 + 0x10) - *(float *)(iVar12 + 0x10);
      fVar21 = *(float *)(iVar7 + 0x54);
      fVar24 = *(float *)(iVar12 + 0x54);
      fVar4 = *(float *)(iVar7 + 0x58);
      fVar5 = *(float *)(iVar12 + 0x58);
      dVar20 = (double)(fVar23 * fVar23 + fVar22 * fVar22 + fVar19 * fVar19);
      if (dVar20 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar20 = SQRT(dVar20);
      }
      fVar19 = (float)dVar20 / *(float *)(iVar12 + 0x1fc);
      *(ulonglong *)(this + 0x19c) = CONCAT44((fVar21 - fVar24) / fVar19,(fVar18 - fVar17) / fVar19)
      ;
      *(float *)(this + 0x1a4) = (fVar4 - fVar5) / fVar19;
    }
    FUN_100c4b90(this,*(undefined4 *)(this + 0x19c),*(undefined4 *)(this + 0x1a0),
                 *(undefined4 *)(this + 0x1a4));
    iVar12 = *(int *)(this + 4);
    iVar7 = *(int *)(this + 0x14);
    *(undefined4 *)(this + 0x194) = 2;
    if (iVar7 == 0) {
      if ((*(uint *)(iVar12 + 0x1a4) & 2) == 0) {
        iVar7 = piVar9[1];
        FUN_101025c0(*(float *)(iVar7 + 8) -
                     (*(float *)(iVar12 + 0xe8) + *(float *)(iVar12 + 0xdc)) * 0.5,
                     *(float *)(iVar7 + 0xc) -
                     (*(float *)(iVar12 + 0xec) + *(float *)(iVar12 + 0xe0)) * 0.5,
                     *(float *)(iVar7 + 0x10) -
                     (*(float *)(iVar12 + 0xf0) + *(float *)(iVar12 + 0xe4)) * 0.5,
                     *(undefined4 *)(iVar12 + 0x1fc));
        return;
      }
      iVar7 = piVar9[1];
      FUN_101025c0(*(undefined4 *)(iVar7 + 8),*(undefined4 *)(iVar7 + 0xc),
                   *(undefined4 *)(iVar7 + 0x10),*(undefined4 *)(iVar12 + 0x1fc));
      return;
    }
    iVar8 = piVar9[1];
    if ((*(uint *)(iVar12 + 0x1a4) & 2) == 0) {
      iVar7 = *(int *)(iVar7 + 4);
      FUN_101025c0((*(float *)(iVar8 + 8) -
                   (*(float *)(iVar12 + 0xe8) + *(float *)(iVar12 + 0xdc)) * 0.5) -
                   *(float *)(iVar7 + 8),
                   (*(float *)(iVar8 + 0xc) -
                   (*(float *)(iVar12 + 0xec) + *(float *)(iVar12 + 0xe0)) * 0.5) -
                   *(float *)(iVar7 + 0xc),
                   (*(float *)(iVar8 + 0x10) -
                   (*(float *)(iVar12 + 0xf0) + *(float *)(iVar12 + 0xe4)) * 0.5) -
                   *(float *)(iVar7 + 0x10),*(undefined4 *)(iVar12 + 0x1fc));
      return;
    }
    iVar7 = *(int *)(iVar7 + 4);
    FUN_101025c0(*(float *)(iVar8 + 8) - *(float *)(iVar7 + 8),
                 *(float *)(iVar8 + 0xc) - *(float *)(iVar7 + 0xc),
                 *(float *)(iVar8 + 0x10) - *(float *)(iVar7 + 0x10),*(undefined4 *)(iVar12 + 0x1fc)
                );
    return;
  }
  *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 0x20;
  iVar12 = *(int *)(this + 4);
  iVar7 = *(int *)(this + 0x14);
  if (iVar7 == 0) {
    if ((*(uint *)(iVar12 + 0x1a4) & 2) != 0) {
      fVar18 = *(float *)(piVar9[1] + 8);
      uVar26 = *(undefined8 *)(piVar9[1] + 0xc);
      goto LAB_100d631d;
    }
    iVar7 = piVar9[1];
    fVar21 = *(float *)(iVar7 + 0xc) - (*(float *)(iVar12 + 0xec) + *(float *)(iVar12 + 0xe0)) * 0.5
    ;
    fVar17 = *(float *)(iVar7 + 0x10) -
             (*(float *)(iVar12 + 0xf0) + *(float *)(iVar12 + 0xe4)) * 0.5;
    fVar18 = *(float *)(iVar7 + 8) - (*(float *)(iVar12 + 0xe8) + *(float *)(iVar12 + 0xdc)) * 0.5;
  }
  else {
    iVar8 = piVar9[1];
    if ((*(uint *)(iVar12 + 0x1a4) & 2) != 0) {
      iVar12 = *(int *)(iVar7 + 4);
      fVar18 = *(float *)(iVar8 + 8) - *(float *)(iVar12 + 8);
      uVar26 = CONCAT44(*(float *)(iVar8 + 0x10) - *(float *)(iVar12 + 0x10),
                        *(float *)(iVar8 + 0xc) - *(float *)(iVar12 + 0xc));
      goto LAB_100d631d;
    }
    iVar7 = *(int *)(iVar7 + 4);
    fVar18 = (*(float *)(iVar8 + 8) - (*(float *)(iVar12 + 0xdc) + *(float *)(iVar12 + 0xe8)) * 0.5)
             - *(float *)(iVar7 + 8);
    fVar21 = (*(float *)(iVar8 + 0xc) -
             (*(float *)(iVar12 + 0xec) + *(float *)(iVar12 + 0xe0)) * 0.5) -
             *(float *)(iVar7 + 0xc);
    fVar17 = (*(float *)(iVar8 + 0x10) -
             (*(float *)(iVar12 + 0xf0) + *(float *)(iVar12 + 0xe4)) * 0.5) -
             *(float *)(iVar7 + 0x10);
  }
  uVar26 = CONCAT44(fVar17,fVar21);
LAB_100d631d:
  FUN_100c4550(this,fVar18,uVar26);
  iVar12 = piVar9[1];
  if (*(float *)(iVar12 + 0x1c0) != 0.0) {
    FUN_100c48e0(this,*(undefined4 *)(iVar12 + 0x50),*(undefined4 *)(iVar12 + 0x54),
                 *(undefined4 *)(iVar12 + 0x58));
  }
  Wait(this);
  return;
}

