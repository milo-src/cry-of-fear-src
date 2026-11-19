// rea decompile_all
// name: FUN_100a7c50
// address: 0x100a7c50
// body: available
// range: 0x100a7c50-0x100a7efd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a7c50(void)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int in_ECX;
  char *pcVar8;
  int *piVar9;
  bool bVar10;
  undefined4 uVar11;
  int local_14;
  int local_8;
  
  local_14 = 1;
  if (0 < (int)DAT_10223188[0x24]) {
    do {
      iVar3 = FUN_10119680(local_14);
      if (iVar3 != 0) {
        piVar9 = (int *)(iVar3 + 0x2514);
        local_8 = 6;
LAB_100a7ca0:
        iVar7 = *piVar9;
        if (iVar7 != 0) {
          do {
            pcVar8 = "weapon_mobile";
            pbVar4 = (byte *)(**(int **)(iVar7 + 4) + (int)DAT_10223188[0x26]);
            do {
              bVar1 = *pbVar4;
              bVar10 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_100a7cf0:
                uVar5 = -(uint)bVar10 | 1;
                goto LAB_100a7cf5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar10 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_100a7cf0;
              pbVar4 = pbVar4 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            uVar5 = 0;
LAB_100a7cf5:
            if (uVar5 == 0) {
              piVar6 = (int *)FUN_10052e30(*(int **)(iVar7 + 4));
              if ((piVar6 == (int *)0x0) || (*(char *)((int)piVar6 + 0x1f9) != '\0'))
              goto LAB_100a7e5a;
              *(undefined4 *)(iVar3 + 0x5cc) = *(undefined4 *)(in_ECX + 0xdc);
              *(undefined1 *)(iVar3 + 0x1ec0) = 1;
              if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) == 0) {
                iVar7 = *(int *)(iVar3 + 4);
                if (*(char *)(iVar3 + 0x1f1c) != '\0') goto LAB_100a7d72;
                (*DAT_10223000)(1,DAT_10226578,0,*(undefined4 *)(iVar7 + 0x20c));
                (*DAT_10223008)(1);
                uVar11 = 0;
              }
              else {
                *(undefined1 *)(iVar3 + 0x1f1c) = 1;
                *(float *)(iVar3 + 0x1f20) = *DAT_10223188;
                iVar7 = *(int *)(iVar3 + 4);
LAB_100a7d72:
                (*DAT_10223000)(1,DAT_10226578,0,*(undefined4 *)(iVar7 + 0x20c));
                (*DAT_10223008)(1);
                uVar11 = 1;
              }
              (*DAT_10223008)(uVar11);
              (*DAT_10223004)();
              if (*(int *)(iVar3 + 0x252c) == 0) goto LAB_100a7e2a;
              pcVar8 = "weapon_mobile";
              pbVar4 = (byte *)(**(int **)(*(int *)(iVar3 + 0x252c) + 4) + (int)DAT_10223188[0x26]);
              goto LAB_100a7de2;
            }
            iVar7 = *(int *)(iVar7 + 0x164);
          } while (iVar7 != 0);
        }
        goto LAB_100a7ec8;
      }
LAB_100a7edd:
      local_14 = local_14 + 1;
    } while (local_14 <= (int)DAT_10223188[0x24]);
  }
  return;
  while( true ) {
    bVar1 = pbVar4[1];
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100a7e02;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
    if (bVar1 == 0) break;
LAB_100a7de2:
    bVar1 = *pbVar4;
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100a7e02:
      uVar5 = -(uint)bVar10 | 1;
      goto LAB_100a7e07;
    }
    if (bVar1 == 0) break;
  }
  uVar5 = 0;
LAB_100a7e07:
  if (uVar5 == 0) {
    if (*(int *)(iVar3 + 0x1e98) == 0) {
      uVar11 = 1;
    }
    else {
      uVar11 = 6;
    }
    (**(code **)(*piVar6 + 0x198))(uVar11,1,0);
  }
LAB_100a7e2a:
  fVar2 = *DAT_10223188 + 1.52;
  piVar6[0x76] = (int)fVar2;
  piVar6[0x74] = (int)fVar2;
  piVar6[0x73] = (int)fVar2;
LAB_100a7e5a:
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) == 0) {
    FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c),1,"weapons/mobile/mobile_sms.wav",
                 0x3f800000,0x3f4ccccd,0,100);
    FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c),0,"phone/phone_vibrate.wav",0x3f800000
                 ,0x3f4ccccd,0,100);
  }
LAB_100a7ec8:
  piVar9 = piVar9 + 1;
  local_8 = local_8 + -1;
  if (local_8 == 0) goto LAB_100a7edd;
  goto LAB_100a7ca0;
}

