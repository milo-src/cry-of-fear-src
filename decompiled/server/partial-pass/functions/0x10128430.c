// rea decompile_all
// name: FUN_10128430
// address: 0x10128430
// body: available
// range: 0x10128430-0x101284d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101284d2 to 0x10122660 FUN_10122660 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


wchar_t * FUN_10128430(char *param_1,undefined4 param_2,_Cvtvec *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  wchar_t *pwVar6;
  mbstate_t local_20;
  undefined4 local_1c;
  mbstate_t local_18;
  undefined4 local_14;
  wchar_t *local_10;
  char *local_c;
  wchar_t local_8 [2];
  
  local_18 = 0;
  local_14 = 0;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
  local_c = pcVar3;
  pcVar4 = param_1;
  while ((pcVar3 != (char *)0x0 &&
         (iVar2 = __Mbrtowc(local_8,pcVar4,(size_t)pcVar3,&local_18,param_3), 0 < iVar2))) {
    pcVar4 = pcVar4 + iVar2;
    iVar5 = iVar5 + 1;
    pcVar3 = pcVar3 + -iVar2;
  }
  iVar5 = iVar5 + 1;
  local_10 = (wchar_t *)FUN_10171536(iVar5,2);
  if (local_10 != (wchar_t *)0x0) {
    local_20 = 0;
    local_1c = 0;
    pwVar6 = local_10;
    while ((iVar5 != 0 &&
           (iVar2 = __Mbrtowc(pwVar6,param_1,(size_t)local_c,&local_20,param_3), 0 < iVar2))) {
      param_1 = param_1 + iVar2;
      pwVar6 = pwVar6 + 1;
      iVar5 = iVar5 + -1;
    }
    *pwVar6 = L'\0';
    return local_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10122660();
}

