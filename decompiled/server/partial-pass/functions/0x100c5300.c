// rea decompile_all
// name: FUN_100c5300
// address: 0x100c5300
// body: available
// range: 0x100c5300-0x100c6561 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c655d to 0x1013dd48 ___report_rangecheckfailure (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c5300(int param_1)

{
  char cVar1;
  byte bVar2;
  HANDLE hFindFile;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  LPCSTR ****pppppCVar9;
  BOOL BVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *puVar13;
  CHAR *pCVar14;
  byte *****pppppbVar15;
  byte *****pppppbVar16;
  char *pcVar17;
  char *pcVar18;
  uint *puVar19;
  undefined4 *puVar20;
  bool bVar21;
  int local_fbc [28];
  undefined **local_f4c [18];
  HANDLE local_f04;
  int local_f00;
  _WIN32_FIND_DATAA local_efc;
  undefined1 local_dbc [48];
  LPCSTR ***local_d8c [5];
  uint local_d78;
  void *local_d74 [4];
  undefined4 local_d64;
  uint local_d60;
  void *local_d5c;
  undefined1 local_d58;
  undefined1 local_d57;
  undefined4 local_d4c;
  uint local_d48;
  LPCSTR ***local_d44 [4];
  undefined4 local_d34;
  uint local_d30;
  byte ****local_d2c [4];
  uint local_d1c;
  uint local_d18;
  undefined1 local_d14 [1023];
  char cStack_915;
  char local_914 [10];
  char local_90a [1013];
  char cStack_515;
  char local_514 [4];
  char local_510 [6];
  char local_50a [1013];
  undefined4 uStack_115;
  undefined1 local_110 [252];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019dd57;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_f00 = param_1;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x438) = *DAT_10223188;
    (*DAT_102230d4)(local_914,local_14);
    pcVar11 = &cStack_915;
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (pcVar12[1] != '\0');
    builtin_strncpy(pcVar12 + 1,"\\txtfiles\\",0xb);
    pcVar11 = local_914;
    local_d64 = 0;
    local_d60 = 0xf;
    local_d74[0] = (void *)((uint)local_d74[0] & 0xffffff00);
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_10037810(local_914,(int)pcVar11 - (int)(local_914 + 1));
    local_d5c = (void *)0x66632e2a;
    local_d48 = 0xf;
    local_d4c = 5;
    local_d58 = 0x67;
    local_d57 = 0;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    FUN_100c5040(local_d44,local_d74,&local_d5c);
    local_8 = CONCAT31(local_8._1_3_,2);
    pppppCVar9 = local_d44;
    if (0xf < local_d30) {
      pppppCVar9 = (LPCSTR ****)local_d44[0];
    }
    hFindFile = FindFirstFileA((LPCSTR)pppppCVar9,&local_efc);
    local_f04 = hFindFile;
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        FUN_100c5090(local_d8c,local_d74,local_efc.cFileName);
        local_8 = CONCAT31(local_8._1_3_,3);
        pppppCVar9 = local_d8c;
        if (0xf < local_d78) {
          pppppCVar9 = (LPCSTR ****)local_d8c[0];
        }
        iVar3 = FUN_101740ac(pppppCVar9,local_dbc);
        if (iVar3 == 0) {
          pcVar12 = (char *)(DAT_10223188[0x26] + *(int *)(*(int *)(param_1 + 4) + 0x1d4));
          pcVar11 = pcVar12;
          do {
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar11[(int)&uStack_115 - (int)pcVar12] = cVar1;
          } while (cVar1 != '\0');
          puVar20 = &uStack_115;
          do {
            puVar13 = puVar20;
            puVar20 = (undefined4 *)((int)puVar13 + 1);
          } while (*(char *)((int)puVar13 + 1) != '\0');
          *(undefined4 *)((int)puVar13 + 1) = 0x6766632e;
          *(undefined1 *)((int)puVar13 + 5) = 0;
          pCVar14 = local_efc.cFileName;
          pbVar4 = (byte *)((int)&uStack_115 + 1);
          do {
            bVar2 = *pbVar4;
            bVar21 = bVar2 < (byte)*pCVar14;
            if (bVar2 != *pCVar14) {
LAB_100c5525:
              uVar5 = -(uint)bVar21 | 1;
              goto LAB_100c552a;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar21 = bVar2 < (byte)pCVar14[1];
            if (bVar2 != pCVar14[1]) goto LAB_100c5525;
            pbVar4 = pbVar4 + 2;
            pCVar14 = pCVar14 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_100c552a:
          if (uVar5 == 0) {
            FUN_1001f160(local_d14,&DAT_101a124c,local_efc.cFileName);
            (*DAT_102230d4)(local_514);
            pcVar11 = &cStack_515;
            do {
              pcVar12 = pcVar11;
              pcVar11 = pcVar12 + 1;
            } while (pcVar12[1] != '\0');
            builtin_strncpy(pcVar12 + 1,"/txtfiles/",0xb);
            pcVar12 = (char *)(DAT_10223188[0x26] + *(int *)(*(int *)(param_1 + 4) + 0x1d4));
            pcVar11 = pcVar12;
            do {
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar1 != '\0');
            pcVar18 = &cStack_515;
            do {
              pcVar17 = pcVar18 + 1;
              pcVar18 = pcVar18 + 1;
            } while (*pcVar17 != '\0');
            pcVar17 = pcVar12;
            for (uVar5 = (uint)((int)pcVar11 - (int)pcVar12) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar5 = (int)pcVar11 - (int)pcVar12 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *pcVar18 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcVar18 = pcVar18 + 1;
            }
            pcVar11 = &cStack_515;
            do {
              pcVar12 = pcVar11;
              pcVar11 = pcVar12 + 1;
            } while (pcVar12[1] != '\0');
            builtin_strncpy(pcVar12 + 1,".cfg",5);
            FUN_1002f8d0(local_514,1,0x40,1);
            local_d1c = 0;
            local_d18 = 0xf;
            local_d2c[0] = (byte ****)((uint)local_d2c[0] & 0xffffff00);
            local_8 = CONCAT31(local_8._1_3_,5);
            piVar6 = (int *)FUN_1002f550(local_fbc,local_d2c);
            bVar2 = *(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6);
            while ((bVar2 & 6) == 0) {
              pppppbVar16 = local_d2c;
              if (0xf < local_d18) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"health ");
              if (iVar3 != 0) {
                uVar5 = 7;
                if (local_d1c < 7) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                iVar3 = _atoi((char *)((int)&uStack_115 + 1));
                *(float *)(*(int *)(param_1 + 4) + 0x164) = (float)iVar3;
              }
              pppppbVar16 = local_d2c;
              if (0xf < local_d18) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"stamina ");
              if (iVar3 != 0) {
                uVar5 = 8;
                if (local_d1c < 8) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                iVar3 = _atoi((char *)((int)&uStack_115 + 1));
                *(float *)(param_1 + 0x21f0) = (float)iVar3;
              }
              pppppbVar16 = local_d2c;
              if (0xf < local_d18) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"quicksel1 ");
              uVar5 = local_d18;
              if (iVar3 != 0) {
                uVar5 = 10;
                if (local_d1c < 10) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                uVar5 = local_d18;
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                pcVar11 = (char *)(param_1 + 0x204c);
                do {
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  pcVar11[(int)&uStack_115 - (param_1 + 0x204c)] = cVar1;
                } while (cVar1 != '\0');
              }
              pppppbVar16 = local_d2c;
              if (0xf < uVar5) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"quicksel2 ");
              uVar5 = local_d18;
              if (iVar3 != 0) {
                uVar5 = 10;
                if (local_d1c < 10) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                uVar5 = local_d18;
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                pcVar11 = (char *)(param_1 + 0x20cc);
                do {
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  pcVar11[(int)&uStack_115 - (param_1 + 0x20cc)] = cVar1;
                } while (cVar1 != '\0');
              }
              pppppbVar16 = local_d2c;
              if (0xf < uVar5) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"quicksel3 ");
              uVar5 = local_d18;
              if (iVar3 != 0) {
                uVar5 = 10;
                if (local_d1c < 10) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                uVar5 = local_d18;
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                pcVar11 = (char *)(param_1 + 0x214c);
                do {
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  pcVar11[(int)&uStack_115 - (param_1 + 0x214c)] = cVar1;
                } while (cVar1 != '\0');
              }
              pppppbVar16 = local_d2c;
              if (0xf < uVar5) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"playerstats_shotsfired ");
              if (iVar3 != 0) {
                uVar5 = 0x17;
                if (local_d1c < 0x17) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                iVar3 = _atoi((char *)((int)&uStack_115 + 1));
                *(int *)(param_1 + 0x63c) = iVar3;
              }
              pppppbVar16 = local_d2c;
              if (0xf < local_d18) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"playerstats_shotshit ");
              if (iVar3 != 0) {
                uVar5 = 0x15;
                if (local_d1c < 0x15) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                iVar3 = _atoi((char *)((int)&uStack_115 + 1));
                *(int *)(param_1 + 0x640) = iVar3;
              }
              pppppbVar16 = local_d2c;
              if (0xf < local_d18) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"playerstats_syringesused ");
              if (iVar3 != 0) {
                uVar5 = 0x19;
                if (local_d1c < 0x19) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                iVar3 = _atoi((char *)((int)&uStack_115 + 1));
                *(int *)(param_1 + 0x644) = iVar3;
              }
              pppppbVar16 = local_d2c;
              if (0xf < local_d18) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"playerstats_monsterskilledmelee ");
              if (iVar3 != 0) {
                uVar5 = 0x20;
                if (local_d1c < 0x20) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                iVar3 = _atoi((char *)((int)&uStack_115 + 1));
                *(int *)(param_1 + 0x670) = iVar3;
              }
              pppppbVar16 = local_d2c;
              if (0xf < local_d18) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"playerstats_monsterskilledshooting ");
              if (iVar3 != 0) {
                uVar5 = 0x23;
                if (local_d1c < 0x23) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                iVar3 = _atoi((char *)((int)&uStack_115 + 1));
                *(int *)(param_1 + 0x674) = iVar3;
              }
              pppppbVar16 = local_d2c;
              if (0xf < local_d18) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"playerstats_seconds ");
              if (iVar3 != 0) {
                uVar5 = 0x14;
                if (local_d1c < 0x14) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                iVar3 = _atoi((char *)((int)&uStack_115 + 1));
                *(int *)(param_1 + 0x664) = iVar3;
              }
              pppppbVar16 = local_d2c;
              if (0xf < local_d18) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"playerstats_minutes ");
              if (iVar3 != 0) {
                uVar5 = 0x14;
                if (local_d1c < 0x14) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                iVar3 = _atoi((char *)((int)&uStack_115 + 1));
                *(int *)(param_1 + 0x668) = iVar3;
              }
              pppppbVar16 = local_d2c;
              if (0xf < local_d18) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"playerstats_hours ");
              if (iVar3 != 0) {
                uVar5 = 0x12;
                if (local_d1c < 0x12) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                iVar3 = _atoi((char *)((int)&uStack_115 + 1));
                *(int *)(param_1 + 0x66c) = iVar3;
              }
              pppppbVar16 = local_d2c;
              if (0xf < local_d18) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"playerstats_damagetaken ");
              if (iVar3 != 0) {
                uVar5 = 0x18;
                if (local_d1c < 0x18) {
                  uVar5 = local_d1c;
                }
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                local_d1c = local_d1c - uVar5;
                FUN_101406b0(pppppbVar16,(byte *)((int)pppppbVar16 + uVar5),local_d1c + 1);
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) goto LAB_100c655d;
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                iVar3 = _atoi((char *)((int)&uStack_115 + 1));
                *(int *)(param_1 + 0x658) = iVar3;
              }
              pppppbVar16 = local_d2c;
              if (0xf < local_d18) {
                pppppbVar16 = (byte *****)local_d2c[0];
              }
              iVar3 = FUN_1013f5f0(pppppbVar16,"weapon_");
              uVar5 = local_d18;
              if (iVar3 != 0) {
                pppppbVar16 = local_d2c;
                if (0xf < local_d18) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                pppppbVar15 = pppppbVar16;
                do {
                  bVar2 = *(byte *)pppppbVar15;
                  pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                  *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) = bVar2;
                } while (bVar2 != 0);
                if (0xff < local_d1c) {
LAB_100c655d:
                    /* WARNING: Subroutine does not return */
                  ___report_rangecheckfailure();
                }
                *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                pppppbVar16 = local_d2c;
                if (0xf < uVar5) {
                  pppppbVar16 = (byte *****)local_d2c[0];
                }
                FUN_100e0a80(pppppbVar16,0,0);
                iVar3 = 0;
                puVar19 = (uint *)(local_f00 + 0x2514);
                do {
                  uVar5 = *puVar19;
                  if (uVar5 != 0) {
                    pbVar4 = (byte *)(DAT_10223188[0x26] + **(int **)(uVar5 + 4));
                    pcVar11 = "weapon_action";
                    do {
                      bVar2 = *pbVar4;
                      bVar21 = bVar2 < (byte)*pcVar11;
                      if (bVar2 != *pcVar11) {
LAB_100c61f0:
                        uVar7 = -(uint)bVar21 | 1;
                        goto joined_r0x100c61f7;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar4[1];
                      bVar21 = bVar2 < (byte)pcVar11[1];
                      if (bVar2 != pcVar11[1]) goto LAB_100c61f0;
                      pbVar4 = pbVar4 + 2;
                      pcVar11 = pcVar11 + 2;
                    } while (bVar2 != 0);
                    uVar7 = 0;
joined_r0x100c61f7:
                    do {
                      if (uVar7 == 0) break;
                      if ((&DAT_10231890)[*(int *)(uVar5 + 0x168) * 0xb] != 0) {
                        pppppbVar16 = local_d2c;
                        if (0xf < local_d18) {
                          pppppbVar16 = (byte *****)local_d2c[0];
                        }
                        pbVar4 = (byte *)(DAT_10223188[0x26] + **(int **)(uVar5 + 4));
                        do {
                          bVar2 = *pbVar4;
                          bVar21 = bVar2 < *(byte *)pppppbVar16;
                          if (bVar2 != *(byte *)pppppbVar16) {
LAB_100c6258:
                            uVar7 = -(uint)bVar21 | 1;
                            goto LAB_100c625d;
                          }
                          if (bVar2 == 0) break;
                          bVar2 = pbVar4[1];
                          bVar21 = bVar2 < *(byte *)((int)pppppbVar16 + 1);
                          if (bVar2 != *(byte *)((int)pppppbVar16 + 1)) goto LAB_100c6258;
                          pbVar4 = pbVar4 + 2;
                          pppppbVar16 = (byte *****)((int)pppppbVar16 + 2);
                        } while (bVar2 != 0);
                        uVar7 = 0;
LAB_100c625d:
                        if (uVar7 == 0) {
                          piVar6 = (int *)FUN_1002f550(local_fbc,local_d2c);
                          if ((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) {
                            pppppbVar16 = local_d2c;
                            if (0xf < local_d18) {
                              pppppbVar16 = (byte *****)local_d2c[0];
                            }
                            pppppbVar15 = pppppbVar16;
                            do {
                              bVar2 = *(byte *)pppppbVar15;
                              pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                              *(byte *)((int)pppppbVar15 + ((int)&uStack_115 - (int)pppppbVar16)) =
                                   bVar2;
                            } while (bVar2 != 0);
                            if (0xff < local_d1c) goto LAB_100c655d;
                            *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                            iVar8 = _atoi((char *)((int)&uStack_115 + 1));
                            *(int *)(uVar5 + 0x1e4) = iVar8;
                          }
                          piVar6 = (int *)FUN_1002f550(local_fbc,local_d2c);
                          if ((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) {
                            pppppbVar16 = local_d2c;
                            if (0xf < local_d18) {
                              pppppbVar16 = (byte *****)local_d2c[0];
                            }
                            pppppbVar15 = pppppbVar16;
                            do {
                              bVar2 = *(byte *)pppppbVar15;
                              *(byte *)((int)pppppbVar15 + (int)&uStack_115 + (1 - (int)pppppbVar16)
                                       ) = bVar2;
                              pppppbVar15 = (byte *****)((int)pppppbVar15 + 1);
                            } while (bVar2 != 0);
                            if (0xff < local_d1c) goto LAB_100c655d;
                            *(undefined1 *)((int)&uStack_115 + local_d1c + 1) = 0;
                            iVar8 = _atoi((char *)((int)&uStack_115 + 1));
                            *(int *)(local_f00 + 0x2540 + *(int *)(uVar5 + 0x1dc) * 4) = iVar8;
                          }
                        }
                      }
                      uVar5 = *(uint *)(uVar5 + 0x164);
                      uVar7 = uVar5;
                    } while( true );
                  }
                  iVar3 = iVar3 + 1;
                  puVar19 = puVar19 + 1;
                  param_1 = local_f00;
                } while (iVar3 < 6);
              }
              piVar6 = (int *)FUN_1002f550(local_fbc,local_d2c);
              bVar2 = *(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6);
            }
            pppppCVar9 = local_d8c;
            if (0xf < local_d78) {
              pppppCVar9 = (LPCSTR ****)local_d8c[0];
            }
            DeleteFileA((LPCSTR)pppppCVar9);
            if (0xf < local_d18) {
              std::_Deallocate<8,0>(local_d2c[0],local_d18 + 1);
            }
            local_d1c = 0;
            local_d18 = 0xf;
            local_d2c[0] = (byte ****)((uint)local_d2c[0] & 0xffffff00);
            *(undefined ***)((int)local_fbc + *(int *)(local_fbc[0] + 4)) =
                 std::basic_ifstream<char,std::char_traits<char>_>::vftable;
            *(int *)((int)local_fbc + *(int *)(local_fbc[0] + 4) + -4) =
                 *(int *)(local_fbc[0] + 4) + -0x70;
            FUN_10030290();
            *(undefined ***)((int)local_fbc + *(int *)(local_fbc[0] + 4)) =
                 std::basic_istream<char,std::char_traits<char>_>::vftable;
            *(int *)((int)local_fbc + *(int *)(local_fbc[0] + 4) + -4) =
                 *(int *)(local_fbc[0] + 4) + -0x18;
            local_8 = CONCAT31(local_8._1_3_,6);
            local_f4c[0] = std::ios_base::vftable;
            std::ios_base::_Ios_base_dtor((ios_base *)local_f4c);
            hFindFile = local_f04;
          }
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        if (0xf < local_d78) {
          std::_Deallocate<8,0>(local_d8c[0],local_d78 + 1);
        }
        BVar10 = FindNextFileA(hFindFile,&local_efc);
      } while (0 < BVar10);
      iVar3 = 1;
      puVar20 = (undefined4 *)(param_1 + 0x2200);
      do {
        FUN_100e4360(iVar3,*puVar20,0);
        iVar3 = iVar3 + 1;
        puVar20 = puVar20 + 1;
      } while (iVar3 < 7);
    }
    if (0xf < local_d30) {
      std::_Deallocate<8,0>(local_d44[0],local_d30 + 1);
    }
    local_d44[0] = (LPCSTR ***)((uint)local_d44[0] & 0xffffff00);
    local_d30 = 0xf;
    local_d34 = 0;
    if (0xf < local_d48) {
      std::_Deallocate<8,0>(local_d5c,local_d48 + 1);
    }
    if (0xf < local_d60) {
      std::_Deallocate<8,0>(local_d74[0],local_d60 + 1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

