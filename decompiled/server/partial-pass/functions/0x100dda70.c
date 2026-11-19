// rea decompile_all
// name: FUN_100dda70
// address: 0x100dda70
// body: available
// range: 0x100dda70-0x100ddaf8 inclusive
// range: 0x100ddb00-0x100ddc3d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100dda70(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int in_ECX;
  byte *pbVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  (*DAT_1022303c)(1,"Trying to delete %s!\n",*(int *)(DAT_10223188 + 0x98) + param_1);
  if (param_2 != 0) {
    puVar6 = (undefined4 *)(in_ECX + 0x221c);
    iVar8 = 1;
    if (*(char *)(in_ECX + 0x1e9c) != '\0') {
      do {
        puVar6[-7] = 0;
        *puVar6 = 0;
        puVar6[7] = 0;
        puVar6[0xe] = 0;
        FUN_100e4360(iVar8,0,1);
        iVar8 = iVar8 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar8 < 4);
      return;
    }
    do {
      puVar6[-7] = 0;
      *puVar6 = 0;
      puVar6[7] = 0;
      puVar6[0xe] = 0;
      FUN_100e4360(iVar8,0,1);
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar8 < 7);
    return;
  }
  piVar5 = (int *)(in_ECX + 0x2200);
  iVar7 = 1;
  iVar8 = *(int *)(DAT_10223188 + 0x98);
  if (*(char *)(in_ECX + 0x1e9c) == '\0') {
    do {
      pbVar2 = (byte *)(*piVar5 + iVar8);
      pbVar4 = (byte *)(iVar8 + param_1);
      do {
        bVar1 = *pbVar2;
        bVar9 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_100ddbe0:
          uVar3 = -(uint)bVar9 | 1;
          goto LAB_100ddbe5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar9 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_100ddbe0;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_100ddbe5:
      if (uVar3 == 0) goto LAB_100ddbfd;
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar7 < 7);
  }
  else {
    do {
      pbVar2 = (byte *)(*piVar5 + iVar8);
      pbVar4 = (byte *)(iVar8 + param_1);
      do {
        bVar1 = *pbVar2;
        bVar9 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_100ddb87:
          uVar3 = -(uint)bVar9 | 1;
          goto LAB_100ddb8c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar9 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_100ddb87;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_100ddb8c:
      if (uVar3 == 0) {
LAB_100ddbfd:
        *(undefined4 *)(in_ECX + 0x21fc + iVar7 * 4) = 0;
        *(undefined4 *)(in_ECX + 0x2218 + iVar7 * 4) = 0;
        *(undefined4 *)(in_ECX + 0x2234 + iVar7 * 4) = 0;
        *(undefined4 *)(in_ECX + 0x2250 + iVar7 * 4) = 0;
        FUN_100e4360(iVar7,0,0);
        return;
      }
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar7 < 4);
  }
  return;
}

