// rea decompile_all
// name: CBasePlayerAmmo::DefaultTouch
// address: 0x1011c5e0
// body: available
// range: 0x1011c5e0-0x1011c7c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBasePlayerAmmo::DefaultTouch(class CBaseEntity *) */

void __thiscall CBasePlayerAmmo::DefaultTouch(CBasePlayerAmmo *this,CBaseEntity *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
                    /* 0x11c5e0  70  ?DefaultTouch@CBasePlayerAmmo@@QAEXPAVCBaseEntity@@@Z */
  iVar2 = (**(code **)(*(int *)param_1 + 0xd0))();
  if (iVar2 != 0) {
    iVar2 = FUN_100125e0(*(undefined4 *)(param_1 + 4));
    if ((iVar2 != 0) &&
       ((*(int *)(*(int *)(this + 4) + 0x254) == 1 ||
        (((*(uint *)(*(int *)(iVar2 + 4) + 0x184) | *(uint *)(iVar2 + 0x22b4) |
          *(uint *)(iVar2 + 0x22b0)) & 0x20) != 0)))) {
      iVar2 = (**(code **)(*(int *)this + 0x11c))(param_1);
      if (iVar2 != 0) {
        if (DAT_10222ee4 != (int *)0x0) {
          iVar2 = (**(code **)(*DAT_10222ee4 + 0xb0))(this);
          if (iVar2 == 3) {
            (**(code **)(*(int *)this + 0xf0))();
            return;
          }
        }
        *(undefined4 *)(this + 0x7c) = 0;
        *(undefined4 *)(this + 0x80) = 0;
        if (*(int **)(this + 0x14) == (int *)0x0) {
          uVar3 = 2;
        }
        else {
          uVar3 = (**(code **)(**(int **)(this + 0x14) + 0x40))();
          uVar3 = uVar3 & 2;
        }
        *(uint *)(this + 0xdc) = uVar3;
        *(code **)(this + 0x78) = CBaseEntity::SUB_Remove;
        (**(code **)(*(int *)this + 8))(0x3dcccccd);
        return;
      }
      if ((DAT_1022647c != 0) || (DAT_10226480 != 0)) {
        *(undefined4 *)(this + 0x7c) = 0;
        *(undefined4 *)(this + 0x80) = 0;
        if (*(int **)(this + 0x14) == (int *)0x0) {
          uVar3 = 2;
        }
        else {
          uVar3 = (**(code **)(**(int **)(this + 0x14) + 0x40))();
          uVar3 = uVar3 & 2;
        }
        pcVar5 = "weapon_flare";
        *(uint *)(this + 0xdc) = uVar3;
        iVar2 = *(int *)(*(int *)(this + 4) + 0x20c);
        pbVar4 = (byte *)(*(int *)(-(uint)(iVar2 != 0) & iVar2 + 0x80U) +
                         *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar4;
          bVar6 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_1011c747:
            uVar3 = -(uint)bVar6 | 1;
            goto LAB_1011c74c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar6 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_1011c747;
          pbVar4 = pbVar4 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_1011c74c:
        if ((uVar3 == 0) && (*(int *)(*(int *)(this + 4) + 0x248) == 1)) {
          FUN_1001e990(iVar2,1,"weapons/flare/flare_burn.wav");
          *(undefined4 *)(*(int *)(this + 4) + 0x160) = 0;
          *(undefined4 *)(*(int *)(this + 4) + 0x14c) = 5;
          *(undefined4 *)(*(int *)(this + 4) + 0x150) = 0;
          *(undefined4 *)(*(int *)(this + 4) + 0x114) = 0;
          return;
        }
        *(code **)(this + 0x78) = CBaseEntity::SUB_Remove;
        (**(code **)(*(int *)this + 8))(0x3dcccccd);
      }
    }
  }
  return;
}

