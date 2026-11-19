// rea decompile_all
// name: UnDecorator::getDataIndirectType
// address: 0x10147273
// body: available
// range: 0x10147273-0x10147908 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(class DName const &,enum
   IndirectionKind,class DName const &,int)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl
UnDecorator::getDataIndirectType(DName *param_1,IndirectionKind param_2,DName *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  StringLiteral *pSVar3;
  undefined4 *puVar4;
  DName *pDVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 uVar8;
  int in_stack_00000014;
  StringLiteral local_84 [8];
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  StringLiteral local_54 [8];
  IndirectionKind local_4c;
  int local_48;
  char *local_44;
  uint local_40;
  char *local_3c;
  uint local_38;
  char *local_34;
  int local_30;
  StringLiteral local_2c [10];
  char local_22;
  char local_21;
  char *local_20;
  uint local_1c;
  char local_15;
  undefined8 local_14;
  char *local_c;
  uint local_8;
  
  local_15 = '\0';
  if (*DAT_10232958 == '\0') {
    if (in_stack_00000014 == 0) {
      if (*(int *)param_2 == 0) {
        if (*(int *)param_4 == 0) goto LAB_101478f7;
      }
      else if (((*(uint *)(param_2 + 4) & 0x100) == 0) && (*(int *)param_4 != 0)) {
        pDVar5 = (DName *)DName::DName((DName *)local_2c,1);
        DName::operator+(pDVar5,(DName *)&local_4c);
        pDVar5 = (DName *)DName::operator+((DName *)&local_4c,(char)local_54);
        DName::operator+(pDVar5,param_1);
        return param_1;
      }
      operator+((DNameStatus)param_1,(DName *)0x1);
      return param_1;
    }
LAB_101478f7:
    DName::DName(param_1,1);
    return param_1;
  }
  if ((*DAT_10232958 != '$') ||
     (getExtendedDataIndirectType((IndirectionKind *)&local_20,(bool *)&param_3,(int)&local_15),
     local_20 == (char *)0x0)) {
    pcVar7 = (char *)0x0;
    local_30 = 0;
    local_34 = (char *)0x0;
    local_38 = 0;
    local_21 = '\0';
    local_22 = '\0';
    uVar6 = (int)*DAT_10232958 - (((*DAT_10232958 < 'A') - 1 & 0x2b) + 0x16);
    local_3c = (char *)0x0;
    do {
      if (uVar6 == 4) {
        if ((~((DAT_10232960 >> 0x10 | DAT_10232960) >> 1) & 1) != 0) {
          uVar8 = UScore(0xb);
          if (pcVar7 == (char *)0x0) {
            pSVar3 = (StringLiteral *)&local_14;
LAB_1014747c:
            local_14 = uVar8;
            DName::operator=((DName *)&local_34,pSVar3);
            pcVar7 = local_34;
          }
          else {
            local_40 = local_30;
            local_44 = pcVar7;
            local_7c = uVar8;
            DName::operator+=((DName *)&local_44,' ');
            piVar2 = (int *)DName::operator+((DName *)&local_44,local_2c);
            pcVar7 = (char *)*piVar2;
            local_30 = piVar2[1];
            local_34 = pcVar7;
          }
        }
      }
      else if (uVar6 == 5) {
        if ((~(DAT_10232960 >> 1) & 1) != 0) {
          if (local_3c == (char *)0x0) {
            uVar8 = UScore(0xd);
            local_74 = uVar8;
            DName::operator=((DName *)&local_3c,(StringLiteral *)&local_74);
          }
          else {
            uVar8 = UScore(0xd);
            local_c = local_3c;
            local_8 = local_38;
            local_6c = uVar8;
            DName::operator+=((DName *)&local_c,' ');
            puVar4 = (undefined4 *)DName::operator+((DName *)&local_c,local_54);
            local_3c = (char *)*puVar4;
            local_38 = puVar4[1];
          }
        }
      }
      else if (uVar6 == 6) {
        if (in_stack_00000014 == 0) goto LAB_10147673;
        local_21 = '\x01';
      }
      else if (uVar6 == 7) {
        if (in_stack_00000014 == 0) goto LAB_10147673;
        local_22 = '\x01';
      }
      else {
        if (uVar6 != 8) {
          if (*DAT_10232958 != '\0') {
            DAT_10232958 = DAT_10232958 + 1;
          }
          if (0x1f < uVar6) goto LAB_10147673;
          local_14._0_4_ = (&PTR_DAT_101eb978)[(int)param_3 * 2];
          local_40 = *(uint *)(&DAT_101eb97c + (int)param_3 * 8);
          local_14._4_4_ = local_40;
          DName::DName((DName *)&local_c,(StringLiteral *)&local_14);
          local_20 = (char *)0x0;
          local_1c = 0;
          DName::operator+=((DName *)&local_20,(DName *)&local_c);
          local_c = local_20;
          local_8 = local_1c;
          if (pcVar7 != (char *)0x0) {
            DName::operator+=((DName *)&local_20,' ');
            puVar4 = (undefined4 *)DName::operator+((DName *)&local_20,(DName *)local_2c);
            local_c = (char *)*puVar4;
            local_8 = puVar4[1];
          }
          if (local_3c != (char *)0x0) {
            local_20 = local_3c;
            local_1c = local_38;
            DName::operator+=((DName *)&local_20,' ');
            puVar4 = (undefined4 *)DName::operator+((DName *)&local_20,(DName *)local_2c);
            local_c = (char *)*puVar4;
            local_8 = puVar4[1];
          }
          if ((uVar6 & 0x10) != 0) {
            if (in_stack_00000014 != 0) goto LAB_10147673;
            if ((int)local_40 < 1) {
              if (*DAT_10232958 != '\0') {
                pDVar5 = (DName *)getScope();
                DName::operator|=((DName *)&local_c,pDVar5);
                goto LAB_1014765d;
              }
            }
            else {
              local_14._0_4_ = "::";
              local_14._4_4_ = 2;
              pDVar5 = (DName *)DName::DName((DName *)local_2c,(StringLiteral *)&local_14);
              DName::operator+(pDVar5,(DName *)&local_14);
              local_c = (char *)local_14;
              local_8 = local_14._4_4_;
              if (*DAT_10232958 == '\0') {
                pDVar5 = (DName *)DName::DName((DName *)local_2c,1);
                DName::operator+(pDVar5,(DName *)&local_14);
                local_c = (char *)local_14;
                local_8 = local_14._4_4_;
              }
              else {
                pDVar5 = (DName *)getScope();
                puVar4 = (undefined4 *)DName::operator+(pDVar5,(DName *)local_54);
                local_c = (char *)*puVar4;
                local_8 = puVar4[1];
              }
LAB_1014765d:
              cVar1 = *DAT_10232958;
              if (cVar1 != '\0') {
                DAT_10232958 = DAT_10232958 + 1;
                if (cVar1 != '@') goto LAB_10147673;
                goto LAB_101476a8;
              }
            }
            if ((char)local_8 < '\x02') {
              if (local_c == (char *)0x0) {
                DName::operator=((DName *)&local_c,1);
              }
              else {
                DName::append<DNameStatusNode>
                          ((DName *)&local_c,(DNameStatusNode *)&PTR_vftable_101ec55c);
              }
            }
          }
LAB_101476a8:
          if ((~(DAT_10232960 >> 1) & 1) == 0) {
            if ((uVar6 & 0xc) == 0xc) {
              pDVar5 = (DName *)getBasedType();
              DName::operator|=((DName *)&local_c,pDVar5);
            }
          }
          else if ((uVar6 & 0xc) == 0xc) {
            if (in_stack_00000014 != 0) {
LAB_10147673:
              *(undefined4 *)(param_1 + 4) = 0;
              *(undefined4 *)param_1 = 0;
              param_1[4] = (DName)0x2;
              return param_1;
            }
            pDVar5 = (DName *)getBasedType();
            puVar4 = (undefined4 *)DName::operator+(pDVar5,(DName *)local_54);
            local_c = (char *)*puVar4;
            local_8 = puVar4[1];
          }
          if ((uVar6 & 2) != 0) {
            local_14._0_4_ = "volatile ";
            local_14._4_4_ = 9;
            pDVar5 = (DName *)DName::DName((DName *)local_2c,(StringLiteral *)&local_14);
            DName::operator+(pDVar5,(DName *)&local_14);
            local_c = (char *)local_14;
            local_8 = local_14._4_4_;
          }
          if ((uVar6 & 1) != 0) {
            local_14._0_4_ = "const ";
            local_14._4_4_ = 6;
            pDVar5 = (DName *)DName::DName((DName *)local_2c,(StringLiteral *)&local_14);
            DName::operator+(pDVar5,(DName *)&local_14);
            local_c = (char *)local_14;
            local_8 = local_14._4_4_;
          }
          if (local_21 != '\0') {
            local_20 = local_c;
            local_1c = local_8;
            local_14._0_4_ = "& ";
            local_14._4_4_ = 2;
            DName::operator+=((DName *)&local_20,(StringLiteral *)&local_14);
            local_c = local_20;
            local_8 = local_1c;
          }
          if (local_22 != '\0') {
            local_20 = local_c;
            local_1c = local_8;
            local_14._0_4_ = "&& ";
            local_14._4_4_ = 3;
            DName::operator+=((DName *)&local_20,(StringLiteral *)&local_14);
            local_c = local_20;
            local_8 = local_1c;
          }
          pcVar7 = local_c;
          uVar6 = local_8;
          if (in_stack_00000014 != 0) goto LAB_10147862;
          if (*(char **)param_2 == (char *)0x0) {
            if (*(int *)param_4 == 0) goto LAB_10147862;
LAB_1014784b:
            pDVar5 = (DName *)operator+((char)local_2c,(DName *)0x20);
          }
          else {
            uVar6 = *(uint *)(param_2 + 4);
            if (((uVar6 & 0x100) != 0) || (*(int *)param_4 == 0)) {
              pcVar7 = *(char **)param_2;
              if ((uVar6 & 0x800) != 0) goto LAB_10147862;
              goto LAB_1014784b;
            }
            pDVar5 = (DName *)operator+((char)local_2c,(DName *)0x20);
            pDVar5 = (DName *)DName::operator+(pDVar5,(char)local_54);
            pDVar5 = (DName *)DName::operator+(pDVar5,(DName *)local_84);
          }
          DName::operator+=((DName *)&local_c,pDVar5);
          pcVar7 = local_c;
          uVar6 = local_8;
LAB_10147862:
          local_8 = uVar6;
          local_c = pcVar7;
          uVar6 = local_8 | 0x100;
          if (local_15 != '\0') {
            uVar6 = local_8 | 0x2100;
          }
          *(char **)param_1 = local_c;
          *(uint *)(param_1 + 4) = uVar6;
          return param_1;
        }
        if ((~(DAT_10232960 >> 1) & 1) != 0) {
          uVar8 = UScore(0xc);
          if (pcVar7 == (char *)0x0) {
            pSVar3 = (StringLiteral *)&local_64;
            local_64 = uVar8;
            uVar8 = local_14;
            goto LAB_1014747c;
          }
          local_1c = local_30;
          local_20 = pcVar7;
          local_5c = uVar8;
          DName::operator+=((DName *)&local_20,' ');
          piVar2 = (int *)DName::operator+((DName *)&local_20,local_84);
          local_30 = piVar2[1];
          pcVar7 = (char *)*piVar2;
          local_34 = (char *)*piVar2;
        }
      }
      DAT_10232958 = DAT_10232958 + 1;
      if (*DAT_10232958 == '$') {
        getExtendedDataIndirectType(&local_4c,(bool *)&param_3,(int)&local_15);
        if (local_4c != 0) goto LAB_10147883;
      }
      uVar6 = (int)*DAT_10232958 - (((*DAT_10232958 < 'A') - 1 & 0x2b) + 0x16);
    } while( true );
  }
  *(char **)param_1 = local_20;
  goto LAB_101472be;
LAB_10147883:
  *(IndirectionKind *)param_1 = local_4c;
  local_1c = local_48;
LAB_101472be:
  *(uint *)(param_1 + 4) = local_1c;
  return param_1;
}

