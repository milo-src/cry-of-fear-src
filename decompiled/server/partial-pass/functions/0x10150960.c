// rea decompile_all
// name: _LocaleUpdate::_LocaleUpdate
// address: 0x10150960
// body: available
// range: 0x10150960-0x101509e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  _LocaleUpdate *p_Var1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  this[0xc] = (_LocaleUpdate)0x0;
  p_Var1 = this + 4;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    if (DAT_10232e78 != 0) {
      iVar4 = FUN_1017e87d();
      *(int *)this = iVar4;
      *(undefined4 *)p_Var1 = *(undefined4 *)(iVar4 + 0x4c);
      *(undefined4 *)(this + 8) = *(undefined4 *)(iVar4 + 0x48);
      ___acrt_update_locale_info(iVar4,p_Var1);
      ___acrt_update_multibyte_info(*(undefined4 *)this,this + 8);
      uVar2 = *(uint *)(*(int *)this + 0x350);
      if ((uVar2 & 2) != 0) {
        return this;
      }
      *(uint *)(*(int *)this + 0x350) = uVar2 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
      return this;
    }
    *(undefined **)p_Var1 = PTR_PTR_1021bd38;
    puVar3 = PTR_DAT_1021bd3c;
  }
  else {
    *(undefined4 *)p_Var1 = *(undefined4 *)param_1;
    puVar3 = *(undefined **)(param_1 + 4);
  }
  *(undefined **)(this + 8) = puVar3;
  return this;
}

