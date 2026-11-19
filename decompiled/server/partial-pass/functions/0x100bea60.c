// rea decompile_all
// name: FUN_100bea60
// address: 0x100bea60
// body: available
// range: 0x100bea60-0x100bed11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100bea60(float *param_1,float *param_2)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  undefined1 local_8c [16];
  float local_7c;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  float local_14;
  undefined8 local_10;
  float local_8;
  
  FUN_10119320(in_ECX[1] + 0x50);
  iVar2 = 0;
  local_20 = *(float *)(DAT_10223188 + 0x40) * 48.0;
  local_24 = *(float *)(DAT_10223188 + 0x44) * 48.0;
  local_1c = *(undefined8 *)(in_ECX[1] + 8);
  local_14 = *(float *)(in_ECX[1] + 0x10);
  local_10 = local_1c;
  local_8 = local_14;
  while( true ) {
    local_1c._4_4_ = local_1c._4_4_ - local_24;
    local_1c._0_4_ = (float)local_1c - local_20;
    iVar1 = in_ECX[1];
    local_14 = local_14 - 0.0;
    local_10 = CONCAT44(local_10._4_4_ + local_24,(float)local_10 + local_20);
    local_8 = local_8 + 0.0;
    local_30 = *(float *)(iVar1 + 0x178) + (float)local_1c;
    local_2c = *(float *)(iVar1 + 0x17c) + local_1c._4_4_;
    local_28 = *(float *)(iVar1 + 0x180) + local_14;
    local_3c = *param_1 + *param_2;
    local_38 = param_2[1] + param_1[1];
    local_34 = param_2[2] + param_1[2];
    FUN_1011a820(&local_3c,&local_30,1,1,*(undefined4 *)(iVar1 + 0x20c),local_8c);
    if ((((local_7c != 1.0) && (iVar1 = (**(code **)(*in_ECX + 0x1cc))(&local_1c), iVar1 != 0)) &&
        (iVar1 = (**(code **)(*in_ECX + 0x158))(in_ECX[1] + 8,&local_1c,0,0), iVar1 == 2)) &&
       (iVar1 = FUN_100c1080(4,0,&local_1c), iVar1 != 0)) break;
    iVar1 = in_ECX[1];
    local_48 = *(float *)(iVar1 + 0x178) + (float)local_10;
    local_44 = *(float *)(iVar1 + 0x17c) + local_10._4_4_;
    local_40 = *(float *)(iVar1 + 0x180) + local_8;
    local_54 = *param_1 + *param_2;
    local_50 = param_2[1] + param_1[1];
    local_4c = param_2[2] + param_1[2];
    FUN_1011a820(&local_54,&local_48,1,1,*(undefined4 *)(iVar1 + 0x20c),local_8c);
    if (((local_7c != 1.0) && (iVar1 = (**(code **)(*in_ECX + 0x1cc))(&local_10), iVar1 != 0)) &&
       ((iVar1 = (**(code **)(*in_ECX + 0x158))(in_ECX[1] + 8,&local_10,0,0), iVar1 == 2 &&
        (iVar1 = FUN_100c1080(4,0,&local_10), iVar1 != 0)))) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    if (4 < iVar2) {
      return 0;
    }
  }
  return 1;
}

