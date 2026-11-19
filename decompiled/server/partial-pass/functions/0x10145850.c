// rea decompile_all
// name: UnDecorator::composeDeclaration
// address: 0x10145850
// body: available
// range: 0x10145850-0x10146582 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::composeDeclaration(class DName const &)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::composeDeclaration(DName *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  DName *pDVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  DName *in_stack_00000008;
  char cVar10;
  DName local_8c [8];
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  DName local_74 [8];
  DName local_6c [8];
  int local_64;
  char *local_60;
  int local_5c;
  char *local_58;
  char *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  DName local_48 [4];
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  DName local_30 [8];
  uint local_28;
  uint local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  
  local_64 = DAT_10232958 - DAT_1023295c;
  puVar8 = (undefined4 *)0x0;
  local_14 = (char *)0x0;
  local_10 = (char *)0x0;
  uVar1 = getTypeEncoding();
  if ((*(int *)in_stack_00000008 == 0) ||
     (local_5c = 1, (*(uint *)(in_stack_00000008 + 4) & 0x200) == 0)) {
    local_5c = 0;
  }
  if (uVar1 == 0xffff) {
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[4] = (DName)0x2;
    *(undefined4 *)param_1 = 0;
    return param_1;
  }
  if (uVar1 == 0xfffe) {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if (uVar1 == 0xfffd) {
    *(int *)param_1 = *(int *)in_stack_00000008;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(in_stack_00000008 + 4);
    return param_1;
  }
  uVar7 = uVar1 & 0x8000;
  local_28 = uVar7;
  if (uVar7 == 0) {
LAB_10145f7d:
    DName::operator+=((DName *)&local_14,in_stack_00000008);
    uVar2 = local_28;
    if (uVar7 == 0) {
      uVar7 = uVar1 & 0x7c00;
      if ((uVar7 == 0x6800) || (uVar7 == 0x7000)) {
        getVfTableType(param_1);
        return param_1;
      }
      if (uVar7 == 0x6000) {
        local_c = local_14;
        local_38 = "}\'";
        local_34 = (char *)0x2;
        local_8 = local_10;
        DName::operator+=((DName *)&local_c,'{');
        getDimension(SUB41(&local_50,0));
        pDVar4 = (DName *)DName::operator+((DName *)&local_c,local_30);
        DName::operator+(pDVar4,(StringLiteral *)param_1);
        return param_1;
      }
    }
    if ((uVar1 & 0xfc00) == 0x7c00) {
      getVdispMapType(param_1);
      return param_1;
    }
    if (local_28 == 0) {
      bVar9 = (uVar1 & 0x6000) == 0;
    }
    else {
      bVar9 = (uVar1 & 0x1800) == 0x800;
    }
    uVar7 = uVar1 & 0x1800;
    local_1c = (char *)(uVar1 & 0x6000);
    if (bVar9) {
      uVar6 = uVar1 & 0x400;
    }
    else {
      uVar6 = uVar1 & 0x1000;
    }
    local_24 = uVar1 & 0x1000;
    local_28 = uVar1 & 0x400;
    if ((uVar6 == 0) || ((uVar1 & 0x1b00) != 0x1000 || uVar2 == 0)) {
      if (uVar2 == 0) {
        bVar9 = local_1c == (char *)0x0;
      }
      else {
        bVar9 = uVar7 == 0x800;
      }
      uVar6 = local_28;
      if (!bVar9) {
        uVar6 = local_24;
      }
      if ((uVar6 != 0) && ((uVar1 & 0x1b00) == 0x1100 && uVar2 != 0)) {
        local_c = "`template static data member constructor helper\'";
        local_8 = (char *)0x30;
        goto LAB_10146158;
      }
      if (uVar2 == 0) {
        bVar9 = local_1c == (char *)0x0;
      }
      else {
        bVar9 = uVar7 == 0x800;
      }
      uVar6 = local_28;
      if (!bVar9) {
        uVar6 = local_24;
      }
      if ((uVar6 != 0) && ((uVar1 & 0x1b00) == 0x1200 && uVar2 != 0)) {
        local_c = "`template static data member destructor helper\'";
        local_8 = (char *)0x2f;
        goto LAB_10146158;
      }
      if (uVar2 != 0) goto LAB_10146168;
      if ((uVar1 & 0x7c00) == 0x7800) goto LAB_10146570;
LAB_101461dd:
      bVar9 = local_1c == (char *)0x0;
    }
    else {
      local_c = "`local static destructor helper\'";
      local_8 = (char *)0x20;
LAB_10146158:
      DName::operator+=((DName *)&local_14,(StringLiteral *)&local_c);
      if (uVar2 == 0) goto LAB_101461dd;
LAB_10146168:
      bVar9 = uVar7 == 0x800;
    }
    uVar7 = local_28;
    if (!bVar9) {
      uVar7 = local_24;
    }
    if ((uVar7 == 0) ||
       (((uVar1 & 0x1b00) != 0x1100 || uVar2 == 0 && ((uVar1 & 0x1b00) != 0x1200 || uVar2 == 0)))) {
      puVar8 = (undefined4 *)getExternalDataType(local_30);
    }
    else {
      puVar8 = (undefined4 *)operator+((char)local_30,(DName *)0x20);
    }
    local_14 = (char *)*puVar8;
    local_10 = (char *)puVar8[1];
    if (uVar2 != 0) goto LAB_10146202;
    bVar9 = (uVar1 & 0x6000) == 0;
  }
  else {
    local_24 = uVar1 & 0x1800;
    if (local_24 == 0x800) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    local_18 = (char *)(uVar1 & 0x400);
    local_44 = (char *)(uVar1 & 0x1000);
    if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1000)) goto LAB_10145f7d;
    if (local_24 == 0x800) {
      local_3c = local_18;
    }
    else {
      local_3c = local_44;
    }
    if ((local_3c != (char *)0x0) && (((uVar1 & 0x1b00) == 0x1100 || ((uVar1 & 0x1b00) == 0x1200))))
    goto LAB_10145f7d;
    if ((uVar1 & 0x4000) != 0) {
      if ((~((DAT_10232960 >> 2 | DAT_10232960) >> 1) & 1) == 0) {
        pDVar4 = (DName *)getBasedType();
        DName::operator|=((DName *)&local_14,pDVar4);
      }
      else {
        getBasedType();
        puVar3 = (undefined4 *)operator+((char)&local_38,(DName *)0x20);
        local_14 = (char *)*puVar3;
        local_10 = (char *)puVar3[1];
      }
    }
    pcVar5 = local_18;
    local_3c = local_18;
    if (local_24 != 0x800) {
      local_3c = local_44;
    }
    if ((local_3c == (char *)0x0) || (local_24 != 0x1800)) {
      local_38 = (char *)0x0;
      local_34 = (char *)0x0;
      local_c = (char *)0x0;
      local_8 = (char *)0x0;
      local_58 = (char *)0x0;
      local_54 = (char *)0x0;
      local_3c = (char *)0x0;
      local_18 = (char *)0x0;
      local_50 = 0;
      local_4c = 0;
      if (local_24 != 0x800) {
        pcVar5 = local_44;
      }
      uVar7 = uVar1 & 0x700;
      if (pcVar5 != (char *)0x0) {
        if (local_24 == 0x800) {
          if (uVar7 == 0x600) {
            getDimension(SUB41(&local_20,0));
            local_38 = local_20;
            local_34 = local_1c;
            getDimension(SUB41(&local_20,0));
            local_c = local_20;
            local_8 = local_1c;
            getDimension(SUB41(&local_20,0));
            local_58 = local_20;
            local_54 = local_1c;
          }
          else if (uVar7 == 0x500) {
            getDimension(SUB41(&local_40,0));
            local_58 = local_40;
            local_54 = local_3c;
          }
        }
        getDimension(SUB41(&local_20,0));
        local_3c = local_20;
        local_18 = local_1c;
      }
      if ((local_24 == 0x800) && (uVar7 != 0x200)) {
        if (((byte)DAT_10232960 & 0x60) == 0x60) {
          pDVar4 = (DName *)getThisType();
          DName::operator|=((DName *)&local_50,pDVar4);
        }
        else {
          puVar3 = (undefined4 *)getThisType();
          local_50 = *puVar3;
          local_4c = puVar3[1];
        }
      }
      if (((~(DAT_10232960 >> 1) & 1) == 0) || ((~(DAT_10232960 >> 4) & 1) == 0)) {
        pDVar4 = (DName *)getCallingConvention();
        DName::operator|=((DName *)&local_14,pDVar4);
      }
      else {
        pDVar4 = (DName *)getCallingConvention();
        puVar3 = (undefined4 *)DName::operator+(pDVar4,local_48);
        local_14 = (char *)*puVar3;
        local_10 = (char *)puVar3[1];
      }
      if (*(char **)in_stack_00000008 != (char *)0x0) {
        if ((local_14 == (char *)0x0) || ((DAT_10232960 & 0x1000) != 0)) {
          local_10 = *(char **)(in_stack_00000008 + 4);
          local_14 = *(char **)in_stack_00000008;
        }
        else {
          pDVar4 = (DName *)operator+((char)&local_20,(DName *)0x20);
          DName::operator+=((DName *)&local_14,pDVar4);
        }
      }
      local_44 = (char *)0x0;
      local_1c = (char *)0x0;
      if (local_5c == 0) {
        puVar3 = _HeapManager::getMemoryWithBuffer((_HeapManager *)&DAT_10232974,8);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar8 = puVar3;
        }
        puVar3 = (undefined4 *)getReturnType(local_6c);
        local_44 = (char *)*puVar3;
        local_1c = (char *)puVar3[1];
      }
      else {
        getReturnType((DName *)&local_60);
        pDVar4 = (DName *)operator+((char)local_6c,(DName *)0x20);
        DName::operator+=((DName *)&local_14,pDVar4);
        if ((DAT_10232960 & 0x1000) != 0) goto LAB_10146570;
      }
      if (local_24 == 0x800) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if (uVar2 != 0) {
        if (local_24 == 0x800) {
          if (uVar7 == 0x600) {
            local_60 = "`vtordispex{";
            local_5c = 0xc;
            pDVar4 = (DName *)DName::DName(local_6c,(StringLiteral *)&local_60);
            DName::operator+(pDVar4,(DName *)&local_60);
            pDVar4 = (DName *)DName::operator+((DName *)&local_60,(char)local_84);
            pDVar4 = (DName *)DName::operator+(pDVar4,local_8c);
            pDVar4 = (DName *)DName::operator+(pDVar4,(char)local_7c);
            pDVar4 = (DName *)DName::operator+(pDVar4,local_74);
            cVar10 = (char)local_30;
          }
          else {
            if (uVar7 != 0x500) goto LAB_10145e0b;
            local_c = "`vtordisp{";
            local_8 = (char *)0xa;
            pDVar4 = (DName *)DName::DName(local_30,(StringLiteral *)&local_c);
            DName::operator+(pDVar4,(DName *)&local_c);
            cVar10 = (char)local_74;
            pDVar4 = (DName *)&local_c;
          }
          pDVar4 = (DName *)DName::operator+(pDVar4,cVar10);
          DName::operator+=((DName *)&local_14,pDVar4);
        }
        else {
LAB_10145e0b:
          local_c = "`adjustor{";
          local_8 = (char *)0xa;
          DName::operator+=((DName *)&local_14,(StringLiteral *)&local_c);
        }
        local_c = local_3c;
        local_8 = local_18;
        local_38 = "}\' ";
        local_34 = (char *)0x3;
        DName::operator+=((DName *)&local_c,(StringLiteral *)&local_38);
        DName::operator+=((DName *)&local_14,(DName *)&local_c);
      }
      if ((DAT_10232970 == 1) && (DAT_1023296c == 0)) {
        DAT_1023296c = local_64;
      }
      getArgumentTypes();
      pDVar4 = (DName *)operator+((char)local_74,(DName *)0x28);
      pDVar4 = (DName *)DName::operator+(pDVar4,(char)local_7c);
      DName::operator+=((DName *)&local_14,pDVar4);
      if ((local_24 == 0x800) && ((uVar1 & 0x700) != 0x200)) {
        DName::operator+=((DName *)&local_14,(DName *)&local_50);
      }
      if ((~(DAT_10232960 >> 0x13) & 1) == 0) {
        pDVar4 = (DName *)getRestrictionSpec();
        DName::operator|=((DName *)&local_14,pDVar4);
      }
      else {
        pDVar4 = (DName *)getRestrictionSpec();
        DName::operator+=((DName *)&local_14,pDVar4);
      }
      pDVar4 = (DName *)getNoexcept();
      DName::operator+=((DName *)&local_14,pDVar4);
      if ((~(DAT_10232960 >> 8) & 1) == 0) {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator|=((DName *)&local_14,pDVar4);
      }
      else {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator+=((DName *)&local_14,pDVar4);
      }
      pDVar4 = (DName *)getDispatchTarget();
      DName::operator|=((DName *)&local_14,pDVar4);
      uVar2 = local_28;
      if (((~(DAT_10232960 >> 2) & 1) != 0) && (puVar8 != (undefined4 *)0x0)) {
        *puVar8 = local_14;
        puVar8[1] = local_10;
        local_14 = local_44;
        local_10 = local_1c;
      }
    }
    else {
      pDVar4 = (DName *)DName::operator+(in_stack_00000008,(char)&local_38);
      getDimension(SUB41(&local_c,0));
      pDVar4 = (DName *)DName::operator+(pDVar4,(DName *)&local_50);
      DName::operator+=((DName *)&local_14,pDVar4);
      getVCallThunkType();
      if ((DAT_10232960 & 0x1000) == 0) {
        local_c = "}\' ";
        local_8 = (char *)0x3;
        pDVar4 = (DName *)operator+((char)&local_50,(DName *)0x2c);
        pDVar4 = (DName *)DName::operator+(pDVar4,(StringLiteral *)&local_58);
        DName::operator+=((DName *)&local_14,pDVar4);
      }
      local_c = "}\'";
      local_8 = (char *)0x2;
      DName::operator+=((DName *)&local_14,(StringLiteral *)&local_c);
      getCallingConvention();
      uVar2 = local_28;
      if ((((~(DAT_10232960 >> 1) & 1) != 0) && ((~(DAT_10232960 >> 4) & 1) != 0)) &&
         ((DAT_10232960 & 0x1000) == 0)) {
        pDVar4 = (DName *)operator+((char)&local_38,(DName *)0x20);
        pDVar4 = (DName *)DName::operator+(pDVar4,(char)&local_50);
        puVar8 = (undefined4 *)DName::operator+(pDVar4,(DName *)&local_58);
        local_14 = (char *)*puVar8;
        local_10 = (char *)puVar8[1];
        uVar2 = local_28;
      }
    }
