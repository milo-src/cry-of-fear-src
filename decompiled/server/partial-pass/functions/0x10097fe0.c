// rea decompile_all
// name: FUN_10097fe0
// address: 0x10097fe0
// body: available
// range: 0x10097fe0-0x10098101 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10097fe0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  double dVar9;
  
  pcVar6 = "messagesound";
  pbVar7 = *(byte **)(param_1 + 4);
  pbVar2 = pbVar7;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10098015:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_1009801a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10098015;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1009801a:
  if (uVar3 == 0) {
    uVar4 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1ec) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "messagevolume";
  pbVar2 = pbVar7;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10098068:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_1009806d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10098068;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1009806d:
  if (uVar3 == 0) {
    dVar9 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
    *(float *)(*(int *)(in_ECX + 4) + 0x148) = (float)((float10)dVar9 * (float10)0.1);
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "messageattenuation";
  do {
    bVar1 = *pbVar7;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100980c8:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_100980cd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100980c8;
    pbVar7 = pbVar7 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_100980cd:
  if (uVar3 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(*(int *)(in_ECX + 4) + 0x188) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1000dba0(param_1);
  return;
}

