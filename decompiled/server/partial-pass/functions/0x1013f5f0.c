// rea decompile_all
// name: FUN_1013f5f0
// address: 0x1013f5f0
// body: available
// range: 0x1013f5f0-0x1013f852 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013f841 to 0x101413ce FUN_101413ce (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 (*) [16] FUN_1013f5f0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  char *pcVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 in_XMM0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cVar17;
  undefined1 auVar18 [16];
  undefined1 auVar16 [15];
  
  if (DAT_102328ec == 0) {
    if ((*param_2)[0] == '\0') {
      return param_1;
    }
    if ((*param_2)[1] == '\0') {
      pauVar5 = (undefined1 (*) [16])FUN_101413ce();
      return pauVar5;
    }
    do {
      cVar17 = (*param_1)[0];
      pauVar5 = (undefined1 (*) [16])(*param_1 + 1);
      do {
        while (param_1 = pauVar5, cVar17 != (*param_2)[0]) {
          if (cVar17 == '\0') {
            return (undefined1 (*) [16])0x0;
          }
          pauVar5 = (undefined1 (*) [16])(*param_1 + 1);
          cVar17 = (*param_1)[0];
        }
        cVar17 = (*param_1)[0];
        pauVar5 = (undefined1 (*) [16])(*param_1 + 1);
        pauVar8 = param_2;
      } while (cVar17 != (*param_2)[1]);
      do {
        if ((*pauVar8)[2] == '\0') {
LAB_1013f846:
          return (undefined1 (*) [16])(param_1[-1] + 0xf);
        }
        if ((*pauVar5)[0] != (*pauVar8)[2]) break;
        puVar2 = *pauVar8;
        if (puVar2[3] == '\0') goto LAB_1013f846;
        puVar3 = *pauVar5;
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 2);
        pauVar5 = (undefined1 (*) [16])(*pauVar5 + 2);
      } while (puVar2[3] == puVar3[1]);
    } while( true );
  }
  if (DAT_102328ec < 2) {
    uVar9 = (uint)CONCAT11((*param_2)[0],(*param_2)[0]);
    if (uVar9 != 0) {
      auVar18 = pshuflw(ZEXT416(uVar9),ZEXT416(uVar9),0);
      uVar9 = 0xffffffff;
      pauVar5 = param_2;
      do {
        pauVar8 = pauVar5;
        pauVar5 = (undefined1 (*) [16])(*pauVar8 + 1);
        if ((*pauVar8)[0] == '\0') goto LAB_1013f65e;
      } while (((uint)pauVar5 & 0xf) != 0);
      auVar13[0] = -((*pauVar5)[0] == '\0');
      auVar13[1] = -((*pauVar8)[2] == '\0');
      auVar13[2] = -((*pauVar8)[3] == '\0');
      auVar13[3] = -((*pauVar8)[4] == '\0');
      auVar13[4] = -((*pauVar8)[5] == '\0');
      auVar13[5] = -((*pauVar8)[6] == '\0');
      auVar13[6] = -((*pauVar8)[7] == '\0');
      auVar13[7] = -((*pauVar8)[8] == '\0');
      auVar13[8] = -((*pauVar8)[9] == '\0');
      auVar13[9] = -((*pauVar8)[10] == '\0');
      auVar13[10] = -((*pauVar8)[0xb] == '\0');
      auVar13[0xb] = -((*pauVar8)[0xc] == '\0');
      auVar13[0xc] = -((*pauVar8)[0xd] == '\0');
      auVar13[0xd] = -((*pauVar8)[0xe] == '\0');
      auVar13[0xe] = -((*pauVar8)[0xf] == '\0');
      auVar13[0xf] = -(pauVar8[1][0] == '\0');
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) == 0 && (SUB161(auVar13 >> 0xf,0) & 1) == 0) &&
                      (SUB161(auVar13 >> 0x17,0) & 1) == 0) && (SUB161(auVar13 >> 0x1f,0) & 1) == 0)
                    && (SUB161(auVar13 >> 0x27,0) & 1) == 0) && (SUB161(auVar13 >> 0x2f,0) & 1) == 0
                   ) && (SUB161(auVar13 >> 0x37,0) & 1) == 0) &&
                 (SUB161(auVar13 >> 0x3f,0) & 1) == 0) && (SUB161(auVar13 >> 0x47,0) & 1) == 0) &&
               (SUB161(auVar13 >> 0x4f,0) & 1) == 0) && (SUB161(auVar13 >> 0x57,0) & 1) == 0) &&
             (SUB161(auVar13 >> 0x5f,0) & 1) == 0) && (SUB161(auVar13 >> 0x67,0) & 1) == 0) &&
           (SUB161(auVar13 >> 0x6f,0) & 1) == 0) && (SUB161(auVar13 >> 0x77,0) & 1) == 0) &&
          -1 < auVar13[0xf]) {
        uVar9 = 0xf;
      }
