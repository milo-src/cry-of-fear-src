// rea decompile_all
// name: CGib::StickyGibTouch
// address: 0x1008bac0
// body: available
// range: 0x1008bac0-0x1008bc40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CGib::StickyGibTouch(class CBaseEntity *) */

void __thiscall CGib::StickyGibTouch(CGib *this,CBaseEntity *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 local_48 [36];
  float local_24;
  float local_20;
  float local_1c;
  float local_10;
  float local_c;
  float local_8;
  
                    /* 0x8bac0  297  ?StickyGibTouch@CGib@@QAEXPAVCBaseEntity@@@Z */
  *(code **)(this + 0x78) = CBaseEntity::SUB_Remove;
  (**(code **)(*(int *)this + 8))(0x41200000);
  pcVar6 = "worldspawn";
  pbVar5 = (byte *)(**(int **)(param_1 + 4) + *(int *)(DAT_10223188 + 0x98));
  do {
    bVar1 = *pbVar5;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1008bb15:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1008bb1a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1008bb15;
    pbVar5 = pbVar5 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1008bb1a:
  if (uVar3 != 0) {
    (**(code **)(*(int *)this + 8))(0);
    return;
  }
  iVar2 = *(int *)(this + 4);
  local_c = *(float *)(iVar2 + 0x24) * 32.0 + *(float *)(iVar2 + 0xc);
  local_8 = *(float *)(iVar2 + 0x28) * 32.0 + *(float *)(iVar2 + 0x10);
  local_10 = *(float *)(iVar2 + 0x20) * 32.0 + *(float *)(iVar2 + 8);
  FUN_1011a800((float *)(iVar2 + 8),&local_10,1,*(undefined4 *)(iVar2 + 0x20c),local_48);
  FUN_10117700(local_48,*(undefined4 *)(this + 0xdc));
  iVar2 = *(int *)(this + 4);
  local_8 = local_1c * -1.0;
  *(ulonglong *)(iVar2 + 0x20) = CONCAT44(local_20 * -1.0,local_24 * -1.0);
  *(float *)(iVar2 + 0x28) = local_8;
  puVar4 = (undefined8 *)FUN_1011a8d0(&local_10,*(int *)(this + 4) + 0x20);
  iVar2 = *(int *)(this + 4);
  *(undefined8 *)(iVar2 + 0x50) = *puVar4;
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(puVar4 + 1);
  iVar2 = *(int *)(this + 4);
  *(undefined8 *)(iVar2 + 0x20) = DAT_10222f34;
  *(undefined4 *)(iVar2 + 0x28) = DAT_10222f3c;
  iVar2 = *(int *)(this + 4);
  *(undefined8 *)(iVar2 + 0x5c) = DAT_10222f34;
  *(undefined4 *)(iVar2 + 100) = DAT_10222f3c;
  *(undefined4 *)(*(int *)(this + 4) + 0x108) = 0;
  return;
}

