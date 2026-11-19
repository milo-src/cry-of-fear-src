// rea decompile_all
// name: FUN_100db150
// address: 0x100db150
// body: available
// range: 0x100db150-0x100db73b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100db150(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  int *piVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  int *in_ECX;
  bool bVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int *piStack_88;
  int iStack_80;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  float fStack_50;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [16];
  float fStack_30;
  int *piStack_10;
  
  piVar6 = (int *)(*DAT_10223068)(1);
  if (*(float *)(DAT_10222edc + 0xc) == 0.0) {
    in_ECX[0x993] = 0;
    *param_1 = (float)DAT_10222f34;
    param_1[1] = DAT_10222f34._4_4_;
    param_1[2] = DAT_10222f3c;
    return;
  }
  iVar7 = in_ECX[1];
  fStack_50 = *(float *)(iVar7 + 0x7c) + *(float *)(iVar7 + 0x70) + (float)in_ECX[0x992];
  uStack_58 = CONCAT44(*(float *)(iVar7 + 0x78) + *(float *)(iVar7 + 0x6c) + (float)in_ECX[0x991],
                       *(float *)(iVar7 + 0x74) + *(float *)(iVar7 + 0x68) + (float)in_ECX[0x990]);
  FUN_10119320(&uStack_58);
  uVar3 = *(undefined8 *)(DAT_10223188 + 0x28);
  fStack_68 = *(float *)(DAT_10223188 + 0x30);
  uStack_70._0_4_ = (float)uVar3;
  in_ECX[0x993] = 0;
  piStack_88 = (int *)0x0;
  uStack_70._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  uStack_58 = CONCAT44(uStack_70._4_4_ * param_3 + param_2[1],(float)uStack_70 * param_3 + *param_2)
  ;
  fStack_50 = fStack_68 * param_3 + param_2[2];
  uStack_70 = uVar3;
  FUN_1011a800(param_2,&uStack_58,0,*(undefined4 *)(in_ECX[1] + 0x20c),auStack_40);
  if ((piStack_10 != (int *)0x0) && ((float)piStack_10[0x7c] != 0.0)) {
    if (*(int *)(in_ECX[1] + 0x1c4) == 3) {
      bVar9 = piStack_10[0x91] == 0;
    }
    else {
      bVar9 = piStack_10[0x91] == 3;
    }
    if (!bVar9) {
      if ((float)piStack_10[0x7c] == 2.0) {
        in_ECX[0x993] = 1;
      }
      *param_1 = (float)in_ECX[0x990];
      param_1[1] = (float)in_ECX[0x991];
      param_1[2] = (float)in_ECX[0x992];
      return;
    }
  }
  iStack_80 = 1;
  if (1 < *(int *)(DAT_10223188 + 0x94)) {
    do {
      if ((((*piVar6 == 0) && ((float)piVar6[0x7c] == 2.0)) &&
          (piVar6 != *(int **)(in_ECX[1] + 0x20c))) &&
         (((DAT_10222ee4 == (int *)0x0 ||
           (iVar7 = (**(code **)(*DAT_10222ee4 + 0x4c))(in_ECX,piVar6), iVar7 != 0)) &&
          ((piVar4 = (int *)piVar6[0x1f], piVar4 != (int *)0x0 &&
           (iVar7 = (**(code **)(*piVar4 + 0xbc))(), iVar7 != 0)))))) {
        if (*(int *)(in_ECX[1] + 0x1c4) == 3) {
          bVar9 = *(int *)(piVar4[1] + 0x1c4) == 0;
        }
        else {
          bVar9 = *(int *)(piVar4[1] + 0x1c4) == 3;
        }
        if (!bVar9) {
          puVar8 = (undefined8 *)(**(code **)(*piVar4 + 0x108))(auStack_4c,param_2);
          uVar3 = *puVar8;
          fStack_50 = *(float *)(puVar8 + 1);
          uStack_58._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
          uStack_58._0_4_ = (float)uVar3;
          fVar10 = uStack_58._4_4_ - param_2[1];
          fVar12 = (float)uStack_58 - *param_2;
          fVar13 = fStack_50 - param_2[2];
          dVar11 = (double)(fVar10 * fVar10 + fVar12 * fVar12 + fVar13 * fVar13);
          uStack_58 = uVar3;
          if (dVar11 < 0.0) {
            __libm_sse2_sqrt_precise();
          }
          else {
            dVar11 = SQRT(dVar11);
          }
          fStack_5c = 1.0;
          fVar14 = (float)dVar11;
          if (fVar14 == 0.0) {
            fStack_64 = 0.0;
            fStack_60 = 0.0;
          }
          else {
            fStack_5c = 1.0 / fVar14;
            fStack_64 = fStack_5c * fVar12;
            fStack_60 = fStack_5c * fVar10;
            fStack_5c = fStack_5c * fVar13;
          }
          if ((((0.0 <= *(float *)(DAT_10223188 + 0x2c) * fStack_60 +
                        *(float *)(DAT_10223188 + 0x28) * fStack_64 +
                        *(float *)(DAT_10223188 + 0x30) * fStack_5c) &&
               (fVar10 = (ABS(*(float *)(DAT_10223188 + 0x38) * fStack_60 +
                              *(float *)(DAT_10223188 + 0x34) * fStack_64 +
                              *(float *)(DAT_10223188 + 0x3c) * fStack_5c) * 0.5 +
                         ABS(*(float *)(DAT_10223188 + 0x44) * fStack_60 +
                             *(float *)(DAT_10223188 + 0x40) * fStack_64 +
                             *(float *)(DAT_10223188 + 0x48) * fStack_5c)) *
                         ((fVar14 / param_3) * 0.2 + 1.0), fVar10 <= param_4)) &&
              ((FUN_1011a800(param_2,&uStack_58,0,*(undefined4 *)(in_ECX[1] + 0x20c),auStack_40),
               fStack_30 == 1.0 || (piStack_10 == piVar6)))) &&
             ((((iVar7 = (**(code **)(*in_ECX + 0x138))(piVar4), -1 < iVar7 ||
                (iVar7 = (**(code **)(*piVar4 + 0xd0))(), iVar7 != 0)) ||
               (DAT_10222ee4 == (int *)0x0)) ||
              (iVar7 = (**(code **)(*DAT_10222ee4 + 0x24))(), iVar7 != 0)))) {
            uStack_70 = CONCAT44(fStack_60,fStack_64);
            fStack_68 = fStack_5c;
            param_4 = fVar10;
            piStack_88 = piVar6;
          }
        }
      }
      iStack_80 = iStack_80 + 1;
      piVar6 = piVar6 + 0xcb;
    } while (iStack_80 < *(int *)(DAT_10223188 + 0x94));
    if (piStack_88 != (int *)0x0) {
      puVar8 = (undefined8 *)FUN_1011a8d0(auStack_4c,&uStack_70);
      fVar5 = *(float *)(puVar8 + 1);
      uStack_70._0_4_ = (float)*puVar8;
      uStack_70._4_4_ = (float)((ulonglong)*puVar8 >> 0x20);
      iVar7 = in_ECX[1];
      fVar10 = *(float *)(iVar7 + 0x78);
      fVar12 = *(float *)(iVar7 + 0x7c);
      fVar13 = *(float *)(iVar7 + 0x74);
      fVar14 = *(float *)(iVar7 + 0x6c);
      fVar1 = *(float *)(iVar7 + 0x70);
      fVar2 = *(float *)(iVar7 + 0x68);
      if ((float)piStack_88[0x7c] == 2.0) {
        in_ECX[0x993] = 1;
      }
      *param_1 = (-(float)uStack_70 - fVar13) - fVar2;
      param_1[1] = (uStack_70._4_4_ - fVar10) - fVar14;
      param_1[2] = (fVar5 - fVar12) - fVar1;
      return;
    }
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}

