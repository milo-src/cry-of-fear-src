// rea decompile_all
// name: UnDecorator::getTemplateTypeArgument
// address: 0x1014a463
// body: available
// range: 0x1014a463-0x1014a568 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateTypeArgument(void)
   
   Library: Visual Studio 2019 Release */

void __cdecl UnDecorator::getTemplateTypeArgument(void)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  DName *this;
  DName *in_stack_00000004;
  DName local_30 [8];
  undefined *local_28;
  uint local_24;
  char *local_20;
  undefined4 local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (*DAT_10232958 == 'X') {
    DAT_10232958 = DAT_10232958 + 1;
    local_28 = &DAT_101ec0b4;
    local_24 = 4;
    DName::DName(in_stack_00000004,(StringLiteral *)&local_28);
  }
  else if (*DAT_10232958 == '?') {
    getSignedDimension();
    if (((DAT_10232960 & 0x4000) != 0) && (DAT_10232968 != (code *)0x0)) {
      DName::getString((DName *)&local_28,local_18,0x10);
      pcVar1 = DAT_10232968;
      lVar2 = _atol(local_18);
      guard_check_icall(lVar2);
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        local_24 = local_24 & 0xffffff00;
        DName::DName<0>(in_stack_00000004,iVar3,local_24);
        goto LAB_1014a55a;
      }
    }
    local_20 = "`template-parameter";
    local_1c = 0x13;
    this = (DName *)DName::DName(local_30,(StringLiteral *)&local_20);
    DName::operator+(this,(DName *)&local_20);
    DName::operator+((DName *)&local_20,(char)in_stack_00000004);
  }
  else {
    local_20 = (char *)0x0;
    local_1c = 0;
    getPrimaryDataType(in_stack_00000004);
  }
LAB_1014a55a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

