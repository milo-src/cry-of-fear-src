// rea decompile_all
// name: CDualWeapon::ThrowRemove
// address: 0x10036100
// body: available
// range: 0x10036100-0x10036539 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CDualWeapon::ThrowRemove(void) */

void __thiscall CDualWeapon::ThrowRemove(CDualWeapon *this)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  int local_8;
  
                    /* 0x36100  328  ?ThrowRemove@CDualWeapon@@QAEXXZ */
  if ((*(int *)(this + 0x160) != 0) && (piVar3 = (int *)FUN_100e0310(0xd), piVar3 != (int *)0x0)) {
    (*DAT_10223000)(8,DAT_10226660,0,*(undefined4 *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x20c));
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    *(undefined4 *)(piVar3[1] + 0x248) = 0;
    if (*(int *)(*(int *)(this + 0x160) + 0x2540 + piVar3[0x77] * 4) < 1) {
      iVar5 = *(int *)(*(int *)(this + 0x160) + 0x2534);
      if (iVar5 == 0) {
        iVar5 = FUN_100e2380("weapon_mobile");
        if (iVar5 == 0) {
          iVar5 = FUN_100e2530();
          if (iVar5 != 0) {
            FUN_100f1df0();
          }
        }
        else {
          FUN_100f1a50("weapon_mobile");
        }
      }
      else {
        pcVar8 = "weapon_flare";
        iVar5 = *(int *)(*(int *)(iVar5 + 4) + 0x20c);
        pbVar7 = (byte *)(*(int *)(-(uint)(iVar5 != 0) & iVar5 + 0x80U) + (int)DAT_10223188[0x26]);
        do {
          bVar1 = *pbVar7;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_10036232:
            uVar4 = -(uint)bVar9 | 1;
            goto LAB_10036237;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar9 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_10036232;
          pbVar7 = pbVar7 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_10036237:
        if (((uVar4 == 0) && (iVar5 = *(int *)(this + 0x204), iVar5 != 0)) && (iVar5 != 0xd)) {
          iVar5 = FUN_100e0310(iVar5);
          if (iVar5 != 0) {
            *(int *)(*(int *)(this + 0x160) + 0x2534) = iVar5;
          }
        }
        FUN_100f1c20(1);
      }
      iVar5 = *(int *)(this + 0x160);
      if (iVar5 != 0) {
        local_8 = *(int *)piVar3[1];
        pbVar6 = (byte *)((int)DAT_10223188[0x26] + local_8);
        pbVar7 = (byte *)(iVar5 + 0x204c);
        do {
          bVar1 = *pbVar7;
          bVar9 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_100362f7:
            uVar4 = -(uint)bVar9 | 1;
            goto LAB_100362fc;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar9 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_100362f7;
          pbVar7 = pbVar7 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_100362fc:
        if (uVar4 == 0) {
          *(byte *)(iVar5 + 0x204c) = 0;
          (*DAT_10223000)(1,DAT_10226634,0,
                          *(undefined4 *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x20c));
          (*DAT_10223008)(1);
          (*DAT_10223008)(0);
          (*DAT_10223004)();
          *(undefined4 *)(*(int *)(this + 0x160) + 0x3dc) = 0;
          iVar5 = *(int *)(this + 0x160);
          local_8 = *(int *)piVar3[1];
        }
        pbVar6 = (byte *)((int)DAT_10223188[0x26] + local_8);
        pbVar7 = (byte *)(iVar5 + 0x20cc);
        do {
          bVar1 = *pbVar7;
          bVar9 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_10036393:
            uVar4 = -(uint)bVar9 | 1;
            goto LAB_10036398;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar9 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_10036393;
          pbVar7 = pbVar7 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_10036398:
        if (uVar4 == 0) {
          *(byte *)(iVar5 + 0x20cc) = 0;
          (*DAT_10223000)(1,DAT_10226634,0,
                          *(undefined4 *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x20c));
          (*DAT_10223008)(2);
          (*DAT_10223008)(0);
          (*DAT_10223004)();
          *(undefined4 *)(*(int *)(this + 0x160) + 0x3e0) = 0;
          iVar5 = *(int *)(this + 0x160);
          local_8 = *(int *)piVar3[1];
        }
        pbVar6 = (byte *)((int)DAT_10223188[0x26] + local_8);
        pbVar7 = (byte *)(iVar5 + 0x214c);
        do {
          bVar1 = *pbVar7;
          bVar9 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_10036430:
            uVar4 = -(uint)bVar9 | 1;
            goto LAB_10036435;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar9 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_10036430;
          pbVar7 = pbVar7 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_10036435:
        if (uVar4 == 0) {
          *(byte *)(iVar5 + 0x214c) = 0;
          (*DAT_10223000)(1,DAT_10226634,0,
                          *(undefined4 *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x20c));
          (*DAT_10223008)(3);
          (*DAT_10223008)(0);
          (*DAT_10223004)();
          *(undefined4 *)(*(int *)(this + 0x160) + 0x3e4) = 0;
          iVar5 = *(int *)(this + 0x160);
        }
        *(uint *)(*(int *)(iVar5 + 4) + 0x16c) =
             *(uint *)(*(int *)(iVar5 + 4) + 0x16c) & ~(1 << (piVar3[0x5a] & 0x1fU));
        FUN_100e2240((int)DAT_10223188[0x26] + piVar3[0x44],1);
        (**(code **)(**(int **)(this + 0x160) + 0x90))(piVar3);
        *(uint *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x16c) =
             *(uint *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x16c) &
             ~(1 << (*(uint *)(this + 0x168) & 0x1f));
        FUN_100e2240((int)DAT_10223188[0x26] + *(int *)(this + 0x110),1);
        (**(code **)(**(int **)(this + 0x160) + 0x90))(this);
      }
      (**(code **)(*piVar3 + 0x160))();
      (**(code **)(*(int *)this + 0x160))();
    }
    else if (*(char *)((int)piVar3 + 0x1fa) == '\0') {
      *(code **)(this + 0x78) = FlareRedeploy;
      (**(code **)(*(int *)this + 8))(0x3f000000);
      fVar2 = *DAT_10223188 + 1.5;
      *(float *)(*(int *)(this + 0x160) + 0x308) = fVar2;
      *(float *)(this + 0x1d8) = fVar2;
      *(float *)(this + 0x1d0) = fVar2;
      return;
    }
  }
  return;
}

