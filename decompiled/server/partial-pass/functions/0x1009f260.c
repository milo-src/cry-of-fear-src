// rea decompile_all
// name: CCoFRandomTimedSpawner::SpawnMonster
// address: 0x1009f260
// body: available
// range: 0x1009f260-0x1009f3f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CCoFRandomTimedSpawner::SpawnMonster(void) */

void __thiscall CCoFRandomTimedSpawner::SpawnMonster(CCoFRandomTimedSpawner *this)

{
  byte bVar1;
  CCoFRandomTimedSpawner *pCVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  CCoFRandomTimedSpawner *local_50;
  int local_4c;
  int aiStack_48 [16];
  uint local_8;
  
                    /* 0x9f260  281  ?SpawnMonster@CCoFRandomTimedSpawner@@QAEXXZ */
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar8 = 0;
  local_50 = this;
  piVar3 = (int *)(*DAT_10223068)(1);
  if (1 < *(int *)(DAT_10223188 + 0x94)) {
    local_4c = *(int *)(DAT_10223188 + 0x94) + -1;
    do {
      if ((*piVar3 == 0) && (iVar6 = piVar3[0x1f], iVar6 != 0)) {
        pbVar7 = (byte *)(*(int *)(*(int *)(iVar6 + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
        pbVar4 = (byte *)(*(int *)(*(int *)(local_50 + 4) + 0x1d8) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_1009f2f0:
            uVar5 = -(uint)bVar9 | 1;
            goto LAB_1009f2f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_1009f2f0;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_1009f2f5:
        if ((uVar5 == 0) && (iVar8 < 0x10)) {
          aiStack_48[iVar8] = iVar6;
          iVar8 = iVar8 + 1;
        }
      }
      piVar3 = piVar3 + 0xcb;
      local_4c = local_4c + -1;
    } while (local_4c != 0);
    if (0 < iVar8) {
      iVar6 = (*DAT_102230b0)(0,iVar8);
      pCVar2 = local_50;
      if (iVar6 == iVar8) {
        iVar6 = iVar6 + -1;
      }
      iVar8 = aiStack_48[iVar6];
      if ((iVar8 != 0) && (*(int *)(*(int *)(local_50 + 4) + 0x1cc) != 0)) {
        iVar6 = *(int *)(iVar8 + 4);
        local_68 = *(undefined4 *)(iVar6 + 8);
        local_64 = *(undefined4 *)(iVar6 + 0xc);
        local_60 = *(undefined4 *)(iVar6 + 0x10);
        iVar8 = *(int *)(iVar8 + 4);
        local_5c = *(undefined4 *)(iVar8 + 0x50);
        local_58 = *(undefined4 *)(iVar8 + 0x54);
        local_54 = *(undefined4 *)(iVar8 + 0x58);
        iVar8 = FUN_10017950(*(int *)(DAT_10223188 + 0x98) +
                             *(int *)(*(int *)(local_50 + 4) + 0x1cc),&local_68,&local_5c,0);
        if (iVar8 != 0) {
          *(undefined4 *)(*(int *)(pCVar2 + 4) + 0x298) =
               *(undefined4 *)(*(int *)(iVar8 + 4) + 0x20c);
          *(code **)(pCVar2 + 0x78) = CheckIfDead;
          (**(code **)(*(int *)pCVar2 + 8))(0);
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

