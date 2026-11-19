// rea decompile_all
// name: FUN_10149e40
// address: 0x10149e40
// body: available
// range: 0x10149e40-0x10149ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10149e40(undefined4 *param_1)

{
  char cVar1;
  Replicator *pRVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 local_28 [8];
  undefined *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_6;
  char local_5;
  
  local_10 = 0;
  local_c = 0;
  uVar6 = 0;
  local_6 = '\x01';
  DAT_10232965 = 1;
  do {
    pcVar3 = DAT_10232958;
    cVar1 = *DAT_10232958;
    if ((cVar1 == '\0') || (cVar1 == '@')) break;
    local_18 = 0;
    local_14 = 0;
    local_5 = '\0';
    if ((int)cVar1 - 0x30U < 10) {
      DAT_10232958 = DAT_10232958 + 1;
      piVar4 = (int *)Replicator::operator[](DAT_10232954,(int)local_28);
      iVar7 = *piVar4;
      iVar5 = piVar4[1];
      local_18 = iVar7;
      local_14 = iVar5;
      goto LAB_10149f79;
    }
    if (cVar1 == '$') {
      if (DAT_10232958[1] != '$') {
LAB_10149edf:
        if ((*DAT_10232958 != '$') || (DAT_10232958[1] == '$')) goto LAB_10149f23;
        DAT_10232958 = DAT_10232958 + 1;
        piVar4 = (int *)UnDecorator::getTemplateNonTypeArgument();
        goto LAB_10149f2c;
      }
      cVar1 = DAT_10232958[2];
      if (cVar1 == '$') {
        if (DAT_10232958[3] != 'V') goto LAB_10149edf;
        DAT_10232958 = DAT_10232958 + 4;
      }
      else {
        if (cVar1 == 'U') {
LAB_10149eff:
          DAT_10232958 = DAT_10232958 + 3;
          goto LAB_10149edf;
        }
        if (cVar1 != 'V') {
          if (cVar1 == 'W') {
            local_5 = '\x01';
            goto LAB_10149eff;
          }
          if (cVar1 != 'Z') goto LAB_10149edf;
        }
        DAT_10232958 = DAT_10232958 + 3;
      }
    }
    else {
LAB_10149f23:
      piVar4 = (int *)UnDecorator::getTemplateTypeArgument();
LAB_10149f2c:
      pRVar2 = DAT_10232954;
      iVar5 = piVar4[1];
      iVar7 = *piVar4;
      local_18 = iVar7;
      local_14 = iVar5;
      if (((int)DAT_10232958 - (int)pcVar3 < 2) || (*(int *)DAT_10232954 == 9)) {
LAB_10149f79:
        if (iVar7 != 0) {
          if (local_6 == '\0') {
            DName::operator+=((DName *)&local_10,',');
          }
          DName::operator+=((DName *)&local_10,(DName *)&local_18);
          uVar6 = local_c;
          if (local_5 != '\0') {
            local_20 = &DAT_101ec054;
            local_1c = 3;
            DName::operator+=((DName *)&local_10,(StringLiteral *)&local_20);
            uVar6 = local_c;
          }
          goto LAB_10149fc9;
        }
      }
      else if (iVar7 != 0) {
        piVar4 = _HeapManager::getMemoryWithBuffer((_HeapManager *)&DAT_10232974,8);
        if (piVar4 != (int *)0x0) {
          *piVar4 = iVar7;
          piVar4[1] = iVar5;
          *(int *)pRVar2 = *(int *)pRVar2 + 1;
          *(int **)(pRVar2 + *(int *)pRVar2 * 4 + 4) = piVar4;
        }
        goto LAB_10149f79;
      }
      uVar6 = local_c;
      if ('\x01' < (char)iVar5) {
        param_1[1] = 0;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 2;
        return;
      }
    }
LAB_10149fc9:
    local_6 = '\0';
  } while ((char)uVar6 == '\0');
  DAT_10232965 = 0;
  *param_1 = local_10;
  param_1[1] = uVar6;
  return;
}

