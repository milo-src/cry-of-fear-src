// rea decompile_all
// name: std::basic_streambuf<char,std::char_traits<char>_>::xsgetn
// address: 0x10038a40
// body: available
// range: 0x10038a40-0x10038b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10038a8c) */
/* Library Function - Single Match
    protected: virtual __int64 __thiscall std::basic_streambuf<char,struct std::char_traits<char>
   >::xsgetn(char *,__int64)
   
   Library: Visual Studio 2019 Release */

__int64 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::xsgetn
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  __int64 _Var7;
  uint in_stack_00000008;
  
  iVar1 = (int)param_2;
  iVar3 = (int)param_2;
  uVar5 = in_stack_00000008;
  if ((-1 < (int)param_2) && ((0 < (int)param_2 || (in_stack_00000008 != 0)))) {
    do {
      _Var7 = _Gnavail(this);
      if ((_Var7 < 0) || (_Var7 == 0)) {
        iVar2 = (**(code **)(*(int *)this + 0x1c))();
        if (iVar2 == -1) break;
        bVar6 = uVar5 != 0;
        uVar5 = uVar5 - 1;
        _Var7 = 1;
        iVar3 = iVar3 + -1 + (uint)bVar6;
        *param_1 = (char)iVar2;
      }
      else {
        if (CONCAT44(iVar3,uVar5) < _Var7) {
          _Var7 = CONCAT44(iVar3,uVar5);
        }
        param_2._0_4_ = (int)((ulonglong)_Var7 >> 0x20);
        uVar4 = (uint)_Var7;
        FUN_10140130(param_1,**(undefined4 **)(this + 0x1c),uVar4);
        bVar6 = uVar5 < uVar4;
        uVar5 = uVar5 - uVar4;
        iVar3 = (iVar3 - (int)param_2) - (uint)bVar6;
        **(int **)(this + 0x2c) = **(int **)(this + 0x2c) - uVar4;
        **(int **)(this + 0x1c) = **(int **)(this + 0x1c) + uVar4;
      }
      param_1 = param_1 + (int)_Var7;
      if ((iVar3 < 1) && ((iVar3 < 0 || (uVar5 == 0)))) break;
    } while( true );
  }
  return CONCAT44((iVar1 - iVar3) - (uint)(in_stack_00000008 < uVar5),in_stack_00000008 - uVar5);
}

