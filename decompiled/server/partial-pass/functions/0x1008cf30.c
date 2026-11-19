// rea decompile_all
// name: FUN_1008cf30
// address: 0x1008cf30
// body: available
// range: 0x1008cf30-0x1008d24a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008cf30(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  CBaseDoor *this;
  CBaseDoor *in_ECX;
  char *pcVar8;
  bool bVar9;
  
  iVar5 = *(int *)(in_ECX + 4);
  if (*(float *)(iVar5 + 0x1e4) != 0.0) {
    (**(code **)(*param_1 + 100))(iVar5,iVar5,*(float *)(iVar5 + 0x1e4),1);
  }
  if (0.0 <= *(float *)(in_ECX + 0x10c)) {
    iVar5 = *(int *)(in_ECX + 4);
    if (-1 < *(int *)(iVar5 + 0x1a4)) {
      FUN_100fc9f0(*(undefined4 *)(iVar5 + 0x20c),6,
                   *(int *)(iVar5 + 0x1f0) + *(int *)(DAT_10223188 + 0x98),0,0,0x20,100);
    }
    if (*(int *)(in_ECX + 0x100) == 3) {
      CBaseDoor::DoorGoUp(in_ECX);
    }
    else {
      CBaseDoor::DoorGoDown(in_ECX);
    }
  }
  if ((*(int *)(in_ECX + 0x1b0) == 0) && (*(int *)(*(int *)(in_ECX + 4) + 0x1d0) != 0)) {
    for (iVar5 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) +
                                *(int *)(*(int *)(in_ECX + 4) + 0x1d0)); iVar5 != 0;
        iVar5 = FUN_10118590(iVar5,*(int *)(DAT_10223188 + 0x98) +
                                   *(int *)(*(int *)(in_ECX + 4) + 0x1d0))) {
      piVar2 = *(int **)(iVar5 + 4);
      if (piVar2 == *(int **)(in_ECX + 4)) {
LAB_1008d059:
        pcVar8 = "func_door_rotating";
        pbVar6 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *piVar2);
        do {
          bVar1 = *pbVar6;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_1008d090:
            uVar7 = -(uint)bVar9 | 1;
            goto LAB_1008d095;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar9 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_1008d090;
          pbVar6 = pbVar6 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_1008d095:
        if (uVar7 == 0) goto LAB_1008d09d;
      }
      else {
        pcVar8 = "func_door";
        pbVar6 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *piVar2);
        do {
          bVar1 = *pbVar6;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_1008d050:
            uVar7 = -(uint)bVar9 | 1;
            goto LAB_1008d055;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar9 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_1008d050;
          pbVar6 = pbVar6 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_1008d055:
        if (uVar7 != 0) goto LAB_1008d059;
LAB_1008d09d:
        this = (CBaseDoor *)FUN_1008ce10(piVar2);
        if (0.0 <= *(float *)(this + 0x10c)) {
          iVar3 = *(int *)(in_ECX + 4);
          iVar4 = *(int *)(this + 4);
          if ((((*(float *)(iVar4 + 0x20) == *(float *)(iVar3 + 0x20)) &&
               (*(float *)(iVar4 + 0x24) == *(float *)(iVar3 + 0x24))) &&
              (*(float *)(iVar4 + 0x28) == *(float *)(iVar3 + 0x28))) &&
             (((*(float *)(iVar4 + 0x5c) == *(float *)(iVar3 + 0x20) &&
               (*(float *)(iVar4 + 0x60) == *(float *)(iVar3 + 0x24))) &&
              (*(float *)(iVar4 + 100) == *(float *)(iVar3 + 0x28))))) {
            pcVar8 = "func_door";
            pbVar6 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(iVar5 + 4));
            do {
              bVar1 = *pbVar6;
              bVar9 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_1008d170:
                uVar7 = -(uint)bVar9 | 1;
                goto LAB_1008d175;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar9 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_1008d170;
              pbVar6 = pbVar6 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            uVar7 = 0;
LAB_1008d175:
            if (uVar7 == 0) {
              *(undefined8 *)(iVar4 + 8) = *(undefined8 *)(iVar3 + 8);
              *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
              FUN_100c4ed0(this,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c);
            }
            else {
              *(undefined8 *)(iVar4 + 0x50) = *(undefined8 *)(iVar3 + 0x50);
              *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
              FUN_100c4b90(this,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c);
            }
          }
          if (*(int *)(this + 0x100) == 3) {
            CBaseDoor::DoorGoUp(this);
          }
          else {
            CBaseDoor::DoorGoDown(this);
          }
        }
      }
    }
  }
  return;
}

