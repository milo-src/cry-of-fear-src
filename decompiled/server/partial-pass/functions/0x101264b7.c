// rea decompile_all
// name: std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
// address: 0x101264b7
// body: available
// range: 0x101264b7-0x10126581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class std::istreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::num_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   >::do_get(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int
   &,unsigned __int64 &)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
          (num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,int param_7,uint *param_8,undefined8 *param_9)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this_00;
  undefined8 uVar4;
  istreambuf_iterator<char,std::char_traits<char>_> *local_44;
  locale local_40 [4];
  int local_3c;
  undefined8 *local_38;
  istreambuf_iterator<char,std::char_traits<char>_> local_34 [44];
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar1 = param_8;
  iVar3 = param_7;
  uStack_4 = 0x38;
  local_8 = 0x101264c3;
  local_38 = param_9;
  locale::locale(local_40,*(locale **)(param_7 + 0x30));
  local_8 = 0;
  iVar3 = _Getifld(this_00,(char *)this,local_34,
                   (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,
                   *(locale **)(iVar3 + 0x14));
  local_8 = 0xffffffff;
  FUN_100307e0();
  if (local_34[0] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
    *puVar1 = 2;
    *(undefined4 *)local_38 = 0;
    *(undefined4 *)((int)local_38 + 4) = 0;
  }
  else {
    uVar4 = __Stoullx(local_34,&local_44,iVar3,&local_3c);
    *local_38 = uVar4;
    if ((local_44 == local_34) || (local_3c != 0)) {
      *puVar1 = 2;
    }
  }
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar2) {
    *puVar1 = *puVar1 | 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  FUN_1013ecd2();
  return;
}

