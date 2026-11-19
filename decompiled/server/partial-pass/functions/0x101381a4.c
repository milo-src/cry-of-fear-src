// rea decompile_all
// name: do_unshift
// address: 0x101381a4
// body: available
// range: 0x101381a4-0x10138233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall std::codecvt<unsigned short,char,struct
   _Mbstatet>::do_unshift(struct _Mbstatet &,char *,char *,char * &)const 
    protected: virtual int __thiscall std::codecvt<wchar_t,char,struct _Mbstatet>::do_unshift(struct
   _Mbstatet &,char *,char *,char * &)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void do_unshift(mbstate_t *param_1,int param_2,int param_3,int *param_4)

{
  mbstate_t mVar1;
  mbstate_t mVar2;
  int iVar3;
  int in_ECX;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  *param_4 = param_2;
  mVar1 = *param_1;
  mVar2 = param_1[1];
  iVar3 = __Wcrtomb(local_10,L'\0',param_1,(_Cvtvec *)(in_ECX + 8));
  if (0 < iVar3) {
    iVar3 = iVar3 + -1;
    if (param_3 - *param_4 < iVar3) {
      *param_1 = mVar1;
      param_1[1] = mVar2;
    }
    else if (0 < iVar3) {
      FUN_10140130(*param_4,local_10,iVar3);
      *param_4 = *param_4 + iVar3;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

