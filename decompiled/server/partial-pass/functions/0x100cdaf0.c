// rea decompile_all
// name: FUN_100cdaf0
// address: 0x100cdaf0
// body: available
// range: 0x100cdaf0-0x100cdc14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100cdaf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  iVar6 = param_1 / 2;
  if (DAT_10217ab4 < param_1 / 2) {
    iVar6 = DAT_10217ab4;
  }
  iVar9 = 1;
  iVar4 = 0;
  local_c = (int *)(in_ECX + 0x207c);
  do {
    iVar5 = 0;
    iVar3 = DAT_102177f8;
    iVar1 = DAT_102177f8;
    while (iVar1 != 0) {
      if ((((iVar5 == 0) || (iVar8 = iVar3, param_1 % (&DAT_102177f8)[iVar5] != 0)) &&
          (iVar8 = (&DAT_102177f8)[iVar5], iVar3 <= iVar9)) && (iVar9 <= iVar8)) {
        iVar4 = local_8 + 1;
        local_8 = iVar4;
        if (iVar8 - iVar9 < iVar9 - iVar3) {
          *local_c = iVar8;
          local_c = local_c + 1;
        }
        else {
          *local_c = iVar3;
          local_c = local_c + 1;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = local_8;
      iVar3 = iVar8;
      iVar1 = (&DAT_102177f8)[iVar5];
    }
    iVar9 = iVar9 + ((int)(iVar6 + (iVar6 >> 0x1f & 0xfU)) >> 4);
    if (0xf < iVar4) {
      iVar6 = 8;
      piVar7 = (int *)(in_ECX + 0x207c);
      do {
        *piVar7 = param_1 - *piVar7;
        iVar6 = iVar6 + -1;
        piVar7 = piVar7 + 2;
      } while (iVar6 != 0);
      iVar6 = 0xf;
      puVar10 = (undefined4 *)(in_ECX + 0x20b8);
      do {
        iVar4 = (*DAT_102230b0)(0,iVar6);
        uVar2 = *(undefined4 *)(in_ECX + 0x207c + iVar4 * 4);
        iVar6 = iVar6 + -1;
        *(undefined4 *)(in_ECX + iVar4 * 4 + 0x207c) = *puVar10;
        *puVar10 = uVar2;
        puVar10 = puVar10 + -1;
      } while (0 < iVar6);
      return;
    }
  } while( true );
}

