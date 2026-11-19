// rea decompile_all
// name: UnDecorator::getOperatorName
// address: 0x1014897e
// body: available
// range: 0x1014897e-0x10149002 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getOperatorName(bool,bool *)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getOperatorName(bool param_1,bool *param_2)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  DName *pDVar6;
  int *piVar7;
  StringLiteral *pSVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined3 in_stack_00000005;
  undefined1 *in_stack_0000000c;
  DName local_2c [8];
  char *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  uint local_10;
  char *local_c;
  uint local_8;
  
  cVar5 = *DAT_10232958;
  pcVar11 = DAT_10232958 + 1;
  bVar4 = false;
  local_c = (char *)0x0;
  local_8 = 0;
  local_1c = 0;
  local_18 = 0;
  if (cVar5 < 'B') {
    if (cVar5 == 'A') goto LAB_10148fd1;
    pcVar2 = DAT_10232958;
    if (cVar5 == '\0') goto LAB_10148b2d;
    if (cVar5 < '0') goto switchD_10148eaa_default;
    if ('1' < cVar5) {
      if ('9' < cVar5) goto switchD_10148eaa_default;
      pSVar8 = (StringLiteral *)(&DAT_101eb528 + *DAT_10232958 * 8);
      DAT_10232958 = pcVar11;
      goto LAB_101489de;
    }
    local_10 = 0;
    local_14 = (int *)0x0;
    if ((char)param_2 != '\0') {
      DAT_10232958 = pcVar11;
      FUN_10149e40(&local_24);
      pDVar6 = (DName *)operator+((char)&local_1c,(DName *)0x3c);
      DName::operator+=((DName *)&local_14,pDVar6);
      if (local_14 != (int *)0x0) {
        pcVar3 = *(code **)(*local_14 + 8);
        guard_check_icall();
        cVar5 = (*pcVar3)();
        if (cVar5 == '>') {
          DName::operator+=((DName *)&local_14,' ');
        }
      }
      DName::operator+=((DName *)&local_14,'>');
      if (in_stack_0000000c != (undefined1 *)0x0) {
        *in_stack_0000000c = 1;
      }
      if (*DAT_10232958 == '\0') {
        *(int **)_param_1 = local_14;
        local_8 = local_10;
        goto LAB_10148a2d;
      }
      pcVar11 = DAT_10232958 + 1;
    }
    piVar10 = local_14;
    DAT_10232958 = pcVar11;
    piVar7 = (int *)getZName(SUB41(&local_24,0),false);
    local_c = (char *)*piVar7;
    local_8 = piVar7[1];
    DAT_10232958 = pcVar11;
    if ((local_c != (char *)0x0) && (pcVar11[-1] == '1')) {
      piVar7 = (int *)operator+((char)&local_24,(DName *)0x7e);
      local_c = (char *)*piVar7;
      local_8 = piVar7[1];
    }
    if (piVar10 != (int *)0x0) {
      DName::operator+=((DName *)&local_c,(DName *)&local_14);
    }
LAB_10148a22:
    *(char **)_param_1 = local_c;
  }
  else {
    if (cVar5 == 'B') {
      bVar4 = true;
LAB_10148fd1:
      cVar5 = *DAT_10232958;
      DAT_10232958 = pcVar11;
      DName::operator=((DName *)&local_c,(StringLiteral *)(&DAT_101eb4f0 + cVar5 * 8));
      pcVar1 = DAT_10232958;
      if (bVar4) {
        if (local_c != (char *)0x0) {
          local_8 = local_8 | 0x200;
        }
      }
      else {
LAB_101489e7:
        DAT_10232958 = pcVar1;
        if (local_c != (char *)0x0) {
          local_24 = "operator";
          local_20 = 8;
          pDVar6 = (DName *)DName::DName(local_2c,(StringLiteral *)&local_24);
          DName::operator+(pDVar6,(DName *)&local_24);
          local_c = local_24;
          local_8 = local_20;
        }
      }
      goto LAB_10148a22;
    }
    if (cVar5 < 'C') goto switchD_10148eaa_default;
    if (cVar5 < '[') goto LAB_10148fd1;
    if (cVar5 != '_') goto switchD_10148eaa_default;
    cVar5 = *pcVar11;
    pcVar1 = DAT_10232958 + 2;
    if (cVar5 < 'P') {
      if (cVar5 < 'D') {
        if (cVar5 < ':') {
          if (cVar5 == '9') {
            pcVar11 = DAT_10232958 + 1;
            DAT_10232958 = pcVar1;
            DName::DName((DName *)&local_1c,
                         (StringLiteral *)(&PTR_s___pascal_101eb648 + *pcVar11 * 2));
            local_18 = local_18 | 0x8000;
LAB_10148bee:
            *(int *)_param_1 = local_1c;
            *(uint *)(_param_1 + 4) = local_18;
            return _param_1;
          }
          pcVar2 = pcVar11;
          if (cVar5 == '\0') goto LAB_10148b2d;
          pcVar11 = pcVar1;
          if (cVar5 < '0') goto switchD_10148eaa_default;
          if ('6' < cVar5) {
            if (cVar5 < '9') {
              pSVar8 = (StringLiteral *)(&PTR_s___pascal_101eb648 + DAT_10232958[1] * 2);
              DAT_10232958 = pcVar1;
              goto LAB_10148bab;
            }
            goto switchD_10148eaa_default;
          }
          pSVar8 = (StringLiteral *)(&PTR_s___pascal_101eb648 + DAT_10232958[1] * 2);
          DAT_10232958 = pcVar1;
          goto LAB_101489de;
        }
        if (cVar5 == '?') {
          DAT_10232958 = DAT_10232958 + 3;
          pcVar2 = pcVar1;
          if (*pcVar1 != '\0') {
            if (*pcVar1 == '0') {
              getStringEncoding((PrefixKind)&local_1c,1);
              *(int *)_param_1 = local_1c;
              *(uint *)(_param_1 + 4) = local_18 | 0x1000;
              return _param_1;
            }
            *(undefined4 *)(_param_1 + 4) = 0;
            _param_1[4] = (DName)0x2;
            *(undefined4 *)_param_1 = 0;
            return _param_1;
          }
LAB_10148b2d:
          DAT_10232958 = pcVar2;
          DName::DName(_param_1,1);
          return _param_1;
        }
        pcVar11 = pcVar1;
        if (cVar5 < 'A') goto switchD_10148eaa_default;
        if ('B' < cVar5) {
          DAT_10232958 = pcVar1;
          getStringEncoding((PrefixKind)&local_1c,0);
          local_18 = local_18 | 0x1000;
          goto LAB_10148bee;
        }
      }
LAB_10148f9d:
      pSVar8 = (StringLiteral *)("Bad dynamic_cast!" + DAT_10232958[1] * 8 + 8);
      DAT_10232958 = pcVar1;
LAB_10148bab:
      DName::DName(_param_1,pSVar8);
      return _param_1;
    }
    if (cVar5 < 'U') {
      if (cVar5 < 'S') {
        if (cVar5 == 'P') {
          pcVar11 = DAT_10232958 + 1;
          DAT_10232958 = pcVar1;
          DName::operator=((DName *)&local_c,
                           (StringLiteral *)("Bad dynamic_cast!" + *pcVar11 * 8 + 8));
          piVar10 = (int *)getOperatorName(SUB41(local_2c,0),(bool *)0x0);
          local_1c = *piVar10;
          local_18 = piVar10[1];
          pcVar11 = DAT_10232958;
          if ((local_1c != 0) && ((local_18 & 0x400) != 0)) goto switchD_10148eaa_default;
        }
        else {
          if (cVar5 == 'Q') goto LAB_101489e7;
          pcVar11 = pcVar1;
          if (cVar5 != 'R') goto switchD_10148eaa_default;
          pcVar11 = DAT_10232958 + 1;
          DAT_10232958 = pcVar1;
          DName::operator=((DName *)&local_c,
                           (StringLiteral *)("Bad dynamic_cast!" + *pcVar11 * 8 + 8));
          if (*DAT_10232958 == '\0') {
            DName::operator+((DName *)&local_c,(DNameStatus)_param_1);
            return _param_1;
          }
          uVar9 = (int)*DAT_10232958 - 0x30;
          pcVar11 = DAT_10232958;
          if (((int)uVar9 < 0) || (4 < uVar9)) goto switchD_10148eaa_default;
          DName::operator=((DName *)&local_1c,
                           (StringLiteral *)(&PTR_s_Type_Descriptor__101eb950 + uVar9 * 2));
          cVar5 = *DAT_10232958;
          pcVar11 = DAT_10232958 + 1;
          if (cVar5 == '0') {
            DAT_10232958 = pcVar11;
            getDataType((DName *)&local_24);
            local_14 = (int *)local_24;
            local_10 = local_20;
            DName::operator+=((DName *)&local_14,' ');
            pDVar6 = (DName *)DName::operator+((DName *)&local_14,local_2c);
            goto LAB_10148e5a;
          }
          if (cVar5 == '1') {
            local_14 = (int *)local_c;
            local_10 = local_8;
            DAT_10232958 = pcVar11;
            DName::operator+=((DName *)&local_14,(DName *)&local_1c);
            pDVar6 = (DName *)getSignedDimension();
            pDVar6 = (DName *)DName::operator+(pDVar6,(char)&local_1c);
            DName::operator+=((DName *)&local_14,pDVar6);
            pDVar6 = (DName *)getSignedDimension();
            pDVar6 = (DName *)DName::operator+(pDVar6,(char)&local_1c);
            DName::operator+=((DName *)&local_14,pDVar6);
            pDVar6 = (DName *)getSignedDimension();
            pDVar6 = (DName *)DName::operator+(pDVar6,(char)&local_1c);
            DName::operator+=((DName *)&local_14,pDVar6);
            pDVar6 = (DName *)getDimension(SUB41(&local_24,0));
            pDVar6 = (DName *)DName::operator+(pDVar6,(char)&local_1c);
            DName::operator+=((DName *)&local_14,pDVar6);
            DName::operator+((DName *)&local_14,param_1);
            return _param_1;
          }
          pcVar2 = DAT_10232958;
          if ((cVar5 < '2') || ('4' < cVar5)) goto LAB_10148b2d;
        }
        DAT_10232958 = pcVar11;
        pDVar6 = (DName *)&local_c;
LAB_10148e5a:
        DName::operator+(pDVar6,_param_1);
        return _param_1;
      }
      goto LAB_10148f9d;
    }
    if (cVar5 < 'W') {
      pSVar8 = (StringLiteral *)("Bad dynamic_cast!" + DAT_10232958[1] * 8 + 8);
      DAT_10232958 = pcVar1;
LAB_101489de:
      DName::operator=((DName *)&local_c,pSVar8);
      pcVar1 = DAT_10232958;
      goto LAB_101489e7;
    }
    pcVar11 = pcVar1;
    if (cVar5 < 'X') goto switchD_10148eaa_default;
    if (cVar5 < 'Z') goto LAB_10148f9d;
    if (cVar5 != '_') goto switchD_10148eaa_default;
    pcVar2 = DAT_10232958 + 3;
    pcVar11 = pcVar2;
    switch(*pcVar1) {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'L':
    case 'M':
      pSVar8 = (StringLiteral *)(&PTR_DAT_101eb6d8 + DAT_10232958[2] * 2);
      DAT_10232958 = pcVar2;
      goto LAB_10148bab;
    case 'E':
    case 'F':
      pcVar11 = DAT_10232958 + 2;
      DAT_10232958 = pcVar2;
      DName::DName((DName *)&local_1c,(StringLiteral *)(&PTR_DAT_101eb6d8 + *pcVar11 * 2));
      if (*DAT_10232958 == '?') {
        pDVar6 = (DName *)getDecoratedName();
        DName::operator+=((DName *)&local_1c,pDVar6);
        if (*DAT_10232958 == '@') {
          DAT_10232958 = DAT_10232958 + 1;
        }
      }
      else {
        pDVar6 = (DName *)getSymbolName();
        DName::operator+=((DName *)&local_1c,pDVar6);
      }
      local_24 = "\'\'";
      local_20 = 2;
      DName::operator+=((DName *)&local_1c,(StringLiteral *)&local_24);
      break;
    case 'K':
      pcVar11 = DAT_10232958 + 2;
      DAT_10232958 = pcVar2;
      DName::DName((DName *)&local_1c,(StringLiteral *)(&PTR_DAT_101eb6d8 + *pcVar11 * 2));
      while (cVar5 = *DAT_10232958, cVar5 != '\0') {
        if (cVar5 == '@') {
          DAT_10232958 = DAT_10232958 + 1;
          break;
        }
        DAT_10232958 = DAT_10232958 + 1;
        DName::operator+=((DName *)&local_1c,cVar5);
      }
      break;
    case 'N':
      DAT_10232958 = DAT_10232958 + 4;
      pcVar11 = DAT_10232958;
      if (*pcVar2 == '2') {
        getValueObject();
        return _param_1;
      }
    default:
switchD_10148eaa_default:
      DAT_10232958 = pcVar11;
      *(undefined4 *)(_param_1 + 4) = 0;
      _param_1[4] = (DName)0x2;
      *(undefined4 *)_param_1 = 0;
      return _param_1;
    }
    *(int *)_param_1 = local_1c;
    local_8 = local_18;
  }
LAB_10148a2d:
  *(uint *)(_param_1 + 4) = local_8;
  return _param_1;
}

