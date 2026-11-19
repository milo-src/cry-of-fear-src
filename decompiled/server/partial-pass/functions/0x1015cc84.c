// rea decompile_all
// name: FID_conflict:___stdio_common_vfprintf_p
// address: 0x1015cc84
// body: available
// range: 0x1015cc84-0x1015cd06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    ___stdio_common_vfprintf
    ___stdio_common_vfprintf_p
    ___stdio_common_vfprintf_s
    ___stdio_common_vfwprintf
     6 names - too many to list
   
   Library: Visual Studio 2019 Release */

undefined4
FID_conflict____stdio_common_vfprintf_p
          (undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  int *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c [2];
  
  local_18 = param_6;
  local_10 = param_5;
  local_28 = param_1;
  local_14 = param_4;
  local_c[0] = param_3;
  local_24 = param_2;
  if ((param_3 != 0) && (param_4 != 0)) {
    local_3c = local_c;
    local_1c = param_3;
    local_38 = &local_10;
    local_34 = &local_28;
    local_30 = &local_14;
    local_2c = &local_18;
    local_20 = param_3;
    uVar2 = operator()<>(&local_20,&local_3c,&local_1c);
    return uVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_1016fa52();
  return 0xffffffff;
}

