// rea decompile_all
// name: std::basic_filebuf<char,std::char_traits<char>_>::seekoff
// address: 0x10038170
// body: available
// range: 0x10038170-0x10038246 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual class std::fpos<struct _Mbstatet> __thiscall std::basic_filebuf<char,struct
   std::char_traits<char> >::seekoff(__int64,int,int)
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::seekoff
          (basic_filebuf<char,std::char_traits<char>_> *this,__int64 param_1,int param_2,int param_3
          )

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int unaff_EDI;
  int iVar4;
  
  iVar3 = param_2;
  iVar4 = param_1._4_4_;
  if ((((basic_filebuf<char,std::char_traits<char>_> *)**(int **)(this + 0x1c) == this + 0x3c) &&
      (param_3 == 1)) && (*(int *)(this + 0x38) == 0)) {
    iVar3 = param_2 + -1 + (uint)(param_1._4_4_ != 0);
    iVar4 = param_1._4_4_ + -1;
  }
  if (*(int *)(this + 0x4c) != 0) {
    cVar2 = FUN_10037080();
    if (cVar2 != '\0') {
      if ((iVar4 != 0 || iVar3 != 0) || (param_3 != 1)) {
        iVar3 = __fseeki64(*(FILE **)(this + 0x4c),CONCAT44(param_3,iVar3),unaff_EDI);
        if (iVar3 != 0) goto LAB_1003821a;
      }
      iVar3 = _fgetpos(*(FILE **)(this + 0x4c),(fpos_t *)((int)&param_1 + 4));
      if (iVar3 == 0) {
        _Reset_back(this);
        uVar1 = *(undefined4 *)(this + 0x40);
        ((undefined4 *)param_1)[5] = *(undefined4 *)(this + 0x44);
        *(undefined4 *)param_1 = param_1._4_4_;
        ((undefined4 *)param_1)[1] = param_2;
        ((undefined4 *)param_1)[2] = 0;
        ((undefined4 *)param_1)[3] = 0;
        ((undefined4 *)param_1)[4] = uVar1;
        return;
      }
    }
  }
LAB_1003821a:
  *(undefined4 *)param_1 = 0xffffffff;
  ((undefined4 *)param_1)[1] = 0xffffffff;
  ((undefined4 *)param_1)[2] = 0;
  ((undefined4 *)param_1)[3] = 0;
  *(undefined8 *)((undefined4 *)param_1 + 4) = 0;
  return;
}