LAB_1013f65e:
      pauVar5 = param_1;
      cVar17 = auVar18[0];
      if (((uint)pauVar5 & 0xfff) < 0xff1) goto code_r0x1013f66d;
      goto LAB_1013f694;
    }
  }
  else if ((*param_2)[0] != '\0') {
    if (0xff0 < ((uint)param_2 & 0xfff)) {
      iVar7 = 0xf;
      pauVar5 = param_2;
      do {
        puVar2 = *pauVar5;
        pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1);
        do {
          auVar18._0_8_ = in_XMM0._0_8_;
          auVar18._8_8_ = in_XMM0._8_8_ & 0xffffffffffffff | (ulonglong)(byte)*puVar2 << 0x38;
          in_XMM0 = auVar18 >> 8;
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) goto LAB_1013f74d;
        } while (*puVar2 == 0);
      } while( true );
    }
    in_XMM0 = *param_2;
LAB_1013f74d:
    do {
      pauVar8 = param_1;
      pauVar5 = param_2;
      if (((uint)pauVar8 & 0xfff) < 0xff1) goto LAB_1013f76c;
      if ((*pauVar8)[0] == '\0') {
        return (undefined1 (*) [16])0x0;
      }
      pauVar4 = pauVar8;
      if (in_XMM0[0] == (*pauVar8)[0]) goto LAB_1013f783;
      param_1 = (undefined1 (*) [16])(*pauVar8 + 1);
    } while( true );
  }
  return param_1;
LAB_1013f76c:
  iVar7 = pcmpistri(in_XMM0,*pauVar8,0xc);
  param_1 = pauVar8 + 1;
  if (pauVar8 >= (undefined1 (*) [16])0xfffffff0 || pauVar8 + 1 == (undefined1 (*) [16])0x0) {
    if (pauVar8 < (undefined1 (*) [16])0xfffffff0) {
      return (undefined1 (*) [16])0x0;
    }
    pauVar8 = (undefined1 (*) [16])(*pauVar8 + iVar7);
    pauVar4 = pauVar8;
LAB_1013f783:
    while( true ) {
      for (; (0xff0 < ((uint)pauVar8 & 0xfff) || (0xff0 < ((uint)pauVar5 & 0xfff)));
          pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1)) {
        if ((*pauVar5)[0] == '\0') {
          return pauVar4;
        }
        if ((*pauVar5)[0] != (*pauVar8)[0]) goto LAB_1013f746;
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
      }
      pauVar10 = pauVar5 + 1;
      pcmpistri(*pauVar5,*pauVar8,0xc);
      if (!SCARRY4((int)pauVar5,0x10)) break;
      pauVar5 = pauVar10;
      pauVar8 = pauVar8 + 1;
      if ((int)pauVar10 < 0) {
        return pauVar4;
      }
    }
LAB_1013f746:
    param_1 = (undefined1 (*) [16])(*pauVar4 + 1);
  }
  goto LAB_1013f74d;
code_r0x1013f66d:
  auVar16 = SUB1615((undefined1  [16])0x0,1);
  auVar14[0] = -((*pauVar5)[0] == '\0');
  auVar14[1] = -((*pauVar5)[1] == '\0');
  auVar14[2] = -((*pauVar5)[2] == '\0');
  auVar14[3] = -((*pauVar5)[3] == '\0');
  auVar14[4] = -((*pauVar5)[4] == '\0');
  auVar14[5] = -((*pauVar5)[5] == '\0');
  auVar14[6] = -((*pauVar5)[6] == '\0');
  auVar14[7] = -((*pauVar5)[7] == '\0');
  auVar14[8] = -((*pauVar5)[8] == '\0');
  auVar14[9] = -(auVar16[8] == (*pauVar5)[9]);
  auVar14[10] = -(auVar16[9] == (*pauVar5)[10]);
  auVar14[0xb] = -(auVar16[10] == (*pauVar5)[0xb]);
  auVar14[0xc] = -(auVar16[0xb] == (*pauVar5)[0xc]);
  auVar14[0xd] = -(auVar16[0xc] == (*pauVar5)[0xd]);
  auVar14[0xe] = -(auVar16[0xd] == (*pauVar5)[0xe]);
  auVar14[0xf] = -(auVar16[0xe] == (*pauVar5)[0xf]);
  auVar11[0] = -((*pauVar5)[0] == cVar17);
  auVar11[1] = -((*pauVar5)[1] == auVar18[1]);
  auVar11[2] = -((*pauVar5)[2] == auVar18[2]);
  auVar11[3] = -((*pauVar5)[3] == auVar18[3]);
  auVar11[4] = -((*pauVar5)[4] == auVar18[4]);
  auVar11[5] = -((*pauVar5)[5] == auVar18[5]);
  auVar11[6] = -((*pauVar5)[6] == auVar18[6]);
  auVar11[7] = -((*pauVar5)[7] == auVar18[7]);
  auVar11[8] = -((*pauVar5)[8] == cVar17);
  auVar11[9] = -((*pauVar5)[9] == auVar18[1]);
  auVar11[10] = -((*pauVar5)[10] == auVar18[2]);
  auVar11[0xb] = -((*pauVar5)[0xb] == auVar18[3]);
  auVar11[0xc] = -((*pauVar5)[0xc] == auVar18[4]);
  auVar11[0xd] = -((*pauVar5)[0xd] == auVar18[5]);
  auVar11[0xe] = -((*pauVar5)[0xe] == auVar18[6]);
  auVar11[0xf] = -((*pauVar5)[0xf] == auVar18[7]);
  auVar11 = auVar11 | auVar14;
  uVar1 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar11[0xf] >> 7) << 0xf;
  param_1 = pauVar5 + 1;
  if (uVar1 != 0) {
    iVar7 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
      }
    }
    pauVar5 = (undefined1 (*) [16])(*pauVar5 + iVar7);
