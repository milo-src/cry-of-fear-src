// rea decompile_all
// name: __Stollx
// address: 0x1013cdce
// body: available
// range: 0x1013cdce-0x1013ce98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1013ce56) */
/* Library Function - Single Match
    __Stollx
   
   Library: Visual Studio 2019 Release */

int __Stollx(byte *param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  ulonglong uVar5;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    param_2 = &local_8;
  }
  bVar3 = *param_1;
  pbVar4 = param_1;
  while (iVar1 = _isspace((uint)bVar3), iVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    bVar3 = *pbVar4;
  }
  bVar3 = *pbVar4;
  if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
    pbVar4 = pbVar4 + 1;
  }
  else {
    bVar3 = 0x2b;
  }
  uVar5 = __Stoullx(pbVar4,param_2,param_3,param_4);
  if (pbVar4 == (byte *)*param_2) {
    *param_2 = (int)param_1;
LAB_1013ce2a:
    if (uVar5 != 0) goto LAB_1013ce6e;
  }
  else if (param_1 == (byte *)*param_2) goto LAB_1013ce2a;
  if ((bVar3 != 0x2b) || (uVar5 < 0x8000000000000000)) {
    if (bVar3 != 0x2d) {
      return (int)uVar5;
    }
    if (uVar5 < 0x8000000000000001) {
      return -(int)uVar5;
    }
  }
LAB_1013ce6e:
  iVar1 = 0;
  piVar2 = __errno();
  *piVar2 = 0x22;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  if (bVar3 != 0x2d) {
    iVar1 = -1;
  }
  return iVar1;
}

