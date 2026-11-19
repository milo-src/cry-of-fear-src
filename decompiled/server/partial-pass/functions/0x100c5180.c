// rea decompile_all
// name: FUN_100c5180
// address: 0x100c5180
// body: available
// range: 0x100c5180-0x100c52a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5180(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 *in_ECX;
  char *pcVar3;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  *in_ECX = CHalfLifeMultiplay::vftable;
  FUN_100013a0(&PTR_vftable_102177f0,DAT_10223188[0x24]);
  DAT_102231a1 = 0;
  DAT_102231a2 = 0;
  _DAT_102231a4 = 0;
  FUN_100c9640();
  in_ECX[0x37] = 0;
  DAT_10223198 = 0;
  _DAT_1022319c = *DAT_10223188 + 30.0;
  DAT_102231a0 = 0;
  (*DAT_10223034)("sv_coop",0x3f800000);
  iVar1 = (*DAT_10223114)();
  if (iVar1 == 0) {
    pcVar2 = (char *)(*DAT_10223030)("lservercfgfile");
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) goto LAB_100c5292;
    pcVar3 = "Executing listen server config file\n";
  }
  else {
    pcVar2 = (char *)(*DAT_10223030)("servercfgfile");
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) goto LAB_100c5292;
    pcVar3 = "Executing dedicated server config file\n";
  }
  (*DAT_1022303c)(1,pcVar3);
  FUN_1001f160(local_108,"exec %s\n",pcVar2);
  (*DAT_10222fe4)(local_108);
LAB_100c5292:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

