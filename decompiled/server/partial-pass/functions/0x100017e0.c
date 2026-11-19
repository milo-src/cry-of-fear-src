// rea decompile_all
// name: FUN_100017e0
// address: 0x100017e0
// body: available
// range: 0x100017e0-0x100018e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100017e0(float *param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5
                 )

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_68 [4];
  float local_64 [23];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  pfVar6 = local_64;
  do {
    if ((uVar4 & 1) == 0) {
      fVar7 = *param_2 + 0.0;
    }
    else {
      fVar7 = *param_1 - 0.0;
    }
    if ((uVar4 & 2) == 0) {
      fVar8 = param_2[1] + 0.0;
    }
    else {
      fVar8 = param_1[1] - 0.0;
    }
    if ((uVar4 & 4) == 0) {
      fVar9 = param_2[2] + 0.0;
    }
    else {
      fVar9 = param_1[2] - 0.0;
    }
    uVar4 = uVar4 + 1;
    fVar3 = param_3[2];
    pfVar6[-1] = fVar1 + fVar7;
    *pfVar6 = fVar2 + fVar8;
    pfVar6[1] = fVar3 + fVar9;
    pfVar6 = pfVar6 + 3;
  } while ((int)uVar4 < 8);
  piVar5 = &DAT_10211030;
  do {
    FUN_10002420(local_68 + piVar5[-1] * 0xc,local_68 + piVar5[-2] * 0xc,local_68 + *piVar5 * 0xc,
                 local_68 + piVar5[1] * 0xc,param_4,param_5);
    piVar5 = piVar5 + 4;
  } while ((int)piVar5 < 0x10211090);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

