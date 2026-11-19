// rea decompile_all
// name: FUN_100e40e0
// address: 0x100e40e0
// body: available
// range: 0x100e40e0-0x100e42e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e40e0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  int in_ECX;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  size_t _MaxCount;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (((*(char *)(in_ECX + 0x1ee8) == '\0') && (iVar3 = FUN_100e4ed0(), iVar3 == 0)) &&
     (*(float *)(*(int *)(in_ECX + 4) + 0x260) != 10.0)) {
    pcVar8 = (char *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x21fc + param_1 * 4));
    pcVar7 = pcVar8;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar7 - (int)(pcVar8 + 1)) < 2) {
      pcVar7 = "inventory/inventory_no.wav";
      uVar4 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
    }
    else {
      pcVar8 = (char *)FUN_100dff70("classname",pcVar8);
      pcVar7 = pcVar8 + 1;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if (1 < (uint)((int)pcVar8 - (int)pcVar7)) {
        uVar4 = FUN_100dff70("classname",
                             *(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x21fc + param_1 * 4)
                            );
        FUN_1001f160(local_88,&DAT_101a124c,uVar4);
      }
      pbVar5 = (byte *)FUN_100dff70("classname",
                                    *(int *)(DAT_10223188 + 0x98) +
                                    *(int *)(in_ECX + 0x21fc + param_1 * 4));
      pcVar7 = "item_key";
      do {
        bVar2 = *pcVar7;
        bVar9 = bVar2 < *pbVar5;
        if (bVar2 != *pbVar5) {
LAB_100e4226:
          uVar6 = -(uint)bVar9 | 1;
          goto LAB_100e422b;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar7[1];
        bVar9 = bVar2 < pbVar5[1];
        if (bVar2 != pbVar5[1]) goto LAB_100e4226;
        pcVar7 = pcVar7 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar2 != 0);
      uVar6 = 0;
LAB_100e422b:
      if (uVar6 == 0) {
        FUN_100e4410(param_1);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      _MaxCount = 7;
      pcVar8 = "weapon_";
      pcVar7 = (char *)FUN_100dff70("classname",
                                    *(int *)(DAT_10223188 + 0x98) +
                                    *(int *)(in_ECX + 0x21fc + param_1 * 4));
      iVar3 = _strncmp(pcVar7,pcVar8,_MaxCount);
      if (iVar3 != 0) goto LAB_100e42d8;
      uVar4 = FUN_100dff70("classname",
                           *(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x21fc + param_1 * 4));
      FUN_100f1a50(uVar4);
      FUN_100ddc40();
      pcVar7 = "inventory/inventory_click.wav";
      uVar4 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
    }
    FUN_100fc9f0(uVar4,3,pcVar7,0x3f800000,0x3f4ccccd,0,100);
  }
LAB_100e42d8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

