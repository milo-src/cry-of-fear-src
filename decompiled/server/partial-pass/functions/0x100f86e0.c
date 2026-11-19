// rea decompile_all
// name: FUN_100f86e0
// address: 0x100f86e0
// body: available
// range: 0x100f86e0-0x100f88a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f86e0(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  double dVar8;
  
  uVar3 = FUN_101005c0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
  puVar4 = (undefined8 *)FUN_10100910(uVar3);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)((int)puVar4 + 0xc) = 0;
    iVar7 = *(int *)(in_ECX + 4);
    if ((*(uint *)(iVar7 + 0x1a8) & 0x200) == 0) {
      iVar5 = 0;
    }
    else {
      dVar8 = (double)(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                       *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                      *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
      if (dVar8 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar8 = SQRT(dVar8);
      }
      iVar5 = (int)dVar8;
      if (0x200 < iVar5) {
        iVar5 = 0x200;
      }
    }
    bVar1 = *(byte *)(iVar7 + 0x184);
    *(undefined4 *)(in_ECX + 0x2294) = 1000;
    iVar7 = iVar5 + 100;
    if ((bVar1 & 2) == 0) {
      iVar7 = iVar5;
    }
    if (iVar7 < 1000) {
      *(undefined4 *)(in_ECX + 0x2290) = 1000;
      *(uint *)((int)puVar4 + 0xc) = *(uint *)((int)puVar4 + 0xc) | 1;
      iVar5 = *(int *)(in_ECX + 0x2294);
      iVar7 = *(int *)(in_ECX + 0x2290);
    }
    else {
      *(int *)(in_ECX + 0x2290) = iVar7;
      iVar5 = 1000;
    }
    *(int *)(in_ECX + 0x2294) = (int)((float)iVar5 - DAT_10223188[1] * 250.0);
    iVar5 = *(int *)(puVar4 + 2);
    iVar6 = iVar7;
    if (((iVar7 <= iVar5) && (iVar6 = iVar5, iVar7 < iVar5)) &&
       (iVar6 = (int)((float)iVar5 - DAT_10223188[1] * 250.0), iVar6 < iVar7)) {
      iVar6 = 0;
    }
    iVar7 = 0;
    if (*(int *)(in_ECX + 0x24e8) == 0) {
      iVar7 = iVar6;
    }
    if (*(float *)(in_ECX + 0x22a0) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x22a0)
       ) {
      *(undefined4 *)(in_ECX + 0x2298) = 0;
    }
    iVar5 = *(int *)(in_ECX + 4);
    *puVar4 = *(undefined8 *)(iVar5 + 8);
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(iVar5 + 0x10);
    uVar2 = *(uint *)(in_ECX + 0x2298);
    *(int *)(puVar4 + 2) = iVar7;
    *(uint *)((int)puVar4 + 0xc) = *(uint *)((int)puVar4 + 0xc) | uVar2 | 4;
    iVar7 = (int)((float)*(int *)(in_ECX + 0x229c) - DAT_10223188[1] * 256.0);
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    *(int *)(in_ECX + 0x229c) = iVar7;
    return;
  }
  (*DAT_1022303c)(1,"Client lost reserved sound!\n");
  return;
}

