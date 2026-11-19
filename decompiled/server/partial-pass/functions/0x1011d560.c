// rea decompile_all
// name: FUN_1011d560
// address: 0x1011d560
// body: available
// range: 0x1011d560-0x1011dd66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1011d560(void)

{
  int *piVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *in_ECX;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  float10 fVar11;
  int aiStack_2c [3];
  int *piStack_20;
  int iStack_1c;
  
  if ((in_ECX[0x6d] == 0) && (0 < in_ECX[0x79])) {
    in_ECX[0x6d] = 1;
  }
  iStack_1c = 0x1011d58f;
  (**(code **)(*in_ECX + 0x1d4))();
  iStack_1c = in_ECX[1];
  pcVar9 = "weapon_dualweapon";
  pbVar7 = (byte *)(*(int *)(-(uint)(*(int *)(iStack_1c + 0x20c) != 0) &
                            *(int *)(iStack_1c + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
  do {
    bVar3 = *pbVar7;
    bVar10 = bVar3 < (byte)*pcVar9;
    if (bVar3 != *pcVar9) {
LAB_1011d5d6:
      uVar4 = -(uint)bVar10 | 1;
      goto LAB_1011d5db;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar7[1];
    bVar10 = bVar3 < (byte)pcVar9[1];
    if (bVar3 != pcVar9[1]) goto LAB_1011d5d6;
    pbVar7 = pbVar7 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar3 != 0);
  uVar4 = 0;
LAB_1011d5db:
  if (uVar4 == 0) {
    piStack_20 = (int *)0x1011d5e9;
    iVar5 = FUN_1002f180();
    if ((((*(char *)((int)in_ECX + 0x1a5) != '\0') && (iVar5 != 0)) &&
        ((iVar5 = *(int *)(iVar5 + 0x200), iVar5 == 0xe || ((iVar5 == 0x17 || (iVar5 == 0x1b))))))
       && (((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x184) & 0x800) == 0 || (in_ECX[0x4a] != 0)))) {
      *(undefined1 *)((int)in_ECX + 0x1a5) = 0;
      if (in_ECX[0x6a] != 0) {
        iStack_1c = 0x1011d65b;
        iVar5 = (**(code **)(*DAT_10222ee4 + 0x20))();
        if (iVar5 == 0) {
          piStack_20 = (int *)in_ECX[0x58];
          iStack_1c = 1;
          (**(code **)(*piStack_20 + 0x104))(aiStack_2c);
          iVar5 = (int)DAT_10223188[0x26] + in_ECX[0x6a];
LAB_1011d77c:
          FUN_10116a40(iVar5,2,1);
        }
        else {
          iStack_1c = (int)DAT_10223188[0x26] + in_ECX[0x6a];
          piStack_20 = (int *)0x1;
          aiStack_2c[2] = *(int *)(*(int *)(in_ECX[0x58] + 4) + 0x20c);
          aiStack_2c[1] = 0x1011d687;
          FUN_1001e990();
        }
      }
LAB_1011d789:
      if (in_ECX[0x6b] != 0) {
        iStack_1c = 0x1011d7a1;
        iVar5 = (**(code **)(*DAT_10222ee4 + 0x20))();
        if (iVar5 == 0) {
          piStack_20 = (int *)in_ECX[0x58];
          iStack_1c = 1;
          (**(code **)(*piStack_20 + 0x104))(aiStack_2c);
          FUN_10116a40((int)DAT_10223188[0x26] + in_ECX[0x6b],0,1);
        }
        else {
          iStack_1c = 100;
          piStack_20 = (int *)0x0;
          aiStack_2c[0] = (int)DAT_10223188[0x26] + in_ECX[0x6b];
          aiStack_2c[2] = 0x3f4ccccd;
          aiStack_2c[1] = 0x3f800000;
          FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),1);
        }
      }
    }
  }
  else if (*(char *)((int)in_ECX + 0x1a5) != '\0') {
    iStack_1c = 0x1011d6d5;
    iVar5 = (**(code **)(*(int *)in_ECX[0x58] + 0xbc))();
    if ((((iVar5 == 0) || (in_ECX[0x79] < 1)) || (in_ECX[0x7c] != 0)) ||
       (((*(byte *)(*(int *)(in_ECX[0x58] + 4) + 0x184) & 1) == 0 || (in_ECX[0x4a] != 0)))) {
      *(undefined1 *)((int)in_ECX + 0x1a5) = 0;
      if (in_ECX[0x6a] != 0) {
        iStack_1c = 0x1011d725;
        iVar5 = (**(code **)(*DAT_10222ee4 + 0x20))();
        if (iVar5 == 0) {
          piStack_20 = (int *)in_ECX[0x58];
          iStack_1c = 1;
          (**(code **)(*piStack_20 + 0x104))(aiStack_2c);
          iVar5 = (int)DAT_10223188[0x26] + in_ECX[0x6b];
          goto LAB_1011d77c;
        }
        iStack_1c = (int)DAT_10223188[0x26] + in_ECX[0x6a];
        piStack_20 = (int *)0x1;
        aiStack_2c[2] = *(int *)(*(int *)(in_ECX[0x58] + 4) + 0x20c);
        aiStack_2c[1] = 0x1011d751;
        FUN_1001e990();
      }
      goto LAB_1011d789;
    }
  }
  if ((float)in_ECX[0x55] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x55]) {
    iStack_1c = 0x1011d839;
    fVar11 = (float10)(**(code **)(*in_ECX + 0x1bc))();
    in_ECX[0x55] = (int)(float)(fVar11 + (float10)*DAT_10223188);
    if (0 < in_ECX[0x54]) {
      in_ECX[0x54] = in_ECX[0x54] + -1;
    }
  }
  iVar5 = in_ECX[0x53];
  if (iVar5 < 1) {
    iStack_1c = 0x1011d86b;
    (**(code **)(*in_ECX + 0x1b8))();
    iVar5 = in_ECX[0x53];
  }
  iVar8 = in_ECX[0x54];
  if (iVar8 < 0) {
    in_ECX[0x54] = 0;
    iVar8 = 0;
  }
  if (iVar5 < iVar8) {
    in_ECX[0x54] = iVar5;
  }
  iVar5 = in_ECX[0x58];
  if (in_ECX[0x48] != *(int *)(iVar5 + 0x2540 + in_ECX[0x77] * 4)) {
    iStack_1c = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c);
    piStack_20 = (int *)0x0;
    aiStack_2c[2] = DAT_102265b8;
    aiStack_2c[1] = 1;
    aiStack_2c[0] = 0x1011d8c5;
    (*DAT_10223000)();
    aiStack_2c[0] = in_ECX[0x5a];
    (*DAT_10223008)();
    (*DAT_10223008)(*(undefined4 *)(&DAT_102318a4 + in_ECX[0x5a] * 0x2c));
    (*DAT_10223010)(*(undefined4 *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4));
    iStack_1c = 0x1011d906;
    (*DAT_10223004)();
    iVar5 = in_ECX[0x58];
    in_ECX[0x48] = *(int *)(iVar5 + 0x2540 + in_ECX[0x77] * 4);
  }
  if (in_ECX[0x7c] != 0) {
    fVar2 = *(float *)(iVar5 + 0x308);
    iStack_1c = 0x1011d93e;
    fVar11 = (float10)FUN_1011ab20();
    if (fVar2 <= (float)fVar11) {
      iVar5 = in_ECX[0x5a];
      if ((*(byte *)(&DAT_102318ac + iVar5 * 0xb) & 0x20) == 0) {
        if (iVar5 == 0x17) {
          in_ECX[0x79] = *(int *)(&DAT_102318a4 + iVar5 * 0x2c);
        }
        else {
          iVar8 = *(int *)(&DAT_102318a4 + iVar5 * 0x2c) - in_ECX[0x79];
          iVar5 = *(int *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4);
          if (iVar5 <= iVar8) {
            iVar8 = iVar5;
          }
          in_ECX[0x79] = iVar8 + in_ECX[0x79];
          piVar1 = (int *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4);
          *piVar1 = *piVar1 - iVar8;
          iStack_1c = 0x1011d9ac;
          FUN_100f5eb0();
        }
        in_ECX[0x7c] = 0;
      }
    }
  }
  if (((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x184) & 0x800) == 0) ||
     (0.0 < *(float *)(*(int *)(in_ECX[0x58] + 4) + 0x260))) {
LAB_1011da9f:
    iVar5 = in_ECX[0x58];
    if (((*(byte *)(*(int *)(iVar5 + 4) + 0x184) & 0x40) != 0) &&
       (*(float *)(*(int *)(iVar5 + 4) + 0x260) <= 0.0)) {
      iStack_1c = 0x1011dac4;
      iStack_1c = (**(code **)(*in_ECX + 0x1d0))();
      piStack_20 = (int *)*DAT_10223188;
      aiStack_2c[2] = *(int *)(iVar5 + 0x308);
      aiStack_2c[1] = 0x1011dae9;
      iVar8 = FUN_1011bfc0();
      if (iVar8 != 0) {
        iStack_1c = 0x1011daf7;
        iVar5 = FUN_100e4ed0();
        if (iVar5 == 0) {
          iStack_1c = 0x1011db0a;
          FUN_100f5eb0();
          iStack_1c = 0x1011db14;
          (**(code **)(*in_ECX + 0x1ac))();
        }
        goto LAB_1011da74;
      }
    }
    if (((*(byte *)(*(int *)(iVar5 + 4) + 0x184) & 1) != 0) &&
       (*(float *)(*(int *)(iVar5 + 4) + 0x260) <= 0.0)) {
      iStack_1c = 0x1011db43;
      iStack_1c = (**(code **)(*in_ECX + 0x1d0))();
      piStack_20 = (int *)*DAT_10223188;
      aiStack_2c[2] = in_ECX[0x73];
      aiStack_2c[1] = 0x1011db68;
      iVar5 = FUN_1011bfc0();
      if (iVar5 != 0) {
        iStack_1c = 0x1011db7a;
        iVar5 = FUN_100e4ed0();
        if (iVar5 != 0) goto LAB_1011da74;
        if ((in_ECX[0x79] == 0) && ((&DAT_10231890)[in_ECX[0x5a] * 0xb] != 0)) {
LAB_1011dbc7:
          in_ECX[0x6e] = 1;
        }
        else if (*(int *)(&DAT_102318a4 + in_ECX[0x5a] * 0x2c) == -1) {
          iStack_1c = 0x1011dbb4;
          iVar5 = (**(code **)(*in_ECX + 0x168))();
          if (*(int *)(iVar5 * 4 + 0x2540 + in_ECX[0x58]) == 0) goto LAB_1011dbc7;
        }
        iStack_1c = 0x1011dbdc;
        FUN_100f5eb0();
        iStack_1c = 0x1011dbe6;
        (**(code **)(*in_ECX + 0x1a4))();
        goto LAB_1011da74;
      }
    }
    uVar4 = *(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x184);
    if ((uVar4 & 0x2000) != 0) {
      if (*(int *)(&DAT_102318a4 + in_ECX[0x5a] * 0x2c) == -1) {
LAB_1011dc79:
        if (in_ECX[0x7c] == 0) {
          pcVar9 = "weapon_dualweapon";
          pbVar7 = (byte *)(*(int *)(-(uint)(*(int *)(in_ECX[1] + 0x20c) != 0) &
                                    *(int *)(in_ECX[1] + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
          do {
            bVar3 = *pbVar7;
            bVar10 = bVar3 < (byte)*pcVar9;
            if (bVar3 != *pcVar9) {
LAB_1011dcd0:
              uVar6 = -(uint)bVar10 | 1;
              goto LAB_1011dcd5;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar7[1];
            bVar10 = bVar3 < (byte)pcVar9[1];
            if (bVar3 != pcVar9[1]) goto LAB_1011dcd0;
            pbVar7 = pbVar7 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar3 != 0);
          uVar6 = 0;
LAB_1011dcd5:
          if (uVar6 == 0) goto LAB_1011dcd9;
        }
      }
      else if (in_ECX[0x7c] == 0) {
        pcVar9 = "weapon_dualweapon";
        pbVar7 = (byte *)(*(int *)(-(uint)(*(int *)(in_ECX[1] + 0x20c) != 0) &
                                  *(int *)(in_ECX[1] + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
        do {
          bVar3 = *pbVar7;
          bVar10 = bVar3 < (byte)*pcVar9;
          if (bVar3 != *pcVar9) {
LAB_1011dc70:
            uVar6 = -(uint)bVar10 | 1;
            goto LAB_1011dc75;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar7[1];
          bVar10 = bVar3 < (byte)pcVar9[1];
          if (bVar3 != pcVar9[1]) goto LAB_1011dc70;
          pbVar7 = pbVar7 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar3 != 0);
        uVar6 = 0;
LAB_1011dc75:
        if (uVar6 == 0) goto LAB_1011dc79;
LAB_1011dcd9:
        iStack_1c = 0x1011dce0;
        iVar5 = FUN_100e4ed0();
        if (iVar5 == 0) {
          iStack_1c = 0x1011dcf2;
          (**(code **)(*in_ECX + 0x1c0))();
        }
        goto LAB_1011da74;
      }
    }
    if ((uVar4 & 0x841) == 0) {
      in_ECX[0x6e] = 0;
      if ((in_ECX[0x79] == 0) && ((*(byte *)(&DAT_102318ac + in_ECX[0x5a] * 0xb) & 2) == 0)) {
        iStack_1c = 0x1011dd38;
        iVar5 = (**(code **)(*in_ECX + 0x1d0))();
        if (iVar5 == 0) {
          fVar2 = *DAT_10223188;
        }
        else {
          fVar2 = 0.0;
        }
        if ((float)in_ECX[0x73] < fVar2) {
          return;
        }
      }
      goto LAB_1011da82;
    }
  }
  else {
    iStack_1c = 0x1011d9e9;
    iStack_1c = (**(code **)(*in_ECX + 0x1d0))();
    piStack_20 = (int *)*DAT_10223188;
    aiStack_2c[2] = in_ECX[0x74];
    aiStack_2c[1] = 0x1011da0e;
    iVar5 = FUN_1011bfc0();
    if (iVar5 == 0) goto LAB_1011da9f;
    iStack_1c = 0x1011da24;
    iVar5 = FUN_100e4ed0();
    if (iVar5 == 0) {
      if ((&DAT_10231898)[in_ECX[0x5a] * 0xb] != 0) {
        iStack_1c = 0x1011da42;
        iVar5 = (**(code **)(*in_ECX + 0x16c))();
        if (*(int *)(iVar5 * 4 + 0x2540 + in_ECX[0x58]) == 0) {
          in_ECX[0x6e] = 1;
        }
      }
      iStack_1c = 0x1011da6a;
      FUN_100f5eb0();
      iStack_1c = 0x1011da74;
      (**(code **)(*in_ECX + 0x1a8))();
    }
  }
LAB_1011da74:
  iStack_1c = 0x1011da7e;
  iVar5 = (**(code **)(*in_ECX + 0x1cc))();
  if (iVar5 == 0) {
    return;
  }
LAB_1011da82:
  if (in_ECX[0x5a] == 0x11) {
    iStack_1c = 0x1011da95;
    (**(code **)(*in_ECX + 0x1c4))();
  }
  return;
}

