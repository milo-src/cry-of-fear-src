// rea decompile_all
// name: FUN_1002fda0
// address: 0x1002fda0
// body: available
// range: 0x1002fda0-0x1002ff47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fda0(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 ***pppuVar2;
  undefined4 *in_ECX;
  uint uVar3;
  undefined4 **local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  int *local_54;
  undefined4 **local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 **local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  uint local_34;
  uint uStack_30;
  undefined4 **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019d4e5;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = 0;
  local_58 = param_3[4];
  uStack_5c = 0;
  if (0xf < (uint)param_3[5]) {
    param_3 = (int *)*param_3;
  }
  local_54 = param_3;
  if (local_58 < 0x10) {
    local_70 = (undefined4 **)*param_3;
    iStack_6c = param_3[1];
    iStack_68 = param_3[2];
    iStack_64 = param_3[3];
    uStack_5c = 0xf;
    local_48 = in_ECX;
  }
  else {
    uVar3 = local_58 | 0xf;
    if (0x7fffffff < uVar3) {
      uVar3 = 0x7fffffff;
    }
    local_4c = in_ECX;
    puVar1 = (undefined4 *)FUN_1002f1e0(uVar3 + 1,local_14);
    local_48 = puVar1;
    FUN_1002f280(&local_70,&local_48);
    FUN_10140130(puVar1,local_54,local_58 + 1);
    in_ECX = local_4c;
    uStack_5c = uVar3;
  }
  local_4c = (undefined4 *)param_1;
  local_8 = 0;
  local_60 = local_58;
  if (local_58 != 0) {
    FUN_100376d0(&DAT_101ad954,2);
  }
  (**(code **)(*param_2 + 8))(local_2c,local_4c);
  pppuVar2 = local_2c;
  if (0xf < local_18) {
    pppuVar2 = (undefined4 ***)local_2c[0];
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_100376d0(pppuVar2,local_1c);
  if (0xf < local_18) {
    std::_Deallocate<8,0>(local_2c[0],local_18 + 1);
  }
  local_34 = local_60;
  uStack_30 = uStack_5c;
  *in_ECX = std::exception::vftable;
  local_50 = &local_44;
  if (0xf < uStack_5c) {
    local_50 = local_70;
  }
  *(undefined8 *)(in_ECX + 1) = 0;
  local_4c = (undefined4 *)CONCAT31(local_4c._1_3_,1);
  local_44 = local_70;
  iStack_40 = iStack_6c;
  iStack_3c = iStack_68;
  iStack_38 = iStack_64;
  ___std_exception_copy(&local_50,in_ECX + 1);
  *in_ECX = std::runtime_error::vftable;
  if (0xf < uStack_30) {
    std::_Deallocate<8,0>(local_44,uStack_30 + 1);
  }
  in_ECX[3] = param_1;
  *in_ECX = std::_System_error::vftable;
  in_ECX[4] = param_2;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

