// rea decompile_all
// name: FUN_100c0430
// address: 0x100c0430
// body: available
// range: 0x100c0430-0x100c0733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c0430(void)

{
  float fVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  float10 fVar9;
  int *local_8;
  
  if (*(char *)((int)in_ECX + 9) != '\0') {
    *(undefined4 *)(in_ECX[1] + 0x13c) = 0;
    *(undefined4 *)(in_ECX[1] + 0x13c) = 0;
    (**(code **)(*in_ECX + 8))(0x3dcccccd);
    return;
  }
  if ((char)in_ECX[0x7c] != '\0') {
    fVar1 = *DAT_10223188;
    if ((float)in_ECX[0x7d] <= fVar1) {
      if (*(int *)(in_ECX[1] + 0x14c) == 5) {
        *(undefined4 *)(in_ECX[1] + 0x14c) = 0;
        *(undefined4 *)(in_ECX[1] + 0x150) = 0x437f0000;
      }
      *(undefined1 *)(in_ECX + 0x7c) = 0;
    }
    else if ((float)in_ECX[0x7e] <= fVar1 && fVar1 != (float)in_ECX[0x7e]) {
      iVar5 = in_ECX[1];
      if (*(int *)(iVar5 + 0x14c) == 5) {
        *(undefined4 *)(iVar5 + 0x14c) = 0;
        *(undefined4 *)(in_ECX[1] + 0x150) = 0x437f0000;
        in_ECX[0x7e] = (int)*DAT_10223188;
      }
      else {
        *(undefined4 *)(iVar5 + 0x14c) = 5;
        *(undefined4 *)(in_ECX[1] + 0x150) = 0;
        in_ECX[0x7e] = (int)*DAT_10223188;
      }
    }
  }
  iVar5 = in_ECX[1];
  pcVar6 = "monster_bosschainsaw";
  pbVar7 = (byte *)(*(int *)(-(uint)(*(int *)(iVar5 + 0x20c) != 0) & *(int *)(iVar5 + 0x20c) + 0x80U
                            ) + (int)DAT_10223188[0x26]);
  pbVar3 = pbVar7;
  do {
    bVar2 = *pbVar3;
    bVar8 = bVar2 < (byte)*pcVar6;
    if (bVar2 != *pcVar6) {
LAB_100c0570:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_100c0575;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar8 = bVar2 < (byte)pcVar6[1];
    if (bVar2 != pcVar6[1]) goto LAB_100c0570;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar2 != 0);
  uVar4 = 0;
LAB_100c0575:
  if (((uVar4 != 0) || (in_ECX[0x85] != 0x19)) || (in_ECX[0x3e] != 0)) {
    pcVar6 = "monster_crazybitch";
    pbVar3 = pbVar7;
    do {
      bVar2 = *pbVar3;
      bVar8 = bVar2 < (byte)*pcVar6;
      if (bVar2 != *pcVar6) {
LAB_100c05b5:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_100c05ba;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar8 = bVar2 < (byte)pcVar6[1];
      if (bVar2 != pcVar6[1]) goto LAB_100c05b5;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar2 != 0);
    uVar4 = 0;
LAB_100c05ba:
    if (((uVar4 != 0) || (in_ECX[0x85] != 0x15)) ||
       ((in_ECX[0x3e] != 0 || (*(float *)(iVar5 + 0x164) == 0.0)))) {
      pcVar6 = "monster_crazybitch";
      do {
        bVar2 = *pbVar7;
        bVar8 = bVar2 < (byte)*pcVar6;
        if (bVar2 != *pcVar6) {
LAB_100c0605:
          uVar4 = -(uint)bVar8 | 1;
          goto LAB_100c060a;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar8 = bVar2 < (byte)pcVar6[1];
        if (bVar2 != pcVar6[1]) goto LAB_100c0605;
        pbVar7 = pbVar7 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar2 != 0);
      uVar4 = 0;
LAB_100c060a:
      if (((uVar4 != 0) || (in_ECX[0x85] != 0x16)) ||
         ((in_ECX[0x3e] != 0 || (*(float *)(iVar5 + 0x164) == 0.0)))) {
        (**(code **)(*in_ECX + 8))(0x3dcccccd);
        (**(code **)(*in_ECX + 0x128))();
        if (*(char *)((int)in_ECX + 9) == '\0') {
          fVar9 = (float10)FUN_1000eda0(0);
          local_8 = (int *)(float)fVar9;
        }
        else {
          *(undefined4 *)(in_ECX[1] + 0x138) = 0;
          *(undefined4 *)(in_ECX[1] + 0x13c) = 0;
          local_8 = in_ECX;
        }
        if ((((in_ECX[0x89] != 6) && (in_ECX[0x89] != 8)) && (in_ECX[0x85] == 1)) &&
           (in_ECX[0x3e] != 0)) {
          if (in_ECX[0x3f] == 0) {
            iVar5 = FUN_1000e980(1);
          }
          else {
            iVar5 = FUN_1000e950(1);
          }
          if (iVar5 != -1) {
            *(int *)(in_ECX[1] + 300) = iVar5;
            FUN_1000e9e0();
          }
        }
        FUN_1000e5f0(local_8);
        if (in_ECX[0xae] != 0) {
          (**(code **)(*in_ECX + 0x15c))(local_8);
        }
        return;
      }
    }
  }
  FUN_1000eda0(0);
  (**(code **)(*in_ECX + 8))(0x3dcccccd);
  FUN_100bda70();
  return;
}

