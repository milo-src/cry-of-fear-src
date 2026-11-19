// rea decompile_all
// name: FUN_100e08b0
// address: 0x100e08b0
// body: available
// range: 0x100e08b0-0x100e0a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e08b0(int param_1,int param_2)

{
  byte bVar1;
  CBasePlayerItem *this;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  int local_8;
  
  do {
    while ((iVar9 = param_2, param_2 = param_1, param_1 = iVar9, param_2 == 0xd && (iVar9 != 0xd)))
    {
      param_2 = 0xd;
    }
    cVar2 = FUN_100e4bf0(param_2);
  } while ((cVar2 != '\0') && (cVar2 = FUN_100e4bf0(iVar9), cVar2 == '\0'));
  iVar3 = FUN_100e2380("weapon_dualweapon");
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)(in_ECX + 0x2514);
    local_8 = 6;
    do {
      for (this = (CBasePlayerItem *)*puVar4; this != (CBasePlayerItem *)0x0;
          this = *(CBasePlayerItem **)(this + 0x164)) {
        pcVar8 = "weapon_dualweapon";
        pbVar5 = (byte *)(**(int **)(this + 4) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_100e0966:
            uVar6 = -(uint)bVar10 | 1;
            goto LAB_100e096b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_100e0966;
          pbVar5 = pbVar5 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_100e096b:
        if (uVar6 == 0) {
          *(uint *)(*(int *)(in_ECX + 4) + 0x16c) =
               *(uint *)(*(int *)(in_ECX + 4) + 0x16c) & ~(1 << (*(uint *)(this + 0x168) & 0x1f));
          CBasePlayerItem::DestroyItem(this);
        }
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  DAT_1022647c = 1;
  iVar3 = (*DAT_10222fa4)((int)"weapon_dualweapon" - *(int *)(DAT_10223188 + 0x98));
  if ((iVar3 != 0) && (iVar7 = (*DAT_10223060)(iVar3), iVar7 != 0)) {
    iVar7 = *(int *)(in_ECX + 4);
    *(undefined8 *)(iVar3 + 0x88) = *(undefined8 *)(iVar7 + 8);
    *(undefined4 *)(iVar3 + 0x90) = *(undefined4 *)(iVar7 + 0x10);
    *(uint *)(iVar3 + 0x224) = *(uint *)(iVar3 + 0x224) | 0x40000000;
    *(undefined4 *)(iVar3 + 0x2d4) = 1;
    *(int *)(iVar3 + 0x2c8) = param_2;
    *(int *)(iVar3 + 0x2cc) = iVar9;
    *(int *)(in_ECX + 0x1e70) = param_2;
    *(int *)(in_ECX + 0x1e74) = iVar9;
    FUN_100167d0(iVar3);
    FUN_10016980(iVar3,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    DAT_1022647c = 0;
    return;
  }
  (*DAT_1022303c)(1,"NULL Ent in GiveNamedItem!\n");
  return;
}

