// rea decompile_all
// name: FUN_100140a0
// address: 0x100140a0
// body: available
// range: 0x100140a0-0x10014245 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100140a0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (*(int *)(in_ECX + 0x14) == 0) {
    *(undefined8 *)(in_ECX + 0x11c) = *(undefined8 *)(iVar1 + 8);
    fVar3 = *(float *)(iVar1 + 0x10);
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x14) + 4);
    fVar3 = *(float *)(iVar1 + 0x10) - *(float *)(iVar2 + 0x10);
    *(ulonglong *)(in_ECX + 0x11c) =
         CONCAT44(*(float *)(iVar1 + 0xc) - *(float *)(iVar2 + 0xc),
                  *(float *)(iVar1 + 8) - *(float *)(iVar2 + 8));
  }
  *(float *)(in_ECX + 0x124) = fVar3;
  fVar3 = *(float *)(iVar1 + 0x4c);
  fVar6 = (ABS((*(float *)(iVar1 + 0xf4) - 2.0) * *(float *)(iVar1 + 0x44)) +
           ABS((*(float *)(iVar1 + 0xf8) - 2.0) * *(float *)(iVar1 + 0x48)) +
          ABS((*(float *)(iVar1 + 0xfc) - 2.0) * fVar3)) - *(float *)(in_ECX + 0x110);
  *(ulonglong *)(in_ECX + 0x128) =
       CONCAT44(*(float *)(iVar1 + 0x48) * fVar6 + *(float *)(in_ECX + 0x120),
                *(float *)(iVar1 + 0x44) * fVar6 + *(float *)(in_ECX + 0x11c));
  *(float *)(in_ECX + 0x130) = fVar3 * fVar6 + *(float *)(in_ECX + 0x124);
  fVar5 = *(float *)(in_ECX + 300) - *(float *)(in_ECX + 0x120);
  fVar6 = *(float *)(in_ECX + 0x128) - *(float *)(in_ECX + 0x11c);
  fVar3 = *(float *)(in_ECX + 0x130) - *(float *)(in_ECX + 0x124);
  dVar4 = (double)(fVar5 * fVar5 + fVar6 * fVar6 + fVar3 * fVar3);
  if (dVar4 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar4 = SQRT(dVar4);
  }
  if (((float)dVar4 < 1.0) || ((*(byte *)(iVar1 + 0x1a4) & 1) != 0)) {
    *(undefined8 *)(in_ECX + 0x128) = *(undefined8 *)(in_ECX + 0x11c);
    *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(in_ECX + 0x124);
  }
  return;
}

