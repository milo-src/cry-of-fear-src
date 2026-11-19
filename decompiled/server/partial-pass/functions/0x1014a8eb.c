// rea decompile_all
// name: UnDecorator::getUndecoratedName
// address: 0x1014a8eb
// body: available
// range: 0x1014a8eb-0x1014aa09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: char * __thiscall UnDecorator::getUndecoratedName(char *,int)
   
   Library: Visual Studio 2019 Release */

char * __thiscall UnDecorator::getUndecoratedName(UnDecorator *this,char *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int *piVar8;
  DName local_14 [8];
  int *local_c;
  uint local_8;
  
  parseDecoratedName();
  if ((char)local_8 == '\x03') {
    return (char *)0x0;
  }
  if (((char)local_8 == '\x02') ||
     ((piVar8 = local_c, (DAT_10232960 & 0x1000) == 0 && (*DAT_10232958 != '\0')))) {
    local_8 = local_8 & 0xffffff00;
    puVar3 = (undefined4 *)DName::DName<1>(local_14,DAT_1023295c,local_8);
    piVar8 = (int *)*puVar3;
  }
  if (param_1 == (char *)0x0) {
    if (piVar8 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      pcVar2 = *(code **)*piVar8;
      guard_check_icall();
      iVar4 = (*pcVar2)();
    }
    param_2 = iVar4 + 1;
    local_8 = param_2;
    param_1 = _HeapManager::getMemoryWithoutBuffer((_HeapManager *)&DAT_10232974,param_2);
    if (param_1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  if (piVar8 == (int *)0x0) {
    *param_1 = '\0';
  }
  else {
    pcVar5 = param_1;
    if (param_1 == (char *)0x0) {
      pcVar2 = *(code **)*piVar8;
      guard_check_icall();
      iVar4 = (*pcVar2)();
      local_8 = iVar4 + 1;
      pcVar5 = _HeapManager::getMemoryWithBuffer((_HeapManager *)&DAT_10232974,local_8);
      param_2 = local_8;
      if (pcVar5 == (char *)0x0) goto LAB_1014a9d6;
    }
    pcVar2 = *(code **)(*piVar8 + 0xc);
    guard_check_icall(pcVar5,pcVar5 + (param_2 - 1));
    puVar6 = (undefined1 *)(*pcVar2)();
    *puVar6 = 0;
  }
LAB_1014a9d6:
  cVar1 = *param_1;
  pcVar5 = param_1;
  pcVar7 = param_1;
  while (cVar1 != '\0') {
    pcVar7 = pcVar7 + 1;
    if (cVar1 == ' ') {
      *pcVar5 = ' ';
      for (; *pcVar7 == ' '; pcVar7 = pcVar7 + 1) {
      }
    }
    else {
      *pcVar5 = cVar1;
    }
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar7;
  }
  *pcVar5 = '\0';
  return param_1;
}

