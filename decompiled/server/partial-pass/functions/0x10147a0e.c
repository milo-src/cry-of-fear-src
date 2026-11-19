// rea decompile_all
// name: UnDecorator::getDecoratedName
// address: 0x10147a0e
// body: available
// range: 0x10147a0e-0x10147c77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDecoratedName(void)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getDecoratedName(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  DName *pDVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  DName *in_stack_00000004;
  undefined *local_34;
  undefined4 local_30;
  undefined *local_2c;
  uint local_28;
  undefined *local_24;
  uint local_20;
  undefined *local_1c;
  uint local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  DAT_10232970 = DAT_10232970 + 1;
  local_8 = 0;
  if ((DAT_10232960 & 0x2000) == 0) {
    if (*DAT_10232958 != '?') {
      if (*DAT_10232958 == '\0') {
        DName::DName(in_stack_00000004,1);
      }
      else {
        *(undefined4 *)(in_stack_00000004 + 4) = 0;
        in_stack_00000004[4] = (DName)0x2;
        *(undefined4 *)in_stack_00000004 = 0;
      }
      goto LAB_10147c6c;
    }
    pcVar1 = DAT_10232958 + 1;
    if ((*pcVar1 != '?') || (DAT_10232958[2] != '?')) {
      DAT_10232958 = pcVar1;
      getSymbolName();
      uVar4 = local_18;
      puVar5 = local_1c;
      if ((local_1c == (undefined *)0x0) || ((local_18 & 0x200) == 0)) {
        local_14 = 0;
      }
      else {
        local_14 = 1;
      }
      uVar6 = local_18 >> 0xf;
      if ((char)local_18 < '\x02') {
        if (((*DAT_10232958 != '\0') && (*DAT_10232958 != '@')) &&
           (getScope(), local_2c != (undefined *)0x0)) {
          if (DAT_10232964 == '\0') {
            local_24 = local_2c;
            local_20 = local_28;
            local_34 = &DAT_101ebfd4;
            local_30 = 2;
            DName::operator+=((DName *)&local_24,(StringLiteral *)&local_34);
            pDVar3 = (DName *)&local_2c;
          }
          else {
            DAT_10232964 = '\0';
            local_24 = puVar5;
            local_20 = uVar4;
            DName::operator+=((DName *)&local_24,(DName *)&local_2c);
            local_1c = local_24;
            local_18 = local_20;
            uVar4 = local_20;
            puVar5 = local_24;
            if (*DAT_10232958 == '@') goto LAB_10147bb7;
            puVar2 = (undefined4 *)getScope();
            local_2c = &DAT_101ebfd4;
            local_28 = 2;
            local_24 = (undefined *)*puVar2;
            local_20 = puVar2[1];
            DName::operator+=((DName *)&local_24,(StringLiteral *)&local_2c);
            pDVar3 = (DName *)&local_34;
          }
          puVar2 = (undefined4 *)DName::operator+((DName *)&local_24,pDVar3);
          uVar4 = puVar2[1];
          puVar5 = (undefined *)*puVar2;
          local_1c = puVar5;
          local_18 = uVar4;
        }
LAB_10147bb7:
        if ((local_14 != 0) && (puVar5 != (undefined *)0x0)) {
          uVar4 = uVar4 | 0x200;
          local_18 = uVar4;
        }
        if ((uVar6 & 1) != 0) {
          uVar4 = uVar4 | 0x8000;
          local_18 = uVar4;
        }
        if ((puVar5 != (undefined *)0x0) && ((uVar4 & 0x1000) == 0)) {
          if (*DAT_10232958 != '\0') {
            if (*DAT_10232958 != '@') {
              *(undefined4 *)(in_stack_00000004 + 4) = 0;
              *(undefined4 *)in_stack_00000004 = 0;
              in_stack_00000004[4] = (DName)0x2;
              goto LAB_10147c6c;
            }
            DAT_10232958 = DAT_10232958 + 1;
          }
          if ((((DAT_10232960 & 0x1000) == 0) || (local_14 != 0)) || ((uVar4 & 0x8000) != 0)) {
            composeDeclaration(in_stack_00000004);
            goto LAB_10147c6c;
          }
          local_34 = (undefined *)0x0;
          local_30 = 0;
          composeDeclaration((DName *)&local_2c);
        }
      }
      *(undefined **)in_stack_00000004 = puVar5;
      *(uint *)(in_stack_00000004 + 4) = uVar4;
      goto LAB_10147c6c;
    }
    DAT_10232958 = pcVar1;
    getDecoratedName();
    for (; *DAT_10232958 != '\0'; DAT_10232958 = DAT_10232958 + 1) {
    }
  }
  else {
    DAT_10232960 = DAT_10232960 & 0xffffdfff;
    getDataType((DName *)&local_2c);
    DAT_10232960 = DAT_10232960 | 0x2000;
  }
  *(undefined **)in_stack_00000004 = local_2c;
  *(uint *)(in_stack_00000004 + 4) = local_28;
LAB_10147c6c:
  DAT_10232970 = DAT_10232970 + -1;
  return in_stack_00000004;
}

