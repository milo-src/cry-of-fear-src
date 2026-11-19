// rea decompile_all
// name: FUN_100b8e50
// address: 0x100b8e50
// body: available
// range: 0x100b8e50-0x100b8fd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b8e50(float *param_1,undefined4 param_2)

{
  int iVar1;
  float *pfVar2;
  int in_ECX;
  float10 fVar3;
  float fVar4;
  double dVar5;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  undefined1 local_14 [16];
  
  FUN_100b8240(&local_38);
  iVar1 = *(int *)(in_ECX + 4);
  pfVar2 = (float *)FUN_1011a8d0(local_14,&local_38);
  local_28 = *(float *)(iVar1 + 0x54) + pfVar2[1];
  local_24 = *(float *)(iVar1 + 0x58) + pfVar2[2];
  local_2c = *(float *)(iVar1 + 0x50) + *pfVar2;
  FUN_100b8240(&local_20);
  fVar3 = (float10)FUN_100b81e0(param_2,*(int *)(DAT_10223188 + 0x98) +
                                        *(int *)(*(int *)(in_ECX + 4) + 0x1ec));
  fVar4 = (float)fVar3;
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) == 0) {
    dVar5 = (double)(local_38 * local_38 + local_34 * local_34 + local_30 * local_30);
    if (dVar5 < 0.0) {
      __libm_sse2_sqrt_precise();
      fVar4 = (float)dVar5 * fVar4;
    }
    else {
      fVar4 = (float)SQRT(dVar5) * fVar4;
    }
  }
  FUN_10119320(&local_2c);
  iVar1 = DAT_10223188;
  *param_1 = *(float *)(DAT_10223188 + 0x28) * fVar4 + local_20;
  param_1[1] = *(float *)(iVar1 + 0x2c) * fVar4 + fStack_1c;
  param_1[2] = *(float *)(iVar1 + 0x30) * fVar4 + fStack_18;
  return;
}

