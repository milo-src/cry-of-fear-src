// rea decompile_all
// name: CFuncTrackTrain::NearestPath
// address: 0x100d5a70
// body: available
// range: 0x100d5a70-0x100d5d11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CFuncTrackTrain::NearestPath(void) */

void __thiscall CFuncTrackTrain::NearestPath(CFuncTrackTrain *this)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_18;
  float local_14;
  
                    /* 0xd5a70  212  ?NearestPath@CFuncTrackTrain@@QAEXXZ */
  local_18 = 0;
  local_14 = 1024.0;
  iVar6 = FUN_101186b0(0,*(int *)(this + 4) + 8,0x44800000);
  if (iVar6 != 0) {
    do {
      piVar2 = *(int **)(iVar6 + 4);
      if ((*(byte *)(piVar2 + 0x6a) & 0x28) == 0) {
        pcVar9 = "path_track";
        pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *piVar2);
        do {
          bVar1 = *pbVar7;
          bVar10 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_100d5b02:
            uVar8 = -(uint)bVar10 | 1;
            goto LAB_100d5b07;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar10 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_100d5b02;
          pbVar7 = pbVar7 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        uVar8 = 0;
LAB_100d5b07:
        if (uVar8 == 0) {
          iVar3 = *(int *)(this + 4);
          fVar15 = *(float *)(iVar3 + 0xc) - (float)piVar2[3];
          fVar14 = *(float *)(iVar3 + 8) - (float)piVar2[2];
          fVar11 = *(float *)(iVar3 + 0x10) - (float)piVar2[4];
          dVar12 = (double)(fVar15 * fVar15 + fVar14 * fVar14 + fVar11 * fVar11);
          if (dVar12 < 0.0) {
            __libm_sse2_sqrt_precise();
          }
          else {
            dVar12 = SQRT(dVar12);
          }
          if ((float)dVar12 < local_14) {
            local_18 = iVar6;
            local_14 = (float)dVar12;
          }
        }
      }
      iVar6 = FUN_101186b0(iVar6,*(int *)(this + 4) + 8,0x44800000);
    } while (iVar6 != 0);
    if (local_18 != 0) {
      (*DAT_1022303c)(2,"TRAIN: %s, Nearest track is %s\n",
                      *(int *)(*(int *)(this + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98),
                      *(int *)(*(int *)(local_18 + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
      iVar6 = FUN_100d1f00();
      if (iVar6 != 0) {
        iVar3 = *(int *)(this + 4);
        iVar4 = *(int *)(iVar6 + 4);
        iVar5 = *(int *)(local_18 + 4);
        fVar15 = *(float *)(iVar3 + 8) - *(float *)(iVar4 + 8);
        fVar14 = *(float *)(iVar3 + 0xc) - *(float *)(iVar4 + 0xc);
        fVar18 = *(float *)(iVar3 + 8) - *(float *)(iVar5 + 8);
        fVar17 = *(float *)(iVar3 + 0xc) - *(float *)(iVar5 + 0xc);
        fVar11 = *(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10);
        fVar16 = *(float *)(iVar3 + 0x10) - *(float *)(iVar5 + 0x10);
        dVar12 = (double)(fVar14 * fVar14 + fVar15 * fVar15 + fVar11 * fVar11);
        if (dVar12 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar12 = SQRT(dVar12);
        }
        dVar13 = (double)(fVar17 * fVar17 + fVar18 * fVar18 + fVar16 * fVar16);
        if (dVar13 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar13 = SQRT(dVar13);
        }
        if ((float)dVar12 < (float)dVar13) {
          local_18 = iVar6;
        }
      }
      *(int *)(this + 0xe0) = local_18;
      if (*(float *)(*(int *)(this + 4) + 0x1fc) == 0.0) {
        return;
      }
      FUN_100d6810(0x3dcccccd,0);
      *(code **)(this + 0x78) = PostponeNext;
      return;
    }
  }
  (*DAT_1022303c)(1,"Can\'t find a nearby track !!!\n");
  *(undefined4 *)(this + 0x78) = 0;
  return;
}

