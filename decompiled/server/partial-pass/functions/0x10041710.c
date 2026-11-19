// rea decompile_all
// name: FUN_10041710
// address: 0x10041710
// body: available
// range: 0x10041710-0x10041884 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041710(undefined4 param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *in_ECX;
  double dVar5;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (in_ECX[0x86] != in_ECX[0xb4]) {
    in_ECX[0x86] = in_ECX[0xb4];
  }
  if (in_ECX[0x85] == 5) {
    iVar4 = FUN_10040f50();
    if (iVar4 != *(int *)(in_ECX[1] + 300)) {
      (**(code **)(*in_ECX + 0x1b0))(in_ECX[0x85]);
    }
  }
  fVar1 = (float)in_ECX[0x3c];
  fVar2 = param_2[2];
  iVar4 = in_ECX[1];
  *(ulonglong *)(in_ECX + 0xeb) =
       CONCAT44(param_2[1] * fVar1 * 0.2 + (float)in_ECX[0xec] * 0.8,
                *param_2 * fVar1 * 0.2 + (float)in_ECX[0xeb] * 0.8);
  in_ECX[0xed] = (int)(fVar2 * fVar1 * 0.2 + (float)in_ECX[0xed] * 0.8);
  fVar1 = (float)in_ECX[0xec];
  fVar2 = (float)in_ECX[0xeb];
  fStack_10 = *(float *)(iVar4 + 0xc) + fVar1;
  fStack_14 = *(float *)(iVar4 + 8) + fVar2;
  fVar3 = (float)in_ECX[0xed];
  fStack_c = *(float *)(iVar4 + 0x10) + fVar3;
  dVar5 = (double)(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  if (dVar5 < 0.0) {
    __libm_sse2_sqrt_precise(1);
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  FUN_10119420(*(undefined4 *)(iVar4 + 0x20c),&fStack_14,(float)dVar5 * param_3);
  return;
}

