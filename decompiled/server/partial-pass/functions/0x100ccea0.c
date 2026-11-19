// rea decompile_all
// name: FUN_100ccea0
// address: 0x100ccea0
// body: available
// range: 0x100ccea0-0x100cd524 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100ccea0(float *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_c;
  int *local_8;
  
  if ((*in_ECX == 0) || (in_ECX[1] == 0)) {
    (*DAT_1022303c)(2,"Graph not ready!\n");
    return -1;
  }
  (*DAT_102230a0)(&local_8);
  (*DAT_102230a4)(&local_8,param_1,0xc);
  uVar2 = (*DAT_102230ac)(local_8);
  uVar2 = uVar2 & 0x7f;
  if ((((float)in_ECX[uVar2 * 4 + 0x61f] == *param_1) &&
      ((float)in_ECX[uVar2 * 4 + 0x620] == param_1[1])) &&
     ((float)in_ECX[uVar2 * 4 + 0x621] == param_1[2])) {
    return (int)(short)in_ECX[uVar2 * 4 + 0x622];
  }
  piVar1 = in_ECX + 0x618;
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    iVar3 = 0;
    iVar7 = 0;
    if (0 < in_ECX[6]) {
      iVar3 = 0;
      do {
        iVar7 = iVar7 + 1;
        *(undefined4 *)(iVar3 + 0xc + in_ECX[9]) = 0;
        iVar3 = iVar3 + 0x10;
      } while (iVar7 < in_ECX[6]);
      iVar3 = in_ECX[0x618];
    }
    in_ECX[0x618] = iVar3 + 1;
  }
  in_ECX[0x60b] = -1;
  local_8 = in_ECX + 0x389;
  in_ECX[0x60a] = 0x497423f0;
  in_ECX[0x60c] = 0;
  in_ECX[0x60f] = 0xff;
  in_ECX[0x60d] = 0;
  in_ECX[0x610] = 0xff;
  in_ECX[0x60e] = 0;
  in_ECX[0x611] = 0xff;
  in_ECX[0x612] = 0;
  in_ECX[0x615] = 0xff;
  in_ECX[0x613] = 0;
  in_ECX[0x616] = 0xff;
  in_ECX[0x614] = 0;
  in_ECX[0x617] = 0xff;
  local_c = 0x7f;
  do {
    iVar3 = local_8[-0x300];
    if (iVar3 <= *local_8) {
      iVar7 = iVar3 << 4;
      do {
        iVar9 = in_ECX[3];
        iVar4 = *(int *)(iVar7 + in_ECX[9]) * 0x58;
        if ((*(uint *)(iVar4 + 0x1c + iVar9) & param_2) != 0) {
          uVar8 = (uint)*(byte *)(iVar4 + 0x19 + iVar9);
          if (in_ECX[0x616] < (int)uVar8) break;
          if (((in_ECX[0x613] <= (int)uVar8) &&
              (uVar8 = (uint)*(byte *)(iVar4 + 0x1a + iVar9), in_ECX[0x614] <= (int)uVar8)) &&
             ((int)uVar8 <= in_ECX[0x617])) {
            FUN_100cbd50(*param_1,param_1[1],param_1[2],*(int *)(iVar7 + in_ECX[9]));
          }
        }
        iVar3 = iVar3 + 1;
        iVar7 = iVar7 + 0x10;
      } while (iVar3 <= *local_8);
    }
    local_c = local_c + -1;
    local_8 = local_8 + -1;
  } while (in_ECX[0x60c] <= local_c);
  iVar3 = 0x80;
  if (0x80 < in_ECX[0x60d]) {
    iVar3 = in_ECX[0x60d];
  }
  if (iVar3 <= in_ECX[0x610]) {
    local_8 = in_ECX + iVar3 + 0x40a;
    do {
      iVar7 = local_8[-0x300];
      if (iVar7 <= *local_8) {
        iVar9 = iVar7 << 4;
        do {
          iVar4 = in_ECX[3];
          iVar6 = *(int *)(iVar9 + 4 + in_ECX[9]);
          iVar5 = iVar6 * 0x58;
          if ((*(uint *)(iVar5 + 0x1c + iVar4) & param_2) != 0) {
            uVar8 = (uint)*(byte *)(iVar5 + 0x1a + iVar4);
            if (in_ECX[0x617] < (int)uVar8) break;
            if (((in_ECX[0x614] <= (int)uVar8) &&
                (uVar8 = (uint)*(byte *)(iVar5 + 0x18 + iVar4), in_ECX[0x612] <= (int)uVar8)) &&
               ((int)uVar8 <= in_ECX[0x615])) {
              FUN_100cbd50(*param_1,param_1[1],param_1[2],iVar6);
            }
          }
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0x10;
        } while (iVar7 <= *local_8);
      }
      iVar3 = iVar3 + 1;
      local_8 = local_8 + 1;
    } while (iVar3 <= in_ECX[0x610]);
  }
  iVar3 = 0x7f;
  if (in_ECX[0x611] < 0x7f) {
    iVar3 = in_ECX[0x611];
  }
  if (in_ECX[0x60e] <= iVar3) {
    local_8 = in_ECX + iVar3 + 0x50a;
    do {
      iVar7 = local_8[-0x300];
      if (iVar7 <= *local_8) {
        iVar9 = iVar7 << 4;
        do {
          iVar4 = in_ECX[3];
          iVar6 = *(int *)(in_ECX[9] + 8 + iVar9);
          iVar5 = iVar6 * 0x58;
          if ((*(uint *)(iVar5 + 0x1c + iVar4) & param_2) != 0) {
            uVar8 = (uint)*(byte *)(iVar5 + 0x18 + iVar4);
            if (in_ECX[0x615] < (int)uVar8) break;
            if (((in_ECX[0x612] <= (int)uVar8) &&
                (uVar8 = (uint)*(byte *)(iVar5 + 0x19 + iVar4), in_ECX[0x613] <= (int)uVar8)) &&
               ((int)uVar8 <= in_ECX[0x616])) {
              FUN_100cbd50(*param_1,param_1[1],param_1[2],iVar6);
            }
          }
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0x10;
        } while (iVar7 <= *local_8);
      }
      iVar3 = iVar3 + -1;
      local_8 = local_8 + -1;
    } while (in_ECX[0x60e] <= iVar3);
  }
  iVar3 = 0x80;
  if (0x80 < in_ECX[0x60c]) {
    iVar3 = in_ECX[0x60c];
  }
  if (iVar3 <= in_ECX[0x60f]) {
    local_8 = in_ECX + iVar3 + 0x30a;
    do {
      iVar7 = local_8[-0x300];
      if (iVar7 <= *local_8) {
        iVar9 = iVar7 << 4;
        do {
          iVar4 = in_ECX[3];
          iVar6 = *(int *)(iVar9 + in_ECX[9]) * 0x58;
          if ((*(uint *)(iVar6 + 0x1c + iVar4) & param_2) != 0) {
            uVar8 = (uint)*(byte *)(iVar6 + 0x19 + iVar4);
            if (in_ECX[0x616] < (int)uVar8) break;
            if (((in_ECX[0x613] <= (int)uVar8) &&
                (uVar8 = (uint)*(byte *)(iVar6 + 0x1a + iVar4), in_ECX[0x614] <= (int)uVar8)) &&
               ((int)uVar8 <= in_ECX[0x617])) {
              FUN_100cbd50(*param_1,param_1[1],param_1[2],*(int *)(iVar9 + in_ECX[9]));
            }
          }
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0x10;
        } while (iVar7 <= *local_8);
      }
      iVar3 = iVar3 + 1;
      local_8 = local_8 + 1;
    } while (iVar3 <= in_ECX[0x60f]);
  }
  iVar3 = 0x7f;
  if (in_ECX[0x610] < 0x7f) {
    iVar3 = in_ECX[0x610];
  }
  if (in_ECX[0x60d] <= iVar3) {
    local_8 = in_ECX + iVar3 + 0x40a;
    do {
      iVar7 = local_8[-0x300];
      if (iVar7 <= *local_8) {
        iVar9 = iVar7 << 4;
        do {
          iVar4 = in_ECX[3];
          iVar6 = *(int *)(in_ECX[9] + 4 + iVar9);
          iVar5 = iVar6 * 0x58;
          if ((*(uint *)(iVar5 + 0x1c + iVar4) & param_2) != 0) {
            uVar8 = (uint)*(byte *)(iVar5 + 0x1a + iVar4);
            if (in_ECX[0x617] < (int)uVar8) break;
            if (((in_ECX[0x614] <= (int)uVar8) &&
                (uVar8 = (uint)*(byte *)(iVar5 + 0x18 + iVar4), in_ECX[0x612] <= (int)uVar8)) &&
               ((int)uVar8 <= in_ECX[0x615])) {
              FUN_100cbd50(*param_1,param_1[1],param_1[2],iVar6);
            }
          }
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0x10;
        } while (iVar7 <= *local_8);
      }
      iVar3 = iVar3 + -1;
      local_8 = local_8 + -1;
    } while (in_ECX[0x60d] <= iVar3);
  }
  iVar3 = 0x80;
  if (0x80 < in_ECX[0x60e]) {
    iVar3 = in_ECX[0x60e];
  }
  if (iVar3 <= in_ECX[0x611]) {
    local_8 = in_ECX + iVar3 + 0x50a;
    do {
      iVar7 = local_8[-0x300];
      if (iVar7 <= *local_8) {
        iVar9 = iVar7 << 4;
        do {
          iVar4 = in_ECX[3];
          iVar6 = *(int *)(in_ECX[9] + 8 + iVar9);
          iVar5 = iVar6 * 0x58;
          if ((*(uint *)(iVar5 + 0x1c + iVar4) & param_2) != 0) {
            uVar8 = (uint)*(byte *)(iVar5 + 0x18 + iVar4);
            if (in_ECX[0x615] < (int)uVar8) break;
            if (((in_ECX[0x612] <= (int)uVar8) &&
                (uVar8 = (uint)*(byte *)(iVar5 + 0x19 + iVar4), in_ECX[0x613] <= (int)uVar8)) &&
               ((int)uVar8 <= in_ECX[0x616])) {
              FUN_100cbd50(*param_1,param_1[1],param_1[2],iVar6);
            }
          }
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0x10;
        } while (iVar7 <= *local_8);
      }
      iVar3 = iVar3 + 1;
      local_8 = local_8 + 1;
    } while (iVar3 <= in_ECX[0x611]);
  }
  *(undefined8 *)(in_ECX + uVar2 * 4 + 0x61f) = *(undefined8 *)param_1;
  in_ECX[uVar2 * 4 + 0x621] = (int)param_1[2];
  *(short *)(in_ECX + uVar2 * 4 + 0x622) = (short)in_ECX[0x60b];
  return in_ECX[0x60b];
}

