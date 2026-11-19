// rea decompile_all
// name: UnDecorator::getBasicDataType
// address: 0x10146bb2
// body: available
// range: 0x10146bb2-0x10147080 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getBasicDataType(class DName const &)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getBasicDataType(DName *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 *puVar4;
  DName *pDVar5;
  uint uVar6;
  int *in_stack_00000008;
  char *local_20;
  uint local_1c;
  char *local_18;
  uint local_14;
  char *local_10;
  uint local_c;
  byte local_5;
  
  if (*DAT_10232958 == 0) {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  local_10 = (char *)0x0;
  pbVar1 = DAT_10232958 + 1;
  local_c = 0;
  uVar6 = (uint)*DAT_10232958;
  if (0x4e < uVar6) {
    if (uVar6 == 0x4f) {
      local_20 = "long ";
      local_1c = 5;
      DAT_10232958 = pbVar1;
      DName::operator=((DName *)&local_10,(StringLiteral *)&local_20);
      pbVar1 = DAT_10232958;
      goto LAB_10146fba;
    }
    if (uVar6 < 0x50) {
switchD_10146c02_caseD_4c:
      puVar4 = (undefined4 *)getECSUDataType();
      local_10 = (char *)*puVar4;
      local_14 = puVar4[1];
      local_c = local_14;
      if (local_10 == (char *)0x0) {
        local_18 = (char *)0x0;
LAB_10146e4c:
        *(char **)param_1 = local_18;
        *(uint *)(param_1 + 4) = local_14;
        return param_1;
      }
      goto LAB_10146fd4;
    }
    if (uVar6 < 0x54) {
      uVar6 = uVar6 & 3;
      DAT_10232958 = pbVar1;
LAB_10146e93:
      local_10 = (char *)0x0;
      local_c = 0;
      local_20 = (char *)*in_stack_00000008;
      local_1c = in_stack_00000008[1];
      if (uVar6 != 0xfffffffe) {
        if (local_20 == (char *)0x0) {
          if ((uVar6 & 1) == 0) {
            if ((uVar6 & 2) != 0) {
              local_18 = "volatile";
              local_14 = 8;
              DName::operator=((DName *)&local_10,(StringLiteral *)&local_18);
            }
          }
          else {
            local_18 = "const";
            local_14 = 5;
            DName::operator=((DName *)&local_10,(StringLiteral *)&local_18);
            if ((uVar6 & 2) != 0) {
              local_18 = " volatile";
              local_14 = 9;
              DName::operator+=((DName *)&local_10,(StringLiteral *)&local_18);
            }
          }
        }
        getPtrRefType(param_1,(DName *)&local_10,(IndirectionKind)&local_20);
        return param_1;
      }
      local_1c = local_1c | 0x800;
      getPtrRefType((DName *)&local_18,(DName *)&local_10,(IndirectionKind)&local_20);
      if ((local_14 & 0x800) == 0) {
        local_20 = "[]";
        local_1c = 2;
        DName::operator+=((DName *)&local_18,(StringLiteral *)&local_20);
      }
      goto LAB_10146e4c;
    }
    if (uVar6 == 0x58) {
      local_20 = "void";
      local_1c = 4;
      goto LAB_10146c5f;
    }
    if (uVar6 != 0x5f) goto switchD_10146c02_caseD_4c;
    local_5 = *pbVar1;
    pbVar2 = DAT_10232958 + 2;
    uVar6 = (uint)local_5;
    if (0x4e < uVar6) {
      if (uVar6 < 0x54) {
        if (uVar6 == 0x53) {
          local_20 = "char16_t";
LAB_10146d9f:
          local_1c = 8;
          goto LAB_10146cf3;
        }
        if (uVar6 == 0x4f) {
          uVar6 = 0xfffffffe;
          DAT_10232958 = pbVar2;
          goto LAB_10146e93;
        }
        if (uVar6 != 0x51) {
          if (uVar6 != 0x52) goto LAB_10146e59;
          local_20 = "<unknown>";
          local_1c = 9;
          goto LAB_10146cf3;
        }
        local_20 = "char8_t";
      }
      else {
        if (uVar6 == 0x55) {
          local_20 = "char32_t";
          goto LAB_10146d9f;
        }
        if (uVar6 != 0x57) {
          if (uVar6 - 0x58 < 2) {
            DAT_10232958 = DAT_10232958 + 1;
            puVar4 = (undefined4 *)getECSUDataType();
            local_10 = (char *)*puVar4;
            local_14 = puVar4[1];
            local_18 = (char *)0x0;
            bVar3 = local_5;
            local_c = local_14;
            if (local_10 == (char *)0x0) goto LAB_10146e4c;
            goto LAB_10146d02;
          }
          goto LAB_10146e59;
        }
        local_20 = "wchar_t";
      }
      goto LAB_10146d79;
    }
    if (uVar6 == 0x4e) {
      local_20 = "bool";
      local_1c = 4;
LAB_10146cf3:
      DAT_10232958 = pbVar2;
      DName::operator=((DName *)&local_10,(StringLiteral *)&local_20);
      bVar3 = local_5;
    }
    else {
      if (0x47 < uVar6) {
        if (uVar6 < 0x4a) {
          local_20 = "__int32";
        }
        else if (uVar6 < 0x4c) {
          local_20 = "__int64";
        }
        else {
          if (uVar6 < 0x4e) {
            local_20 = "__int128";
            goto LAB_10146d9f;
          }
LAB_10146e59:
          local_20 = "UNKNOWN";
        }
LAB_10146d79:
        local_1c = 7;
        goto LAB_10146cf3;
      }
      if (0x45 < uVar6) {
        local_20 = "__int16";
        goto LAB_10146d79;
      }
      if (uVar6 != 0) {
        if (uVar6 == 0x24) {
          local_20 = "__w64 ";
          local_1c = 6;
          DAT_10232958 = pbVar2;
          getBasicDataType((DName *)&local_18);
          operator+((StringLiteral *)param_1,(DName *)&local_20);
          return param_1;
        }
        if (1 < uVar6 - 0x44) goto LAB_10146e59;
        local_20 = "__int8";
        local_1c = 6;
        goto LAB_10146cf3;
      }
      DAT_10232958 = pbVar1;
      DName::operator=((DName *)&local_10,1);
      bVar3 = local_5;
    }
    goto LAB_10146d02;
  }
  if (uVar6 == 0x4e) {
LAB_10146fba:
    DAT_10232958 = pbVar1;
    local_20 = "double";
    local_1c = 6;
    DName::operator+=((DName *)&local_10,(StringLiteral *)&local_20);
    goto LAB_10146fd4;
  }
  switch(uVar6) {
  case 0x43:
  case 0x44:
  case 0x45:
    local_20 = "char";
    goto LAB_10146c10;
  case 0x46:
  case 0x47:
    local_20 = "short";
    local_1c = 5;
    break;
  case 0x48:
  case 0x49:
    local_20 = "int";
    local_1c = 3;
    break;
  case 0x4a:
  case 0x4b:
    local_20 = "long";
LAB_10146c10:
    local_1c = 4;
    break;
  default:
    goto switchD_10146c02_caseD_4c;
  case 0x4d:
    local_20 = "float";
    local_1c = 5;
LAB_10146c5f:
    DAT_10232958 = pbVar1;
    DName::operator=((DName *)&local_10,(StringLiteral *)&local_20);
    goto LAB_1014703a;
  }
  DAT_10232958 = pbVar1;
  DName::operator=((DName *)&local_10,(StringLiteral *)&local_20);
LAB_10146fd4:
  bVar3 = 0;
  if (uVar6 == 0x43) {
    local_20 = "signed ";
    local_1c = 7;
  }
  else {
    if ((((uVar6 != 0x45) && (uVar6 != 0x47)) && (uVar6 != 0x49)) && (uVar6 != 0x4b)) {
      if (uVar6 != 0x5f) goto LAB_1014703a;
LAB_10146d02:
      if (((bVar3 != 0x45) && (bVar3 != 0x47)) &&
         ((bVar3 != 0x49 && ((bVar3 != 0x4b && (bVar3 != 0x4d)))))) goto LAB_1014703a;
    }
    local_20 = "unsigned ";
    local_1c = 9;
  }
  pDVar5 = (DName *)DName::DName((DName *)&local_18,(StringLiteral *)&local_20);
  DName::operator+(pDVar5,(DName *)&local_20);
  local_10 = local_20;
  local_c = local_1c;
LAB_1014703a:
  if (*in_stack_00000008 != 0) {
    pDVar5 = (DName *)operator+((char)&local_20,(DName *)0x20);
    DName::operator+=((DName *)&local_10,pDVar5);
  }
  *(char **)param_1 = local_10;
  *(uint *)(param_1 + 4) = local_c;
  return param_1;
}

