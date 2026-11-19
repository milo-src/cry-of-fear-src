// rea decompile_all
// name: std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::do_put
// address: 0x1013c4d4
// body: available
// range: 0x1013c4d4-0x1013c63c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char>
   > >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,bool,class
   std::ios_base &,char,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const &)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::do_put
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,void *param_6,undefined4 param_7,char *param_8)

{
  code *pcVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_88 [16];
  undefined4 uStack_78;
  locale local_50 [8];
  money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *local_48;
  undefined4 local_44;
  void *local_40;
  uint local_3c;
  void *local_38 [4];
  int local_28;
  uint local_24;
  char local_20 [10];
  char local_16;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x1013c4e0;
  local_44 = param_2;
  local_40 = param_6;
  locale::locale(local_50,*(locale **)((int)param_6 + 0x30));
  local_8 = 0;
  piVar2 = (int *)FUN_1002f750();
  local_8 = 0xffffffff;
  FUN_100307e0();
  pcVar1 = *(code **)(*piVar2 + 0x1c);
  guard_check_icall();
  (*pcVar1)();
  uVar5 = 0;
  uVar4 = local_3c >> 8;
  local_3c = local_3c & 0xffffff00;
  if (*(int *)(param_8 + 0x10) != 0) {
    pcVar3 = param_8;
    if (0xf < *(uint *)(param_8 + 0x14)) {
      pcVar3 = *(char **)param_8;
    }
    if (*pcVar3 == local_16) {
      local_3c = CONCAT31((int3)uVar4,1);
      uVar5 = 1;
    }
  }
  if (uVar5 < *(uint *)(param_8 + 0x10)) {
    do {
      pcVar3 = param_8;
      if (0xf < *(uint *)(param_8 + 0x14)) {
        pcVar3 = *(char **)param_8;
      }
      uStack_78 = 0x1013c57a;
      uVar4 = _Find_elem<char,12>(local_20,pcVar3[uVar5]);
    } while ((uVar4 < 10) && (uVar5 = uVar5 + 1, uVar5 < *(uint *)(param_8 + 0x10)));
  }
  local_28 = 0;
  local_24 = 0xf;
  local_38[0] = (void *)((uint)local_38[0] & 0xffffff00);
  uStack_78 = 0x1013c5ad;
  FUN_10037810();
  local_8 = 1;
  if (local_28 == 0) {
    FUN_10038070();
  }
  uStack_78 = 0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct_lv_contents
            (abStack_88,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             local_38);
  _Putmfld(local_48,local_44,param_3,param_4,param_5,local_40,param_7,local_3c);
  if (0xf < local_24) {
    local_3c = local_24 + 1;
    local_40 = local_38[0];
    if (0xfff < local_3c) {
      uStack_78 = 0x1013c622;
      _Adjust_manually_vector_aligned(&local_40,&local_3c);
    }
    uStack_78 = 0x1013c631;
    FUN_1013dba5();
  }
  FUN_1013ecd2();
  return;
}

