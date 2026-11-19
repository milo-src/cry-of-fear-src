// rea decompile_all
// name: FUN_100da2a0
// address: 0x100da2a0
// body: available
// range: 0x100da2a0-0x100da420 inclusive
// range: 0x100da445-0x100da44e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100da44a to 0x10037680 FUN_10037680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_100da2a0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *in_ECX;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  uint uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019de30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)in_ECX;
  iVar2 = (*(int *)(in_ECX + 4) - iVar1) / 0x18;
  if (iVar2 == 0xaaaaaaa) {
    FUN_100f9d10();
  }
  else {
    uVar9 = iVar2 + 1;
    uVar3 = (*(int *)(in_ECX + 8) - iVar1) / 0x18;
    uVar4 = uVar9;
    if ((uVar3 <= 0xaaaaaaa - (uVar3 >> 1)) && (uVar4 = (uVar3 >> 1) + uVar3, uVar4 < uVar9)) {
      uVar4 = uVar9;
    }
    if (uVar4 < 0xaaaaaab) {
      pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_1002f1e0(uVar4 * 0x18);
      local_8 = 0;
      this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (pbVar5 + (((int)param_1 - iVar1) / 0x18) * 0x18);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(this,param_2);
      pbVar6 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (in_ECX + 4);
      pbVar7 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                in_ECX;
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)pbVar5;
      if (param_1 != pbVar6) {
        std::
        _Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*,fuzzer::fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                  (pbVar7,param_1,pbVar5,in_ECX);
        pbVar6 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                  (in_ECX + 4);
        pbVar7 = param_1;
        pbVar8 = this + 0x18;
      }
      std::
      _Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*,fuzzer::fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                (pbVar7,pbVar6,
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 pbVar8,in_ECX);
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)in_ECX !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::
        _Destroy_range<fuzzer::fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                  (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)in_ECX,
                   *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(in_ECX + 4),in_ECX);
        std::_Deallocate<8,0>
                  (*(void **)in_ECX,((*(int *)(in_ECX + 8) - (int)*(void **)in_ECX) / 0x18) * 0x18);
      }
      *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)in_ECX =
           pbVar5;
      *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)(in_ECX + 4)
           = pbVar5 + uVar9 * 0x18;
      *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)(in_ECX + 8)
           = pbVar5 + uVar4 * 0x18;
      ExceptionList = local_10;
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10037680();
}

