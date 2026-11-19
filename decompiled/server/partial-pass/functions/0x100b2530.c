// rea decompile_all
// name: FUN_100b2530
// address: 0x100b2530
// body: available
// range: 0x100b2530-0x100b273b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_100b2530(float *param_1,int param_2,float *param_3,float param_4,float param_5,
                    float param_6,float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  float fStack_30;
  
  fVar2 = *(float *)(DAT_10222ed8 + 0xc) * param_8;
  fVar3 = param_5 - param_3[1];
  fVar5 = param_4 - *param_3;
  fVar7 = param_6 - param_3[2];
  dVar4 = (double)(fVar3 * fVar3 + fVar5 * fVar5 + fVar7 * fVar7);
  if (dVar4 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar4 = SQRT(dVar4);
  }
  fVar6 = (float)dVar4 / param_7;
  fVar1 = 1.0 / fVar6;
  local_4c = fVar5 * 0.5 + *param_3;
  local_48 = fVar3 * 0.5 + param_3[1];
  local_44 = fVar7 * 0.5 + param_3[2] + fVar2 * 0.5 * fVar6 * 0.5 * fVar6 * 0.5;
  FUN_1011a800(param_3,&local_4c,0,*(undefined4 *)(param_2 + 0x20c),local_40);
  if (fStack_30 == 1.0) {
    FUN_1011a800(&param_4,&local_4c,1,*(undefined4 *)(param_2 + 0x20c),local_40);
    if (fStack_30 == 1.0) {
      *param_1 = fVar1 * fVar5;
      param_1[1] = fVar1 * fVar3;
      param_1[2] = fVar1 * fVar7 + fVar6 * fVar2 * 0.5;
      return param_1;
    }
  }
  *param_1 = (float)DAT_10222f34;
  param_1[1] = DAT_10222f34._4_4_;
  param_1[2] = DAT_10222f3c;
  return param_1;
}

