// rea decompile_all
// name: UnDecorator::parseDecoratedName
// address: 0x1014b0cb
// body: available
// range: 0x1014b0cb-0x1014b1c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::parseDecoratedName(void)
   
   Library: Visual Studio 2019 Release */

undefined4 * __cdecl UnDecorator::parseDecoratedName(void)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  DName *this;
  undefined4 *puVar4;
  undefined4 *in_stack_00000004;
  DName local_1c [16];
  undefined *local_c;
  undefined4 local_8;
  
  pcVar3 = DAT_1023295c;
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  if (pcVar3 == (char *)0x0) {
    return in_stack_00000004;
  }
  if (*pcVar3 == '?') {
    cVar1 = pcVar3[1];
    if (cVar1 == '@') {
      DAT_10232958 = DAT_10232958 + 2;
      local_c = &DAT_101ebfcc;
      local_8 = 4;
      getDecoratedName();
      this = (DName *)DName::DName(local_1c,(StringLiteral *)&local_c);
      DName::operator+(this,(DName *)&local_c);
      *in_stack_00000004 = local_c;
      in_stack_00000004[1] = local_8;
      return in_stack_00000004;
    }
    if (cVar1 == '$') {
      puVar4 = (undefined4 *)getTemplateName(SUB41(local_1c,0));
      *in_stack_00000004 = *puVar4;
      uVar2 = puVar4[1];
      in_stack_00000004[1] = uVar2;
      if ((char)uVar2 != '\x02') {
        if ((DAT_10232960 & 0x1000) != 0) {
          return in_stack_00000004;
        }
        if (*DAT_10232958 == '\0') {
          return in_stack_00000004;
        }
      }
      DAT_10232958 = DAT_1023295c;
      puVar4 = (undefined4 *)getDecoratedName();
      *in_stack_00000004 = *puVar4;
      in_stack_00000004[1] = puVar4[1];
      return in_stack_00000004;
    }
    if ((cVar1 == '?') && (pcVar3[2] == '@')) {
      *(undefined1 *)(in_stack_00000004 + 1) = 2;
      return in_stack_00000004;
    }
  }
  puVar4 = (undefined4 *)getDecoratedName();
  *in_stack_00000004 = *puVar4;
  in_stack_00000004[1] = puVar4[1];
  return in_stack_00000004;
}

