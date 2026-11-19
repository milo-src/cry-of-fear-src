// rea decompile_all
// name: FUN_10049950
// address: 0x10049950
// body: available
// range: 0x10049950-0x10049b59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


_Facet_base * FUN_10049950(_Facet_base *param_1)

{
  uint uVar1;
  _Facet_base _Var2;
  uint uVar3;
  int iVar4;
  _Facet_base *p_Var5;
  undefined1 *puVar6;
  undefined4 uVar7;
  bool bVar8;
  _Cvtvec local_d8;
  _Cvtvec local_ac [2];
  undefined1 local_4c [44];
  _Lockit local_20 [4];
  _Facet_base *local_1c;
  _Facet_base *local_18;
  _Facet_base *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019d8bd;
  local_10 = ExceptionList;
  uVar3 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar8 = false;
  local_18 = param_1;
  local_14 = (_Facet_base *)0x0;
  std::_Lockit::_Lockit(local_20,0);
  local_8 = 0;
  local_14 = DAT_10222e48;
  if (DAT_10222e40 == 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_1c,0);
    if (DAT_10222e40 == 0) {
      DAT_10222e40 = DAT_10232348 + 1;
      DAT_10232348 = DAT_10222e40;
    }
    std::_Lockit::~_Lockit((_Lockit *)&local_1c);
  }
  uVar1 = DAT_10222e40;
  iVar4 = *(int *)(param_1 + 4);
  if (DAT_10222e40 < *(uint *)(iVar4 + 0xc)) {
    p_Var5 = *(_Facet_base **)(*(int *)(iVar4 + 8) + DAT_10222e40 * 4);
    if (p_Var5 != (_Facet_base *)0x0) goto LAB_10049b3e;
  }
  else {
    p_Var5 = (_Facet_base *)0x0;
  }
  if (*(char *)(iVar4 + 0x14) == '\0') {
LAB_10049a03:
    if (p_Var5 != (_Facet_base *)0x0) goto LAB_10049b3e;
  }
  else {
    iVar4 = FUN_10122a52(uVar3);
    if (uVar1 < *(uint *)(iVar4 + 0xc)) {
      p_Var5 = *(_Facet_base **)(*(int *)(iVar4 + 8) + uVar1 * 4);
      goto LAB_10049a03;
    }
  }
  p_Var5 = local_14;
  if (local_14 == (_Facet_base *)0x0) {
    p_Var5 = (_Facet_base *)FUN_1013e1e9(0x18);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = p_Var5;
    if (p_Var5 == (_Facet_base *)0x0) {
      p_Var5 = (_Facet_base *)0x0;
    }
    else {
      iVar4 = *(int *)(local_18 + 4);
      if (iVar4 == 0) {
        puVar6 = &DAT_101a2496;
      }
      else {
        puVar6 = *(undefined1 **)(iVar4 + 0x18);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = (undefined1 *)(iVar4 + 0x1c);
        }
      }
      FUN_1002fcf0(puVar6);
      bVar8 = true;
      *(undefined4 *)(p_Var5 + 4) = 0;
      local_14 = (_Facet_base *)0x1;
      local_8 = 3;
      *(undefined ***)p_Var5 = std::numpunct<char>::vftable;
      _localeconv();
      __Getcvt(local_ac);
      *(undefined4 *)(p_Var5 + 8) = 0;
      *(undefined4 *)(p_Var5 + 0x10) = 0;
      *(undefined4 *)(p_Var5 + 0x14) = 0;
      local_8 = CONCAT31(local_8._1_3_,4);
      local_18 = p_Var5;
      __Getcvt(&local_d8);
      uVar7 = FUN_10049780(&DAT_101a2496,0,local_4c);
      *(undefined4 *)(p_Var5 + 8) = uVar7;
      uVar7 = FUN_10049780("false",0,local_4c);
      *(undefined4 *)(p_Var5 + 0x10) = uVar7;
      uVar7 = FUN_10049780(&DAT_101b1054,0,local_4c);
      *(undefined4 *)(p_Var5 + 0x14) = uVar7;
      _Var2 = (_Facet_base)FUN_10049770(0x2e,0,local_4c);
      p_Var5[0xc] = _Var2;
      _Var2 = (_Facet_base)FUN_10049770(0x2c,0,local_4c);
      p_Var5[0xd] = _Var2;
    }
    local_8 = 0;
    if (bVar8) {
      FUN_10030570();
    }
    local_8 = CONCAT31(local_8._1_3_,6);
    local_18 = p_Var5;
    std::_Facet_Register(p_Var5);
    (**(code **)(*(int *)p_Var5 + 4))();
    DAT_10222e48 = p_Var5;
  }
LAB_10049b3e:
  std::_Lockit::~_Lockit(local_20);
  ExceptionList = local_10;
  return p_Var5;
}

