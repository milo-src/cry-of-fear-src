// rea decompile_all
// name: FUN_100e5030
// address: 0x100e5030
// body: available
// range: 0x100e5030-0x100e5293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e5030(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  float10 fVar5;
  double dVar6;
  
  if (*(char *)(in_ECX + 0x1ee8) == '\0') {
    iVar1 = *(int *)(in_ECX + 4);
    if ((((*(uint *)(iVar1 + 0x1a8) & 0x800) == 0) &&
        (((*(int *)(iVar1 + 0x1c4) < 2 || (*(int *)(iVar1 + 0x1c8) == -0x13)) &&
         ((*(byte *)(in_ECX + 0x22b0) & 2) != 0)))) &&
       (((*(uint *)(iVar1 + 0x1a8) & 0x200) != 0 && (*(int *)(iVar1 + 0x1a0) != 0)))) {
      iVar1 = FUN_1000e9b0(&DAT_101d79ac);
      if (iVar1 == -1) {
        iVar1 = 0;
      }
      iVar3 = *(int *)(in_ECX + 4);
      if ((*(int *)(iVar3 + 300) != iVar1) || (*(int *)(in_ECX + 0xfc) == 0)) {
        *(undefined4 *)(iVar3 + 0x134) = 0;
        iVar3 = *(int *)(in_ECX + 4);
      }
      *(undefined4 *)(iVar3 + 0x130) = 0;
      uVar2 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),iVar1);
      fVar5 = (float10)FUN_1000f390(uVar2);
      iVar3 = *(int *)(in_ECX + 4);
      *(float *)(in_ECX + 0x4f4) = (float)(fVar5 + (float10)*DAT_10223188);
      if (*(int *)(iVar3 + 300) != iVar1) {
        *(int *)(iVar3 + 300) = iVar1;
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x134) = 0;
        FUN_1000e9e0();
        iVar3 = *(int *)(in_ECX + 4);
      }
      FUN_10119320(iVar3 + 0x50);
      if (*(char *)(in_ECX + 0x21e8) == '\0') {
        *(float *)(in_ECX + 0x21f0) = *(float *)(in_ECX + 0x21f0) - 15.0;
      }
      if (0 < *(int *)(*(int *)(in_ECX + 4) + 0x1c4)) {
        FUN_1011a2f0();
      }
      FUN_100f2a50(2);
      FUN_100f91b0(0xc0c00000,0x3f800000,0x3f800000);
      if (((*(int *)(in_ECX + 0x24ec) != 0) &&
          (iVar1 = *(int *)(in_ECX + 4), (*(byte *)(iVar1 + 0x184) & 4) != 0)) &&
         (0 < *(int *)(iVar1 + 0x230))) {
        dVar6 = (double)(*(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) +
                         *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                        *(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28));
        if (dVar6 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar6 = SQRT(dVar6);
        }
        if (50.0 < (float)dVar6) {
          FUN_100f2a50(3);
        }
      }
      *(undefined1 *)(in_ECX + 0x3aa) = 1;
      *(float *)(in_ECX + 0x3ac) = *DAT_10223188 + 3.0;
      if (*(int **)(in_ECX + 0x252c) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x252c) + 0x124))();
      }
      iVar1 = *(int *)(in_ECX + 4);
      uVar4 = -(uint)(*(int *)(iVar1 + 0x1a0) != 0) & *(int *)(iVar1 + 0x1a0) + 0x80U;
      if ((uVar4 != 0) && ((*(byte *)(uVar4 + 0x1a8) & 4) != 0)) {
        *(ulonglong *)(iVar1 + 0x20) =
             CONCAT44(*(float *)(iVar1 + 0x30) + *(float *)(iVar1 + 0x24),
                      *(float *)(iVar1 + 0x2c) + *(float *)(iVar1 + 0x20));
        *(float *)(iVar1 + 0x28) = *(float *)(iVar1 + 0x34) + *(float *)(iVar1 + 0x28);
      }
    }
  }
  return;
}

