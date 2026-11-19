// rea decompile_all
// name: FUN_100b9020
// address: 0x100b9020
// body: available
// range: 0x100b9020-0x100b9194 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b9020(float *param_1,undefined4 param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  double dVar5;
  float local_14;
  float fStack_10;
  float local_c;
  
  iVar3 = *(int *)(in_ECX + 4);
  if ((*(byte *)(iVar3 + 0x1a4) & 1) != 0) {
    dVar5 = (double)((float)param_3 * (float)param_3 + param_3._4_4_ * param_3._4_4_ +
                    param_4 * param_4);
    if (dVar5 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    if ((float)dVar5 == 0.0) {
      local_14 = 0.0;
      fStack_10 = 0.0;
      local_c = 1.0;
    }
    else {
      local_c = 1.0 / (float)dVar5;
      local_14 = (float)param_3 * local_c;
      fStack_10 = local_c * param_3._4_4_;
      local_c = param_4 * local_c;
    }
    param_3 = CONCAT44(fStack_10,local_14);
    param_4 = local_c;
  }
  fVar4 = (float10)FUN_100b81e0(param_2,*(int *)(iVar3 + 0x1ec) + *(int *)(DAT_10223188 + 0x98));
  fVar1 = (float)fVar4;
  FUN_100b8240(&local_14);
  bVar2 = *(byte *)(*(int *)(in_ECX + 4) + 0x1a4);
  *param_1 = (float)param_3 * fVar1 + local_14;
  param_1[1] = param_3._4_4_ * fVar1 + fStack_10;
  local_c = param_4 * fVar1 + local_c;
  param_1[2] = local_c;
  if ((bVar2 & 2) != 0) {
    param_1[2] = -local_c;
  }
  return;
}

