// rea decompile_all
// name: FUN_1002f750
// address: 0x1002f750
// body: available
// range: 0x1002f750-0x1002f8c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


_Facet_base * FUN_1002f750(int param_1)

{
  short *psVar1;
  wchar_t *pwVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  _Facet_base *p_Var6;
  undefined1 *puVar7;
  _Ctypevec *p_Var8;
  _Ctypevec local_30;
  _Lockit local_20 [4];
  _Facet_base *local_1c;
  _Lockit local_18 [4];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019d384;
  local_10 = ExceptionList;
  uVar4 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  std::_Lockit::_Lockit(local_20,0);
  local_8 = 0;
  local_1c = DAT_10222e2c;
  if (DAT_10232360 == 0) {
    std::_Lockit::_Lockit(local_18,0);
    if (DAT_10232360 == 0) {
      DAT_10232348 = DAT_10232348 + 1;
      DAT_10232360 = DAT_10232348;
    }
    std::_Lockit::~_Lockit(local_18);
  }
  uVar3 = DAT_10232360;
  iVar5 = *(int *)(param_1 + 4);
  if (DAT_10232360 < *(uint *)(iVar5 + 0xc)) {
    p_Var6 = *(_Facet_base **)(*(int *)(iVar5 + 8) + DAT_10232360 * 4);
    if (p_Var6 != (_Facet_base *)0x0) goto LAB_1002f8aa;
  }
  else {
    p_Var6 = (_Facet_base *)0x0;
  }
  if (*(char *)(iVar5 + 0x14) == '\0') {
LAB_1002f803:
    if (p_Var6 != (_Facet_base *)0x0) goto LAB_1002f8aa;
  }
  else {
    iVar5 = FUN_10122a52(uVar4);
    if (uVar3 < *(uint *)(iVar5 + 0xc)) {
      p_Var6 = *(_Facet_base **)(*(int *)(iVar5 + 8) + uVar3 * 4);
      goto LAB_1002f803;
    }
  }
  p_Var6 = local_1c;
  if (local_1c == (_Facet_base *)0x0) {
    p_Var6 = (_Facet_base *)FUN_1013e1e9(0x18);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = p_Var6;
    if (p_Var6 == (_Facet_base *)0x0) {
      p_Var6 = (_Facet_base *)0x0;
    }
    else {
      iVar5 = *(int *)(param_1 + 4);
      if (iVar5 == 0) {
        puVar7 = &DAT_101a2496;
      }
      else {
        puVar7 = *(undefined1 **)(iVar5 + 0x18);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)(iVar5 + 0x1c);
        }
      }
      FUN_1002fcf0(puVar7);
      local_14 = 1;
      *(undefined4 *)(p_Var6 + 4) = 0;
      *(undefined ***)p_Var6 = std::ctype<char>::vftable;
      p_Var8 = __Getctype(&local_30);
      psVar1 = p_Var8->_Table;
      iVar5 = p_Var8->_Delfl;
      pwVar2 = p_Var8->_LocaleName;
      *(uint *)(p_Var6 + 8) = p_Var8->_Page;
      *(short **)(p_Var6 + 0xc) = psVar1;
      *(int *)(p_Var6 + 0x10) = iVar5;
      *(wchar_t **)(p_Var6 + 0x14) = pwVar2;
    }
    if ((local_14 & 1) != 0) {
      FUN_10030570();
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    std::_Facet_Register(p_Var6);
    (**(code **)(*(int *)p_Var6 + 4))();
    DAT_10222e2c = p_Var6;
  }
LAB_1002f8aa:
  std::_Lockit::~_Lockit(local_20);
  ExceptionList = local_10;
  return p_Var6;
}

