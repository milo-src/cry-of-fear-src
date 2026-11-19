// rea decompile_all
// name: __Stoullx
// address: 0x1013ceb1
// body: available
// range: 0x1013ceb1-0x1013d06e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1013d007) */
/* Library Function - Single Match
    __Stoullx
   
   Library: Visual Studio 2019 Release */

ulonglong __Stoullx(byte *param_1,undefined4 *param_2,size_t param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  size_t _MaxCount;
  byte local_6;
  char local_5;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  bVar3 = *param_1;
  pbVar7 = param_1;
  while (iVar4 = _isspace((uint)bVar3), iVar4 != 0) {
    pbVar7 = pbVar7 + 1;
    bVar3 = *pbVar7;
  }
  local_6 = *pbVar7;
  if ((local_6 == 0x2d) || (local_6 == 0x2b)) {
    pbVar7 = pbVar7 + 1;
  }
  else {
    local_6 = 0x2b;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  if ((int)param_3 < 1) {
    if (*pbVar7 != 0x30) {
      param_3 = 10;
      goto LAB_1013cf48;
    }
    if ((pbVar7[1] != 0x78) && (pbVar7[1] != 0x58)) {
      param_3 = 8;
      goto LAB_1013cf48;
    }
    param_3 = 0x10;
  }
  else if (((param_3 != 0x10) || (*pbVar7 != 0x30)) || ((pbVar7[1] != 0x78 && (pbVar7[1] != 0x58))))
  goto LAB_1013cf48;
  pbVar7 = pbVar7 + 2;
LAB_1013cf48:
  bVar3 = *pbVar7;
  pbVar8 = pbVar7;
  while (bVar3 == 0x30) {
    pbVar8 = pbVar8 + 1;
    bVar3 = *pbVar8;
  }
  local_5 = '\0';
  pbVar9 = pbVar8;
  uVar11 = 0;
  uVar2 = 0;
  while( true ) {
    uVar1 = uVar11;
    _MaxCount = param_3;
    iVar4 = _tolower((int)(char)bVar3);
    pvVar5 = _memchr("0123456789abcdefghijklmnopqrstuvwxyz",iVar4,_MaxCount);
    if (pvVar5 == (void *)0x0) break;
    local_5 = (char)pvVar5 + -0x3c;
    lVar10 = __allmul(param_3,0,uVar1);
    pbVar9 = pbVar9 + 1;
    bVar3 = *pbVar9;
    uVar11 = lVar10 + (int)local_5;
    uVar2 = uVar1;
  }
  if (pbVar7 == pbVar9) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  iVar4 = (int)(pbVar9 + -(int)(char)(&DAT_101e9464)[param_3]) - (int)pbVar8;
  if ((iVar4 < 0) ||
     (((pbVar9 + -(int)(char)(&DAT_101e9464)[param_3] == pbVar8 || iVar4 < 0 &&
       (uVar1 - (longlong)(int)local_5 <= uVar1)) &&
      (uVar11 = __aulldiv(uVar1 - (longlong)(int)local_5,param_3,0), uVar11 == uVar2)))) {
    if (local_6 == 0x2d) {
      uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
    }
  }
  else {
    piVar6 = __errno();
    *piVar6 = 0x22;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
    uVar1 = 0xffffffffffffffff;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar9;
    return uVar1;
  }
  return uVar1;
}