LAB_10146202:
    bVar9 = (uVar1 & 0x1800) == 0x800;
  }
  uVar7 = uVar1 & 0x1800;
  local_18 = (char *)(uVar1 & 0x6000);
  if (bVar9) {
    if ((~(DAT_10232960 >> 9) & 1) != 0) {
      if (uVar2 == 0) {
        bVar9 = local_18 == (char *)0x0;
      }
      else {
        bVar9 = uVar7 == 0x800;
      }
      if (bVar9) {
        if ((uVar2 == 0) || ((uVar1 & 0x700) == 0x200)) {
          local_c = "static ";
          local_8 = (char *)0x7;
          pDVar4 = (DName *)DName::DName(local_30,(StringLiteral *)&local_c);
          DName::operator+(pDVar4,(DName *)&local_c);
          local_14 = local_c;
          local_10 = local_8;
          goto LAB_101462b0;
        }
LAB_101462b4:
        if ((uVar1 & 0x700) != 0x100) {
          bVar9 = uVar7 == 0x800;
          goto LAB_101462da;
        }
      }
      else {
LAB_101462b0:
        if (uVar2 != 0) goto LAB_101462b4;
        bVar9 = local_18 == (char *)0x0;
LAB_101462da:
        if (bVar9) {
          uVar6 = uVar1 & 0x400;
        }
        else {
          uVar6 = uVar1 & 0x1000;
        }
        if (uVar6 == 0) goto LAB_101463bc;
        if (uVar2 == 0) {
          bVar9 = local_18 == (char *)0x0;
          local_1c = local_18;
        }
        else {
          bVar9 = uVar7 == 0x800;
          local_1c = (char *)(uVar1 & 0x6000);
        }
        if ((!bVar9) || ((uVar1 & 0x700) != 0x500)) {
          if (uVar2 == 0) {
            uVar6 = uVar1 & 0x6000;
          }
          else {
            uVar6 = (uVar1 & 0x1800) - 0x800;
          }
          if ((uVar6 != 0) || ((uVar1 & 0x700) != 0x600)) {
            if (uVar2 == 0) {
              bVar9 = local_1c == (char *)0x0;
            }
            else {
              bVar9 = (uVar1 & 0x1800) == 0x800;
            }
            if ((!bVar9) || ((uVar1 & 0x700) != 0x400)) goto LAB_101463bc;
          }
        }
      }
      local_c = "virtual ";
      local_8 = (char *)0x8;
      pDVar4 = (DName *)DName::DName(local_30,(StringLiteral *)&local_c);
      DName::operator+(pDVar4,(DName *)&local_c);
      local_14 = local_c;
      local_10 = local_8;
    }
LAB_101463bc:
    if ((~(DAT_10232960 >> 7) & 1) != 0) {
      if (uVar2 == 0) {
        bVar9 = local_18 == (char *)0x0;
      }
      else {
        bVar9 = uVar7 == 0x800;
      }
      if (bVar9) {
        if (uVar2 == 0) {
          bVar9 = uVar7 == 0x800;
        }
        else {
          bVar9 = ((byte)uVar1 & 0xc0) == 0x40;
        }
        if (!bVar9) goto LAB_10146416;
        local_c = "private: ";
        local_8 = (char *)0x9;
LAB_101464a1:
        pDVar4 = (DName *)DName::DName(local_30,(StringLiteral *)&local_c);
        DName::operator+(pDVar4,(DName *)&local_c);
        local_14 = local_c;
        local_10 = local_8;
      }
      else {
LAB_10146416:
        if (uVar2 == 0) {
          bVar9 = local_18 == (char *)0x0;
        }
        else {
          bVar9 = uVar7 == 0x800;
        }
        if (bVar9) {
          if (uVar2 == 0) {
            bVar9 = uVar7 == 0x1000;
          }
          else {
            bVar9 = ((byte)uVar1 & 0xc0) == 0x80;
          }
          if (bVar9) {
            local_c = "protected: ";
            local_8 = (char *)0xb;
            goto LAB_101464a1;
          }
        }
        if (uVar2 == 0) {
          bVar9 = local_18 == (char *)0x0;
        }
        else {
          bVar9 = uVar7 == 0x800;
        }
        uVar6 = uVar1 & 0x1800;
        if (bVar9) {
          if (uVar2 != 0) {
            uVar6 = uVar1 & 0xc0;
          }
          if (uVar6 == 0) {
            local_c = "public: ";
            local_8 = (char *)0x8;
            goto LAB_101464a1;
          }
        }
      }
    }
  }
  if (uVar2 == 0) {
    bVar9 = local_18 == (char *)0x0;
  }
  else {
    bVar9 = uVar7 == 0x800;
  }
  if (bVar9) {
    uVar7 = uVar1 & 0x400;
  }
  else {
    uVar7 = uVar1 & 0x1000;
  }
  if ((uVar7 != 0) && ((DAT_10232960 & 0x1000) == 0)) {
    local_c = "[thunk]:";
    local_8 = (char *)0x8;
    pDVar4 = (DName *)DName::DName(local_30,(StringLiteral *)&local_c);
    DName::operator+(pDVar4,(DName *)&local_c);
    local_14 = local_c;
    local_10 = local_8;
  }
  if ((uVar1 & 0x10000) != 0) {
    local_c = "extern \"C\" ";
    local_8 = (char *)0xb;
    pDVar4 = (DName *)DName::DName(local_30,(StringLiteral *)&local_c);
    DName::operator+(pDVar4,(DName *)&local_c);
    local_14 = local_c;
    local_10 = local_8;
  }
LAB_10146570:
  *(char **)param_1 = local_14;
  *(char **)(param_1 + 4) = local_10;
  return param_1;
}

