// rea decompile_all
// name: FUN_100c9ae0
// address: 0x100c9ae0
// body: available
// range: 0x100c9ae0-0x100ca493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c9ae0(void)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  char cVar9;
  int *in_ECX;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  float fVar14;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int *local_94;
  char local_8d;
  uint local_8c;
  int aiStack_88 [32];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  fVar14 = *DAT_10223188;
  local_94 = in_ECX;
  if ((float)in_ECX[0x28] <= fVar14 && fVar14 != (float)in_ECX[0x28]) {
    iVar11 = 1;
    in_ECX[0x28] = (int)(fVar14 + 2.0);
    if (0 < (int)DAT_10223188[0x24]) {
      do {
        iVar3 = FUN_10119680();
        if (iVar3 != 0) {
          iVar4 = FUN_100e4c30();
          if (iVar4 == 0) {
            iVar4 = FUN_100e4d60();
            if (iVar4 == 0) {
              *(undefined4 *)(*(int *)(iVar3 + 4) + 0x26c) = 0;
            }
            else {
              *(undefined4 *)(*(int *)(iVar3 + 4) + 0x26c) = 0x40000000;
            }
          }
          else {
            *(undefined4 *)(*(int *)(iVar3 + 4) + 0x26c) = 0x3f800000;
          }
          (*DAT_10223000)(2,DAT_102266c8,0,0);
          uVar5 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
          (*DAT_10223008)(uVar5);
          (*DAT_10223008)((int)*(float *)(*(int *)(iVar3 + 4) + 0x26c));
          (*DAT_10223004)();
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 <= (int)DAT_10223188[0x24]);
    }
  }
  if ((char)in_ECX[0x2a] != '\0') {
    cVar9 = '\x01';
    local_8c = 1;
    local_8d = '\0';
    iVar11 = 1;
    if (0 < (int)DAT_10223188[0x24]) {
      do {
        iVar3 = FUN_10119680();
        if (iVar3 != 0) {
          if ((float)in_ECX[0x29] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x29]) {
            iVar4 = (*DAT_10223064)();
            cVar9 = *(char *)((int)in_ECX + iVar4 + 0xa9);
            (*DAT_10223000)(2,DAT_102266b0,0,0);
            uVar5 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
            (*DAT_10223008)(uVar5);
            (*DAT_10223008)(cVar9 != '\0');
            (*DAT_10223008)(0);
            (*DAT_10223004)();
            local_94[0x29] = (int)(*DAT_10223188 + 1.0);
            in_ECX = local_94;
          }
          iVar4 = *(int *)(iVar3 + 4);
          if ((*(float *)(iVar4 + 0x264) == 0.0) && (iVar11 < 0x21)) {
            uVar6 = *(uint *)(iVar3 + 0x2500);
            local_8d = '\x01';
            if ((uVar6 & 8) == 0) {
              uVar6 = uVar6 | 8;
              *(uint *)(iVar3 + 0x2500) = uVar6;
            }
            if ((uVar6 & 1) == 0) {
              *(uint *)(iVar3 + 0x2500) = uVar6 | 1;
            }
            if (-1 < (char)*(uint *)(iVar4 + 0x1a8)) {
              *(uint *)(iVar4 + 0x1a8) = *(uint *)(iVar4 + 0x1a8) | 0x80;
            }
            FUN_100deff0();
            local_a0 = 0;
            local_9c = 0;
            local_98 = 0;
            FUN_10119c00(iVar3,&local_a0,0,0x3f800000,0xff,5);
            local_8c = local_8c & 0xff;
            if (*(char *)((int)in_ECX + iVar11 + 0xa9) == '\0') {
              local_8c = 0;
            }
          }
        }
        cVar9 = (char)local_8c;
        iVar11 = iVar11 + 1;
      } while (iVar11 <= (int)DAT_10223188[0x24]);
    }
    if (((float)in_ECX[0x36] <= 0.0) || (*DAT_10223188 <= (float)in_ECX[0x36])) {
      if ((local_8d == '\0') || (cVar9 == '\0')) {
        if ((char)in_ECX[0x35] != '\0') {
          *(undefined1 *)(in_ECX + 0x35) = 0;
          in_ECX[0x34] = 3;
          in_ECX[0x33] = (int)*DAT_10223188;
        }
      }
      else {
        if ((char)in_ECX[0x35] == '\0') {
          in_ECX[0x34] = 3;
          *(undefined1 *)(in_ECX + 0x35) = 1;
          in_ECX[0x33] = (int)*DAT_10223188;
        }
        else if ((-1 < in_ECX[0x34]) &&
                ((float)in_ECX[0x33] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x33])) {
          uVar5 = FUN_1011a8a0(&DAT_101d6254,in_ECX[0x34],5,1);
          FUN_10119810(0,uVar5);
          in_ECX[0x34] = in_ECX[0x34] + -1;
          in_ECX[0x33] = (int)(*DAT_10223188 + 1.0);
          uVar5 = (*DAT_1022305c)(0,&DAT_10222f34,"common/wpn_hudoff.wav",0x3f800000,0,0,100);
          FUN_101182b0(uVar5);
          if ((char)in_ECX[0x35] == '\0') goto LAB_100ca14d;
        }
        if (in_ECX[0x34] < 0) {
          *(undefined1 *)(in_ECX + 0x2a) = 0;
          piVar7 = (int *)FUN_10118460(0,"cof_lobby_start");
          while (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 0xe8))(0,0,3,0x3f800000);
            piVar7 = (int *)FUN_10118460();
          }
          (*DAT_10223000)(2,DAT_102266b0,0,0);
          (*DAT_10223008)(0);
          (*DAT_10223008)(0);
          (*DAT_10223008)(1);
          (*DAT_10223004)();
          iVar11 = 1;
          if (0 < (int)DAT_10223188[0x24]) {
            do {
              iVar3 = FUN_10119680();
              if ((iVar3 != 0) && (*(float *)(*(int *)(iVar3 + 4) + 0x264) == 0.0)) {
                FUN_100deff0();
                local_a0 = 0;
                local_9c = 0;
                local_98 = 0;
                FUN_10119c00(iVar3,&local_a0,0x3f400000,0x3f800000,0xff,0);
                *(uint *)(iVar3 + 0x2500) = *(uint *)(iVar3 + 0x2500) & 0xfffffff6;
                puVar1 = (uint *)(*(int *)(iVar3 + 4) + 0x1a8);
                *puVar1 = *puVar1 & 0xffffff7f;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 <= (int)DAT_10223188[0x24]);
          }
        }
      }
    }
    else {
      *(undefined1 *)(in_ECX + 0x2a) = 0;
      (*DAT_10223000)(2,DAT_102266b0,0,0);
      (*DAT_10223008)(0);
      (*DAT_10223008)(0);
      (*DAT_10223008)(1);
      (*DAT_10223004)();
      iVar11 = 1;
      if (0 < (int)DAT_10223188[0x24]) {
        do {
          iVar3 = FUN_10119680();
          if ((iVar3 != 0) && (*(float *)(*(int *)(iVar3 + 4) + 0x264) == 0.0)) {
            FUN_100deff0();
            local_a0 = 0;
            local_9c = 0;
            local_98 = 0;
            FUN_10119c00(iVar3,&local_a0,0x3f400000,0x3f800000,0xff,0);
            *(uint *)(iVar3 + 0x2500) = *(uint *)(iVar3 + 0x2500) & 0xfffffff6;
            puVar1 = (uint *)(*(int *)(iVar3 + 4) + 0x1a8);
            *puVar1 = *puVar1 & 0xffffff7f;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 <= (int)DAT_10223188[0x24]);
      }
      piVar7 = (int *)FUN_10118460(0,"cof_lobby_start");
      while (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xe8))(0,0,3,0x3f800000);
        piVar7 = (int *)FUN_10118460();
      }
    }
  }
