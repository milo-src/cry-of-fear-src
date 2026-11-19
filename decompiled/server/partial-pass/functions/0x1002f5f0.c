// rea decompile_all
// name: FUN_1002f5f0
// address: 0x1002f5f0
// body: available
// range: 0x1002f5f0-0x1002f746 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


_Facet_base * FUN_1002f5f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  _Facet_base *p_Var4;
  undefined1 *puVar5;
  bool bVar6;
  undefined4 local_1c;
  _Facet_base *local_18;
  _Lockit local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019d334;
  local_10 = ExceptionList;
  uVar2 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar6 = false;
  local_1c = 0;
  std::_Lockit::_Lockit((_Lockit *)&local_1c,0);
  local_8 = 0;
  local_18 = DAT_10222e30;
  if (DAT_10222e18 == 0) {
    std::_Lockit::_Lockit(local_14,0);
    if (DAT_10222e18 == 0) {
      DAT_10222e18 = DAT_10232348 + 1;
      DAT_10232348 = DAT_10222e18;
    }
    std::_Lockit::~_Lockit(local_14);
  }
  uVar1 = DAT_10222e18;
  iVar3 = *(int *)(param_1 + 4);
  if (DAT_10222e18 < *(uint *)(iVar3 + 0xc)) {
    p_Var4 = *(_Facet_base **)(*(int *)(iVar3 + 8) + DAT_10222e18 * 4);
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_1002f72b;
  }
  else {
    p_Var4 = (_Facet_base *)0x0;
  }
  if (*(char *)(iVar3 + 0x14) == '\0') {
LAB_1002f69d:
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_1002f72b;
  }
  else {
    iVar3 = FUN_10122a52(uVar2);
    if (uVar1 < *(uint *)(iVar3 + 0xc)) {
      p_Var4 = *(_Facet_base **)(*(int *)(iVar3 + 8) + uVar1 * 4);
      goto LAB_1002f69d;
    }
  }
  p_Var4 = local_18;
  if (local_18 == (_Facet_base *)0x0) {
    p_Var4 = (_Facet_base *)FUN_1013e1e9(8);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = p_Var4;
    if (p_Var4 == (_Facet_base *)0x0) {
      p_Var4 = (_Facet_base *)0x0;
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 0) {
        puVar5 = &DAT_101a2496;
      }
      else {
        puVar5 = *(undefined1 **)(iVar3 + 0x18);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = (undefined1 *)(iVar3 + 0x1c);
        }
      }
      FUN_1002fcf0(puVar5);
      bVar6 = true;
      *(undefined4 *)(p_Var4 + 4) = 0;
      *(undefined ***)p_Var4 = std::codecvt<char,char,_Mbstatet>::vftable;
    }
    if (bVar6) {
      FUN_10030570();
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    std::_Facet_Register(p_Var4);
    (**(code **)(*(int *)p_Var4 + 4))();
    DAT_10222e30 = p_Var4;
  }
LAB_1002f72b:
  std::_Lockit::~_Lockit((_Lockit *)&local_1c);
  ExceptionList = local_10;
  return p_Var4;
}

