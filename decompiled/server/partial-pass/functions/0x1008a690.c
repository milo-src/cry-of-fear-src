// rea decompile_all
// name: FUN_1008a690
// address: 0x1008a690
// body: available
// range: 0x1008a690-0x1008a9df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008a690(float param_1,float param_2,float param_3,int param_4,int param_5,float param_6,
                 float param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [4];
  int iStack_3c;
  float fStack_30;
  undefined8 uStack_2c;
  float fStack_24;
  int iStack_10;
  
  fVar9 = 1.0;
  if (param_7 != 0.0) {
    fVar9 = param_6 / param_7;
  }
  iVar1 = FUN_10119780(&param_1);
  iVar7 = param_4;
  param_3 = param_3 + 1.0;
  iVar6 = param_4;
  if (param_5 != 0) {
    iVar6 = param_5;
  }
  piVar2 = (int *)FUN_101186b0(0,&param_1,param_7);
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    if (*(float *)(piVar2[1] + 0x170) != 0.0) {
      if ((*(byte *)(piVar2[1] + 0x1a4) & 0x40) != 0) {
        iVar3 = *(int *)(iVar6 + 0x20c);
        if ((iVar3 == 0) && (iVar3 = (*DAT_1022305c)(0), iVar3 == 0)) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = *(int **)(iVar3 + 0x7c);
        }
        iVar3 = (**(code **)(*piVar5 + 0xd0))();
        if (iVar3 != 0) goto LAB_1008a9b7;
      }
      if ((param_8 == 0) || (iVar3 = (**(code **)(*piVar2 + 0x50))(), iVar3 != param_8)) {
        if (iVar1 == -3) {
          bVar8 = *(int *)(piVar2[1] + 0x1c4) == 0;
        }
        else {
          bVar8 = *(int *)(piVar2[1] + 0x1c4) == 3;
        }
        if (!bVar8) {
          puVar4 = (undefined8 *)(**(code **)(*piVar2 + 0x108))(auStack_4c,&param_1);
          uStack_60 = *puVar4;
          uStack_58 = *(undefined4 *)(puVar4 + 1);
          FUN_1011a800(&param_1,&uStack_60,0,*(undefined4 *)(iVar7 + 0x20c),auStack_48);
          if ((fStack_30 == 1.0) || (iStack_10 == *(int *)(piVar2[1] + 0x20c))) {
            if (iStack_3c != 0) {
              uStack_2c = CONCAT44(param_2,param_1);
              fStack_24 = param_3;
              fStack_30 = 0.0;
            }
            dVar11 = (double)((param_2 - uStack_2c._4_4_) * (param_2 - uStack_2c._4_4_) +
                              (param_1 - (float)uStack_2c) * (param_1 - (float)uStack_2c) +
                             (param_3 - fStack_24) * (param_3 - fStack_24));
            if (dVar11 < 0.0) {
              __libm_sse2_sqrt_precise();
            }
            else {
              dVar11 = SQRT(dVar11);
            }
            fVar12 = param_6 - (float)dVar11 * fVar9;
            fVar10 = 0.0;
            if (0.0 <= fVar12) {
              fVar10 = fVar12;
            }
            uStack_60 = CONCAT44(fVar10,(float)uStack_60);
            if (fStack_30 == 1.0) {
              (**(code **)(*piVar2 + 100))(iVar7,iVar6,fVar10,param_9);
            }
            else {
              FUN_1011c070();
              puVar14 = auStack_40;
              fVar10 = uStack_2c._4_4_ - param_2;
              fVar13 = (float)uStack_2c - param_1;
              fVar12 = fStack_24 - param_3;
              uStack_60 = CONCAT44(uStack_60._4_4_,fVar13);
              dVar11 = (double)(fVar10 * fVar10 + fVar13 * fVar13 + fVar12 * fVar12);
              uVar15 = param_9;
              if (dVar11 < 0.0) {
                __libm_sse2_sqrt_precise();
              }
              else {
                dVar11 = SQRT(dVar11);
              }
              iVar7 = param_4;
              fVar13 = 0.0;
              if ((float)dVar11 == 0.0) {
                fVar12 = 1.0;
                fVar10 = 0.0;
              }
              else {
                fVar13 = 1.0 / (float)dVar11;
                fVar12 = fVar13 * fVar12;
                fVar10 = fVar13 * fVar10;
                fVar13 = fVar13 * (float)uStack_60;
              }
              (**(code **)(*piVar2 + 0x60))
                        (param_4,uStack_60._4_4_,fVar13,fVar10,fVar12,puVar14,uVar15);
              FUN_1011b8f0(iVar7,iVar6);
            }
          }
        }
      }
    }
LAB_1008a9b7:
    piVar2 = (int *)FUN_101186b0(piVar2,&param_1,param_7);
  } while( true );
}

