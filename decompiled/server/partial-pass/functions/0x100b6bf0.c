// rea decompile_all
// name: FUN_100b6bf0
// address: 0x100b6bf0
// body: available
// range: 0x100b6bf0-0x100b6de0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b6bf0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  pcVar5 = "_light";
  pbVar2 = *(byte **)(param_1 + 4);
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_100b6c30:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_100b6c35;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_100b6c30;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_100b6c35:
  if (uVar3 != 0) {
    FUN_100b6df0(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = FUN_100017b0(*(undefined4 *)(param_1 + 8),"%d %d %d %d\n",&local_50,&local_4c,&local_54,
                       &local_58);
  if (iVar4 == 1) {
    local_4c = local_50;
    iVar6 = local_50;
  }
  else {
    iVar6 = local_54;
    if (iVar4 == 4) {
      dVar8 = (double)local_58 / 255.0;
      local_50 = (int)((double)local_50 * dVar8);
      local_4c = (int)((double)local_4c * dVar8);
      iVar6 = (int)((double)local_54 * dVar8);
    }
  }
  dVar8 = (double)local_50 / 114.0;
  FUN_10171690();
  dVar9 = (double)local_4c / 114.0;
  local_50 = (int)(dVar8 * 264.0);
  FUN_10171690();
  local_4c = (int)(dVar9 * 264.0);
  dVar9 = (double)iVar6 / 114.0;
  FUN_10171690();
  *(undefined4 *)(param_1 + 0xc) = 1;
  local_54 = (int)(dVar9 * 264.0);
  FUN_1001f160(local_48,&DAT_101c20cc,(int)(dVar8 * 264.0));
  (*DAT_10223038)("sv_skycolor_r",local_48);
  FUN_1001f160(local_48,&DAT_101c20cc,local_4c);
  (*DAT_10223038)("sv_skycolor_g",local_48);
  FUN_1001f160(local_48,&DAT_101c20cc,local_54);
  (*DAT_10223038)("sv_skycolor_b",local_48);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

