// rea decompile_all
// name: UnDecorator::getZName
// address: 0x1014ad94
// body: available
// range: 0x1014ad94-0x1014afa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getZName(bool,bool)
   
   Library: Visual Studio 2019 Release */

void __cdecl UnDecorator::getZName(bool param_1,bool param_2)

{
  Replicator *pRVar1;
  code *pcVar2;
  char *pcVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  DName *pDVar9;
  char *pcVar10;
  undefined3 in_stack_00000005;
  char in_stack_0000000c;
  DName local_40 [8];
  DName local_38 [8];
  int *local_30;
  DName local_2c [11];
  char local_21;
  char *local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  pcVar3 = DAT_10232958;
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_30 = _param_1;
  local_21 = *DAT_10232958;
  if ((int)local_21 - 0x30U < 10) {
    DAT_10232958 = DAT_10232958 + 1;
    Replicator::operator[](DAT_10232950,(int)_param_1);
    goto LAB_1014af9b;
  }
  if (local_21 == '?') {
    piVar5 = (int *)getTemplateName(SUB41(local_2c,0));
    local_20 = (char *)*piVar5;
    local_1c = piVar5[1];
    uVar6 = local_1c;
    pcVar10 = local_20;
    pcVar3 = DAT_10232958 + 1;
    if (*DAT_10232958 != '@') {
      DName::operator=((DName *)&local_20,(*DAT_10232958 != '\0') + 1);
      uVar6 = local_1c;
      pcVar10 = local_20;
      pcVar3 = DAT_10232958;
    }
  }
  else {
    uVar6 = und_strncmp(DAT_10232958,"template-parameter-",0x13);
    if (uVar6 == 0) {
      local_20 = "`template-parameter-";
      DAT_10232958 = pcVar3 + 0x13;
      local_1c = 0x14;
LAB_1014ae83:
      getSignedDimension();
      if (((DAT_10232960 & 0x4000) == 0) || (DAT_10232968 == (code *)0x0)) {
        pDVar9 = (DName *)DName::DName(local_38,(StringLiteral *)&local_20);
        DName::operator+(pDVar9,(DName *)&local_20);
        cVar4 = (char)local_40;
      }
      else {
        DName::getString(local_2c,local_18,0x10);
        pcVar2 = DAT_10232968;
        lVar7 = _atol(local_18);
        guard_check_icall(lVar7);
        iVar8 = (*pcVar2)();
        if (iVar8 != 0) {
          local_1c = local_1c & 0xffffff00;
          piVar5 = (int *)DName::DName<0>(local_2c,iVar8,local_1c);
          goto LAB_1014af5b;
        }
        pDVar9 = (DName *)DName::DName(local_40,(StringLiteral *)&local_20);
        DName::operator+(pDVar9,(DName *)&local_20);
        cVar4 = (char)local_38;
      }
      piVar5 = (int *)DName::operator+((DName *)&local_20,cVar4);
    }
    else {
      uVar6 = und_strncmp(pcVar3,"generic-type-",0xd);
      if (uVar6 == 0) {
        local_20 = "`generic-type-";
        DAT_10232958 = pcVar3 + 0xd;
        local_1c = 0xe;
        goto LAB_1014ae83;
      }
      if ((in_stack_0000000c != '\0') && (local_21 == '@')) {
        pcVar10 = (char *)0x0;
        uVar6 = 0;
        pcVar3 = pcVar3 + 1;
        goto LAB_1014af60;
      }
      piVar5 = (int *)DName::DName(local_38,&DAT_10232958,'@');
    }
LAB_1014af5b:
    uVar6 = piVar5[1];
    pcVar10 = (char *)*piVar5;
    pcVar3 = DAT_10232958;
  }
LAB_1014af60:
  DAT_10232958 = pcVar3;
  pRVar1 = DAT_10232950;
  if (((param_2) && (*(int *)DAT_10232950 != 9)) && (pcVar10 != (char *)0x0)) {
    piVar5 = _HeapManager::getMemoryWithBuffer((_HeapManager *)&DAT_10232974,8);
    if (piVar5 != (int *)0x0) {
      *piVar5 = (int)pcVar10;
      piVar5[1] = uVar6;
      *(int *)pRVar1 = *(int *)pRVar1 + 1;
      *(int **)(pRVar1 + *(int *)pRVar1 * 4 + 4) = piVar5;
    }
  }
  *local_30 = (int)pcVar10;
  local_30[1] = uVar6;
LAB_1014af9b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

