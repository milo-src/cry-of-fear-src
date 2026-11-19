// rea decompile_all
// name: __Stolx
// address: 0x1013cb88
// body: available
// range: 0x1013cb88-0x1013cc2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Stolx
   
   Library: Visual Studio 2019 Release */

uint __Stolx(byte *param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  byte *pbVar5;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    param_2 = &local_8;
  }
  bVar4 = *param_1;
  pbVar5 = param_1;
  while (iVar1 = _isspace((uint)bVar4), iVar1 != 0) {
    pbVar5 = pbVar5 + 1;
    bVar4 = *pbVar5;
  }
  bVar4 = *pbVar5;
  if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
    pbVar5 = pbVar5 + 1;
  }
  else {
    bVar4 = 0x2b;
  }
  uVar2 = __Stoulx(pbVar5,param_2,param_3,param_4);
  if (pbVar5 == (byte *)*param_2) {
    *param_2 = (int)param_1;
LAB_1013cbe2:
    if (uVar2 != 0) goto LAB_1013cbfe;
  }
  else if (param_1 == (byte *)*param_2) goto LAB_1013cbe2;
  if ((bVar4 != 0x2b) || (uVar2 < 0x80000000)) {
    if (bVar4 != 0x2d) {
      return uVar2;
    }
    if (uVar2 < 0x80000001) {
      return -uVar2;
    }
  }
LAB_1013cbfe:
  piVar3 = __errno();
  *piVar3 = 0x22;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  return (bVar4 == 0x2d) + 0x7fffffff;
}

