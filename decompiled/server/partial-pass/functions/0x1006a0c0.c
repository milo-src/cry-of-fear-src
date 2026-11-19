// rea decompile_all
// name: FUN_1006a0c0
// address: 0x1006a0c0
// body: available
// range: 0x1006a0c0-0x1006a216 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1006a0c0(int param_1,int param_2,float *param_3,float param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = (*DAT_10223068)(1);
  iVar7 = 0;
  fVar11 = param_4 * param_4;
  if (iVar2 == 0) {
    return 0;
  }
  param_4 = 1.4013e-45;
  if (1 < *(int *)(DAT_10223188 + 0x94)) {
    uVar6 = iVar2 + 0x80;
    iVar2 = DAT_10223188;
    do {
      if ((*(int *)(uVar6 - 0x80) == 0) && (*(float *)(uVar6 + 0x170) == 50.0)) {
        pcVar5 = "info_roofboss_target";
        pbVar3 = (byte *)(*(int *)(-(uint)(uVar6 != 0x80) & uVar6) + *(int *)(iVar2 + 0x98));
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_1006a175:
            uVar4 = -(uint)bVar8 | 1;
            goto LAB_1006a17a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_1006a175;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_1006a17a:
        if ((((uVar4 == 0) &&
             (fVar9 = *param_3 - *(float *)(uVar6 + 8), fVar9 = fVar9 * fVar9, fVar9 <= fVar11)) &&
            (fVar10 = param_3[1] - *(float *)(uVar6 + 0xc), fVar9 = fVar10 * fVar10 + fVar9,
            fVar9 <= fVar11)) &&
           ((fVar10 = param_3[2] - (*(float *)(uVar6 + 0xd8) + *(float *)(uVar6 + 0xcc)) * 0.5,
            fVar10 * fVar10 + fVar9 <= fVar11 && (*(int *)(uVar6 - 4) != 0)))) {
          *(int *)(param_1 + iVar7 * 4) = *(int *)(uVar6 - 4);
          iVar7 = iVar7 + 1;
          iVar2 = DAT_10223188;
          if (param_2 <= iVar7) {
            return iVar7;
          }
        }
      }
      param_4 = (float)((int)param_4 + 1);
      uVar6 = uVar6 + 0x32c;
    } while ((int)param_4 < *(int *)(iVar2 + 0x94));
  }
  return iVar7;
}

