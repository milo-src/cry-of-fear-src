// rea decompile_all
// name: FUN_1004d7b0
// address: 0x1004d7b0
// body: available
// range: 0x1004d7b0-0x1004d962 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004d7b0(undefined4 param_1,
                 num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *param_2,
                 undefined4 param_3,int param_4,undefined1 param_5,char param_6)

{
  uint uVar1;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *pnVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 ****ppppuVar7;
  int *in_ECX;
  int iVar8;
  undefined1 local_54 [4];
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 ***local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined4 ***local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019dbf5;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = CONCAT31(local_48._1_3_,param_5);
  if ((*(uint *)(param_4 + 0x14) & 0x4000) == 0) {
    (**(code **)(*in_ECX + 0x24))(param_1,param_2,param_3,param_4,local_48,param_6);
  }
  else {
    local_50 = *(int **)(*(int *)(param_4 + 0x30) + 4);
    local_4c = in_ECX;
    (**(code **)(*local_50 + 4))(local_14);
    local_8 = 0;
    piVar5 = (int *)FUN_10049950(local_54);
    if ((local_50 != (int *)0x0) &&
       (puVar6 = (undefined4 *)(**(code **)(*local_50 + 8))(), puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    local_1c = 0xf00000000;
    local_2c = (undefined4 ***)((uint)local_2c & 0xffffff00);
    local_8 = 1;
    if (param_6 == '\0') {
      (**(code **)(*piVar5 + 0x18))(&local_44);
    }
    else {
      (**(code **)(*piVar5 + 0x1c))();
    }
    uVar1 = *(uint *)(param_4 + 0x20);
    local_2c = local_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    local_1c = local_34;
    uVar4 = local_1c;
    local_1c._0_4_ = (uint)local_34;
    if ((*(int *)(param_4 + 0x24) < 0) ||
       (((*(int *)(param_4 + 0x24) < 1 && (uVar1 == 0)) || (uVar1 <= (uint)local_1c)))) {
      iVar8 = 0;
    }
    else {
      iVar8 = uVar1 - (uint)local_1c;
    }
    local_1c = uVar4;
    if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
      puVar6 = (undefined4 *)
               std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep();
      iVar8 = 0;
      param_2 = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)*puVar6;
      param_3 = puVar6[1];
    }
    ppppuVar7 = &local_2c;
    if (0xf < local_1c._4_4_) {
      ppppuVar7 = (undefined4 ****)local_2c;
    }
    puVar6 = (undefined4 *)
             std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
                       (param_2,local_4c,local_54,param_2,param_3,ppppuVar7,(uint)local_1c);
    pnVar2 = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)*puVar6;
    uVar3 = puVar6[1];
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x24) = 0;
    std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
              (pnVar2,local_4c,param_1,pnVar2,uVar3,local_48,iVar8);
    if (0xf < local_1c._4_4_) {
      std::_Deallocate<8,0>(local_2c,local_1c._4_4_ + 1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

