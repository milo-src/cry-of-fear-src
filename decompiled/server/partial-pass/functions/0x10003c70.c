// rea decompile_all
// name: FUN_10003c70
// address: 0x10003c70
// body: available
// range: 0x10003c70-0x10003ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003c70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  undefined1 local_58 [68];
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  FUN_10004990();
  local_14 = *(undefined4 *)(DAT_10220c50 + 0x38);
  local_10 = *(undefined4 *)(DAT_10220c50 + 0x3c);
  local_c = *(float *)(DAT_10220c50 + 0x40) - 2.0;
  if (180.0 < *(float *)(DAT_10220c50 + 100)) {
    *(undefined4 *)(DAT_10220c50 + 0xe0) = 0xffffffff;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  piVar18 = (int *)(**(code **)(DAT_10220c50 + 0x4f584))
                             (local_58,DAT_10220c50 + 0x38,&local_14,0,0xffffffff);
  iVar2 = piVar18[8];
  iVar3 = piVar18[9];
  fVar4 = (float)piVar18[10];
  iVar5 = piVar18[0xb];
  iVar1 = piVar18[0x10];
  iVar6 = piVar18[0xc];
  iVar7 = piVar18[0xd];
  iVar8 = piVar18[0xe];
  iVar9 = piVar18[0xf];
  iVar10 = *piVar18;
  iVar11 = piVar18[1];
  iVar12 = piVar18[2];
  iVar13 = piVar18[3];
  iVar14 = piVar18[4];
  iVar15 = piVar18[5];
  iVar16 = piVar18[6];
  iVar17 = piVar18[7];
  iVar19 = iVar6;
  if (fVar4 < 0.7) {
    iVar19 = -1;
  }
  *(int *)(DAT_10220c50 + 0xe0) = iVar19;
  if (*(int *)(DAT_10220c50 + 0xe0) != -1) {
    *(undefined4 *)(DAT_10220c50 + 0xcc) = 0;
    if (((*(int *)(DAT_10220c50 + 0xe4) < 2) && (iVar11 == 0)) && (iVar10 == 0)) {
      *(int *)(DAT_10220c50 + 0x38) = iVar15;
      *(int *)(DAT_10220c50 + 0x3c) = iVar16;
      *(int *)(DAT_10220c50 + 0x40) = iVar17;
    }
  }
  if (0 < iVar6) {
    FUN_10003840(iVar10,iVar11,iVar12,iVar13,iVar14,iVar15,iVar16,iVar17,iVar2,iVar3,fVar4,iVar5,
                 iVar6,iVar7,iVar8,iVar9,iVar1,DAT_10220c50 + 0x5c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

