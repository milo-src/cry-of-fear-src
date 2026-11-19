// rea decompile_all
// name: do_put
// address: 0x10136cd7
// body: available
// range: 0x10136cd7-0x10136e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::money_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,bool,class
   std::ios_base &,unsigned short,class std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> > const &)const 
    protected: virtual class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::money_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_put(class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,bool,class std::ios_base &,wchar_t,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   &)const 
   
   Library: Visual Studio 2019 Release */

void do_put(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
           undefined4 param_6,short *param_7)

{
  code *pcVar1;
  int *piVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  locale local_5c [12];
  undefined4 local_50;
  int local_4c;
  uint local_48;
  undefined1 local_44 [16];
  int local_34;
  undefined4 local_2c [5];
  short local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x10136ce3;
  local_50 = param_1;
  local_4c = param_5;
  std::locale::locale(local_5c,*(locale **)(param_5 + 0x30));
  local_8 = 0;
  piVar2 = (int *)FUN_101290d4(local_5c);
  local_8 = 0xffffffff;
  FUN_100307e0();
  pcVar1 = *(code **)(*piVar2 + 0x2c);
  guard_check_icall("0123456789-","0123456789-",local_2c);
  (*pcVar1)();
  uVar6 = 0;
  uVar5 = local_48 >> 8;
  local_48 = local_48 & 0xffffff00;
  if (*(int *)(param_7 + 8) != 0) {
    psVar3 = param_7;
    if (7 < *(uint *)(param_7 + 10)) {
      psVar3 = *(short **)param_7;
    }
    if (*psVar3 == local_18) {
      local_48 = CONCAT31((int3)uVar5,1);
      uVar6 = 1;
    }
  }
  uVar5 = uVar6;
  if (uVar6 < *(uint *)(param_7 + 8)) {
    do {
      psVar3 = param_7;
      if (7 < *(uint *)(param_7 + 10)) {
        psVar3 = *(short **)param_7;
      }
      uVar4 = _Find_elem<>(local_2c,psVar3[uVar5]);
    } while ((uVar4 < 10) && (uVar5 = uVar5 + 1, uVar5 < *(uint *)(param_7 + 8)));
  }
  if (7 < *(uint *)(param_7 + 10)) {
    param_7 = *(short **)param_7;
  }
  basic_string<>(param_7 + uVar6,uVar5 - uVar6);
  local_8 = 1;
  if (local_34 == 0) {
    FID_conflict_push_back(local_2c[0]);
  }
  FID_conflict__Construct_lv_contents(local_44);
  Putmfld(local_50,param_2,param_3,param_4,local_4c,param_6,local_48);
  FID_conflict__Tidy_deallocate();
  FUN_1013ecd2();
  return;
}

