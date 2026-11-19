// rea decompile_all
// name: FUN_1008ad80
// address: 0x1008ad80
// body: available
// range: 0x1008ad80-0x1008b0a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008ad80(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  char *pcVar9;
  int *piVar10;
  bool bVar11;
  float10 fVar12;
  float fVar13;
  undefined1 local_1c [12];
  float local_10;
  float fStack_c;
  float local_8;
  
  iVar2 = FUN_1002a8e0(0);
  FUN_1008ac80(param_2);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x114) = param_3;
  pcVar9 = "models/simon_gibs.mdl";
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    bVar11 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_1008add3:
      uVar4 = -(uint)bVar11 | 1;
      goto LAB_1008add8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar11 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_1008add3;
    pbVar3 = pbVar3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1008add8:
  if (uVar4 == 0) {
    (*DAT_10223000)(2,DAT_10226490,0,0);
    uVar5 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
    (*DAT_10223010)(uVar5);
    (*DAT_10223020)("aurora/blood_effect.aur");
    (*DAT_10223008)(0);
    (*DAT_10223020)(param_2);
    (*DAT_10223010)(0);
    (*DAT_10223004)();
  }
  if (param_1 == 0) goto LAB_1008b09a;
  local_8 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x10);
  iVar6 = *(int *)(iVar2 + 4);
  *(ulonglong *)(iVar6 + 8) =
       CONCAT44(*(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0xc),
                *(float *)(param_1 + 0x178) + *(float *)(param_1 + 8));
  *(float *)(iVar6 + 0x10) = local_8;
  iVar6 = (*DAT_10222f8c)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
  iVar7 = (*DAT_102230b0)(0,100);
  if ((iVar7 < 6) && (iVar6 != 0)) {
    iVar7 = *(int *)(iVar2 + 4);
    local_10 = (*(float *)(iVar6 + 0x1f8) + *(float *)(iVar6 + 0x88)) - *(float *)(iVar7 + 8);
    fStack_c = (*(float *)(iVar6 + 0x1fc) + *(float *)(iVar6 + 0x8c)) - *(float *)(iVar7 + 0xc);
    local_8 = (*(float *)(iVar6 + 0x200) + *(float *)(iVar6 + 0x90)) - *(float *)(iVar7 + 0x10);
    pfVar8 = (float *)FUN_10017e70(local_1c);
    local_8 = pfVar8[2] * 300.0;
    *(ulonglong *)(iVar7 + 0x20) = CONCAT44(pfVar8[1] * 300.0,*pfVar8 * 300.0);
    *(float *)(iVar7 + 0x28) = local_8;
    *(float *)(*(int *)(iVar2 + 4) + 0x28) = *(float *)(*(int *)(iVar2 + 4) + 0x28) + 100.0;
  }
  else {
    fVar12 = (float10)(*DAT_102230b4)(0xc2c80000,0x42c80000);
    local_10 = (float)fVar12;
    fVar12 = (float10)(*DAT_102230b4)(0xc2c80000,0x42c80000);
    fStack_c = (float)fVar12;
    fVar12 = (float10)(*DAT_102230b4)(0x43480000,0x43960000);
    iVar6 = *(int *)(iVar2 + 4);
    local_8 = (float)fVar12;
    *(ulonglong *)(iVar6 + 0x20) = CONCAT44(fStack_c,local_10);
    *(float *)(iVar6 + 0x28) = local_8;
  }
  fVar12 = (float10)(*DAT_102230b4)(0x42c80000,0x43480000);
  *(float *)(*(int *)(iVar2 + 4) + 0x5c) = (float)fVar12;
  fVar12 = (float10)(*DAT_102230b4)(0x42c80000,0x43960000);
  *(float *)(*(int *)(iVar2 + 4) + 0x60) = (float)fVar12;
  iVar6 = *(int *)(param_1 + 0x20c);
  if (iVar6 == 0) {
    iVar6 = (*DAT_1022305c)(0);
    if (iVar6 != 0) goto LAB_1008b00a;
    piVar10 = (int *)0x0;
  }
  else {
LAB_1008b00a:
    piVar10 = *(int **)(iVar6 + 0x7c);
  }
  uVar5 = (**(code **)(*piVar10 + 0x70))();
  iVar6 = *(int *)(iVar2 + 4);
  *(undefined4 *)(iVar2 + 0xdc) = uVar5;
  if (*(float *)(param_1 + 0x164) <= -50.0) {
    if (*(float *)(param_1 + 0x164) <= -200.0) {
      fVar13 = 4.0;
      goto LAB_1008b06c;
    }
    local_8 = *(float *)(iVar6 + 0x28) + *(float *)(iVar6 + 0x28);
    *(ulonglong *)(iVar6 + 0x20) =
         CONCAT44(*(float *)(iVar6 + 0x24) + *(float *)(iVar6 + 0x24),
                  *(float *)(iVar6 + 0x20) + *(float *)(iVar6 + 0x20));
  }
  else {
    fVar13 = 0.7;
LAB_1008b06c:
    local_8 = *(float *)(iVar6 + 0x28) * fVar13;
    *(ulonglong *)(iVar6 + 0x20) =
         CONCAT44(*(float *)(iVar6 + 0x24) * fVar13,*(float *)(iVar6 + 0x20) * fVar13);
  }
  *(float *)(iVar6 + 0x28) = local_8;
LAB_1008b09a:
  FUN_1008a440();
  return;
}

