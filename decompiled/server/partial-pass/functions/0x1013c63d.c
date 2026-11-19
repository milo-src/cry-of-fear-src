// rea decompile_all
// name: FUN_1013c63d
// address: 0x1013c63d
// body: available
// range: 0x1013c63d-0x1013c7ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_1013c63d(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,double param_7)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *in_ECX;
  uint uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_9c [4];
  undefined4 uStack_98;
  locale local_60 [4];
  void *local_5c;
  uint local_58;
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  char local_3c [52];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x60;
  local_8 = 0x1013c649;
  uVar5 = local_58 >> 8;
  local_58 = local_58 & 0xffffff00;
  if (param_7 < 0.0) {
    local_58 = CONCAT31((int3)uVar5,1);
    param_7 = -param_7;
  }
  uVar5 = 0;
  if (!NAN(param_7) && 1e+35 < param_7 != (param_7 == 1e+35)) {
    do {
      if (4999 < uVar5) break;
      param_7 = param_7 / 10000000000.0;
      uVar5 = uVar5 + 10;
    } while (1e+35 < param_7 != (param_7 == 1e+35));
  }
  uStack_98 = 0x1013c6bb;
  uVar3 = _sprintf_s(local_3c,0x28,"%.0Lf");
  if ((int)uVar3 < 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  else {
    std::locale::locale(local_60,*(locale **)(param_5 + 0x30));
    local_8 = 0;
    piVar4 = (int *)FUN_1002f750();
    local_8 = 0xffffffff;
    FUN_100307e0();
    pcVar1 = *(code **)(*piVar4 + 0x20);
    guard_check_icall();
    uVar2 = (*pcVar1)();
    local_5c = (void *)CONCAT31(local_5c._1_3_,uVar2);
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_54,uVar3,
               '\0');
    local_8 = 1;
    pcVar1 = *(code **)(*piVar4 + 0x1c);
    guard_check_icall();
    (*pcVar1)();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_54,uVar5,
               (char)local_5c);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct_lv_contents
              (abStack_9c,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               local_54);
    std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Putmfld
              (in_ECX,param_1,param_2,param_3,param_4,param_5,param_6,local_58);
    if (0xf < local_40) {
      local_58 = local_40 + 1;
      local_5c = local_54[0];
      if (0xfff < local_58) {
        std::_Adjust_manually_vector_aligned(&local_5c,&local_58);
      }
      FUN_1013dba5();
    }
  }
  FUN_1013ecd2();
  return;
}

