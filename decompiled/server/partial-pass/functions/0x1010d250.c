// rea decompile_all
// name: FUN_1010d250
// address: 0x1010d250
// body: available
// range: 0x1010d250-0x1010d452 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1010d250(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  char *pcVar7;
  bool bVar8;
  
  pcVar7 = "m_iszPosition";
  pbVar2 = *(byte **)(param_1 + 4);
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1010d285:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_1010d28a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1010d285;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1010d28a:
  if (uVar4 == 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0xdc) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = "m_iPosMode";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1010d2d5:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_1010d2da;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1010d2d5;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1010d2da:
  if (uVar4 == 0) {
    iVar6 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xe0) = iVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = "m_iszAngles";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1010d324:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_1010d329;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1010d324;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1010d329:
  if (uVar4 == 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0xe4) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"m_iAngMode");
  if (iVar6 != 0) {
    iVar6 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xe8) = iVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"m_iszVelocity");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0xec) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"m_iVelMode");
  if (iVar6 != 0) {
    iVar6 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xf0) = iVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"m_iszAVelocity");
  if (iVar6 != 0) {
    uVar5 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 0xf4) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"m_iAVelMode");
  if (iVar6 != 0) {
    iVar6 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xf8) = iVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1000dba0(param_1);
  return;
}

