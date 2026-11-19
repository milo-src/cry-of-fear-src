// rea decompile_all
// name: UnDecorator::getFunctionIndirectType
// address: 0x101483bc
// body: available
// range: 0x101483bc-0x10148774 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getFunctionIndirectType(class DName const &)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getFunctionIndirectType(DName *param_1)

{
  char cVar1;
  DName *pDVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  int *in_stack_00000008;
  DName local_34 [8];
  DName local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined *local_c;
  int local_8;
  
  cVar1 = *DAT_10232958;
  pcVar4 = DAT_10232958;
  if (cVar1 == '\0') {
LAB_1014875d:
    DAT_10232958 = pcVar4;
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if ((('5' < cVar1) && (cVar1 < ':')) || (cVar1 == '_')) {
    uVar5 = (int)cVar1 - 0x36;
    pcVar4 = DAT_10232958 + 1;
    if (uVar5 == 0x29) {
      if (*pcVar4 == '\0') goto LAB_1014875d;
      DAT_10232958 = DAT_10232958 + 2;
      uVar5 = (int)*pcVar4 - 0x3d;
      if (((int)uVar5 < 4) || (7 < (int)uVar5)) {
        uVar5 = 0xffffffff;
      }
    }
    else {
      DAT_10232958 = pcVar4;
      if (((int)uVar5 < 0) || (3 < (int)uVar5)) goto LAB_1014874d;
    }
    if (uVar5 != 0xffffffff) {
      local_14 = 0;
      local_10 = 0;
      local_c = (undefined *)*in_stack_00000008;
      local_8 = in_stack_00000008[1];
      if ((uVar5 & 2) != 0) {
        if (*DAT_10232958 == '@') {
          DAT_10232958 = DAT_10232958 + 1;
        }
        else {
          local_18 = 2;
          local_1c = &DAT_101ebfd4;
          pDVar2 = (DName *)DName::DName(local_2c,(StringLiteral *)&local_1c);
          DName::operator+(pDVar2,(DName *)&local_1c);
          local_c = local_1c;
          local_8 = local_18;
          if (*DAT_10232958 == '\0') {
            pDVar2 = (DName *)DName::DName(local_34,1);
            DName::operator+(pDVar2,(DName *)&local_1c);
            local_c = local_1c;
            local_8 = local_18;
          }
          else {
            getScope();
            pDVar2 = (DName *)operator+((char)&local_1c,(DName *)0x20);
            puVar3 = (undefined4 *)DName::operator+(pDVar2,local_34);
            local_c = (undefined *)*puVar3;
            local_8 = puVar3[1];
          }
        }
        if (*DAT_10232958 == '\0') {
          pDVar2 = (DName *)DName::DName(local_34,1);
          DName::operator+(pDVar2,param_1);
          return param_1;
        }
        if (*DAT_10232958 != '@') goto LAB_1014874d;
        DAT_10232958 = DAT_10232958 + 1;
        if (((byte)DAT_10232960 & 0x60) == 0x60) {
          pDVar2 = (DName *)getThisType();
          DName::operator|=((DName *)&local_14,pDVar2);
        }
        else {
          puVar3 = (undefined4 *)getThisType();
          local_14 = *puVar3;
          local_10 = puVar3[1];
        }
      }
      if ((uVar5 & 4) != 0) {
        if ((~(DAT_10232960 >> 1) & 1) == 0) {
          pDVar2 = (DName *)getBasedType();
          DName::operator|=((DName *)&local_c,pDVar2);
        }
        else {
          getBasedType();
          pDVar2 = (DName *)operator+((char)local_2c,(DName *)0x20);
          puVar3 = (undefined4 *)DName::operator+(pDVar2,(DName *)&local_1c);
          local_c = (undefined *)*puVar3;
          local_8 = puVar3[1];
        }
      }
      if ((~(DAT_10232960 >> 1) & 1) == 0) {
        pDVar2 = (DName *)getCallingConvention();
        DName::operator|=((DName *)&local_c,pDVar2);
      }
      else {
        pDVar2 = (DName *)getCallingConvention();
        puVar3 = (undefined4 *)DName::operator+(pDVar2,local_2c);
        local_c = (undefined *)*puVar3;
        local_8 = puVar3[1];
      }
      if (*in_stack_00000008 != 0) {
        pDVar2 = (DName *)operator+((char)local_34,(DName *)0x28);
        puVar3 = (undefined4 *)DName::operator+(pDVar2,(char)local_2c);
        local_c = (undefined *)*puVar3;
        local_8 = puVar3[1];
      }
      puVar3 = _HeapManager::getMemoryWithBuffer((_HeapManager *)&DAT_10232974,8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      getReturnType((DName *)&local_24);
      getArgumentTypes();
      pDVar2 = (DName *)operator+((char)local_2c,(DName *)0x28);
      pDVar2 = (DName *)DName::operator+(pDVar2,(char)&local_1c);
      DName::operator+=((DName *)&local_c,pDVar2);
      if ((((byte)DAT_10232960 & 0x60) != 0x60) && ((uVar5 & 2) != 0)) {
        DName::operator+=((DName *)&local_c,(DName *)&local_14);
      }
      if ((~(DAT_10232960 >> 0x13) & 1) == 0) {
        pDVar2 = (DName *)getRestrictionSpec();
        DName::operator|=((DName *)&local_c,pDVar2);
      }
      else {
        pDVar2 = (DName *)getRestrictionSpec();
        DName::operator+=((DName *)&local_c,pDVar2);
      }
      pDVar2 = (DName *)getNoexcept();
      DName::operator+=((DName *)&local_c,pDVar2);
      if ((~(DAT_10232960 >> 8) & 1) == 0) {
        pDVar2 = (DName *)getThrowTypes();
        DName::operator|=((DName *)&local_c,pDVar2);
      }
      else {
        pDVar2 = (DName *)getThrowTypes();
        DName::operator+=((DName *)&local_c,pDVar2);
      }
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = local_c;
        puVar3[1] = local_8;
        *(undefined4 *)param_1 = local_24;
        *(undefined4 *)(param_1 + 4) = local_20;
        return param_1;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      param_1[4] = (DName)0x3;
      *(undefined4 *)param_1 = 0;
      return param_1;
    }
  }
LAB_1014874d:
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)param_1 = 0;
  param_1[4] = (DName)0x2;
  return param_1;
}

