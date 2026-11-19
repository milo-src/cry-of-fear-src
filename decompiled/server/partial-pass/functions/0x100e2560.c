// rea decompile_all
// name: FUN_100e2560
// address: 0x100e2560
// body: available
// range: 0x100e2560-0x100e2a25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e2560(void)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *in_ECX;
  byte *pbVar9;
  char *pcVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  
  bVar2 = false;
  bVar3 = false;
  iVar4 = (**(code **)(*in_ECX + 0xbc))();
  if (iVar4 == 0) {
    return;
  }
  if ((char)in_ECX[0x7c1] == '\0') {
    return;
  }
  if ((char)in_ECX[0x7a9] != '\0') {
    return;
  }
  piVar5 = (int *)FUN_101186b0(0,in_ECX[1] + 8,0x437a0000);
  if (piVar5 != (int *)0x0) {
    do {
      iVar4 = (**(code **)(*piVar5 + 0xbc))();
      if (iVar4 != 0) {
        pcVar10 = "monster_stranger";
        pbVar9 = (byte *)(*(int *)(-(uint)(*(int *)(piVar5[1] + 0x20c) != 0) &
                                  *(int *)(piVar5[1] + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
        do {
          bVar1 = *pbVar9;
          bVar11 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_100e2620:
            uVar6 = -(uint)bVar11 | 1;
            goto LAB_100e2625;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar9[1];
          bVar11 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_100e2620;
          pbVar9 = pbVar9 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_100e2625:
        if ((((uVar6 == 0) && (iVar4 = (**(code **)(*piVar5 + 0x78))(), iVar4 != 0)) &&
            (piVar7 = (int *)FUN_10017790(), piVar7 == in_ECX)) &&
           (((*(byte *)(iVar4 + 0x180) & 0x20) == 0 && (*(char *)(iVar4 + 9) == '\0')))) {
          iVar4 = *(int *)(iVar4 + 4);
          iVar8 = in_ECX[1];
          fVar15 = *(float *)(iVar4 + 0xc) - *(float *)(iVar8 + 0xc);
          fVar14 = *(float *)(iVar4 + 8) - *(float *)(iVar8 + 8);
          fVar12 = *(float *)(iVar4 + 0x10) - *(float *)(iVar8 + 0x10);
          dVar13 = (double)(fVar15 * fVar15 + fVar14 * fVar14 + fVar12 * fVar12);
          if (dVar13 < 0.0) {
            __libm_sse2_sqrt_precise();
          }
          else {
            dVar13 = SQRT(dVar13);
          }
          fVar12 = (float)dVar13;
          if ((200.0 < fVar12) && (fVar12 <= 300.0)) {
            if (((float)in_ECX[0x7c0] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x7c0]) &&
               ((DAT_10226474 == '\0' && (!bVar3)))) {
              DAT_10226474 = '\x01';
              bVar3 = true;
              in_ECX[0x7c0] = (int)(*DAT_10223188 + 1.0);
            }
            FUN_10119c00();
          }
          bVar2 = true;
          if ((100.0 < fVar12) && (fVar12 <= 200.0)) {
            if (((float)in_ECX[0x7c0] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x7c0]) &&
               ((DAT_10226474 == '\0' && (!bVar3)))) {
              DAT_10226474 = '\x01';
              bVar3 = true;
              in_ECX[0x7c0] = (int)(*DAT_10223188 + 0.75);
            }
            FUN_10119c00();
          }
          if ((75.0 < fVar12) && (fVar12 <= 100.0)) {
            fVar14 = *DAT_10223188;
            if (((float)in_ECX[0x7c0] <= fVar14 && fVar14 != (float)in_ECX[0x7c0]) &&
               ((DAT_10226474 == '\0' && (!bVar3)))) {
              bVar3 = true;
              in_ECX[0x7c0] = (int)(fVar14 + 0.5);
              DAT_10226474 = '\x01';
            }
            FUN_10119c00();
          }
          if ((0.0 < fVar12) && (fVar12 <= 75.0)) {
            fVar12 = *DAT_10223188;
            if (((float)in_ECX[0x7c0] <= fVar12 && fVar12 != (float)in_ECX[0x7c0]) &&
               ((DAT_10226474 == '\0' && (!bVar3)))) {
              bVar3 = true;
              in_ECX[0x7c0] = (int)(fVar12 + 0.25);
              DAT_10226474 = '\x01';
            }
            FUN_10119c00();
          }
        }
      }
      piVar5 = (int *)FUN_101186b0(piVar5,in_ECX[1] + 8,0x437a0000);
    } while (piVar5 != (int *)0x0);
    if (bVar2) goto LAB_100e2980;
  }
  *(undefined1 *)(in_ECX + 0x7c1) = 0;
LAB_100e2980:
  if (((float)in_ECX[0x7c0] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x7c0]) &&
     (DAT_10226474 != '\0')) {
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"stranger/st_hearbeat.wav",0x3f800000,
                 0x3f4ccccd,0,100);
    DAT_10226474 = '\0';
  }
  if (bVar3) {
    iVar4 = (*DAT_1022305c)(0);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 0x80;
    }
    iVar8 = (*DAT_1022305c)(0);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + 0x80;
    }
    (**(code **)(*in_ECX + 100))(iVar8,iVar4,DAT_10226830,0);
  }
  return;
}

