// rea decompile_all
// name: FUN_100ca860
// address: 0x100ca860
// body: available
// range: 0x100ca860-0x100cb728 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ca860(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FILE *_File;
  FILE *pFVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  int *in_ECX;
  uint uVar11;
  float *pfVar12;
  int *piVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  int iVar20;
  float *pfVar21;
  int iVar22;
  bool bVar23;
  float10 fVar24;
  float fVar25;
  double dVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined1 auStack_2b4 [44];
  FILE *pFStack_288;
  int *piStack_284;
  int *local_280;
  int iStack_27c;
  int iStack_278;
  uint uStack_274;
  int iStack_270;
  int iStack_26c;
  uint uStack_268;
  undefined8 uStack_264;
  float fStack_25c;
  uint uStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  int iStack_1c0;
  float fStack_1b4;
  undefined8 uStack_1b0;
  float fStack_1a8;
  undefined1 auStack_18c [16];
  float fStack_17c;
  undefined8 uStack_178;
  float fStack_170;
  int iStack_15c;
  char cStack_155;
  CHAR aCStack_154 [4];
  char acStack_150 [264];
  uint uStack_48;
  uint local_44;
  
  local_44 = DAT_1021baf4 ^ (uint)auStack_2b4;
  in_ECX[0x1e] = (int)CBaseEntity::SUB_Remove;
  local_280 = in_ECX;
  (**(code **)(*in_ECX + 8))(0);
  iStack_27c = FUN_10171536(0x18);
  if (iStack_27c == 0) {
    uVar30 = 0x101d6e2400000002;
    goto LAB_100cb70b;
  }
  (*DAT_102230d4)();
  pcVar15 = &cStack_155;
  do {
    pcVar14 = pcVar15;
    pcVar15 = pcVar14 + 1;
  } while (pcVar14[1] != '\0');
  builtin_strncpy(pcVar14 + 1,"/maps",6);
  CreateDirectoryA(aCStack_154,(LPSECURITY_ATTRIBUTES)0x0);
  pcVar15 = &cStack_155;
  do {
    pcVar14 = pcVar15;
    pcVar15 = pcVar14 + 1;
  } while (pcVar14[1] != '\0');
  builtin_strncpy(pcVar14 + 1,"/graphs",8);
  CreateDirectoryA(aCStack_154,(LPSECURITY_ATTRIBUTES)0x0);
  pcVar15 = &cStack_155;
  do {
    pcVar14 = pcVar15 + 1;
    pcVar15 = pcVar15 + 1;
  } while (*pcVar14 != '\0');
  pcVar15[0] = '/';
  pcVar15[1] = '\0';
  pcVar14 = (char *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc));
  pcVar15 = pcVar14;
  do {
    cVar3 = *pcVar15;
    pcVar15 = pcVar15 + 1;
  } while (cVar3 != '\0');
  pcVar19 = &cStack_155;
  do {
    pcVar16 = pcVar19 + 1;
    pcVar19 = pcVar19 + 1;
  } while (*pcVar16 != '\0');
  pcVar16 = pcVar14;
  for (uVar11 = (uint)((int)pcVar15 - (int)pcVar14) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar19 = pcVar19 + 4;
  }
  for (uVar11 = (int)pcVar15 - (int)pcVar14 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar19 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar19 = pcVar19 + 1;
  }
  pcVar15 = &cStack_155;
  do {
    pcVar14 = pcVar15;
    pcVar15 = pcVar14 + 1;
  } while (pcVar14[1] != '\0');
  builtin_strncpy(pcVar14 + 1,".nrp",5);
  pFVar7 = _fopen(aCStack_154,"w+");
  pFStack_288 = pFVar7;
  if (pFVar7 == (FILE *)0x0) {
    (*DAT_1022303c)(2,"Couldn\'t create %s!\n",aCStack_154);
    FUN_101714d1(iStack_27c);
    __security_check_cookie(uStack_48 ^ (uint)&stack0xfffffd48);
    return;
  }
  _fprintf(pFVar7,"Node Graph Report for map:  %s.bsp\n");
  _fprintf(pFVar7,"%d Total Nodes\n\n",DAT_102238c8);
  _File = pFStack_288;
  iVar20 = 0;
  if (0 < DAT_102238c8) {
    iVar17 = 0;
    do {
      *(undefined4 *)(iVar17 + 0x20 + DAT_102238bc) = 0;
      *(undefined4 *)(iVar17 + 0x24 + DAT_102238bc) = 0;
      iVar8 = DAT_102238bc;
      puVar10 = (undefined4 *)(iVar17 + 0x28 + DAT_102238bc);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10 = (undefined4 *)(iVar17 + 0x38 + iVar8);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      _fprintf(_File,"Node#         %4d\n");
      _fprintf(_File,"Location      %4d,%4d,%4d\n",(int)*(float *)(iVar17 + DAT_102238bc),
               (int)*(float *)(iVar17 + 4 + DAT_102238bc),(int)*(float *)(iVar17 + 8 + DAT_102238bc)
              );
      _fprintf(_File,"HintType:     %4d\n",(int)*(short *)(iVar17 + 0x50 + DAT_102238bc));
      _fprintf(_File,"HintActivity: %4d\n",(int)*(short *)(iVar17 + 0x52 + DAT_102238bc));
      _fprintf(_File,"HintYaw:      %4f\n",(double)*(float *)(iVar17 + 0x54 + DAT_102238bc));
      _fprintf(_File,
               "-------------------------------------------------------------------------------\n");
      iVar20 = iVar20 + 1;
      iVar17 = iVar17 + 0x58;
      in_ECX = piStack_284;
      pFVar7 = pFStack_288;
    } while (iVar20 < DAT_102238c8);
  }
  _fprintf(pFVar7,"\n\n");
  iVar20 = 0;
  if (0 < DAT_102238c8) {
    iVar17 = 0;
    do {
      if ((*(byte *)(DAT_102238bc + iVar17 + 0x1c) & 2) == 0) {
        iVar8 = FUN_10119780();
        if (iVar8 == -3) {
          puVar1 = (uint *)(iVar17 + 0x1c + DAT_102238bc);
          *puVar1 = *puVar1 | 4;
        }
        else {
          puVar1 = (uint *)(iVar17 + 0x1c + DAT_102238bc);
          *puVar1 = *puVar1 | 1;
          pfVar21 = (float *)(DAT_102238bc + iVar17);
          fStack_25c = pfVar21[2] - 384.0;
          uStack_264 = CONCAT44(pfVar21[1] - 0.0,*pfVar21 - 0.0);
          FUN_1011a800(pfVar21,&uStack_264,1,DAT_10231f60);
          pfVar21 = (float *)(DAT_102238bc + iVar17);
          fStack_250 = pfVar21[1] - 0.0;
          fStack_24c = pfVar21[2] - 384.0;
          fStack_254 = *pfVar21 - 0.0;
          FUN_1011a800(pfVar21,&fStack_254,0,DAT_10231f60,auStack_18c);
          if (((fStack_17c < fStack_1b4) && (iStack_15c != 0)) &&
             ((*(uint *)(iStack_15c + 0x228) & 0x2000000) != 0)) {
            uStack_1b0 = uStack_178;
            fStack_1a8 = fStack_170;
          }
          *(float *)(iVar17 + 8 + DAT_102238bc) = fStack_1a8 + 8.0;
          *(float *)(iVar17 + 0x14 + DAT_102238bc) = fStack_1a8 + 8.0;
        }
      }
      iVar20 = iVar20 + 1;
      iVar17 = iVar17 + 0x58;
    } while (iVar20 < DAT_102238c8);
  }
  iVar20 = iStack_27c;
  pFVar7 = pFStack_288;
  iStack_26c = FUN_100ce420(iStack_27c,pFStack_288,&piStack_284);
  if (iStack_26c == 0) {
    (*DAT_1022303c)(2,"**ConnectVisibleNodes FAILED!\n");
    iVar17 = in_ECX[1];
    in_ECX[0x1e] = (int)CTestHull::ShowBadNode;
    puVar9 = (undefined8 *)((int)piStack_284 * 0x58 + DAT_102238bc);
    *(undefined8 *)(iVar17 + 8) = *puVar9;
    *(undefined4 *)(iVar17 + 0x10) = *(undefined4 *)(puVar9 + 1);
    FUN_101714d1(iVar20);
    _fclose(pFVar7);
    __security_check_cookie(uStack_48 ^ (uint)&stack0xfffffd48);
    return;
  }
  _fprintf(pFVar7,"----------------------------------------------------------------------------\n");
  _fprintf(pFVar7,"Walk Rejection:\n");
  iStack_278 = 0;
  if (0 < DAT_102238c8) {
    piStack_284 = (int *)0x0;
    do {
      pfVar21 = (float *)(DAT_102238bc + (int)piStack_284);
      _fprintf(pFStack_288,
               "-------------------------------------------------------------------------------\n");
      _fprintf(pFStack_288,"Node %4d:\n\n",iStack_278);
      local_280 = (int *)0x0;
      if (0 < (int)pfVar21[8]) {
        do {
          iVar17 = 0;
          iStack_270 = 0;
          *(undefined4 *)(iVar20 + 0x10 + ((int)pfVar21[9] + (int)local_280) * 0x18) = 0xf;
          uStack_274 = 0;
          piVar13 = local_280;
          do {
            if ((iVar17 == 0) || ((uStack_274 != 1 && (uStack_274 != 2)))) {
              switch(uStack_274) {
              case 0:
                fStack_254 = 12.0;
                fStack_250 = 12.0;
                puVar10 = &uStack_23c;
                fStack_24c = 24.0;
                uStack_23c = 0xc1400000;
                uStack_238 = 0xc1400000;
                uStack_234 = 0;
                break;
              case 1:
                uStack_230 = 0x41400000;
                uStack_22c = 0x41400000;
                puVar10 = &uStack_224;
                uStack_228 = 0x42900000;
                uStack_224 = 0xc1400000;
                uStack_220 = 0xc1400000;
                uStack_21c = 0;
                break;
              case 2:
                uStack_218 = 0x42000000;
                uStack_214 = 0x42000000;
                puVar10 = &uStack_20c;
                uStack_210 = 0x42800000;
                uStack_20c = 0xc2000000;
                uStack_208 = 0xc2000000;
                uStack_204 = 0;
                break;
              case 3:
                uStack_200 = 0x42000000;
                uStack_1fc = 0x42000000;
                puVar10 = &uStack_1f4;
                uStack_1f8 = 0x42800000;
                uStack_1f4 = 0xc2000000;
                uStack_1f0 = 0xc2000000;
                uStack_1ec = 0;
                break;
              default:
                goto switchD_100cadcf_default;
              }
              FUN_1011a030(in_ECX[1],puVar10);
switchD_100cadcf_default:
              FUN_10119fe0(in_ECX);
              if ((*(uint *)(in_ECX[1] + 0x1a8) & 0x200) == 0) {
                (*DAT_1022303c)(2);
              }
              if ((int)local_280 < 0) {
                (*DAT_1022303c)(2,"**** j = %d ****\n",local_280);
                FUN_101714d1(iVar20);
                _fclose(pFStack_288);
                __security_check_cookie(uStack_48 ^ (uint)&stack0xfffffd48);
                return;
              }
              iVar17 = in_ECX[1];
              pfVar12 = (float *)(*(int *)(iVar20 + 4 + ((int)pfVar21[9] + (int)local_280) * 0x18) *
                                  0x58 + DAT_102238bc);
              uStack_264 = *(undefined8 *)pfVar12;
              fStack_25c = pfVar12[2];
              if (uStack_274 < 3) {
                bVar23 = ((uint)pfVar21[7] & 4) != 0;
                uStack_268 = *(uint *)(iVar17 + 0x1a8);
                if (bVar23) {
                  *(uint *)(iVar17 + 0x1a8) = uStack_268 | 2;
                  iVar17 = in_ECX[1];
                }
                uStack_258 = (uint)!bVar23;
                fStack_1e4 = pfVar12[1] - *(float *)(iVar17 + 0xc);
                fStack_1e0 = pfVar12[2] - *(float *)(iVar17 + 0x10);
                fStack_1e8 = *pfVar12 - *(float *)(iVar17 + 8);
                fVar24 = (float10)FUN_1011a930();
                fStack_248 = (float)fVar24;
                fVar25 = uStack_264._4_4_ - *(float *)(in_ECX[1] + 0xc);
                fVar28 = (float)uStack_264 - *(float *)(in_ECX[1] + 8);
                dVar26 = (double)(fVar25 * fVar25 + fVar28 * fVar28);
                if (dVar26 < 0.0) {
                  __libm_sse2_sqrt_precise();
                }
                else {
                  dVar26 = SQRT(dVar26);
                }
                iVar20 = 0;
                fStack_244 = (float)dVar26;
                if (0.0 < fStack_244) {
                  fStack_240 = fStack_244 - 1.0;
                  fVar25 = 0.0;
                  do {
                    fVar28 = 16.0;
                    if (fStack_240 <= fVar25 + 16.0) {
                      fVar28 = (fStack_244 - fVar25) - 1.0;
                    }
                    iVar17 = (*DAT_10222fb4)(*(undefined4 *)(in_ECX[1] + 0x20c),fStack_248,fVar28);
                    if (iVar17 == 0) goto LAB_100cb15d;
                    iVar20 = iVar20 + 0x10;
                    fVar25 = (float)iVar20;
                  } while (fVar25 < fStack_244);
                }
                iVar20 = in_ECX[1];
                fVar29 = *(float *)(iVar20 + 0xc) - uStack_264._4_4_;
                fVar28 = *(float *)(iVar20 + 8) - (float)uStack_264;
                fVar25 = *(float *)(iVar20 + 0x10) - fStack_25c;
                auVar27._0_8_ = (double)(fVar29 * fVar29 + fVar28 * fVar28 + fVar25 * fVar25);
                auVar27._8_8_ = 0;
                if (auVar27._0_8_ < 0.0) {
                  __libm_sse2_sqrt_precise();
                  dVar26 = auVar27._0_8_;
                }
                else {
                  dVar26 = SQRT(auVar27._0_8_);
                }
                if ((float)dVar26 <= 64.0) {
LAB_100cb233:
                  *(uint *)(in_ECX[1] + 0x1a8) = uStack_268;
                  piVar13 = local_280;
                  iVar17 = iStack_270;
                  iVar20 = iStack_27c;
                }
                else {
LAB_100cb15d:
                  if (uStack_274 == 0) {
                    _fprintf(pFStack_288,"NODE_SMALL_HULL step %f\n");
                    iStack_270 = 1;
                    puVar1 = (uint *)(iStack_27c + 0x10 + ((int)pfVar21[9] + (int)local_280) * 0x18)
                    ;
                    *puVar1 = *puVar1 & 0xfffffff8;
                    *(uint *)(in_ECX[1] + 0x1a8) = uStack_268;
                    piVar13 = local_280;
                    iVar17 = iStack_270;
                    iVar20 = iStack_27c;
                  }
                  else if (uStack_274 == 1) {
                    _fprintf(pFStack_288,"NODE_HUMAN_HULL step %f\n");
                    iStack_270 = 1;
                    puVar1 = (uint *)(iStack_27c + 0x10 + ((int)pfVar21[9] + (int)local_280) * 0x18)
                    ;
                    *puVar1 = *puVar1 & 0xfffffff9;
                    *(uint *)(in_ECX[1] + 0x1a8) = uStack_268;
                    piVar13 = local_280;
                    iVar17 = iStack_270;
                    iVar20 = iStack_27c;
                  }
                  else {
                    if (uStack_274 != 2) goto LAB_100cb233;
                    _fprintf(pFStack_288,"NODE_LARGE_HULL step %f\n");
                    puVar1 = (uint *)(iStack_27c + 0x10 + ((int)pfVar21[9] + (int)local_280) * 0x18)
                    ;
                    *puVar1 = *puVar1 & 0xfffffffb;
                    *(uint *)(in_ECX[1] + 0x1a8) = uStack_268;
                    piVar13 = local_280;
                    iVar17 = iStack_270;
                    iVar20 = iStack_27c;
                  }
                }
              }
              else {
                fStack_1dc = pfVar12[3] + 0.0;
                fStack_1d8 = pfVar12[4] + 0.0;
                fStack_1d4 = pfVar12[5] + 32.0;
                fStack_1d0 = *pfVar21 + 0.0;
                fStack_1cc = pfVar21[1] + 0.0;
                fStack_1c8 = pfVar21[2] + 32.0;
                FUN_1011a7e0(&fStack_1d0,&fStack_1dc,1,2,*(undefined4 *)(iVar17 + 0x20c));
                piVar13 = local_280;
                iVar17 = iStack_270;
                if ((iStack_1c0 != 0) || (fStack_1b4 < 1.0)) {
                  puVar1 = (uint *)(iVar20 + 0x10 + ((int)pfVar21[9] + (int)local_280) * 0x18);
                  *puVar1 = *puVar1 & 0xfffffff7;
                }
              }
            }
            uStack_274 = uStack_274 + 1;
          } while ((int)uStack_274 < 4);
          if (*(int *)(iVar20 + 0x10 + ((int)pfVar21[9] + (int)piVar13) * 0x18) == 0) {
            _fprintf(pFStack_288,"Rejected Node %3d - Unreachable by ");
            fVar25 = pfVar21[8];
            fVar28 = pfVar21[9];
            fVar29 = pfVar21[9];
            puVar2 = (undefined4 *)(iVar20 + -0x18 + ((int)fVar25 + (int)fVar28) * 0x18);
            uVar4 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            puVar10 = (undefined4 *)(iVar20 + ((int)local_280 + (int)fVar29) * 0x18);
            *puVar10 = *puVar2;
            puVar10[1] = uVar4;
            puVar10[2] = uVar5;
            puVar10[3] = uVar6;
            *(undefined8 *)(iVar20 + 0x10 + ((int)local_280 + (int)fVar29) * 0x18) =
                 *(undefined8 *)(iVar20 + -8 + ((int)fVar25 + (int)fVar28) * 0x18);
            _fprintf(pFStack_288,"Any Hull\n");
            pfVar21[8] = (float)((int)pfVar21[8] + -1);
            iStack_26c = iStack_26c + -1;
            piVar13 = (int *)((int)local_280 + -1);
          }
          local_280 = (int *)((int)piVar13 + 1);
        } while ((int)local_280 < (int)pfVar21[8]);
      }
      iStack_278 = iStack_278 + 1;
      piStack_284 = piStack_284 + 0x16;
      pFVar7 = pFStack_288;
    } while (iStack_278 < DAT_102238c8);
  }
  _fprintf(pFVar7,
           "-------------------------------------------------------------------------------\n\n\n");
  iVar17 = FUN_100cebc0(iVar20,pFVar7);
  iVar17 = iStack_26c - iVar17;
  iStack_26c = iVar17;
  DAT_102238c0 = FUN_10171536(0x18);
  if (DAT_102238c0 == 0) {
    (*DAT_1022303c)(2,"Couldn\'t malloc LinkPool!\n");
    FUN_101714d1(iVar20);
    _fclose(pFVar7);
    __security_check_cookie(uStack_48 ^ (uint)&stack0xfffffd48);
    return;
  }
  iVar8 = 0;
  piStack_284 = (int *)0x0;
  DAT_102238cc = iVar17;
  if (0 < DAT_102238c8) {
    iStack_278 = 0;
    do {
      uStack_268 = *(uint *)(iStack_278 + 0x24 + DAT_102238bc);
      *(int *)(iStack_278 + 0x24 + DAT_102238bc) = iVar8;
      iVar17 = 0;
      if (0 < *(int *)(iStack_278 + 0x20 + DAT_102238bc)) {
        iVar18 = iVar8 * 0x18;
        puVar10 = (undefined4 *)(iVar20 + uStack_268 * 0x18);
        do {
          iVar20 = DAT_102238c0;
          uVar4 = puVar10[1];
          uVar5 = puVar10[2];
          uVar6 = puVar10[3];
          iVar17 = iVar17 + 1;
          iVar8 = iVar8 + 1;
          puVar2 = (undefined4 *)(iVar18 + DAT_102238c0);
          *puVar2 = *puVar10;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          *(undefined8 *)(iVar18 + 0x10 + iVar20) = *(undefined8 *)(puVar10 + 4);
          iVar18 = iVar18 + 0x18;
          puVar10 = puVar10 + 6;
          iVar20 = iStack_27c;
        } while (iVar17 < *(int *)(iStack_278 + 0x20 + DAT_102238bc));
      }
      piStack_284 = (int *)((int)piStack_284 + 1);
      iStack_278 = iStack_278 + 0x58;
      pFVar7 = pFStack_288;
    } while ((int)piStack_284 < DAT_102238c8);
  }
  FUN_100cf310();
  FUN_100ca7c0();
  piStack_284 = (int *)0x1;
  _fprintf(pFVar7,
           "\n\n-------------------------------------------------------------------------------\n");
  _fprintf(pFVar7,"Link Pairings:\n");
  if (DAT_102238c8 < 1) {
LAB_100cb5f7:
    _fprintf(pFVar7,"\nAll Connections are Paired!\n");
  }
  else {
    iVar8 = 0;
    iVar18 = 0;
    iVar20 = DAT_102238bc;
    iVar17 = DAT_102238c8;
    do {
      iVar22 = 0;
      if (0 < *(int *)(iVar8 + 0x20 + iVar20)) {
        do {
          FUN_100cdcb0(*(undefined4 *)
                        (DAT_102238c0 + 4 + (*(int *)(iVar8 + 0x24 + iVar20) + iVar22) * 0x18),
                       iVar18,&uStack_268);
          if ((int)uStack_268 < 0) {
            piStack_284 = (int *)0x0;
            _fprintf(pFStack_288,"WARNING: Node %3d does not connect back to Node %3d\n");
          }
          iVar22 = iVar22 + 1;
          iVar20 = DAT_102238bc;
          iVar17 = DAT_102238c8;
        } while (iVar22 < *(int *)(iVar8 + 0x20 + DAT_102238bc));
      }
      iVar18 = iVar18 + 1;
      iVar8 = iVar8 + 0x58;
    } while (iVar18 < iVar17);
    pFVar7 = pFStack_288;
    if (piStack_284 != (int *)0x0) goto LAB_100cb5f7;
  }
  _fprintf(pFVar7,
           "-------------------------------------------------------------------------------\n");
  _fprintf(pFVar7,
           "\n\n-------------------------------------------------------------------------------\n");
  iVar20 = iStack_26c;
  _fprintf(pFVar7,"Total Number of Connections in Pool: %d\n",iStack_26c);
  _fprintf(pFVar7,
           "-------------------------------------------------------------------------------\n");
  _fprintf(pFVar7,"Connection Pool: %d bytes\n",iVar20 * 0x18);
  _fprintf(pFVar7,
           "-------------------------------------------------------------------------------\n");
  (*DAT_1022303c)(2,"%d Nodes, %d Connections\n",DAT_102238c8,iVar20);
  FUN_100cb740();
  iVar20 = 0;
  if (0 < DAT_102238c8) {
    iVar8 = 0;
    iVar17 = DAT_102238c8;
    do {
      if ((*(byte *)(iVar8 + 0x1c + DAT_102238bc) & 1) != 0) {
        *(float *)(iVar8 + 8 + DAT_102238bc) = *(float *)(iVar8 + 8 + DAT_102238bc) - 8.0;
        iVar17 = DAT_102238c8;
      }
      iVar20 = iVar20 + 1;
      iVar8 = iVar8 + 0x58;
    } while (iVar20 < iVar17);
  }
  FUN_101714d1();
  _fclose(pFStack_288);
  DAT_102238b0 = 1;
  DAT_102238b4 = 1;
  _DAT_102238b8 = 0;
  FUN_100cbfe0();
  FUN_100ccba0();
  uVar30 = 0x101d71f000000001;
LAB_100cb70b:
  (*DAT_1022303c)(uVar30);
  __security_check_cookie(uStack_48 ^ (uint)&stack0xfffffd48);
  return;
}

