// rea decompile_all
// name: FUN_100d9380
// address: 0x100d9380
// body: available
// range: 0x100d9380-0x100d9a84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d9380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  CFuncTrain *this;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  int *in_ECX;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  int iStack_40;
  int *piStack_38;
  int iStack_34;
  int *piStack_30;
  float fStack_2c;
  float fStack_28;
  undefined8 uStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  iVar2 = FUN_10018350(param_3);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = (**(code **)(*in_ECX + 0x5c))();
  if (iVar2 != 0) {
    FUN_10017ad0();
    FUN_100d8430();
    return;
  }
  this = (CFuncTrain *)FUN_10118500(0,*(int *)(DAT_10223188 + 0x98) + in_ECX[0x37],param_1);
  if (this == (CFuncTrain *)0x0) {
    (*DAT_1022303c)(4,"Missing train \"%s\" for scripted_trainsequence %s!\n",
                    in_ECX[0x37] + *(int *)(DAT_10223188 + 0x98),
                    *(int *)(in_ECX[1] + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
    return;
  }
  iVar2 = FUN_10118500(0,*(int *)(DAT_10223188 + 0x98) + in_ECX[0x38],param_1);
  in_ECX[0x3f] = iVar2;
  if ((*(byte *)(in_ECX[1] + 0x1a4) & 8) != 0) {
    (*DAT_1022303c)(1,"trainsequence \"%s\" found train \"%s\"",
                    *(int *)(in_ECX[1] + 0x1d0) + *(int *)(DAT_10223188 + 0x98),
                    *(int *)(*(int *)(this + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
    if (in_ECX[0x3f] == 0) {
      (*DAT_1022303c)(1,"missing destination\n");
    }
    else {
      (*DAT_1022303c)(1,"found destination %s\n",
                      *(int *)(*(int *)(in_ECX[0x3f] + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
    }
  }
  iVar2 = *(int *)(DAT_10223188 + 0x98);
  iVar3 = **(int **)(this + 4) + iVar2;
  iVar4 = FUN_1000aba0(iVar3,"func_train");
  if (iVar4 == 0) {
    iVar4 = FUN_1000aba0(iVar3,"func_tracktrain");
    if (iVar4 == 0) {
      (*DAT_1022303c)(4,"scripted_trainsequence %s can\'t affect %s \"%s\": not a train!\n",
                      *(int *)(in_ECX[1] + 0x1d0) + iVar2,iVar3,
                      *(int *)(*(int *)(this + 4) + 0x1d0) + iVar2);
      return;
    }
    if (*(int *)(this + 0xdc) != 0) {
      return;
    }
    FUN_100d8370(in_ECX);
    in_ECX[0x3e] = (int)this;
    goto switchD_100d9511_default;
  }
  if (*(int *)(this + 0x188) != 0) {
    return;
  }
  FUN_100d8390(in_ECX);
  in_ECX[0x3d] = (int)this;
  if ((*(byte *)(in_ECX[1] + 0x1a4) & 4) != 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x1cc) =
         *(undefined4 *)(*(int *)(in_ECX[0x3f] + 4) + 0x1d0);
    CFuncTrain::Next(this);
    goto switchD_100d9511_default;
  }
  iStack_34 = 0;
  switch(in_ECX[0x3a]) {
  case 2:
switchD_100d9511_caseD_2:
    uVar8 = *(uint *)(*(int *)(this + 4) + 0x1a4);
    if ((uVar8 & 0x800000) == 0) {
      *(uint *)(*(int *)(this + 4) + 0x1a4) = uVar8 | 0x800000;
      piVar5 = (int *)in_ECX[0x3f];
      iVar2 = 0;
      if (piVar5 != (int *)0x0) {
        do {
          pbVar9 = (byte *)(*(int *)(*(int *)(this + 4) + 0x1d8) + *(int *)(DAT_10223188 + 0x98));
          pbVar7 = (byte *)(*(int *)(piVar5[1] + 0x1cc) + *(int *)(DAT_10223188 + 0x98));
          do {
            bVar1 = *pbVar7;
            bVar10 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_100d98c5:
              uVar8 = -(uint)bVar10 | 1;
              goto LAB_100d98ca;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar10 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_100d98c5;
            pbVar7 = pbVar7 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          uVar8 = 0;
LAB_100d98ca:
          if (uVar8 == 0) {
            iVar2 = (**(code **)(*piVar5 + 0xdc))();
            if (iVar2 == 0) {
              *(undefined4 *)(*(int *)(this + 4) + 0x194) = 0;
            }
            else {
              *(undefined4 *)(*(int *)(this + 4) + 0x194) =
                   *(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c);
            }
            *(undefined4 *)(*(int *)(this + 4) + 0x1cc) = *(undefined4 *)(piVar5[1] + 0x1d0);
            *(undefined4 *)(this + 0x18c) = 0;
            CFuncTrain::Next(this);
            goto switchD_100d9511_default;
          }
          piVar5 = (int *)(**(code **)(*piVar5 + 0xdc))();
        } while (piVar5 != (int *)0x0);
        iVar2 = in_ECX[0x3f];
      }
      iVar3 = *(int *)(DAT_10223188 + 0x98);
      (*DAT_1022303c)(4,"Found no path to reach destination! (train has t %s, m %s; dest is %s)\n",
                      *(int *)(*(int *)(this + 4) + 0x1cc) + iVar3,
                      *(int *)(*(int *)(this + 4) + 0x1d8) + iVar3,
                      *(int *)(*(int *)(iVar2 + 4) + 0x1d0) + iVar3);
      return;
    }
    break;
  case 3:
switchD_100d9511_caseD_3:
    (**(code **)(*in_ECX + 8))(0x3dcccccd);
    in_ECX[0x1e] = (int)FUN_100d43b0;
    return;
  case 4:
    if (in_ECX[0x3f] == 0) goto switchD_100d9511_caseD_3;
    piVar5 = (int *)FUN_10118590(0,*(int *)(*(int *)(this + 4) + 0x1d8) +
                                   *(int *)(DAT_10223188 + 0x98));
    iVar2 = *(int *)(this + 4);
    iVar3 = piVar5[1];
    if ((*(byte *)(iVar2 + 0x1a4) & 2) == 0) {
      fVar13 = *(float *)(iVar3 + 8) -
               ((*(float *)(iVar2 + 0xdc) + *(float *)(iVar2 + 0xe8)) * 0.5 + *(float *)(iVar2 + 8))
      ;
      fVar14 = *(float *)(iVar3 + 0xc) -
               ((*(float *)(iVar2 + 0xe0) + *(float *)(iVar2 + 0xec)) * 0.5 +
               *(float *)(iVar2 + 0xc));
      fVar11 = *(float *)(iVar3 + 0x10) -
               ((*(float *)(iVar2 + 0xe4) + *(float *)(iVar2 + 0xf0)) * 0.5 +
               *(float *)(iVar2 + 0x10));
      fVar11 = fVar14 * fVar14 + fVar13 * fVar13 + fVar11 * fVar11;
    }
    else {
      fVar14 = *(float *)(iVar3 + 0xc) - *(float *)(iVar2 + 0xc);
      fVar13 = *(float *)(iVar3 + 8) - *(float *)(iVar2 + 8);
      fVar11 = *(float *)(iVar3 + 0x10) - *(float *)(iVar2 + 0x10);
      fVar11 = fVar14 * fVar14 + fVar13 * fVar13 + fVar11 * fVar11;
    }
    dVar12 = (double)fVar11;
    if (dVar12 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar12 = SQRT(dVar12);
    }
    piVar6 = (int *)in_ECX[0x3f];
    fStack_18 = *(float *)(iVar3 + 0x10);
    fStack_28 = (float)dVar12;
    iVar2 = piVar6[1];
    uStack_20 = *(undefined8 *)(iVar3 + 8);
    fStack_2c = -fStack_28;
    fStack_14 = *(float *)(iVar2 + 8);
    fStack_10 = *(float *)(iVar2 + 0xc);
    fStack_c = *(float *)(iVar2 + 0x10);
    iVar2 = 0;
    iStack_40 = 10;
    piStack_38 = piVar6;
    piStack_30 = piVar5;
    do {
      if (piStack_30 == (int *)0x0) {
LAB_100d9743:
        if (piVar6 != (int *)0x0) goto LAB_100d974b;
      }
      else {
        iVar2 = piStack_30[1];
        fVar11 = *(float *)(iVar2 + 0xc) - uStack_20._4_4_;
        uStack_20._0_4_ = *(float *)(iVar2 + 8) - (float)uStack_20;
        fStack_18 = *(float *)(iVar2 + 0x10) - fStack_18;
        dVar12 = (double)(fVar11 * fVar11 + (float)uStack_20 * (float)uStack_20 +
                         fStack_18 * fStack_18);
        if (dVar12 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar12 = SQRT(dVar12);
        }
        fStack_18 = *(float *)(iVar2 + 0x10);
        fStack_28 = fStack_28 + (float)dVar12;
        uStack_20 = *(undefined8 *)(iVar2 + 8);
        if (piStack_30 != (int *)in_ECX[0x3f]) {
          piStack_30 = (int *)(**(code **)(*piStack_30 + 0xdc))();
          iVar2 = iStack_34;
          piVar6 = piStack_38;
          goto LAB_100d9743;
        }
        if ((fStack_28 <= fStack_2c) || (piVar6 = piStack_38, piStack_38 == (int *)0x0)) {
          iStack_34 = 1;
          iVar2 = iStack_34;
          piVar6 = piStack_38;
          goto LAB_100d9743;
        }
LAB_100d974b:
        iVar2 = piVar6[1];
        fStack_10 = *(float *)(iVar2 + 0xc) - fStack_10;
        fStack_14 = *(float *)(iVar2 + 8) - fStack_14;
        fStack_c = *(float *)(iVar2 + 0x10) - fStack_c;
        dVar12 = (double)(fStack_10 * fStack_10 + fStack_14 * fStack_14 + fStack_c * fStack_c);
        if (dVar12 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar12 = SQRT(dVar12);
        }
        fStack_c = *(float *)(iVar2 + 0x10);
        fStack_14 = *(float *)(iVar2 + 8);
        fStack_10 = *(float *)(iVar2 + 0xc);
        fStack_2c = (float)dVar12 + fStack_2c;
        iVar2 = iStack_34;
        if (piStack_38 == piVar5) {
          if ((fStack_2c < fStack_28) || (piVar6 = piStack_38, piStack_30 == (int *)0x0)) {
            iStack_34 = 2;
            iVar2 = iStack_34;
            piVar6 = piStack_38;
          }
        }
        else {
          piVar6 = (int *)(**(code **)(*piStack_38 + 0xdc))();
          piStack_38 = piVar6;
        }
      }
      iStack_40 = iStack_40 + -1;
      if (iStack_40 < 1) goto switchD_100d9511_caseD_3;
    } while (iVar2 == 0);
    if (iVar2 == 2) goto switchD_100d9511_caseD_2;
    if (iVar2 != 1) {
      if (iVar2 != 3) break;
      goto switchD_100d9511_caseD_3;
    }
  case 1:
    *(undefined4 *)(*(int *)(this + 4) + 0x1cc) = *(undefined4 *)(*(int *)(this + 4) + 0x1d8);
    CFuncTrain::Next(this);
    break;
  default:
    break;
  }
switchD_100d9511_default:
  if ((float)in_ECX[0x3c] == 0.0) {
    return;
  }
  in_ECX[0x1e] = (int)FUN_100d86b0;
  (**(code **)(*in_ECX + 8))(in_ECX[0x3c]);
  return;
}

