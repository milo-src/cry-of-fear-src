// rea decompile_all
// name: UnDecorator::getRestrictionSpec
// address: 0x10149513
// body: available
// range: 0x10149513-0x1014963b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getRestrictionSpec(void)
   
   Library: Visual Studio 2019 Release */

void __cdecl UnDecorator::getRestrictionSpec(void)

{
  char cVar1;
  StringLiteral *pSVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *in_stack_00000004;
  undefined *local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*DAT_10232958 != '\0') && (*DAT_10232958 == '_')) {
    cVar1 = DAT_10232958[1];
    if ((cVar1 != '\0') && (cVar1 < 'E')) {
      uVar5 = 0;
      uVar4 = (int)DAT_10232958[1] - 0x41;
      DAT_10232958 = DAT_10232958 + 2;
      if (uVar4 < 4) {
        local_c = 0;
        local_8 = 0;
        uVar3 = 0;
        if ((~(DAT_10232960 >> 1) & 1) != 0) {
          DName::operator+=((DName *)&local_c,' ');
          local_14 = UScore(0xe);
          DName::operator+=((DName *)&local_c,(StringLiteral *)&local_14);
          if (uVar4 != 0) {
            while( true ) {
              uVar6 = ~uVar4 + 1 & uVar4;
              if (uVar6 == 1) {
                local_1c = &DAT_101ec274;
                pSVar2 = (StringLiteral *)&local_1c;
                local_18 = 3;
              }
              else {
                if (uVar6 != 2) goto LAB_10149621;
                pSVar2 = (StringLiteral *)&local_14;
                local_14 = 0x3101ec278;
              }
              DName::operator+=((DName *)&local_c,pSVar2);
              uVar4 = uVar4 & ~uVar6;
              if (uVar4 == 0) break;
              local_24 = &DAT_101ec27c;
              local_20 = 2;
              DName::operator+=((DName *)&local_c,(StringLiteral *)&local_24);
            }
          }
          DName::operator+=((DName *)&local_c,')');
          uVar3 = local_8;
          uVar5 = local_c;
        }
        in_stack_00000004[1] = uVar3;
      }
      else {
LAB_10149621:
        in_stack_00000004[1] = 0;
        *(undefined1 *)(in_stack_00000004 + 1) = 2;
      }
      goto LAB_10149635;
    }
  }
  uVar5 = 0;
  in_stack_00000004[1] = 0;
LAB_10149635:
  *in_stack_00000004 = uVar5;
  return;
}

