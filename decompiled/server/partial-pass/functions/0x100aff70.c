// rea decompile_all
// name: FUN_100aff70
// address: 0x100aff70
// body: available
// range: 0x100aff70-0x100b0204 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100aff70(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  int in_ECX;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_100b01f2;
  if (*(char *)(in_ECX + 8) != '\0') {
    (*DAT_10223000)(1,DAT_10226518,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
    uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
    (*DAT_10223008)(uVar2);
    (*DAT_10223020)(" Vote kick already in progress");
    (*DAT_10223004)();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pbVar3 = (byte *)(*DAT_10223184)(*(undefined4 *)(*(int *)(param_2 + 4) + 0x20c));
  if (pbVar3 != (byte *)0x0) {
    pcVar7 = "STEAM_ID_PENDING";
    pbVar5 = pbVar3;
    do {
      bVar1 = *pbVar5;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100b0040:
        uVar6 = -(uint)bVar9 | 1;
        goto LAB_100b0045;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100b0040;
      pbVar5 = pbVar5 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar6 = 0;
LAB_100b0045:
    if (uVar6 == 0) goto LAB_100b01f2;
    pcVar7 = "STEAM_ID_LAN";
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100b0072:
        uVar6 = -(uint)bVar9 | 1;
        goto LAB_100b0077;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100b0072;
      pbVar3 = pbVar3 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar6 = 0;
LAB_100b0077:
    if (uVar6 == 0) goto LAB_100b01f2;
  }
  *(undefined1 *)(in_ECX + 8) = 1;
  fVar10 = (float10)(*DAT_1022302c)("sv_votekick_time");
  *(float *)(in_ECX + 0xc) = (float)(fVar10 + (float10)*DAT_10223188);
  uVar2 = (*DAT_10223184)(*(undefined4 *)(*(int *)(param_2 + 4) + 0x20c));
  *(undefined4 *)(in_ECX + 4) = uVar2;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  FUN_10119200(" Votekick called against %s\n",
               (int)DAT_10223188[0x26] + *(int *)(*(int *)(param_2 + 4) + 0x1d4));
  uVar2 = (*DAT_10223184)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
  *(undefined4 *)(in_ECX + 0x20) = uVar2;
  *(undefined4 *)(in_ECX + 0x10) = 1;
  FUN_1001f160(local_88," Vote kick called against %s",
               (int)DAT_10223188[0x26] + *(int *)(*(int *)(param_2 + 4) + 0x1d4));
  uVar2 = (*DAT_1022305c)(0,&DAT_10222f34,"common/votekick/votekick_notify.wav",0x3f800000,0,0,100);
  FUN_101182b0(uVar2);
  iVar8 = 1;
  if (0 < (int)DAT_10223188[0x24]) {
    do {
      iVar4 = FUN_10119680(iVar8);
      if (iVar4 != 0) {
        (*DAT_10223000)(1,DAT_10226518,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
        uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
        (*DAT_10223008)(uVar2);
        (*DAT_10223020)(local_88);
        (*DAT_10223004)();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= (int)DAT_10223188[0x24]);
  }
LAB_100b01f2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

