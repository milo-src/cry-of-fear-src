// rea decompile_all
// name: UnDecorator::getScope
// address: 0x1014966b
// body: available
// range: 0x1014966b-0x10149a1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScope(void)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getScope(void)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  DName *pDVar5;
  undefined4 *puVar6;
  DName *this;
  int *piVar7;
  int iVar8;
  int iVar9;
  DName *in_stack_00000004;
  undefined1 local_f4 [8];
  DName local_ec [8];
  DName local_e4 [8];
  undefined1 local_dc [8];
  undefined1 local_d4 [16];
  DName local_c4 [8];
  undefined1 local_bc [8];
  DName local_b4 [8];
  undefined1 local_ac [8];
  undefined1 local_a4 [8];
  undefined1 local_9c [8];
  undefined1 local_94 [8];
  DName local_8c [8];
  DName local_84 [16];
  undefined1 local_74 [8];
  DName local_6c [8];
  DName local_64 [8];
  StringLiteral local_5c [8];
  DName local_54 [8];
  DName local_4c [8];
  char *local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  bVar3 = false;
  do {
    if ((*DAT_10232958 == '\0') || (*DAT_10232958 == '@')) break;
    if ((DAT_10232964 != '\0') && (DAT_10232965 == '\0')) {
      return in_stack_00000004;
    }
    if (*(int *)in_stack_00000004 != 0) {
      local_2c = &DAT_101ebfd4;
      local_28 = 2;
      pDVar5 = (DName *)DName::DName(local_6c,(StringLiteral *)&local_2c);
      DName::operator+(pDVar5,(DName *)&local_34);
      *(undefined4 *)in_stack_00000004 = local_34;
      *(undefined4 *)(in_stack_00000004 + 4) = local_30;
      if (bVar3) {
        puVar6 = (undefined4 *)operator+((char)local_74,(DName *)0x5b);
        bVar3 = false;
        *(undefined4 *)in_stack_00000004 = *puVar6;
        *(undefined4 *)(in_stack_00000004 + 4) = puVar6[1];
      }
    }
    if (*DAT_10232958 == '?') {
      pcVar1 = DAT_10232958 + 1;
      cVar2 = *pcVar1;
      if (cVar2 == '$') {
        this = (DName *)getZName(SUB41(local_f4,0),true);
        pDVar5 = local_54;
        goto LAB_10149990;
      }
      if (cVar2 != '%') {
        if (cVar2 == '?') {
          if ((DAT_10232958[2] != '_') || (DAT_10232958[3] != '?')) {
            DAT_10232958 = pcVar1;
            getDecoratedName();
            pDVar5 = (DName *)operator+((char)local_d4,(DName *)0x60);
            this = (DName *)DName::operator+(pDVar5,(char)local_dc);
            pDVar5 = local_e4;
            goto LAB_10149990;
          }
          DAT_10232958 = DAT_10232958 + 2;
          pDVar5 = (DName *)getOperatorName(SUB41(local_bc,0),(bool *)0x0);
          puVar6 = (undefined4 *)DName::operator+(pDVar5,local_c4);
          *(undefined4 *)in_stack_00000004 = *puVar6;
          *(undefined4 *)(in_stack_00000004 + 4) = puVar6[1];
          if (*DAT_10232958 == '@') {
LAB_101498c3:
            DAT_10232958 = DAT_10232958 + 1;
          }
          goto LAB_101499a5;
        }
        if (cVar2 == 'A') goto LAB_10149907;
        if (cVar2 != 'I') {
          if (cVar2 == 'Q') {
            DAT_10232958 = DAT_10232958 + 2;
            local_8 = 0;
            local_c = 0;
            do {
              iVar4 = local_c;
              getZName(SUB41(&local_24,0),true);
              if ((char)local_20 == '\0') {
                iVar8 = local_20;
                iVar9 = local_24;
                if (iVar4 != 0) {
                  local_1c = local_24;
                  local_18 = local_20;
                  local_3c = &DAT_101ebfd4;
                  local_38 = 2;
                  DName::operator+=((DName *)&local_1c,(StringLiteral *)&local_3c);
                  piVar7 = (int *)DName::operator+((DName *)&local_1c,local_8c);
                  iVar8 = piVar7[1];
                  iVar9 = *piVar7;
                }
              }
              else {
                iVar8 = 2;
                iVar9 = 0;
              }
              local_c = iVar9;
              local_8 = iVar8;
              if ((char)iVar8 != '\0') {
                *(undefined4 *)(in_stack_00000004 + 4) = 0;
                *(undefined4 *)in_stack_00000004 = 0;
                in_stack_00000004[4] = (DName)0x2;
                goto LAB_101499a5;
              }
            } while (*DAT_10232958 != '@');
            pDVar5 = (DName *)operator+((char)local_94,(DName *)0x5b);
            puVar6 = (undefined4 *)DName::operator+(pDVar5,(char)local_9c);
            *(undefined4 *)in_stack_00000004 = *puVar6;
            *(undefined4 *)(in_stack_00000004 + 4) = puVar6[1];
            goto LAB_101498c3;
          }
          DAT_10232958 = pcVar1;
          this = (DName *)getLexicalFrame();
          pDVar5 = local_84;
          goto LAB_10149990;
        }
        DAT_10232958 = DAT_10232958 + 2;
        pDVar5 = (DName *)getZName(SUB41(local_a4,0),true);
        pDVar5 = (DName *)DName::operator+(pDVar5,(char)local_ac);
        puVar6 = (undefined4 *)DName::operator+(pDVar5,local_b4);
        bVar3 = true;
        goto LAB_10149999;
      }
LAB_10149907:
      DAT_10232958 = pcVar1;
      DName::DName(local_4c,&DAT_10232958,'@');
      local_44 = "`anonymous namespace\'";
      local_40 = 0x15;
      pDVar5 = (DName *)DName::DName(local_ec,(StringLiteral *)&local_44);
      DName::operator+(pDVar5,(DName *)&local_14);
      *(undefined **)in_stack_00000004 = local_14;
      *(undefined4 *)(in_stack_00000004 + 4) = local_10;
      if (*(int *)DAT_10232950 != 9) {
        Replicator::operator+=(DAT_10232950,local_4c);
      }
    }
    else {
      this = (DName *)getZName(SUB41(local_5c,0),true);
      pDVar5 = local_64;
LAB_10149990:
      puVar6 = (undefined4 *)DName::operator+(this,pDVar5);
LAB_10149999:
      *(undefined4 *)in_stack_00000004 = *puVar6;
      *(undefined4 *)(in_stack_00000004 + 4) = puVar6[1];
    }
LAB_101499a5:
  } while (in_stack_00000004[4] == (DName)0x0);
  if (*DAT_10232958 == '\0') {
    if (*(int *)in_stack_00000004 == 0) {
      DName::operator=(in_stack_00000004,1);
    }
    else {
      local_14 = &DAT_101ebfd4;
      local_10 = 2;
      pDVar5 = (DName *)DName::DName(local_64,1);
      pDVar5 = (DName *)DName::operator+(pDVar5,local_5c);
      puVar6 = (undefined4 *)DName::operator+(pDVar5,local_54);
      *(undefined4 *)in_stack_00000004 = *puVar6;
      *(undefined4 *)(in_stack_00000004 + 4) = puVar6[1];
    }
  }
  else if (*DAT_10232958 != '@') {
    *(undefined4 *)(in_stack_00000004 + 4) = 0;
    *(undefined4 *)in_stack_00000004 = 0;
    in_stack_00000004[4] = (DName)0x2;
  }
  return in_stack_00000004;
}

