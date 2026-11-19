// rea decompile_all
// name: CCofMonsterRandomSpawn::DoSpawnStuff
// address: 0x10094370
// body: available
// range: 0x10094370-0x100945fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CCofMonsterRandomSpawn::DoSpawnStuff(void) */

void __thiscall CCofMonsterRandomSpawn::DoSpawnStuff(CCofMonsterRandomSpawn *this)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int aiStack_88 [32];
  uint local_8;
  
                    /* 0x94370  91  ?DoSpawnStuff@CCofMonsterRandomSpawn@@QAEXXZ */
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (0.0 < *(float *)(*(int *)(this + 4) + 0x164)) {
    iVar3 = (*DAT_10223068)(1);
    iVar11 = *(int *)(this + 4);
    iVar10 = 0;
    fVar1 = *(float *)(iVar11 + 0x168);
    if (1 < *(int *)(DAT_10223188 + 0x94)) {
      piVar6 = (int *)(iVar3 + 0x7c);
      iVar3 = *(int *)(DAT_10223188 + 0x94) + -1;
      do {
        if ((((piVar6[-0x1f] == 0) && ((float)piVar6[0x5d] == 66.0)) &&
            (iVar7 = *piVar6, iVar10 < 0x1e)) && (iVar7 != 0)) {
          pbVar9 = (byte *)(*(int *)(*(int *)(iVar7 + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
          pbVar4 = (byte *)(*(int *)(iVar11 + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
          do {
            bVar2 = *pbVar4;
            bVar12 = bVar2 < *pbVar9;
            if (bVar2 != *pbVar9) {
LAB_10094451:
              uVar5 = -(uint)bVar12 | 1;
              goto LAB_10094456;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar12 = bVar2 < pbVar9[1];
            if (bVar2 != pbVar9[1]) goto LAB_10094451;
            pbVar4 = pbVar4 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_10094456:
          if (uVar5 == 0) {
            iVar10 = iVar10 + 1;
            aiStack_88[iVar10] = iVar7;
          }
        }
        piVar6 = piVar6 + 0xcb;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (0 < iVar10) {
        iVar11 = 1;
        do {
          iVar3 = (*DAT_102230b0)(1,iVar10);
          if ((aiStack_88[iVar3] != 0) && (iVar11 <= (int)fVar1)) {
            iVar7 = *(int *)(aiStack_88[iVar3] + 4);
            piVar6 = (int *)FUN_10017950(*(int *)(iVar7 + 0x1d8) + *(int *)(DAT_10223188 + 0x98),
                                         iVar7 + 8,iVar7 + 0x50,0);
            if (piVar6 != (int *)0x0) {
              iVar7 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)piVar6[1],"_slower");
              if (iVar7 != 0) {
                uVar8 = (*DAT_102230b0)(0,2);
                *(undefined4 *)(piVar6[1] + 0x114) = uVar8;
              }
              if (*(int *)(*(int *)(this + 4) + 0xb8) != 0) {
                (*DAT_10222f50)(*(undefined4 *)(piVar6[1] + 0x20c),
                                *(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(this + 4) + 0xb8))
                ;
                if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 1) != 0) {
                  *(uint *)(piVar6[1] + 0x1a4) = *(uint *)(piVar6[1] + 0x1a4) | 4;
                }
                (**(code **)(*piVar6 + 0x2c))();
              }
              iVar7 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)piVar6[1],"monster_");
              if (iVar7 != 0) {
                if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 1) != 0) {
                  *(uint *)(piVar6[1] + 0x1a4) = *(uint *)(piVar6[1] + 0x1a4) | 4;
                }
                (**(code **)(*piVar6 + 0x2c))();
              }
            }
            aiStack_88[iVar3] = 0;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 <= iVar10);
        FUN_10119900(this);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

