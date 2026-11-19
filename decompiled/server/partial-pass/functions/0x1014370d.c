// rea decompile_all
// name: ___std_type_info_name
// address: 0x1014370d
// body: available
// range: 0x1014370d-0x101437d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___std_type_info_name
   
   Library: Visual Studio 2019 Release */

PSINGLE_LIST_ENTRY ___std_type_info_name(undefined4 *param_1,PSLIST_HEADER param_2)

{
  PSINGLE_LIST_ENTRY _Dst;
  char cVar1;
  char *_Src;
  PSINGLE_LIST_ENTRY ListEntry;
  char *pcVar2;
  int iVar3;
  PSINGLE_LIST_ENTRY p_Var4;
  
  p_Var4 = (PSINGLE_LIST_ENTRY)*param_1;
  if (p_Var4 == (PSINGLE_LIST_ENTRY)0x0) {
    p_Var4 = (PSINGLE_LIST_ENTRY)0x0;
    _Src = (char *)___unDName(0,(int)param_1 + 5,0,FUN_1014358e,&LAB_10143597,0x2800);
    if (_Src != (char *)0x0) {
      pcVar2 = _Src;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iVar3 = (int)pcVar2 - (int)(_Src + 1);
      if (iVar3 != 0) {
        pcVar2 = _Src + iVar3 + -1;
        do {
          if (*pcVar2 != ' ') break;
          *pcVar2 = '\0';
          pcVar2 = pcVar2 + -1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      ListEntry = (PSINGLE_LIST_ENTRY)FUN_1017556b(iVar3 + 5);
      if (ListEntry != (PSINGLE_LIST_ENTRY)0x0) {
        _Dst = ListEntry + 1;
        ListEntry->Next = (_SINGLE_LIST_ENTRY *)0x0;
        _strcpy_s((char *)_Dst,iVar3 + 1,_Src);
        LOCK();
        p_Var4 = (PSINGLE_LIST_ENTRY)*param_1;
        if (p_Var4 == (PSINGLE_LIST_ENTRY)0x0) {
          *param_1 = _Dst;
          p_Var4 = (PSINGLE_LIST_ENTRY)0x0;
        }
        UNLOCK();
        if (p_Var4 == (PSINGLE_LIST_ENTRY)0x0) {
          InterlockedPushEntrySList(param_2,ListEntry);
          p_Var4 = _Dst;
          ListEntry = (PSINGLE_LIST_ENTRY)0x0;
        }
      }
      FUN_101714d1(ListEntry);
    }
    FUN_101714d1(_Src);
  }
  return p_Var4;
}

