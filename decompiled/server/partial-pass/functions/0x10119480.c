// rea decompile_all
// name: FUN_10119480
// address: 0x10119480
// body: available
// range: 0x10119480-0x10119615 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10119480(int param_1,undefined8 param_2,undefined4 param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined4 in_stack_00000020;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_40 [20];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  
  pfVar1 = (float *)(param_1 + 0x8c);
  *(undefined8 *)pfVar1 = param_2;
  *(undefined4 *)(param_1 + 0x94) = param_3;
  FUN_10119320(&stack0x00000014);
  fStack_4c = DAT_10223188[10] * 8192.0 + *pfVar1;
  fStack_48 = DAT_10223188[0xb] * 8192.0 + *(float *)(param_1 + 0x90);
  fStack_44 = DAT_10223188[0xc] * 8192.0 + *(float *)(param_1 + 0x94);
  FUN_1011a800(pfVar1,&fStack_4c,1,in_stack_00000020,auStack_40);
  *(undefined8 *)(param_1 + 0x80) = uStack_2c;
  *(undefined4 *)(param_1 + 0x88) = uStack_24;
  fVar2 = *(float *)(param_1 + 0x80) - *pfVar1;
  fVar3 = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x90);
  fVar4 = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x94);
  dVar6 = (double)(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
                   *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                  *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28));
  if (dVar6 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  fVar5 = 0.0;
  if (0.0 < (float)dVar6) {
    auVar8._0_8_ = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
    auVar8._8_8_ = 0;
    if (auVar8._0_8_ < 0.0) {
      __libm_sse2_sqrt_precise();
      dVar7 = auVar8._0_8_;
    }
    else {
      dVar7 = SQRT(auVar8._0_8_);
    }
    fVar5 = (float)dVar7 / (float)dVar6;
  }
  *(float *)(param_1 + 0x9c) = *DAT_10223188;
  *(float *)(param_1 + 0x98) = fVar5 + *DAT_10223188;
  return;
}