LAB_100ca14d:
  FUN_100b0210();
  FUN_100014e0((double)DAT_10223188[1]);
  if (((DAT_102231a2 != '\0') && (_DAT_102231a4 < *DAT_10223188)) && (DAT_10226477 == '\0')) {
    DAT_102231a2 = '\0';
    _DAT_102231a4 = 0.0;
    if (DAT_10222f20 == 0) {
      iVar11 = FUN_10118460(0,"trigger_booksimon");
      if (((iVar11 == 0) || (iVar11 = (*DAT_102230b0)(0,1), iVar11 != 1)) || (DAT_10222f14 != 0)) {
        piVar7 = (int *)(*DAT_10223068)();
        iVar11 = 0;
        if (1 < (int)DAT_10223188[0x25]) {
          local_8c = (int)DAT_10223188[0x25] - 1;
          do {
            if ((*piVar7 == 0) && (piVar7[0x1f] != 0)) {
              pcVar10 = "info_simon_spawnpoint";
              pbVar8 = (byte *)(**(int **)(piVar7[0x1f] + 4) + (int)DAT_10223188[0x26]);
              do {
                bVar2 = *pbVar8;
                bVar12 = bVar2 < (byte)*pcVar10;
                if (bVar2 != *pcVar10) {
LAB_100ca330:
                  uVar6 = -(uint)bVar12 | 1;
                  goto LAB_100ca335;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar8[1];
                bVar12 = bVar2 < (byte)pcVar10[1];
                if (bVar2 != pcVar10[1]) goto LAB_100ca330;
                pbVar8 = pbVar8 + 2;
                pcVar10 = pcVar10 + 2;
              } while (bVar2 != 0);
              uVar6 = 0;
LAB_100ca335:
              if ((uVar6 == 0) && (iVar11 = iVar11 + 1, iVar11 < 0x1f)) {
                aiStack_88[iVar11] = piVar7[0x1f];
              }
            }
            piVar7 = piVar7 + 0xcb;
            local_8c = local_8c - 1;
          } while (local_8c != 0);
          if (0 < iVar11) {
            iVar11 = (*DAT_102230b0)(1,iVar11);
            iVar11 = aiStack_88[iVar11];
            if (iVar11 != 0) {
              if (DAT_10222f14 != 0) {
                (*DAT_10223000)(2,DAT_102266a8,0,0);
                (*DAT_10223008)(0);
                (*DAT_10223008)(0);
                (*DAT_10223008)(1);
                (*DAT_10223004)();
              }
              iVar11 = *(int *)(iVar11 + 4);
              FUN_10017950("monster_booksimon",iVar11 + 8,iVar11 + 0x50,0);
            }
          }
        }
      }
      else {
        piVar7 = (int *)(*DAT_10223068)();
        iVar11 = 0;
        if (1 < (int)DAT_10223188[0x25]) {
          local_8c = (int)DAT_10223188[0x25] - 1;
          do {
            if ((*piVar7 == 0) && (piVar7[0x1f] != 0)) {
              pcVar10 = "trigger_booksimon";
              pbVar8 = (byte *)(**(int **)(piVar7[0x1f] + 4) + (int)DAT_10223188[0x26]);
              do {
                bVar2 = *pbVar8;
                bVar12 = bVar2 < (byte)*pcVar10;
                if (bVar2 != *pcVar10) {
LAB_100ca261:
                  uVar6 = -(uint)bVar12 | 1;
                  goto LAB_100ca266;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar8[1];
                bVar12 = bVar2 < (byte)pcVar10[1];
                if (bVar2 != pcVar10[1]) goto LAB_100ca261;
                pbVar8 = pbVar8 + 2;
                pcVar10 = pcVar10 + 2;
              } while (bVar2 != 0);
              uVar6 = 0;
LAB_100ca266:
              if ((uVar6 == 0) && (iVar11 = iVar11 + 1, iVar11 < 0x1f)) {
                aiStack_88[iVar11] = piVar7[0x1f];
              }
            }
            piVar7 = piVar7 + 0xcb;
            local_8c = local_8c - 1;
          } while (local_8c != 0);
          if (0 < iVar11) {
            iVar11 = (*DAT_102230b0)(1,iVar11);
            *(undefined4 *)(*(int *)(aiStack_88[iVar11] + 4) + 0x248) = 1;
          }
        }
      }
    }
  }
  if (DAT_10222f04 != 0) {
    fVar13 = (float10)(*DAT_1022302c)();
    local_94 = (int *)(float)fVar13;
    if ((int)fVar13 < 1) {
      (*DAT_10223038)("mp_chattime",&DAT_101be9f4);
    }
    else if (0x78 < (int)fVar13) {
      uVar5 = FUN_1011ab30();
      (*DAT_10223038)("mp_chattime",uVar5);
    }
    fVar14 = DAT_102148b0 + DAT_10223198;
    in_ECX[0x37] = (int)fVar14;
    if ((fVar14 < *DAT_10223188) && ((in_ECX[0x38] != 0 || (DAT_10223198 + 120.0 < *DAT_10223188))))
    {
      (**(code **)(*in_ECX + 0xf8))();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

