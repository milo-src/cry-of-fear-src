// rea decompile_all
// name: std::locale::name
// address: 0x101388be
// body: available
// range: 0x101388be-0x101389be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __thiscall std::locale::name(void)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall std::locale::name(locale *this)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *in_stack_00000004;
  void *local_40;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_3c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_38 [4];
  undefined4 local_28;
  uint local_24;
  void *local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_3c = in_stack_00000004;
  iVar2 = *(int *)(this + 4);
  if (iVar2 == 0) {
    bVar4 = false;
    local_24 = 0xf;
    local_28 = 0;
    pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             local_38;
    local_38[0] = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  ((uint)local_38[0] & 0xffffff00);
    bVar3 = true;
  }
  else {
    pcVar7 = *(char **)(iVar2 + 0x18);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)(iVar2 + 0x1c);
    }
    local_c = 0xf;
    local_10 = 0;
    local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
    pcVar6 = pcVar7;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_10037810(pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
    bVar3 = false;
    pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             local_20;
    bVar4 = true;
  }
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(in_stack_00000004,pbVar5);
  if ((bVar3) && (0xf < local_24)) {
    local_40 = (void *)(local_24 + 1);
    local_3c = local_38[0];
    if ((void *)0xfff < local_40) {
      _Adjust_manually_vector_aligned(&local_3c,(uint *)&local_40);
    }
    FUN_1013dba5(local_3c,local_40);
  }
  if ((bVar4) && (0xf < local_c)) {
    local_3c = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(local_c + 1);
    local_40 = local_20[0];
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0xfff < local_3c) {
      _Adjust_manually_vector_aligned(&local_40,(uint *)&local_3c);
    }
    FUN_1013dba5(local_40,local_3c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

