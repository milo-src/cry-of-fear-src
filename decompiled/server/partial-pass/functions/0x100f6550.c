// rea decompile_all
// name: FUN_100f6550
// address: 0x100f6550
// body: available
// range: 0x100f6550-0x100f668c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f6550(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int in_ECX;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 local_14 [16];
  
  iVar2 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(in_ECX + 4) + 0x1cc));
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 4);
    iVar1 = *(int *)(in_ECX + 4);
    fVar4 = *(float *)(iVar2 + 0xc) - *(float *)(iVar1 + 0xc);
    fVar6 = *(float *)(iVar2 + 8) - *(float *)(iVar1 + 8);
    fVar7 = *(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10);
    dVar5 = (double)(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7);
    if (dVar5 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    if ((float)dVar5 == 0.0) {
      local_20 = 0.0;
      local_1c = 0.0;
      local_18 = 1.0;
    }
    else {
      local_18 = 1.0 / (float)dVar5;
      local_20 = local_18 * fVar6;
      local_1c = local_18 * fVar4;
      local_18 = local_18 * fVar7;
    }
    puVar3 = (undefined8 *)FUN_1011a8d0(local_14,&local_20);
    iVar2 = *(int *)(in_ECX + 4);
    *(undefined8 *)(iVar2 + 0x74) = *puVar3;
    *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(puVar3 + 1);
    *(uint *)(*(int *)(in_ECX + 4) + 0x74) = *(uint *)(*(int *)(in_ECX + 4) + 0x74) ^ 0x80000000;
  }
  return;
}

