// rea decompile_all
// name: FUN_1013499d
// address: 0x1013499d
// body: available
// range: 0x1013499d-0x10134a8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1013499d(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint *param_7,double *param_8)

{
  uint *puVar1;
  double *pdVar2;
  char cVar3;
  undefined4 uVar4;
  float10 fVar5;
  int local_32c;
  char *local_328;
  int local_324;
  char local_320 [792];
  uint local_8;
  
  pdVar2 = param_8;
  puVar1 = param_7;
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_324 = 1000000000;
  uVar4 = Getffld();
  if (local_320[0] == '\0') {
LAB_10134a51:
    fVar5 = (float10)0;
    *puVar1 = 2;
  }
  else {
    fVar5 = (float10)FUN_10125b49(local_320,&local_328,uVar4,&local_32c);
    *pdVar2 = (double)fVar5;
    if ((local_328 == local_320) || (local_32c != 0)) goto LAB_10134a51;
    if ((local_324 == 1000000000) || (local_324 == 0)) goto LAB_10134a5d;
    fVar5 = (float10)FUN_10176048((double)fVar5,local_324 << 2);
  }
  *pdVar2 = (double)fVar5;
LAB_10134a5d:
  cVar3 = equal(&param_4);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

