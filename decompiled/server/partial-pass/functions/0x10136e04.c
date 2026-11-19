// rea decompile_all
// name: FUN_10136e04
// address: 0x10136e04
// body: available
// range: 0x10136e04-0x10136fbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_10136e04(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,double param_7)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  locale local_68 [4];
  uint local_64;
  int *local_60;
  uint local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 local_44;
  uint local_40;
  char local_3c [52];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x60;
  local_8 = 0x10136e10;
  uVar4 = local_5c >> 8;
  local_5c = local_5c & 0xffffff00;
  if (param_7 < 0.0) {
    local_5c = CONCAT31((int3)uVar4,1);
    param_7 = -param_7;
  }
  uVar4 = 0;
  if (!NAN(param_7) && 1e+35 < param_7 != (param_7 == 1e+35)) {
    do {
      if (4999 < uVar4) break;
      param_7 = param_7 / 10000000000.0;
      uVar4 = uVar4 + 10;
    } while (1e+35 < param_7 != (param_7 == 1e+35));
  }
  local_58 = (undefined4 *)_sprintf_s(local_3c,0x28,"%.0Lf",param_7);
  if ((int)local_58 < 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  else {
    std::locale::locale(local_68,*(locale **)(param_5 + 0x30));
    local_8 = 0;
    piVar2 = (int *)FUN_101290d4();
    local_8 = 0xffffffff;
    local_60 = piVar2;
    FUN_100307e0();
    pcVar1 = *(code **)(*piVar2 + 0x30);
    guard_check_icall();
    local_64 = (*pcVar1)();
    local_44 = 0;
    local_64 = local_64 & 0xffff;
    local_40 = 7;
    local_54 = (undefined4 *)((uint)local_54._2_2_ << 0x10);
    FID_conflict_assign(local_58,0);
    local_8 = 1;
    puVar3 = &local_54;
    if (7 < local_40) {
      puVar3 = local_54;
    }
    pcVar1 = *(code **)(*local_60 + 0x2c);
    guard_check_icall(local_3c,(char *)((int)local_58 + (int)local_3c),puVar3);
    (*pcVar1)();
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_54
               ,uVar4,(wchar_t)local_64);
    FID_conflict__Construct_lv_contents(&local_54);
    Putmfld(param_1,param_2,param_3,param_4,param_5,param_6,local_5c);
    if (7 < local_40) {
      local_5c = local_40 * 2 + 2;
      local_58 = local_54;
      if (0xfff < local_5c) {
        std::_Adjust_manually_vector_aligned(&local_58,&local_5c);
      }
      FUN_1013dba5(local_58,local_5c);
    }
  }
  FUN_1013ecd2();
  return;
}

