// rea decompile_all
// name: __Stoulx
// address: 0x1013cc44
// body: available
// range: 0x1013cc44-0x1013cdb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Stoulx
   
   Library: Visual Studio 2019 Release */

uint __Stoulx(byte *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint local_14;
  byte *local_c;
  byte local_5;
  
  cVar2 = '\0';
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  bVar1 = *param_1;
  pbVar7 = param_1;
  while (iVar3 = _isspace((uint)bVar1), iVar3 != 0) {
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
  local_5 = *pbVar7;
  if ((local_5 == 0x2d) || (local_5 == 0x2b)) {
    pbVar7 = pbVar7 + 1;
  }
  else {
    local_5 = 0x2b;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  local_c = pbVar7;
  if ((int)param_3 < 1) {
    bVar1 = *pbVar7;
    if (bVar1 != 0x30) {
      param_3 = 10;
      goto LAB_1013cce6;
    }
    if ((pbVar7[1] != 0x78) && (pbVar7[1] != 0x58)) {
      param_3 = 8;
      goto LAB_1013ccdf;
    }
    param_3 = 0x10;
LAB_1013ccf8:
    pbVar7 = pbVar7 + 2;
    local_c = pbVar7;
  }
  else if (((param_3 == 0x10) && (*pbVar7 == 0x30)) && ((pbVar7[1] == 0x78 || (pbVar7[1] == 0x58))))
  goto LAB_1013ccf8;
  for (; bVar1 = *pbVar7, bVar1 == 0x30; pbVar7 = pbVar7 + 1) {
LAB_1013ccdf:
  }
LAB_1013cce6:
  local_14 = 0;
  uVar9 = 0;
  pbVar8 = pbVar7;
  while( true ) {
    uVar6 = uVar9;
    uVar9 = param_3;
    iVar3 = _tolower((int)(char)bVar1);
    pvVar4 = _memchr("0123456789abcdefghijklmnopqrstuvwxyz",iVar3,uVar9);
    if (pvVar4 == (void *)0x0) break;
    cVar2 = (char)pvVar4 + '\x14';
    pbVar8 = pbVar8 + 1;
    bVar1 = *pbVar8;
    uVar9 = uVar6 * param_3 + (int)cVar2;
    local_14 = uVar6;
  }
  if (local_c == pbVar8) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  iVar3 = (int)(pbVar8 + -(int)(char)(&DAT_101e9414)[param_3]) - (int)pbVar7;
  if ((iVar3 < 0) ||
     (((pbVar8 + -(int)(char)(&DAT_101e9414)[param_3] == pbVar7 || iVar3 < 0 &&
       (uVar6 - (int)cVar2 <= uVar6)) && ((uVar6 - (int)cVar2) / param_3 == local_14)))) {
    if (local_5 == 0x2d) {
      uVar6 = -uVar6;
    }
  }
  else {
    piVar5 = __errno();
    *piVar5 = 0x22;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
    uVar6 = 0xffffffff;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar8;
    return uVar6;
  }
  return uVar6;
}

