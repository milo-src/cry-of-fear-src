// rea decompile_all
// name: FUN_100b6df0
// address: 0x100b6df0
// body: available
// range: 0x100b6df0-0x100b71b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b6df0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  char *pcVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = param_1;
  pcVar8 = "m_iOnStyle";
  pbVar2 = *(byte **)(param_1 + 4);
  pbVar4 = pbVar2;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100b6e28:
      uVar5 = -(uint)bVar9 | 1;
      goto LAB_100b6e2d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100b6e28;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_100b6e2d:
  if (uVar5 == 0) {
    iVar6 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xe0) = iVar6;
    *(undefined4 *)(iVar3 + 0xc) = 1;
    return;
  }
  pcVar8 = "m_iOffStyle";
  pbVar4 = pbVar2;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100b6e80:
      uVar5 = -(uint)bVar9 | 1;
      goto LAB_100b6e85;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100b6e80;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_100b6e85:
  if (uVar5 == 0) {
    iVar6 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xe4) = iVar6;
    *(undefined4 *)(iVar3 + 0xc) = 1;
    return;
  }
  pcVar8 = "m_iTurnOnStyle";
  pbVar4 = pbVar2;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100b6ed1:
      uVar5 = -(uint)bVar9 | 1;
      goto LAB_100b6ed6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100b6ed1;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_100b6ed6:
  if (uVar5 == 0) {
    iVar6 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xe8) = iVar6;
    *(undefined4 *)(iVar3 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"m_iTurnOffStyle");
  if (iVar6 != 0) {
    iVar6 = _atoi(*(char **)(iVar3 + 8));
    *(int *)(in_ECX + 0xec) = iVar6;
    *(undefined4 *)(iVar3 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"m_iTurnOnTime");
  if (iVar6 != 0) {
    iVar6 = _atoi(*(char **)(iVar3 + 8));
    *(int *)(in_ECX + 0xf0) = iVar6;
    *(undefined4 *)(iVar3 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"m_iTurnOffTime");
  if (iVar6 != 0) {
    iVar6 = _atoi(*(char **)(iVar3 + 8));
    *(int *)(in_ECX + 0xf4) = iVar6;
    *(undefined4 *)(iVar3 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"pitch");
  if (iVar6 != 0) {
    dVar11 = FID_conflict__atof(*(wchar_t **)(iVar3 + 8));
    *(float *)(*(int *)(in_ECX + 4) + 0x50) = (float)dVar11;
    *(undefined4 *)(iVar3 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"pattern");
  if (iVar6 != 0) {
    uVar7 = (*DAT_10223054)(*(undefined4 *)(iVar3 + 8));
    *(undefined4 *)(in_ECX + 0xf8) = uVar7;
    *(undefined4 *)(iVar3 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"firetarget");
  if (iVar6 != 0) {
    uVar7 = (*DAT_10223054)(*(undefined4 *)(iVar3 + 8));
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1cc) = uVar7;
    *(undefined4 *)(iVar3 + 0xc) = 1;
    return;
  }
  iVar6 = FUN_1000aba0(pbVar2,"_light");
  if (iVar6 == 0) {
    FUN_1000dba0(iVar3);
    return;
  }
  iVar6 = FUN_100017b0(*(undefined4 *)(iVar3 + 8),"%d %d %d %d\n",&local_c,&param_1,&local_8,
                       &local_10);
  if (iVar6 == 1) {
    local_8 = local_c;
    param_1 = local_c;
  }
  else if (iVar6 == 4) {
    dVar11 = (double)local_10 / 255.0;
    local_c = (int)((double)local_c * dVar11);
    param_1 = (int)((double)param_1 * dVar11);
    local_8 = (int)((double)local_8 * dVar11);
  }
  dVar11 = (double)local_c / 114.0;
  FUN_10171690();
  dVar10 = (double)param_1 / 114.0;
  FUN_10171690();
  param_1 = (int)(dVar10 * 264.0);
  dVar10 = (double)local_8 / 114.0;
  FUN_10171690();
  *(int *)(*(int *)(in_ECX + 4) + 0x248) = (int)(dVar11 * 264.0);
  *(int *)(*(int *)(in_ECX + 4) + 0x24c) = param_1;
  *(int *)(*(int *)(in_ECX + 4) + 0x250) = (int)(dVar10 * 264.0);
  *(int *)(*(int *)(in_ECX + 4) + 0x254) = local_10;
  *(undefined4 *)(iVar3 + 0xc) = 1;
  return;
}

