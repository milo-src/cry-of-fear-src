// rea decompile_all
// name: __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::process_integer_specifier
// address: 0x10167d81
// body: available
// range: 0x10167d81-0x10167de2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::stream_input_adapter<char> >::process_integer_specifier(unsigned int,bool)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::
process_integer_specifier
          (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_> *this,uint param_1,
          bool param_2)

{
  undefined1 uVar1;
  undefined3 in_stack_00000009;
  undefined1 auStack_38 [28];
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined4 uStack_8;
  
  uStack_18 = CONCAT44(0x10167d90,(undefined4)uStack_18);
  uStack_8 = this;
  process_whitespace(this);
  uStack_8 = (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_> *)
             ((uint)uStack_8 & 0xffffff);
  uStack_18 = CONCAT44(_param_2,param_1);
  make_input_adapter_character_source<>
            (auStack_38,this + 8,*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c),
             (int)&uStack_8 + 3);
  uStack_18 = __crt_strtox::
              parse_integer<unsigned___int64,__crt_strtox::input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>_>
                        (*(undefined4 *)(this + 0x60));
  if (uStack_8._3_1_ == '\0') {
    uVar1 = 0;
  }
  else if (this[0x26] == (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>)0x0)
  {
    uStack_1c = 0x10167dde;
    uVar1 = write_integer();
  }
  else {
    uVar1 = 1;
  }
  return (bool)uVar1;
}

