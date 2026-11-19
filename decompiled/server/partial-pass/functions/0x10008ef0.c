// rea decompile_all
// name: FUN_10008ef0
// address: 0x10008ef0
// body: available
// range: 0x10008ef0-0x10008ff5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008ef0(int *param_1,float *param_2)

{
  float fVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_58 [68];
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  float fVar2;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_14 = *param_2 + *(float *)(DAT_10220c50 + 0x38);
  local_10 = *(float *)(DAT_10220c50 + 0x3c) + param_2[1];
  local_c = *(float *)(DAT_10220c50 + 0x40) + param_2[2];
  piVar7 = (int *)(**(code **)(DAT_10220c50 + 0x4f584))
                            (local_58,(float *)(DAT_10220c50 + 0x38),&local_14,0,0xffffffff);
  iVar3 = piVar7[1];
  iVar4 = piVar7[2];
  iVar5 = piVar7[3];
  *param_1 = *piVar7;
  param_1[1] = iVar3;
  param_1[2] = iVar4;
  param_1[3] = iVar5;
  iVar3 = piVar7[5];
  iVar4 = piVar7[6];
  iVar5 = piVar7[7];
  param_1[4] = piVar7[4];
  param_1[5] = iVar3;
  param_1[6] = iVar4;
  param_1[7] = iVar5;
  iVar3 = piVar7[9];
  iVar4 = piVar7[10];
  iVar5 = piVar7[0xb];
  param_1[8] = piVar7[8];
  param_1[9] = iVar3;
  param_1[10] = iVar4;
  param_1[0xb] = iVar5;
  iVar4 = piVar7[0xd];
  iVar5 = piVar7[0xe];
  iVar6 = piVar7[0xf];
  iVar3 = piVar7[0x10];
  param_1[0xc] = piVar7[0xc];
  param_1[0xd] = iVar4;
  param_1[0xe] = iVar5;
  param_1[0xf] = iVar6;
  param_1[0x10] = iVar3;
  fVar1 = (float)param_1[4];
  fVar2 = (float)param_1[4];
  *(int *)(DAT_10220c50 + 0x38) = param_1[5];
  *(int *)(DAT_10220c50 + 0x3c) = param_1[6];
  *(int *)(DAT_10220c50 + 0x40) = param_1[7];
  if ((fVar2 <= 1.0 && fVar1 != 1.0) && (*param_1 == 0)) {
    FUN_10003840(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                 param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd]
                 ,param_1[0xe],param_1[0xf],param_1[0x10],DAT_10220c50 + 0x5c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

