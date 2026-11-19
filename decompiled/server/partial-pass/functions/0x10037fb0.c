// rea decompile_all
// name: std::basic_filebuf<char,std::char_traits<char>_>::pbackfail
// address: 0x10037fb0
// body: available
// range: 0x10037fb0-0x10038059 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall std::basic_filebuf<char,struct std::char_traits<char>
   >::pbackfail(int)
   
   Library: Visual Studio 2019 Release */

int __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::pbackfail
          (basic_filebuf<char,std::char_traits<char>_> *this,int param_1)

{
  basic_filebuf<char,std::char_traits<char>_> *pbVar1;
  uint uVar2;
  basic_filebuf<char,std::char_traits<char>_> *pbVar3;
  int iVar4;
  
  uVar2 = **(uint **)(this + 0x1c);
  if (((uVar2 != 0) && (**(uint **)(this + 0xc) < uVar2)) &&
     ((param_1 == -1 || ((uint)*(byte *)(uVar2 - 1) == param_1)))) {
    **(int **)(this + 0x2c) = **(int **)(this + 0x2c) + 1;
    **(int **)(this + 0x1c) = **(int **)(this + 0x1c) + -1;
    if (param_1 == -1) {
      param_1 = 0;
    }
    return param_1;
  }
  if ((*(FILE **)(this + 0x4c) != (FILE *)0x0) && (param_1 != -1)) {
    if ((*(int *)(this + 0x38) == 0) &&
       (iVar4 = _ungetc(param_1 & 0xff,*(FILE **)(this + 0x4c)), iVar4 != -1)) {
      return param_1;
    }
    pbVar1 = this + 0x3c;
    if ((basic_filebuf<char,std::char_traits<char>_> *)**(int **)(this + 0x1c) != pbVar1) {
      *pbVar1 = SUB41(param_1,0);
      pbVar3 = (basic_filebuf<char,std::char_traits<char>_> *)**(int **)(this + 0xc);
      if (pbVar3 != pbVar1) {
        *(basic_filebuf<char,std::char_traits<char>_> **)(this + 0x50) = pbVar3;
        *(int *)(this + 0x54) = **(int **)(this + 0x2c) + **(int **)(this + 0x1c);
      }
      **(int **)(this + 0xc) = (int)pbVar1;
      **(int **)(this + 0x1c) = (int)pbVar1;
      **(undefined4 **)(this + 0x2c) = 1;
      return param_1;
    }
  }
  return -1;
}

