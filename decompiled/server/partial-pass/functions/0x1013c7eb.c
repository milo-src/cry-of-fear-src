// rea decompile_all
// name: std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::do_put
// address: 0x1013c7eb
// body: available
// range: 0x1013c7eb-0x1013c8ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::time_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base
   &,char,struct tm const *,char,char)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::do_put
          (time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,uint param_2
          ,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,tm *param_7,
          undefined1 param_8,char param_9)

{
  size_t sVar1;
  tm *ptVar2;
  tm *ptVar3;
  uint uVar4;
  tm *local_3c;
  uint local_38;
  tm local_34;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_34.tm_mon = 0;
  local_3c = param_7;
  local_38 = param_2;
  local_34.tm_yday._0_1_ = 0;
  local_34.tm_year = 0xf;
  local_34.tm_sec = local_34.tm_sec & 0xffffff00;
  local_8 = 0;
  if (param_9 == '\0') {
    local_34.tm_wday._0_3_ = CONCAT12(param_8,0x2521);
    local_34.tm_wday = (int)(uint3)local_34.tm_wday;
  }
  else {
    local_34.tm_wday._0_3_ = CONCAT12(param_9,0x2521);
    local_34.tm_wday = CONCAT13(param_8,(uint3)local_34.tm_wday);
  }
  uVar4 = 0x10;
  while( true ) {
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_34,uVar4,
               '\0');
    ptVar2 = &local_34;
    if (0xf < (uint)local_34.tm_year) {
      ptVar2 = (tm *)local_34.tm_sec;
    }
    sVar1 = __Strftime((char *)ptVar2,local_34.tm_mon,(char *)&local_34.tm_wday,param_7,
                       *(void **)(this + 8));
    if (sVar1 != 0) break;
    uVar4 = uVar4 * 2;
  }
  ptVar2 = &local_34;
  if (0xf < (uint)local_34.tm_year) {
    ptVar2 = (tm *)local_34.tm_sec;
  }
  ptVar3 = &local_34;
  if (0xf < (uint)local_34.tm_year) {
    ptVar3 = (tm *)local_34.tm_sec;
  }
  copy<char*,std::ostreambuf_iterator<char,std::char_traits<char>_>_>
            (local_38,(char *)((int)&ptVar3->tm_sec + 1),(char *)((int)&ptVar2->tm_sec + sVar1),
             param_3,param_4);
  if (0xf < (uint)local_34.tm_year) {
    local_38 = local_34.tm_year + 1;
    local_3c = (tm *)local_34.tm_sec;
    if (0xfff < local_38) {
      _Adjust_manually_vector_aligned(&local_3c,&local_38);
    }
    FUN_1013dba5(local_3c,local_38);
  }
  FUN_1013ecd2();
  return;
}

