// rea decompile_all
// name: UnDecorator::getTemplateName
// address: 0x10149ffc
// body: available
// range: 0x10149ffc-0x1014a15c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateName(bool)
   
   Library: Visual Studio 2019 Release */

void __cdecl UnDecorator::getTemplateName(bool param_1)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  DName *pDVar4;
  undefined4 *puVar5;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  undefined4 local_a8 [11];
  undefined4 local_7c [11];
  undefined4 local_50 [11];
  undefined1 local_24 [8];
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int *local_10;
  int local_c;
  char local_5;
  
  puVar5 = DAT_1023294c;
  if ((*DAT_10232958 == '?') && (DAT_10232958[1] == '$')) {
    local_50[0] = 0xffffffff;
    local_7c[0] = 0xffffffff;
    local_a8[0] = 0xffffffff;
    local_18 = DAT_10232950;
    local_1c = DAT_10232954;
    cVar2 = '\0';
    DAT_10232950 = local_7c;
    DAT_10232954 = local_a8;
    local_14 = DAT_1023294c;
    local_5 = '\0';
    DAT_1023294c = local_50;
    if (DAT_10232958[2] == '?') {
      DAT_10232958 = DAT_10232958 + 3;
      piVar3 = (int *)getOperatorName(SUB41(local_24,0),(bool *)0x1);
      cVar2 = local_5;
    }
    else {
      DAT_10232958 = DAT_10232958 + 2;
      piVar3 = (int *)getZName(SUB41(local_24,0),true);
    }
    local_10 = (int *)*piVar3;
    local_c = piVar3[1];
    if (local_10 == (int *)0x0) {
      DAT_10232964 = 1;
    }
    if (cVar2 == '\0') {
      DName::operator+=((DName *)&local_10,'<');
      pDVar4 = (DName *)FUN_10149e40(local_24);
      DName::operator+=((DName *)&local_10,pDVar4);
      if (local_10 != (int *)0x0) {
        pcVar1 = *(code **)(*local_10 + 8);
        guard_check_icall();
        cVar2 = (*pcVar1)();
        puVar5 = local_14;
        if (cVar2 == '>') {
          DName::operator+=((DName *)&local_10,' ');
          puVar5 = local_14;
        }
      }
      DName::operator+=((DName *)&local_10,'>');
      if ((in_stack_00000008 != '\0') && (*DAT_10232958 != '\0')) {
        DAT_10232958 = DAT_10232958 + 1;
      }
    }
    DAT_10232950 = local_18;
    DAT_10232954 = local_1c;
    DAT_1023294c = puVar5;
    *_param_1 = (int)local_10;
    _param_1[1] = local_c;
    return;
  }
  _param_1[1] = 0;
  *_param_1 = 0;
  *(undefined1 *)(_param_1 + 1) = 2;
  return;
}

