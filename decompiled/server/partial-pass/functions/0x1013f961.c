// rea decompile_all
// name: _CallSETranslator
// address: 0x1013f961
// body: available
// range: 0x1013f961-0x1013fa46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2019 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  int iVar1;
  undefined4 *local_44;
  code *local_40;
  uint local_3c;
  _s_FuncInfo *local_38;
  EHRegistrationNode *local_34;
  int local_30;
  EHRegistrationNode *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  EHExceptionRecord *local_1c;
  void *local_18;
  code *local_14;
  code *local_10;
  int local_c;
  code *local_8;
  
  local_24 = &stack0xfffffffc;
  local_28 = &stack0xffffffb8;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x1013fa1b;
    local_c = 1;
  }
  else {
    local_40 = __TranslatorGuardHandler;
    local_3c = DAT_1021baf4 ^ (uint)&local_44;
    local_38 = param_5;
    local_34 = param_2;
    local_30 = param_6;
    local_2c = param_7;
    local_20 = 0;
    local_44 = ExceptionList;
    ExceptionList = &local_44;
    local_c = 1;
    local_1c = param_1;
    local_18 = param_3;
    iVar1 = ___vcrt_getptd();
    local_8 = *(code **)(iVar1 + 8);
    local_10 = guard_check_icall;
    guard_check_icall();
    local_14 = local_8;
    (*local_8)(*(undefined4 *)param_1,&local_1c);
    local_c = 0;
    if (local_20 != 0) {
      *local_44 = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_44;
  }
  return local_c;
}

