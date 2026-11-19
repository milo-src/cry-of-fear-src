// rea decompile_all
// name: FUN_10005400
// address: 0x10005400
// body: available
// range: 0x10005400-0x100056e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005400(void)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  float10 fVar8;
  float fVar9;
  
  uVar2 = *(ushort *)(DAT_10220c50 + 0x45476);
  uVar3 = *(uint *)(DAT_10220c50 + 200);
  uVar7 = uVar3 | 4;
  if ((uVar2 & 4) == 0) {
    uVar7 = uVar3 & 0xfffffffb;
  }
  *(uint *)(DAT_10220c50 + 200) = uVar7;
  iVar5 = DAT_10220c50;
  if (((*(int *)(DAT_10220c50 + 0x204) != 0) || (*(int *)(DAT_10220c50 + 0xd0) != 0)) ||
     (fVar9 = *(float *)(DAT_10220c50 + 0x214), fVar9 != 0.0)) {
    if ((*(uint *)(DAT_10220c50 + 0xb8) & 0x4000) == 0) {
      return;
    }
LAB_100056dd:
    FUN_100095b0();
    return;
  }
  puVar1 = (uint *)(DAT_10220c50 + 0xb8);
  if ((*(uint *)(DAT_10220c50 + 0xb8) & 0x4000) != 0) {
    *(float *)(DAT_10220c50 + 0x45468) = *(float *)(DAT_10220c50 + 0x45468) * 0.333;
    *(float *)(DAT_10220c50 + 0x4546c) = *(float *)(DAT_10220c50 + 0x4546c) * 0.333;
    *(float *)(DAT_10220c50 + 0x45470) = *(float *)(DAT_10220c50 + 0x45470) * 0.333;
    fVar9 = *(float *)(iVar5 + 0x214);
  }
  if (fVar9 == 0.0) {
    uVar6 = *(ushort *)(DAT_10220c50 + 0x45476) & 4;
    if (((uVar6 == 0) && (*(int *)(DAT_10220c50 + 0x90) == 0)) && ((*puVar1 & 0x4000) == 0)) {
      return;
    }
    if (fVar9 == 0.0) {
      if (uVar6 == 0) goto LAB_100056dd;
      if ((fVar9 == 0.0) &&
         ((((uVar2 ^ uVar3) & (uint)uVar2 & 4) == 0 || ((*puVar1 & 0x4000) != 0))))
      goto LAB_10005562;
    }
  }
  *(undefined4 *)(DAT_10220c50 + 0x8c) = 0x447a0000;
  *(undefined4 *)(DAT_10220c50 + 0x90) = 1;
LAB_10005562:
  iVar5 = DAT_10220c50;
  fVar9 = *(float *)(DAT_10220c50 + 0x8c) / 1000.0;
  if (*(int *)(DAT_10220c50 + 0x90) != 0) {
    if (((0.4 < fVar9) && (*(int *)(DAT_10220c50 + 0xe0) != -1)) &&
       (*(float *)(DAT_10220c50 + 0x214) == 0.0)) {
      fVar9 = 1.0 - fVar9;
      fVar4 = 0.0;
      if (0.0 <= fVar9) {
        fVar4 = fVar9;
      }
      fVar8 = (float10)FUN_100094d0(fVar4,0x3fd55555);
      *(float *)(iVar5 + 0x88) = (1.0 - (float)fVar8) * 28.0 + (float)fVar8 * -6.0;
      return;
    }
    *(undefined4 *)(DAT_10220c50 + 0xbc) = 1;
    *(undefined4 *)(DAT_10220c50 + 0x88) = 0x41400000;
    *(uint *)(DAT_10220c50 + 0xb8) = *(uint *)(DAT_10220c50 + 0xb8) | 0x4000;
    *(undefined4 *)(DAT_10220c50 + 0x90) = 0;
    if (*(int *)(DAT_10220c50 + 0xe0) != -1) {
      *(float *)(DAT_10220c50 + 0x38) =
           *(float *)(DAT_10220c50 + 0x38) -
           (*(float *)(DAT_10220c50 + 0x4f504) - *(float *)(DAT_10220c50 + 0x4f4f8));
      *(float *)(DAT_10220c50 + 0x3c) =
           *(float *)(DAT_10220c50 + 0x3c) -
           (*(float *)(DAT_10220c50 + 0x4f508) - *(float *)(DAT_10220c50 + 0x4f4fc));
      *(float *)(DAT_10220c50 + 0x40) =
           *(float *)(DAT_10220c50 + 0x40) -
           (*(float *)(DAT_10220c50 + 0x4f50c) - *(float *)(DAT_10220c50 + 0x4f500));
      FUN_10005750(1);
      FUN_10003c70();
      return;
    }
  }
  return;
}

