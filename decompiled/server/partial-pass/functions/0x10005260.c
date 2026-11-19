// rea decompile_all
// name: FUN_10005260
// address: 0x10005260
// body: available
// range: 0x10005260-0x100053f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005260(float *param_1)

{
  char *_Str;
  int iVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(DAT_10220c50 + 0xd0) != 0) {
    *(undefined4 *)(DAT_10220c50 + 0x23c) = 0x44278000;
  }
  _Str = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,&DAT_101a1d94);
  iVar1 = _atoi(_Str);
  if (iVar1 == 2) {
    *(undefined4 *)(DAT_10220c50 + 0x234) = 0x44278000;
  }
  fVar2 = (float10)FUN_10002fd0(param_1);
  if (((double)fVar2 <= 0.001) &&
     (fVar2 = (float10)FUN_10002fd0(DAT_10220c50 + 0x234), (double)fVar2 <= 0.001)) {
    return;
  }
  FUN_100032d0(param_1,*(undefined4 *)(DAT_10220c50 + 0x10),DAT_10220c50 + 0x234,param_1);
  fVar4 = 1.0 - *(float *)(DAT_10220c50 + 0x10) * 9.0;
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar4;
  }
  FUN_10003490(DAT_10220c50 + 0x234,fVar5,DAT_10220c50 + 0x234);
  fVar4 = *(float *)(DAT_10220c50 + 0x10) * 65.0;
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar4;
  }
  fVar4 = 2.0;
  if (fVar5 <= 2.0) {
    fVar4 = fVar5;
  }
  FUN_100032d0(DAT_10220c50 + 0x234,-fVar4,param_1,DAT_10220c50 + 0x234);
  fVar5 = -89.0;
  if (-89.0 <= *param_1) {
    fVar5 = *param_1;
  }
  fVar4 = -89.0;
  if (-89.0 <= param_1[2]) {
    fVar4 = param_1[2];
  }
  fVar3 = 89.0;
  if (fVar5 <= 89.0) {
    fVar3 = fVar5;
  }
  fVar5 = -179.0;
  if (-179.0 <= param_1[1]) {
    fVar5 = param_1[1];
  }
  fVar6 = 89.0;
  if (fVar4 <= 89.0) {
    fVar6 = fVar4;
  }
  *param_1 = fVar3;
  fVar4 = 179.0;
  if (fVar5 <= 179.0) {
    fVar4 = fVar5;
  }
  param_1[2] = fVar6;
  param_1[1] = fVar4;
  return;
}

