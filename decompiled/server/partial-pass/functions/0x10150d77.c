// rea decompile_all
// name: <lambda_9dc9bc4853282e051506c0cc602abcf3>::operator()
// address: 0x10150d77
// body: available
// range: 0x10150d77-0x10150e6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall <lambda_9dc9bc4853282e051506c0cc602abcf3>::operator()(void)const 
   
   Library: Visual Studio 2019 Release */

int __thiscall
<lambda_9dc9bc4853282e051506c0cc602abcf3>::operator()
          (<lambda_9dc9bc4853282e051506c0cc602abcf3> *this)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int local_ae4;
  undefined1 local_ae0 [8];
  char local_ad8;
  undefined4 local_ad4;
  undefined4 local_ad0;
  undefined4 local_acc;
  undefined4 local_ac8;
  undefined4 local_ac4;
  undefined1 *local_ac0;
  undefined4 local_abc;
  output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
  local_ab8 [64];
  formatting_buffer local_a78 [2672];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  uVar1 = **(undefined4 **)this;
  uVar2 = ___acrt_stdio_begin_temporary_buffering_nolock(uVar1);
  local_acc = CONCAT31(local_acc._1_3_,uVar2);
  _LocaleUpdate::_LocaleUpdate
            ((_LocaleUpdate *)&local_ae4,(__crt_locale_pointers *)**(undefined4 **)(this + 4));
  local_ac8 = **(undefined4 **)this;
  local_abc = **(undefined4 **)(this + 0x10);
  local_ac0 = local_ae0;
  local_ac4 = **(undefined4 **)(this + 0xc);
  local_ad4 = **(undefined4 **)(this + 8);
  local_ad0 = (*(undefined4 **)(this + 8))[1];
  FID_conflict_positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_><__crt_stdio_output::stream_output_adapter<char>_const&,unsigned___int64_const&,char_const*_const&,__crt_locale_pointers*_const&,char*_const&>
            (&local_ac8,&local_ad4,&local_ac4,&local_ac0,&local_abc);
  __crt_stdio_output::
  output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
  ::process(local_ab8);
  __crt_stdio_output::formatting_buffer::~formatting_buffer(local_a78);
  if (local_ad8 != '\0') {
    *(uint *)(local_ae4 + 0x350) = *(uint *)(local_ae4 + 0x350) & 0xfffffffd;
  }
  ___acrt_stdio_end_temporary_buffering_nolock(local_acc,uVar1);
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

