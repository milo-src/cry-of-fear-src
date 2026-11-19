// rea decompile_all
// name: FUN_101217c0
// address: 0x101217c0
// body: available
// range: 0x101217c0-0x1012189c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101217c0(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  DAT_10222f04 = 0;
  (**(code **)(*in_ECX + 0x30))();
  fVar7 = (float10)(*DAT_1022302c)("sv_cheats");
  _DAT_10231f64 = (float)fVar7;
  iVar2 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc),&DAT_101e6e0c);
  pcVar5 = "c_start";
  DAT_10222f0c = (uint)(iVar2 != 0);
  pbVar4 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc));
  do {
    bVar1 = *pbVar4;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_10121840:
      uVar3 = -(uint)bVar6 | 1;
      goto LAB_10121845;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_10121840;
    pbVar4 = pbVar4 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_10121845:
  if (uVar3 == 0) {
    iVar2 = FUN_10118460(0,"dave_benson_phillips");
    if (iVar2 == 0) {
      iVar2 = FUN_10017950("dave_benson_phillips",&DAT_10222f34,&DAT_10222f34,0);
      if (iVar2 != 0) {
        local_10 = 0x44194000;
        local_c = 0xc5454000;
        local_8 = 0xc42f8000;
        FUN_10119fe0(iVar2,&local_10);
      }
    }
  }
  return;
}

