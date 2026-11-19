// rea decompile_all
// name: std::regex_error::_Stringify
// address: 0x101225a0
// body: available
// range: 0x101225a0-0x10122621 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static char const * __cdecl std::regex_error::_Stringify(enum
   std::regex_constants::error_type)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __cdecl std::regex_error::_Stringify(error_type param_1)

{
  switch(param_1) {
  case 0:
    return "regex_error(error_collate): The expression contained an invalid collating element name."
    ;
  case 1:
    return "regex_error(error_ctype): The expression contained an invalid character class name.";
  case 2:
    return 
    "regex_error(error_escape): The expression contained an invalid escaped character, or a trailing escape."
    ;
  case 3:
    return "regex_error(error_backref): The expression contained an invalid back reference.";
  case 4:
    return "regex_error(error_brack): The expression contained mismatched [ and ].";
  case 5:
    return "regex_error(error_paren): The expression contained mismatched ( and ).";
  case 6:
    return "regex_error(error_brace): The expression contained mismatched { and }.";
  case 7:
    return 
    "regex_error(error_badbrace): The expression contained an invalid range in a { expression }.";
  case 8:
    return 
    "regex_error(error_range): The expression contained an invalid character range, such as [b-a] in most encodings."
    ;
  case 9:
    return 
    "regex_error(error_space): There was insufficient memory to convert the expression into a finite state machine."
    ;
  case 10:
    return 
    "regex_error(error_badrepeat): One of *?+{ was not preceded by a valid regular expression.";
  case 0xb:
    return 
    "regex_error(error_complexity): The complexity of an attempted match against a regular expression exceeded a pre-set level."
    ;
  case 0xc:
    return 
    "regex_error(error_stack): There was insufficient memory to determine whether the regular expression could match the specified character sequence."
    ;
  case 0xd:
    return "regex_error(error_parse)";
  case 0xe:
    return "regex_error(error_syntax)";
  default:
    return "regex_error";
  }
}

