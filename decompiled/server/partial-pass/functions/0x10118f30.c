// rea decompile_all
// name: FUN_10118f30
// address: 0x10118f30
// body: available
// range: 0x10118f30-0x10119055 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10118f30(int param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  float local_2c;
  float local_28;
  ulonglong local_20;
  undefined4 local_18;
  float local_14;
  float fStack_10;
  float fStack_c;
  
  local_2c = param_2[1] - *(float *)(param_1 + 0xc);
  local_28 = *param_2 - *(float *)(param_1 + 8);
  dVar2 = (double)(local_2c * local_2c + local_28 * local_28 + 0.0);
  if (dVar2 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar2 = SQRT(dVar2);
  }
  fVar1 = 1.0;
  if ((float)dVar2 == 0.0) {
    local_28 = 0.0;
    local_2c = 0.0;
  }
  else {
    fVar1 = 1.0 / (float)dVar2;
    local_28 = fVar1 * local_28;
    local_2c = fVar1 * local_2c;
    fVar1 = fVar1 * 0.0;
  }
  local_18 = *(undefined4 *)(param_1 + 0x7c);
  local_20 = *(ulonglong *)(param_1 + 0x74) & 0xffffffff00000000;
  (*DAT_10222f98)(&local_20,&local_14,0,0);
  return 0.96 < fStack_10 * local_2c + local_14 * local_28 + fStack_c * fVar1;
}

