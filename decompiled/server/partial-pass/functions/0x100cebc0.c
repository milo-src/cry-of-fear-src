// rea decompile_all
// name: FUN_100cebc0
// address: 0x100cebc0
// body: available
// range: 0x100cebc0-0x100cef0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100cebc0(int param_1,FILE *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int in_ECX;
  int iVar13;
  int iVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  int local_74;
  float local_6c;
  float local_68;
  int local_5c;
  int local_54;
  
  if (param_2 != (FILE *)0x0) {
    _fprintf(param_2,
             "----------------------------------------------------------------------------\n");
    _fprintf(param_2,"InLine Rejection:\n");
    _fprintf(param_2,
             "----------------------------------------------------------------------------\n");
  }
  local_5c = 0;
  local_54 = 0;
  iVar12 = 0;
  if (0 < *(int *)(in_ECX + 0x18)) {
    local_74 = 0;
    do {
      iVar12 = *(int *)(in_ECX + 0xc);
      if (param_2 != (FILE *)0x0) {
        _fprintf(param_2,"Node %3d:\n");
      }
      iVar13 = 0;
      if (0 < *(int *)(local_74 + 0x20 + iVar12)) {
        do {
          iVar8 = *(int *)(local_74 + 0x24 + iVar12) + iVar13;
          pfVar9 = (float *)(*(int *)(param_1 + 4 + iVar8 * 0x18) * 0x58 + *(int *)(in_ECX + 0xc));
          local_6c = pfVar9[1] - *(float *)(local_74 + 4 + iVar12);
          local_68 = *pfVar9 - *(float *)(local_74 + iVar12);
          auVar17._0_8_ = (double)(local_6c * local_6c + local_68 * local_68);
          auVar17._8_8_ = 0;
          if (auVar17._0_8_ < 0.0) {
            __libm_sse2_sqrt_precise();
            dVar16 = auVar17._0_8_;
          }
          else {
            dVar16 = SQRT(auVar17._0_8_);
          }
          fVar18 = (float)dVar16;
          if (fVar18 == 0.0) {
            local_68 = 0.0;
            local_6c = 0.0;
          }
          else {
            local_68 = local_68 * (1.0 / fVar18);
            local_6c = local_6c * (1.0 / fVar18);
          }
          bVar7 = false;
          *(float *)(param_1 + 0x14 + iVar8 * 0x18) = fVar18;
          iVar14 = 0;
          iVar8 = *(int *)(local_74 + 0x20 + iVar12);
          if (0 < iVar8) {
            do {
              if (bVar7) break;
              if (iVar14 != iVar13) {
                iVar10 = *(int *)(local_74 + 0x24 + iVar12);
                iVar11 = *(int *)(param_1 + 4 + (iVar10 + iVar14) * 0x18);
                pfVar9 = (float *)(iVar11 * 0x58 + *(int *)(in_ECX + 0xc));
                fVar15 = pfVar9[1] - *(float *)(local_74 + 4 + iVar12);
                fVar19 = *pfVar9 - *(float *)(local_74 + iVar12);
                dVar16 = (double)(fVar15 * fVar15 + fVar19 * fVar19);
                if (dVar16 < 0.0) {
                  __libm_sse2_sqrt_precise();
                }
                else {
                  dVar16 = SQRT(dVar16);
                }
                fVar20 = (float)dVar16;
                if (fVar20 == 0.0) {
                  fVar19 = 0.0;
                  fVar15 = 0.0;
                }
                else {
                  fVar19 = fVar19 * (1.0 / fVar20);
                  fVar15 = fVar15 * (1.0 / fVar20);
                }
                dVar16 = (double)(fVar15 * local_6c + fVar19 * local_68);
                if ((0.998 <= dVar16) && (fVar20 < fVar18)) {
                  if (param_2 != (FILE *)0x0) {
                    _fprintf(param_2,"REJECTED NODE %3d through Node %3d, Dot = %8f\n",
                             *(undefined4 *)(param_1 + 4 + (iVar10 + iVar13) * 0x18),iVar11,dVar16);
                    iVar10 = *(int *)(local_74 + 0x24 + iVar12);
                    iVar8 = *(int *)(local_74 + 0x20 + iVar12);
                  }
                  bVar7 = true;
                  puVar2 = (undefined4 *)(param_1 + -0x18 + (iVar10 + iVar8) * 0x18);
                  uVar4 = puVar2[1];
                  uVar5 = puVar2[2];
                  uVar6 = puVar2[3];
                  iVar11 = iVar10 + iVar13;
                  iVar13 = iVar13 + -1;
                  puVar1 = (undefined4 *)(param_1 + iVar11 * 0x18);
                  *puVar1 = *puVar2;
                  puVar1[1] = uVar4;
                  puVar1[2] = uVar5;
                  puVar1[3] = uVar6;
                  *(undefined8 *)(param_1 + 0x10 + iVar11 * 0x18) =
                       *(undefined8 *)(param_1 + -8 + (iVar10 + iVar8) * 0x18);
                  piVar3 = (int *)(local_74 + 0x20 + iVar12);
                  *piVar3 = *piVar3 + -1;
                  iVar8 = *(int *)(local_74 + 0x20 + iVar12);
                  local_5c = local_5c + 1;
                }
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar8);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar8);
      }
      if (param_2 != (FILE *)0x0) {
        _fprintf(param_2,
                 "----------------------------------------------------------------------------\n\n")
        ;
      }
      local_74 = local_74 + 0x58;
      local_54 = local_54 + 1;
      iVar12 = local_5c;
    } while (local_54 < *(int *)(in_ECX + 0x18));
  }
  return iVar12;
}

