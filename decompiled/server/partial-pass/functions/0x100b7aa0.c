// rea decompile_all
// name: FUN_100b7aa0
// address: 0x100b7aa0
// body: available
// range: 0x100b7aa0-0x100b7d1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b7aa0(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int in_ECX;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  int local_8;
  
  iVar8 = 0;
  if (*(int *)(*(int *)(in_ECX + 4) + 0x1cc) != 0) {
    while (((iVar8 = FUN_10118500(iVar8,(int)DAT_10223188[0x26] +
                                        *(int *)(*(int *)(in_ECX + 4) + 0x1cc),param_1), iVar8 != 0
            && (iVar2 = *(int *)(*(int *)(iVar8 + 4) + 0x20c), iVar2 != 0)) &&
           (iVar2 = (*DAT_10223060)(iVar2), iVar2 != 0))) {
      local_8 = *(int *)(in_ECX + 0xdc);
      if (local_8 == 0) {
        local_8 = FUN_100b6a00(*(undefined4 *)(in_ECX + 100));
      }
      pcVar6 = "light";
      pbVar7 = (byte *)(**(int **)(iVar8 + 4) + (int)DAT_10223188[0x26]);
      pbVar5 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_100b7b66:
          uVar3 = -(uint)bVar9 | 1;
          goto LAB_100b7b6b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_100b7b66;
        pbVar5 = pbVar5 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_100b7b6b:
      if (uVar3 == 0) {
LAB_100b7c15:
        if (*(int *)(in_ECX + 0xe0) == 0) {
          FUN_100b7620(local_8);
          if (*(int *)(in_ECX + 0xe4) != -1) {
            piVar4 = (int *)FUN_100b6820(0);
            piVar4[0x37] = iVar8;
            piVar4[0x1e] = (int)CLightFader::WaitThink;
            (**(code **)(*piVar4 + 8))((float)*(int *)(in_ECX + 0xe4));
          }
        }
        else {
          piVar4 = (int *)FUN_100b6820(0);
          piVar4[0x37] = iVar8;
          *(undefined1 *)(piVar4 + 0x38) =
               *(undefined1 *)((int)DAT_10223188[0x26] + *(int *)(iVar8 + 0xfc));
          *(undefined1 *)((int)piVar4 + 0xe1) = *(undefined1 *)(local_8 + (int)DAT_10223188[0x26]);
          piVar4[0x3a] = local_8;
          piVar4[0x39] = (int)((float)*(int *)(in_ECX + 0xe0) + *DAT_10223188);
          piVar4[0x3b] = (int)(1.0 / (float)*(int *)(in_ECX + 0xe0));
          piVar4[0x3c] = *(int *)(in_ECX + 0xe4);
          piVar4[0x1e] = (int)CLightFader::FadeThink;
          (**(code **)(*piVar4 + 8))(0x3dcccccd);
        }
      }
      else {
        pcVar6 = "light_spot";
        pbVar5 = pbVar7;
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_100b7ba0:
            uVar3 = -(uint)bVar9 | 1;
            goto LAB_100b7ba5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < (byte)pcVar6[1];
          if (bVar1 != pcVar6[1]) goto LAB_100b7ba0;
          pbVar5 = pbVar5 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_100b7ba5:
        if (uVar3 == 0) goto LAB_100b7c15;
        pcVar6 = "light_environment";
        do {
          bVar1 = *pbVar7;
          bVar9 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_100b7bd0:
            uVar3 = -(uint)bVar9 | 1;
            goto LAB_100b7bd5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar9 = bVar1 < (byte)pcVar6[1];
          if (bVar1 != pcVar6[1]) goto LAB_100b7bd0;
          pbVar7 = pbVar7 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_100b7bd5:
        if (uVar3 == 0) goto LAB_100b7c15;
        iVar2 = *(int *)(iVar8 + 100);
        if (iVar2 < 0x3d) {
          if (0x1f < iVar2) {
            (*DAT_10222ff4)(iVar2,local_8 + (int)DAT_10223188[0x26]);
          }
        }
        else {
          (*DAT_1022303c)(1,"this light style is not allowed to be modified\n");
        }
      }
    }
  }
  return;
}

