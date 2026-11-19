// rea decompile_all
// name: FUN_100be5e0
// address: 0x100be5e0
// body: available
// range: 0x100be5e0-0x100be8d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_100be5e0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *in_ECX;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  float local_30;
  
  if (param_8 == 0.0) {
    param_8 = 784.0;
  }
  if (param_8 * 0.5 < param_7) {
    param_7 = param_8 * 0.5;
  }
  if ((DAT_102238b0 == 0) || (DAT_102238b4 == 0)) {
    (*DAT_1022303c)(2,"Graph not ready for findcover!\n");
  }
  else {
    iVar4 = FUN_100cd530(in_ECX[1] + 8,in_ECX);
    iVar5 = FUN_100cd530(&param_1,in_ECX);
    uVar6 = FUN_100cde50(in_ECX);
    if (iVar4 == -1) {
      (*DAT_1022303c)(2,"FindCover() - %s has no nearest node!\n",
                      *(int *)(DAT_10223188 + 0x98) + *(int *)in_ECX[1]);
      return 0;
    }
    local_58 = param_1 + param_4;
    if (iVar5 == -1) {
      iVar5 = iVar4;
    }
    iVar11 = 0;
    local_54 = param_2 + param_5;
    local_50 = param_3 + param_6;
    iVar10 = DAT_102238c8;
    if (0 < DAT_102238c8) {
      do {
        iVar9 = (DAT_10225978 + iVar11) % iVar10;
        DAT_10225978 = iVar9 + 1;
        iVar7 = in_ECX[1];
        pfVar8 = (float *)(iVar9 * 0x58 + DAT_102238bc);
        fVar1 = *pfVar8;
        fVar2 = pfVar8[2];
        fVar17 = *(float *)(iVar7 + 8) - fVar1;
        fVar3 = pfVar8[1];
        fVar16 = *(float *)(iVar7 + 0xc) - fVar3;
        fVar14 = *(float *)(iVar7 + 0x10) - fVar2;
        dVar15 = (double)(fVar16 * fVar16 + fVar17 * fVar17 + fVar14 * fVar14);
        if (dVar15 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar15 = SQRT(dVar15);
        }
        if ((param_7 <= (float)dVar15) && ((float)dVar15 < param_8)) {
          local_4c = fVar1 + param_4;
          local_48 = fVar3 + param_5;
          local_44 = fVar2 + param_6;
          FUN_1011a820(&local_4c,&local_58,1,1,*(undefined4 *)(in_ECX[1] + 0x20c),local_40);
          iVar10 = DAT_102238c8;
          if (local_30 != 1.0) {
            if (iVar4 != iVar5) {
              fVar12 = (float10)FUN_100ceaa0(iVar4,iVar9,uVar6,in_ECX[0xc1]);
              fVar13 = (float10)FUN_100ceaa0(iVar5,iVar9,uVar6,in_ECX[0xc1]);
              iVar10 = DAT_102238c8;
              if ((float)fVar13 < (float)fVar12) goto LAB_100be899;
            }
            iVar7 = (**(code **)(*in_ECX + 0x1cc))(pfVar8);
            iVar10 = DAT_102238c8;
            if ((iVar7 != 0) &&
               (iVar7 = FUN_100c1080(4,0,pfVar8), iVar10 = DAT_102238c8, iVar7 != 0)) {
              return 1;
            }
          }
        }
LAB_100be899:
        iVar11 = iVar11 + 1;
        if (iVar10 <= iVar11) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

