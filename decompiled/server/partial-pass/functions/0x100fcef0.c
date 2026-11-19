// rea decompile_all
// name: FUN_100fcef0
// address: 0x100fcef0
// body: available
// range: 0x100fcef0-0x100fd46c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fcef0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  bool bVar7;
  
  pcVar6 = "channel";
  pbVar2 = *(byte **)(param_1 + 4);
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100fcf25:
      uVar4 = -(uint)bVar7 | 1;
      goto LAB_100fcf2a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100fcf25;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_100fcf2a:
  if (uVar4 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0x150) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "preset";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100fcf74:
      uVar4 = -(uint)bVar7 | 1;
      goto LAB_100fcf79;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100fcf74;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_100fcf79:
  if (uVar4 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xe0) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar6 = "pitch";
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100fcfc3:
      uVar4 = -(uint)bVar7 | 1;
      goto LAB_100fcfc8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100fcfc3;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_100fcfc8:
  if (uVar4 == 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xe4) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    if (0xff < *(int *)(in_ECX + 0xe4)) {
      *(undefined4 *)(in_ECX + 0xe4) = 0xff;
      return;
    }
    if (-1 < *(int *)(in_ECX + 0xe4)) {
      return;
    }
    *(undefined4 *)(in_ECX + 0xe4) = 0;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"pitchstart");
  if (iVar5 != 0) {
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xe8) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    if (0xff < *(int *)(in_ECX + 0xe8)) {
      *(undefined4 *)(in_ECX + 0xe8) = 0xff;
      return;
    }
    if (-1 < *(int *)(in_ECX + 0xe8)) {
      return;
    }
    *(undefined4 *)(in_ECX + 0xe8) = 0;
    return;
  }
  iVar5 = FUN_1000aba0(pbVar2,"spinup");
  if (iVar5 == 0) {
    iVar5 = FUN_1000aba0(pbVar2,"spindown");
    if (iVar5 == 0) {
      iVar5 = FUN_1000aba0(pbVar2,"volstart");
      if (iVar5 != 0) {
        iVar5 = _atoi(*(char **)(param_1 + 8));
        if (iVar5 < 0xb) {
          if (iVar5 < 0) {
            iVar5 = 0;
          }
        }
        else {
          iVar5 = 10;
        }
        *(int *)(in_ECX + 0xf8) = iVar5 * 10;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      iVar5 = FUN_1000aba0(pbVar2,"fadein");
      if (iVar5 == 0) {
        iVar5 = FUN_1000aba0(pbVar2,"fadeout");
        if (iVar5 == 0) {
          iVar5 = FUN_1000aba0(pbVar2,"lfotype");
          if (iVar5 == 0) {
            iVar5 = FUN_1000aba0(pbVar2,"lforate");
            if (iVar5 != 0) {
              iVar5 = _atoi(*(char **)(param_1 + 8));
              if (iVar5 < 0x3e9) {
                if (iVar5 < 0) {
                  iVar5 = 0;
                }
              }
              else {
                iVar5 = 1000;
              }
              *(int *)(in_ECX + 0x108) = iVar5 << 8;
              *(undefined4 *)(param_1 + 0xc) = 1;
              return;
            }
            iVar5 = FUN_1000aba0(pbVar2,"lfomodpitch");
            if (iVar5 == 0) {
              iVar5 = FUN_1000aba0(pbVar2,"lfomodvol");
              if (iVar5 == 0) {
                iVar5 = FUN_1000aba0(pbVar2,"cspinup");
                if (iVar5 == 0) {
                  FUN_1000dba0(param_1);
                  return;
                }
                iVar5 = _atoi(*(char **)(param_1 + 8));
                *(int *)(in_ECX + 0x114) = iVar5;
                if (100 < iVar5) {
                  *(undefined4 *)(in_ECX + 0x114) = 100;
                  *(undefined4 *)(param_1 + 0xc) = 1;
                  return;
                }
                if (iVar5 < 0) {
                  *(undefined4 *)(in_ECX + 0x114) = 0;
                }
              }
              else {
                iVar5 = _atoi(*(char **)(param_1 + 8));
                *(int *)(in_ECX + 0x110) = iVar5;
                if (100 < iVar5) {
                  *(undefined4 *)(in_ECX + 0x110) = 100;
                  *(undefined4 *)(param_1 + 0xc) = 1;
                  return;
                }
                if (iVar5 < 0) {
                  *(undefined4 *)(in_ECX + 0x110) = 0;
                  *(undefined4 *)(param_1 + 0xc) = 1;
                  return;
                }
              }
            }
            else {
              iVar5 = _atoi(*(char **)(param_1 + 8));
              *(int *)(in_ECX + 0x10c) = iVar5;
              if (100 < iVar5) {
                *(undefined4 *)(in_ECX + 0x10c) = 100;
                *(undefined4 *)(param_1 + 0xc) = 1;
                return;
              }
              if (iVar5 < 0) {
                *(undefined4 *)(in_ECX + 0x10c) = 0;
                *(undefined4 *)(param_1 + 0xc) = 1;
                return;
              }
            }
          }
          else {
            iVar5 = _atoi(*(char **)(param_1 + 8));
            *(int *)(in_ECX + 0x104) = iVar5;
            if (4 < iVar5) {
              *(undefined4 *)(in_ECX + 0x104) = 2;
              *(undefined4 *)(param_1 + 0xc) = 1;
              return;
            }
          }
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar5 = _atoi(*(char **)(param_1 + 8));
        *(int *)(in_ECX + 0x100) = iVar5;
        if (iVar5 < 0x65) {
          if (iVar5 < 0) {
            *(undefined4 *)(in_ECX + 0x100) = 0;
            *(undefined4 *)(in_ECX + 0x134) = 0;
            *(undefined4 *)(param_1 + 0xc) = 1;
            return;
          }
          if (iVar5 < 1) goto LAB_100fd2a5;
        }
        else {
          iVar5 = 100;
        }
        iVar5 = (0x65 - iVar5) * 0x40;
        *(int *)(in_ECX + 0x100) = iVar5;
LAB_100fd2a5:
        *(int *)(in_ECX + 0x134) = iVar5;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      iVar5 = _atoi(*(char **)(param_1 + 8));
      *(int *)(in_ECX + 0xfc) = iVar5;
      if (iVar5 < 0x65) {
        if (iVar5 < 0) {
          *(undefined4 *)(in_ECX + 0xfc) = 0;
          *(undefined4 *)(in_ECX + 0x130) = 0;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        if (iVar5 < 1) goto LAB_100fd228;
      }
      else {
        iVar5 = 100;
      }
      iVar5 = (0x65 - iVar5) * 0x40;
      *(int *)(in_ECX + 0xfc) = iVar5;
LAB_100fd228:
      *(int *)(in_ECX + 0x130) = iVar5;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar5 = _atoi(*(char **)(param_1 + 8));
    *(int *)(in_ECX + 0xf0) = iVar5;
    if (iVar5 < 0x65) {
      if (iVar5 < 0) {
        *(undefined4 *)(in_ECX + 0xf0) = 0;
        *(undefined4 *)(in_ECX + 0x124) = 0;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      if (iVar5 < 1) goto LAB_100fd162;
    }
    else {
      iVar5 = 100;
    }
    iVar5 = (0x65 - iVar5) * 0x40;
    *(int *)(in_ECX + 0xf0) = iVar5;
LAB_100fd162:
    *(int *)(in_ECX + 0x124) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar5 = _atoi(*(char **)(param_1 + 8));
  *(int *)(in_ECX + 0xec) = iVar5;
  if (iVar5 < 0x65) {
    if (iVar5 < 0) {
      *(undefined4 *)(in_ECX + 0xec) = 0;
      *(undefined4 *)(in_ECX + 0x120) = 0;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    if (iVar5 < 1) goto LAB_100fd0e5;
  }
  else {
    iVar5 = 100;
  }
  iVar5 = (0x65 - iVar5) * 0x40;
  *(int *)(in_ECX + 0xec) = iVar5;
LAB_100fd0e5:
  *(int *)(in_ECX + 0x120) = iVar5;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

