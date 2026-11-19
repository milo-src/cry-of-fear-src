// rea decompile_all
// name: FUN_1008a510
// address: 0x1008a510
// body: available
// range: 0x1008a510-0x1008a68f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008a510(int param_1,uint param_2,int param_3,undefined8 *param_4)

{
  float fVar1;
  float10 fVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  float10 fVar5;
  float10 fVar6;
  uint uVar7;
  undefined1 local_60 [16];
  float local_50;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  float local_14;
  float local_10;
  float local_c;
  float *local_8;
  
  iVar3 = (**(code **)(*in_ECX + 0xbc))();
  if (iVar3 == 0) {
    fVar1 = *(float *)(in_ECX[1] + 0x1b4);
    if (fVar1 <= 0.0) {
      return;
    }
    *(float *)(in_ECX[1] + 0x1b4) = fVar1 - 1.0;
  }
  if (0 < param_1) {
    uVar7 = param_2 ^ 0x80000000;
    local_8 = (float *)(param_3 + 0x14);
    do {
      local_1c = *param_4;
      local_14 = *(float *)(param_4 + 1);
      fVar5 = (float10)(*DAT_102230b4)(uVar7,param_2);
      fVar2 = (float10)(float)local_1c;
      fVar6 = (float10)(*DAT_102230b4)(uVar7,param_2);
      local_c = (float)(fVar6 + (float10)local_1c._4_4_);
      fVar6 = (float10)(*DAT_102230b4)(uVar7,param_2);
      local_10 = (float)(fVar6 + (float10)local_14);
      local_28 = (float)(fVar5 + fVar2) * 172.0 + *local_8;
      local_24 = local_c * 172.0 + local_8[1];
      local_20 = local_10 * 172.0 + local_8[2];
      FUN_1011a800(local_8,&local_28,1,*(undefined4 *)(in_ECX[1] + 0x20c),local_60);
      if (local_50 != 1.0) {
        uVar4 = (**(code **)(*in_ECX + 0x70))();
        FUN_10117700(local_60,uVar4);
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

