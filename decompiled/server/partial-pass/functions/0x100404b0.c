// rea decompile_all
// name: FUN_100404b0
// address: 0x100404b0
// body: available
// range: 0x100404b0-0x100405fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100404b0(float *param_1,float *param_2,int param_3,float *param_4)

{
  int in_ECX;
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [4];
  int iStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  local_58 = *param_2 + 0.0;
  local_54 = param_2[1] + 0.0;
  local_50 = param_2[2] + 32.0;
  local_4c = *param_1 + 0.0;
  local_48 = param_1[1] + 0.0;
  local_44 = param_1[2] + 32.0;
  FUN_1011a7e0(&local_4c,&local_58,0,2,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),local_40);
  if (param_4 != (float *)0x0) {
    fVar3 = (fStack_28 - 0.0) - param_1[1];
    fVar4 = (fStack_2c - 0.0) - *param_1;
    fVar1 = (fStack_24 - 32.0) - param_1[2];
    dVar2 = (double)(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1);
    if (dVar2 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar2 = SQRT(dVar2);
    }
    *param_4 = (float)dVar2;
  }
  if (((iStack_3c != 0) || (fStack_30 < 1.0)) &&
     ((param_3 == 0 || (*(int *)(*(int *)(param_3 + 4) + 0x20c) != *(int *)(DAT_10223188 + 0x74)))))
  {
    return 0;
  }
  return 2;
}

