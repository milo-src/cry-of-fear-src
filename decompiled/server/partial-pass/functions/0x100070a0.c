// rea decompile_all
// name: FUN_100070a0
// address: 0x100070a0
// body: available
// range: 0x100070a0-0x10007461 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100070a0(void)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  undefined1 local_c8 [72];
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  float local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  float fStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  undefined1 local_20 [12];
  uint local_14;
  
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffff0;
  FUN_10004990();
  if (0.0 < *(float *)(DAT_10220c50 + 100)) {
    *(undefined4 *)(DAT_10220c50 + 0xe0) = 0xffffffff;
  }
  if (*(int *)(DAT_10220c50 + 0xe0) != -1) {
    iVar2 = FUN_10003250(DAT_10220c50 + 0x74,&DAT_10220c40);
    if (iVar2 != 0) {
      iVar2 = FUN_10003250(DAT_10220c50 + 0x5c,&DAT_10220c40);
      if (iVar2 != 0) goto LAB_10007450;
    }
  }
  FUN_10004880();
  iVar2 = *(int *)(DAT_10220c50 + 0xdc);
  if (((iVar2 != 5) && (iVar2 != 0xb)) && (iVar2 != 9)) {
    FUN_100037d0();
  }
  *(float *)(DAT_10220c50 + 0x5c) =
       *(float *)(DAT_10220c50 + 0x74) + *(float *)(DAT_10220c50 + 0x5c);
  *(float *)(DAT_10220c50 + 0x60) =
       *(float *)(DAT_10220c50 + 0x78) + *(float *)(DAT_10220c50 + 0x60);
  *(float *)(DAT_10220c50 + 100) = *(float *)(DAT_10220c50 + 0x7c) + *(float *)(DAT_10220c50 + 100);
  FUN_10004880();
  FUN_10003490(DAT_10220c50 + 0x5c,*(undefined4 *)(DAT_10220c50 + 0x10),local_20);
  *(float *)(DAT_10220c50 + 0x5c) =
       *(float *)(DAT_10220c50 + 0x5c) - *(float *)(DAT_10220c50 + 0x74);
  *(float *)(DAT_10220c50 + 0x60) =
       *(float *)(DAT_10220c50 + 0x60) - *(float *)(DAT_10220c50 + 0x78);
  *(float *)(DAT_10220c50 + 100) = *(float *)(DAT_10220c50 + 100) - *(float *)(DAT_10220c50 + 0x7c);
  piVar3 = (int *)FUN_10008ef0(local_c8,local_20);
  local_80 = *piVar3;
  iStack_7c = piVar3[1];
  iStack_78 = piVar3[2];
  iStack_74 = piVar3[3];
  local_60 = (float)piVar3[4];
  iStack_5c = piVar3[5];
  iStack_58 = piVar3[6];
  iStack_54 = piVar3[7];
  local_50 = piVar3[8];
  iStack_4c = piVar3[9];
  fStack_48 = (float)piVar3[10];
  iStack_44 = piVar3[0xb];
  local_40 = piVar3[0xc];
  iStack_3c = piVar3[0xd];
  iStack_38 = piVar3[0xe];
  iStack_34 = piVar3[0xf];
  local_30 = piVar3[0x10];
  local_70 = local_80;
  iStack_6c = iStack_7c;
  iStack_68 = iStack_78;
  iStack_64 = iStack_74;
  FUN_10004880();
  if (local_80 != 0) {
    *(int *)(DAT_10220c50 + 0xe0) = local_40;
    *(undefined4 *)(DAT_10220c50 + 0x5c) = DAT_10220c40;
    *(undefined4 *)(DAT_10220c50 + 0x60) = DAT_10220c44;
    *(undefined4 *)(DAT_10220c50 + 100) = DAT_10220c48;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
    return;
  }
  fVar4 = 1.0;
  if (local_60 != 1.0) {
    if (*(int *)(DAT_10220c50 + 0xdc) == 10) {
      fVar4 = 2.0 - *(float *)(DAT_10220c50 + 0xc4);
    }
    else if (*(int *)(DAT_10220c50 + 0xdc) == 0xb) {
      fVar4 = 2.0;
    }
    FUN_10004eb0(DAT_10220c50 + 0x5c,&local_50,DAT_10220c50 + 0x5c,fVar4);
    if (0.7 < fStack_48) {
      fVar4 = *(float *)(DAT_10220c50 + 100);
      if (fVar4 < **(float **)(DAT_10220c50 + 0x4f4f4) * *(float *)(DAT_10220c50 + 0x10)) {
        *(int *)(DAT_10220c50 + 0xe0) = local_40;
        fVar4 = 0.0;
        *(undefined4 *)(DAT_10220c50 + 100) = 0;
      }
      fVar1 = *(float *)(DAT_10220c50 + 0x5c);
      if ((fVar1 * fVar1 + *(float *)(DAT_10220c50 + 0x60) * *(float *)(DAT_10220c50 + 0x60) +
           fVar4 * fVar4 < 900.0) ||
         ((*(int *)(DAT_10220c50 + 0xdc) != 10 && (*(int *)(DAT_10220c50 + 0xdc) != 0xb)))) {
        *(int *)(DAT_10220c50 + 0xe0) = local_40;
        *(undefined4 *)(DAT_10220c50 + 0x5c) = DAT_10220c40;
        *(undefined4 *)(DAT_10220c50 + 0x60) = DAT_10220c44;
        *(undefined4 *)(DAT_10220c50 + 100) = DAT_10220c48;
      }
      else {
        FUN_10003490((float *)(DAT_10220c50 + 0x5c),
                     (1.0 - local_60) * *(float *)(DAT_10220c50 + 0x10) * 0.9,local_20);
        FUN_10008ef0(local_c8,local_20);
      }
      *(float *)(DAT_10220c50 + 0x5c) = *(float *)(DAT_10220c50 + 0x5c) - 0.0;
      *(float *)(DAT_10220c50 + 0x60) = *(float *)(DAT_10220c50 + 0x60) - 0.0;
      *(float *)(DAT_10220c50 + 100) = *(float *)(DAT_10220c50 + 100) - 0.0;
    }
  }
  FUN_10004990();
LAB_10007450:
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

