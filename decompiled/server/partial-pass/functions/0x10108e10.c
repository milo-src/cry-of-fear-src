// rea decompile_all
// name: FUN_10108e10
// address: 0x10108e10
// body: available
// range: 0x10108e10-0x10108efe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10108e10(byte *param_1,int param_2,byte *param_3,char *param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  int local_8;
  
  if ((((param_1 == (byte *)0x0) || (param_3 == (byte *)0x0)) || (param_4 == (char *)0x0)) ||
     (param_5 == 0)) {
    return 0;
  }
  local_8 = 0;
  pbVar7 = param_1;
  if (0 < param_2) {
    do {
      pbVar4 = param_3;
      pbVar6 = pbVar7;
      if (*(int *)(pbVar7 + 0x40) == param_5) {
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_10108e80:
            uVar5 = -(uint)bVar8 | 1;
            goto LAB_10108e85;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar8 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_10108e80;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_10108e85:
        if (uVar5 == 0) {
          return 0;
        }
      }
      local_8 = local_8 + 1;
      pbVar7 = pbVar7 + 0x50;
    } while (local_8 < param_2);
  }
  iVar3 = param_2 * 0x50 - (int)param_3;
  do {
    bVar1 = *param_3;
    param_3 = param_3 + 1;
    param_3[(int)(param_1 + iVar3 + -1)] = bVar1;
  } while (bVar1 != 0);
  iVar3 = param_2 * 0x50 - (int)param_4;
  do {
    cVar2 = *param_4;
    param_4 = param_4 + 1;
    param_4[(int)(param_1 + iVar3 + 0x1f)] = cVar2;
  } while (cVar2 != '\0');
  *(int *)(param_1 + param_2 * 0x50 + 0x40) = param_5;
  *(undefined8 *)(param_1 + param_2 * 0x50 + 0x44) = *(undefined8 *)(param_5 + 0x88);
  *(undefined4 *)(param_1 + param_2 * 0x50 + 0x4c) = *(undefined4 *)(param_5 + 0x90);
  return 1;
}

