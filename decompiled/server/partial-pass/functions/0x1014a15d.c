// rea decompile_all
// name: UnDecorator::getTemplateNonTypeArgument
// address: 0x1014a15d
// body: available
// range: 0x1014a15d-0x1014a462 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateNonTypeArgument(void)
   
   Library: Visual Studio 2019 Release */

void __cdecl UnDecorator::getTemplateNonTypeArgument(void)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  DName *pDVar4;
  uint uVar5;
  int iVar6;
  DName *in_stack_00000004;
  DName local_30 [8];
  DName local_28 [4];
  uint local_24;
  char *local_20;
  int local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  cVar1 = *DAT_10232958;
  pcVar3 = DAT_10232958 + 1;
  iVar6 = (int)cVar1;
  local_1c = iVar6;
  if (cVar1 < 'F') {
    if (cVar1 == 'E') {
      DAT_10232958 = pcVar3;
      getDecoratedName();
      goto LAB_1014a452;
    }
    if (cVar1 == '\0') {
      DName::DName(in_stack_00000004,1);
      goto LAB_1014a452;
    }
    if (cVar1 == '0') {
      DAT_10232958 = pcVar3;
      getSignedDimension();
      goto LAB_1014a452;
    }
    if (cVar1 == '1') {
      if (*pcVar3 == '@') {
        DAT_10232958 = DAT_10232958 + 2;
        local_20 = "NULL";
        local_1c = 4;
        DName::DName(in_stack_00000004,(StringLiteral *)&local_20);
      }
      else {
        local_20 = (char *)0x0;
        local_1c = 0;
        DAT_10232958 = pcVar3;
        DName::doPchar((DName *)&local_20,'&');
        getDecoratedName();
        DName::operator+((DName *)&local_20,in_stack_00000004);
      }
      goto LAB_1014a452;
    }
    if (cVar1 == '2') {
      DAT_10232958 = pcVar3;
      getValueObject();
      goto LAB_1014a452;
    }
    if (cVar1 == '4') {
      DAT_10232958 = pcVar3;
      getStringObject();
      goto LAB_1014a452;
    }
    DAT_10232958 = pcVar3;
    if ((byte)(cVar1 + 0xbfU) < 2) {
      getFloatingPoint((int)in_stack_00000004);
      goto LAB_1014a452;
    }
  }
  else {
    if (cVar1 < 'S') {
      if (cVar1 == 'R') {
LAB_1014a34d:
        DAT_10232958 = pcVar3;
        getSignedDimension();
        DName::getString(local_28,local_18,0x10);
        uVar5 = _atol(local_18);
        pcVar2 = DAT_10232968;
        if (((DAT_10232960 & 0x4000) != 0) && (DAT_10232968 != (code *)0x0)) {
          guard_check_icall(uVar5 & 0xfff);
          iVar6 = (*pcVar2)();
          if (iVar6 != 0) {
            local_24 = local_24 & 0xffffff00;
            DName::DName<0>(in_stack_00000004,iVar6,local_24);
            goto LAB_1014a452;
          }
        }
        _sprintf_s(local_18,0x10,"%d",uVar5 & 0xfff);
        local_24 = local_24 & 0xffffff00;
        DName::DName<2>(local_28,local_18,local_24);
        if ((local_1c == 0x52) || (local_1c == 0x54)) {
          local_20 = "`template-type-parameter-";
LAB_1014a42c:
          local_1c = 0x19;
        }
        else {
          if (local_1c == 0x55) {
            local_20 = "`generic-class-parameter-";
            goto LAB_1014a42c;
          }
          if (local_1c != 0x56) goto LAB_1014a43e;
          local_20 = "`generic-method-parameter-";
          local_1c = 0x1a;
        }
        pDVar4 = (DName *)DName::DName(local_30,(StringLiteral *)&local_20);
        DName::operator+(pDVar4,(DName *)&local_20);
      }
      else {
        if ('J' < cVar1) {
          DAT_10232958 = pcVar3;
          if (cVar1 == 'M') {
            getTemplateTypeArgument();
            getTemplateNonTypeArgument();
            goto LAB_1014a452;
          }
          goto LAB_1014a43e;
        }
        local_20 = (char *)0x0;
        local_1c = 0;
        DAT_10232958 = pcVar3;
        DName::doPchar((DName *)&local_20,'{');
        if ((byte)(cVar1 + 0xb8U) < 3) {
          pDVar4 = (DName *)getDecoratedName();
          DName::operator+=((DName *)&local_20,pDVar4);
          DName::operator+=((DName *)&local_20,',');
        }
        if (iVar6 == 0x46) {
LAB_1014a2f8:
          pDVar4 = (DName *)getSignedDimension();
          DName::operator+=((DName *)&local_20,pDVar4);
          DName::operator+=((DName *)&local_20,',');
LAB_1014a315:
          pDVar4 = (DName *)getSignedDimension();
          DName::operator+=((DName *)&local_20,pDVar4);
        }
        else {
          if (iVar6 == 0x47) {
LAB_1014a2db:
            pDVar4 = (DName *)getSignedDimension();
            DName::operator+=((DName *)&local_20,pDVar4);
            DName::operator+=((DName *)&local_20,',');
            goto LAB_1014a2f8;
          }
          if (iVar6 == 0x48) goto LAB_1014a315;
          if (iVar6 == 0x49) goto LAB_1014a2f8;
          if (iVar6 == 0x4a) goto LAB_1014a2db;
        }
      }
      DName::operator+((DName *)&local_20,(char)in_stack_00000004);
      goto LAB_1014a452;
    }
    if (cVar1 == 'S') {
      DAT_10232958 = pcVar3;
      *(undefined4 *)in_stack_00000004 = 0;
      *(undefined4 *)(in_stack_00000004 + 4) = 0;
      goto LAB_1014a452;
    }
    DAT_10232958 = pcVar3;
    if ((byte)(cVar1 + 0xacU) < 3) goto LAB_1014a34d;
  }
LAB_1014a43e:
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)in_stack_00000004 = 0;
  in_stack_00000004[4] = (DName)0x2;
LAB_1014a452:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

