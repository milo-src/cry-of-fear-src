// rea decompile_all
// name: do_put
// address: 0x10137d4c
// body: available
// range: 0x10137d4c-0x10137e55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::time_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::ios_base &,unsigned short,struct tm const *,char,char)const 
    protected: virtual class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::time_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_put(class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,wchar_t,struct tm const *,char,char)const 
   
   Library: Visual Studio 2019 Release */

void do_put(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,tm *param_6,char param_7,char param_8)

{
  size_t sVar1;
  wchar_t ****ppppwVar2;
  wchar_t ****ppppwVar3;
  wchar_t ****in_ECX;
  uint uVar4;
  wchar_t ***local_40;
  tm *local_3c;
  wchar_t ***local_38 [4];
  size_t local_28;
  uint local_24;
  wchar_t local_20 [2];
  undefined4 local_1c;
  undefined2 uStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_28 = 0;
  local_3c = param_6;
  local_20[0] = L'!';
  local_20[1] = L'%';
  local_24 = 7;
  local_38[0] = (wchar_t ***)((uint)local_38[0] & 0xffff0000);
  uStack_18 = 0;
  local_8 = 0;
  if (param_8 == '\0') {
    local_1c = (uint)(ushort)(short)param_7;
  }
  else {
    local_1c = CONCAT22((short)param_7,(short)param_8);
  }
  uVar4 = 0x10;
  local_40 = (wchar_t ***)in_ECX;
  while( true ) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)local_38,
               uVar4,L'\0');
    ppppwVar2 = local_38;
    if (7 < local_24) {
      ppppwVar2 = (wchar_t ****)local_38[0];
    }
    sVar1 = __Wcsftime((wchar_t *)ppppwVar2,local_28,local_20,param_6,in_ECX[2]);
    if (sVar1 != 0) break;
    uVar4 = uVar4 * 2;
  }
  ppppwVar2 = local_38;
  if (7 < local_24) {
    ppppwVar2 = (wchar_t ****)local_38[0];
  }
  ppppwVar3 = local_38;
  if (7 < local_24) {
    ppppwVar3 = (wchar_t ****)local_38[0];
  }
  copy<>(param_1,(wchar_t *)((int)ppppwVar3 + 2),(wchar_t *)((int)ppppwVar2 + sVar1 * 2),param_2,
         param_3);
  if (7 < local_24) {
    local_3c = (tm *)(local_24 * 2 + 2);
    local_40 = local_38[0];
    if ((tm *)0xfff < local_3c) {
      std::_Adjust_manually_vector_aligned(&local_40,(uint *)&local_3c);
    }
    FUN_1013dba5(local_40,local_3c);
  }
  FUN_1013ecd2();
  return;
}

