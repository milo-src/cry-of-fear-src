// rea decompile_all
// name: FUN_100c9970
// address: 0x100c9970
// body: available
// range: 0x100c9970-0x100c9ab0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c9970(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *_Source;
  char *pcVar5;
  undefined1 local_50 [4];
  undefined4 local_4c;
  char local_48 [60];
  undefined1 local_c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_4c = param_1;
  pcVar5 = (char *)0x0;
  uVar2 = (*DAT_10223030)("motdfile",local_50);
  pcVar3 = (char *)(*DAT_102230c4)(uVar2);
  (*DAT_10223000)(1,DAT_10226504,0,local_4c);
  uVar2 = (*DAT_10223030)("hostname");
  (*DAT_10223020)(uVar2);
  (*DAT_10223004)();
  _Source = pcVar3;
  if (pcVar3 != (char *)0x0) {
    while ((*_Source != '\0' && ((int)pcVar5 < 0x600))) {
      pcVar4 = _Source;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if ((uint)((int)pcVar4 - (int)(_Source + 1)) < 0x3c) {
        pcVar4 = _Source;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar4[(int)(local_48 + (-1 - (int)_Source))] = cVar1;
        } while (cVar1 != '\0');
      }
      else {
        _strncpy(local_48,_Source,0x3c);
        local_c = 0;
      }
      pcVar4 = local_48;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar5 = pcVar4 + ((int)pcVar5 - (int)(local_48 + 1));
      if ((int)pcVar5 < 0x600) {
        _Source = pcVar3 + (int)pcVar5;
      }
      else {
        *_Source = '\0';
      }
      (*DAT_10223000)(1,DAT_10226500,0,local_4c);
      (*DAT_10223008)(*_Source == '\0');
      (*DAT_10223020)(local_48);
      (*DAT_10223004)();
    }
  }
  (*DAT_102230c8)(pcVar3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

