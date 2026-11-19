// rea decompile_all
// name: FUN_100bd100
// address: 0x100bd100
// body: available
// range: 0x100bd100-0x100bd583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100bd100(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined4 uStack_70;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [8];
  float fStack_48;
  undefined1 auStack_44 [16];
  float fStack_34;
  
  in_ECX[0x60] = in_ECX[0x60] & 0xfff7bfff;
  iVar2 = (**(code **)(*in_ECX + 0x114))(param_1);
  uVar5 = in_ECX[0x60] & 0xffffffdf;
  if (iVar2 == 0) {
    uVar5 = in_ECX[0x60] | 0x20;
  }
  in_ECX[0x60] = uVar5;
  iVar2 = (**(code **)(*param_1 + 0xbc))();
  if (iVar2 == 0) {
    in_ECX[0x60] = in_ECX[0x60] & 0xffffffcfU | 0x100000;
    return 0;
  }
  if (((in_ECX[0xc1] & 0x10000U) != 0) &&
     (piVar3 = (int *)(**(code **)(*param_1 + 0x78))(), piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 0x228))(auStack_50);
    iVar2 = in_ECX[1];
    fStack_58 = *(float *)(iVar2 + 0xc) + 0.0;
    fStack_54 = *(float *)(iVar2 + 0x10) + 36.0;
    fStack_5c = *(float *)(iVar2 + 8) + 0.0;
    FUN_1011a820(auStack_50,&fStack_5c,1,1,*(undefined4 *)(iVar2 + 0x20c),auStack_44);
    if (fStack_34 == 1.0) {
      in_ECX[0x60] = in_ECX[0x60] | 0x4000;
    }
  }
  iVar2 = param_1[1];
  iVar1 = in_ECX[1];
  fVar13 = *(float *)(iVar2 + 8) - *(float *)(iVar1 + 8);
  fVar14 = *(float *)(iVar2 + 0xc) - *(float *)(iVar1 + 0xc);
  fVar9 = *(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10);
  fVar13 = fVar14 * fVar14 + fVar13 * fVar13;
  dVar11 = (double)(fVar9 * fVar9 + fVar13);
  if (dVar11 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar11 = SQRT(dVar11);
  }
  fVar14 = (float)dVar11;
  fVar9 = *(float *)(param_1[1] + 0xfc) * 0.5 + *(float *)(param_1[1] + 0x10);
  fVar10 = fVar9 - *(float *)(iVar1 + 0x10);
  dVar11 = (double)(fVar10 * fVar10 + fVar13);
  if (dVar11 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar11 = SQRT(dVar11);
  }
  fVar10 = (float)dVar11;
  if (fVar14 <= (float)dVar11) {
    fVar9 = (fVar9 - *(float *)(param_1[1] + 0xfc)) - *(float *)(iVar1 + 0x10);
    dVar11 = (double)(fVar9 * fVar9 + fVar13);
    if (dVar11 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar11 = SQRT(dVar11);
    }
    fVar10 = (float)dVar11;
    if (fVar14 <= (float)dVar11) {
      fVar10 = fVar14;
    }
  }
  uVar5 = in_ECX[0x60];
  if ((uVar5 & 0x10) == 0) {
    if (((uVar5 & 0x30) == 0) && (fVar10 <= 256.0)) {
      iVar2 = param_1[1];
      uStack_70 = 1;
      *(undefined8 *)(in_ECX + 0xbd) = *(undefined8 *)(iVar2 + 8);
      in_ECX[0xbf] = *(int *)(iVar2 + 0x10);
    }
  }
  else {
    iVar2 = param_1[1];
    uStack_70 = 1;
    *(undefined8 *)(in_ECX + 0xbd) = *(undefined8 *)(iVar2 + 8);
    in_ECX[0xbf] = *(int *)(iVar2 + 0x10);
    piVar3 = (int *)(**(code **)(*param_1 + 0x78))();
    if (piVar3 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar3 + 0x154))();
      if (iVar2 == 0) {
        uVar5 = in_ECX[0x60] & 0xfff7ffff;
      }
      else {
        uVar5 = in_ECX[0x60] | 0x80000;
      }
      in_ECX[0x60] = uVar5;
    }
    iVar2 = param_1[1];
    if (((*(float *)(iVar2 + 0x20) != 0.0) || (*(float *)(iVar2 + 0x24) != 0.0)) ||
       (*(float *)(iVar2 + 0x28) != 0.0)) {
      fVar8 = (float10)(*DAT_102230b4)(0xbd4ccccd,0);
      iVar2 = param_1[1];
      fVar9 = (float)fVar8;
      fStack_48 = (float)in_ECX[0xbf] - *(float *)(iVar2 + 0x28) * fVar9;
      *(ulonglong *)(in_ECX + 0xbd) =
           CONCAT44((float)in_ECX[0xbe] - *(float *)(iVar2 + 0x24) * fVar9,
                    (float)in_ECX[0xbd] - *(float *)(iVar2 + 0x20) * fVar9);
      in_ECX[0xbf] = (int)fStack_48;
    }
    uVar5 = in_ECX[0x60];
  }
  uVar6 = uVar5 | 0x80;
  if (fVar10 < (float)in_ECX[0xca]) {
    uVar6 = uVar5 & 0xffffff7f;
  }
  in_ECX[0x60] = uVar6;
  iVar2 = (**(code **)(*in_ECX + 0x1d4))();
  if (iVar2 != 0) {
    uVar4 = FUN_10017790(fVar10);
    FUN_100bcef0(uVar4,fVar10);
  }
  if ((in_ECX[0xae] == 2) && (iVar2 = in_ECX[0xaf], iVar2 < 8)) {
    pfVar7 = (float *)(in_ECX + (iVar2 + 0x24) * 4);
    do {
      if (pfVar7[1] == 1.82169e-43) {
        auVar12._0_8_ =
             (double)((pfVar7[-1] - (float)in_ECX[0xbe]) * (pfVar7[-1] - (float)in_ECX[0xbe]) +
                      (pfVar7[-2] - (float)in_ECX[0xbd]) * (pfVar7[-2] - (float)in_ECX[0xbd]) +
                     (*pfVar7 - (float)in_ECX[0xbf]) * (*pfVar7 - (float)in_ECX[0xbf]));
        auVar12._8_8_ = 0;
        if (auVar12._0_8_ < 0.0) {
          __libm_sse2_sqrt_precise();
          dVar11 = auVar12._0_8_;
        }
        else {
          dVar11 = SQRT(auVar12._0_8_);
        }
        if (80.0 < (float)dVar11) {
          FUN_100bddb0();
          return uStack_70;
        }
      }
      iVar2 = iVar2 + 1;
      pfVar7 = pfVar7 + 4;
      if (7 < iVar2) {
        return uStack_70;
      }
    } while( true );
  }
  return uStack_70;
}

