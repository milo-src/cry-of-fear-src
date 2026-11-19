// rea decompile_all
// name: FUN_10119de0
// address: 0x10119de0
// body: available
// range: 0x10119de0-0x10119f52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10119de0(float *param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = FUN_101166d0(param_4,0x45800000);
  uVar2 = FUN_101166d0(param_3,0x43800000);
  iVar5 = 1;
  if (0 < *(int *)(DAT_10223188 + 0x90)) {
    do {
      iVar4 = FUN_10119680(iVar5);
      if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 4), (*(uint *)(iVar4 + 0x1a8) & 0x200) != 0)) {
        if (0.0 < param_5) {
          fVar9 = param_1[1] - *(float *)(iVar4 + 0xc);
          fVar8 = *param_1 - *(float *)(iVar4 + 8);
          fVar6 = param_1[2] - *(float *)(iVar4 + 0x10);
          dVar7 = (double)(fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6);
          if (dVar7 < 0.0) {
            __libm_sse2_sqrt_precise();
          }
          else {
            dVar7 = SQRT(dVar7);
          }
          if (param_5 <= (float)dVar7) goto LAB_10119f3a;
        }
        if (param_2 != 0.0) {
          (*DAT_10223000)(1,DAT_1022671c,0,*(undefined4 *)(iVar4 + 0x20c));
          uVar3 = FUN_101166d0(param_2,0x45800000);
          (*DAT_10223010)(uVar3);
          (*DAT_10223010)(uVar1);
          (*DAT_10223010)(uVar2);
          (*DAT_10223004)();
        }
      }
LAB_10119f3a:
      iVar5 = iVar5 + 1;
    } while (iVar5 <= *(int *)(DAT_10223188 + 0x90));
  }
  return;
}