LAB_1013f694:
    if ((*pauVar5)[0] == '\0') {
      return (undefined1 (*) [16])0x0;
    }
    param_1 = (undefined1 (*) [16])(*pauVar5 + 1);
    if (cVar17 == (*pauVar5)[0]) {
      pcVar6 = *param_2 + 1;
      pauVar8 = param_1;
LAB_1013f6a7:
      for (; ((uVar9 & (uint)pcVar6) == 0 && (((uint)pauVar8 & 0xfff) < 0xff1));
          pauVar8 = pauVar8 + 1) {
        auVar15[0] = -(*pcVar6 == '\0');
        auVar15[1] = -(pcVar6[1] == '\0');
        auVar15[2] = -(pcVar6[2] == '\0');
        auVar15[3] = -(pcVar6[3] == '\0');
        auVar15[4] = -(pcVar6[4] == '\0');
        auVar15[5] = -(pcVar6[5] == '\0');
        auVar15[6] = -(pcVar6[6] == '\0');
        auVar15[7] = -(pcVar6[7] == '\0');
        auVar15[8] = -(pcVar6[8] == '\0');
        auVar15[9] = -(pcVar6[9] == '\0');
        auVar15[10] = -(pcVar6[10] == '\0');
        auVar15[0xb] = -(pcVar6[0xb] == '\0');
        auVar15[0xc] = -(pcVar6[0xc] == '\0');
        auVar15[0xd] = -(pcVar6[0xd] == '\0');
        auVar15[0xe] = -(pcVar6[0xe] == '\0');
        auVar15[0xf] = -(pcVar6[0xf] == '\0');
        auVar12[0] = -((*pauVar8)[0] != *pcVar6);
        auVar12[1] = -((*pauVar8)[1] != pcVar6[1]);
        auVar12[2] = -((*pauVar8)[2] != pcVar6[2]);
        auVar12[3] = -((*pauVar8)[3] != pcVar6[3]);
        auVar12[4] = -((*pauVar8)[4] != pcVar6[4]);
        auVar12[5] = -((*pauVar8)[5] != pcVar6[5]);
        auVar12[6] = -((*pauVar8)[6] != pcVar6[6]);
        auVar12[7] = -((*pauVar8)[7] != pcVar6[7]);
        auVar12[8] = -((*pauVar8)[8] != pcVar6[8]);
        auVar12[9] = -((*pauVar8)[9] != pcVar6[9]);
        auVar12[10] = -((*pauVar8)[10] != pcVar6[10]);
        auVar12[0xb] = -((*pauVar8)[0xb] != pcVar6[0xb]);
        auVar12[0xc] = -((*pauVar8)[0xc] != pcVar6[0xc]);
        auVar12[0xd] = -((*pauVar8)[0xd] != pcVar6[0xd]);
        auVar12[0xe] = -((*pauVar8)[0xe] != pcVar6[0xe]);
        auVar12[0xf] = -((*pauVar8)[0xf] != pcVar6[0xf]);
        auVar15 = auVar15 | auVar12;
        uVar1 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar15[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          iVar7 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
            }
          }
          pauVar8 = (undefined1 (*) [16])(*pauVar8 + iVar7);
          pcVar6 = pcVar6 + iVar7;
          break;
        }
        pcVar6 = pcVar6 + 0x10;
      }
      if (*pcVar6 == '\0') {
        return pauVar5;
      }
      if (*pcVar6 == (*pauVar8)[0]) {
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
        pcVar6 = pcVar6 + 1;
        goto LAB_1013f6a7;
      }
    }
  }
  goto LAB_1013f65e;
}

