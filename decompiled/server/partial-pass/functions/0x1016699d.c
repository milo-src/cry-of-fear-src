// rea decompile_all
// name: __crt_stdio_input::scanset_buffer<wchar_t>::invert
// address: 0x1016699d
// body: available
// range: 0x1016699d-0x101669ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall __crt_stdio_input::scanset_buffer<wchar_t>::invert(void)
   
   Library: Visual Studio 2019 Release */

void __thiscall __crt_stdio_input::scanset_buffer<wchar_t>::invert(scanset_buffer<wchar_t> *this)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  
  pbVar1 = scanset_storage<2>::data((scanset_storage<2> *)this);
  iVar2 = 0;
  bVar3 = pbVar1 + 0x2000 < pbVar1;
  if (pbVar1 <= pbVar1 + 0x2000) {
    do {
      *pbVar1 = ~*pbVar1;
      pbVar1 = pbVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != (-(uint)bVar3 & 0xffffe000) + 0x2000);
  }
  return;
}

