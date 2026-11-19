// rea decompile_all
// name: FUN_10106de0
// address: 0x10106de0
// body: available
// range: 0x10106de0-0x10106fdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10106de0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int *in_ECX;
  byte *pbVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  bool bVar12;
  undefined1 local_408 [1024];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  (**(code **)(*in_ECX + 0xe4))(param_1);
  FUN_100c8b70(param_1);
  (*DAT_10223000)(1,DAT_1022652c,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
  (*DAT_10223008)(DAT_10231000);
  iVar11 = 0;
  if (0 < DAT_10231000) {
    puVar10 = &DAT_10230d80;
    do {
      (*DAT_10223020)(puVar10);
      iVar11 = iVar11 + 1;
      puVar10 = puVar10 + 0x10;
    } while (iVar11 < DAT_10231000);
  }
  (*DAT_10223004)();
  FUN_101070d0(0);
  uVar3 = (*DAT_102230f0)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c),"model");
  pbVar4 = (byte *)(*DAT_102230f4)(uVar3);
  pbVar1 = (byte *)(param_1 + 0x2668);
  pbVar8 = pbVar1;
  do {
    bVar2 = *pbVar4;
    bVar12 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_10106ec4:
      uVar9 = -(uint)bVar12 | 1;
      goto LAB_10106ec9;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar12 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_10106ec4;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  uVar9 = 0;
LAB_10106ec9:
  pcVar5 = "* assigned to team %s\n";
  if (uVar9 == 0) {
    pcVar5 = "* you are on team \'%s\'\n";
  }
  FUN_1001f160(local_408,pcVar5,pbVar1);
  (**(code **)(*in_ECX + 0xe0))(param_1,pbVar1,0,0);
  FUN_10119b50(local_408,param_1);
  (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
  FUN_101070d0(0);
  iVar11 = 1;
  if (0 < *(int *)(DAT_10223188 + 0x90)) {
    do {
      piVar6 = (int *)FUN_10119680(iVar11);
      if (piVar6 != (int *)0x0) {
        iVar7 = *in_ECX;
        uVar3 = (**(code **)(*piVar6 + 0xd8))();
        iVar7 = (**(code **)(iVar7 + 0xdc))(uVar3);
        if (iVar7 != 0) {
          (*DAT_10223000)(1,DAT_102264f4,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
          uVar3 = (*DAT_10223064)(*(undefined4 *)(piVar6[1] + 0x20c));
          (*DAT_10223008)(uVar3);
          uVar3 = (**(code **)(*piVar6 + 0xd8))();
          (*DAT_10223020)(uVar3);
          (*DAT_10223004)();
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 <= *(int *)(DAT_10223188 + 0x90));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

