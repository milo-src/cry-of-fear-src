// rea decompile_all
// name: __crt_strtox::parse_floating_point_write_result<double>
// address: 0x10160644
// body: available
// range: 0x10160644-0x1016073c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point_write_result<double>(enum
   __crt_strtox::floating_point_parse_result,struct __crt_strtox::floating_point_string const
   &,double * const)
   
   Library: Visual Studio 2019 Release */

SLD_STATUS __cdecl
__crt_strtox::parse_floating_point_write_result<double>
          (floating_point_parse_result param_1,floating_point_string *param_2,double *param_3)

{
  uint uVar1;
  SLD_STATUS SVar2;
  
  switch(param_1) {
  case 0:
    SVar2 = convert_decimal_string_to_floating_type<double>(param_2,param_3);
    return SVar2;
  case 1:
    SVar2 = convert_hexadecimal_string_to_floating_type<double>(param_2,param_3);
    return SVar2;
  case 2:
    uVar1 = (uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f;
    break;
  case 3:
    uVar1 = (uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f | 0x7ff00000;
    break;
  case 4:
    uVar1 = (uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f | 0x7fffffff;
    *(undefined4 *)param_3 = 0xffffffff;
    goto LAB_1016068f;
  case 5:
    assemble_floating_point_snan<double>((bool)param_2[0x308],param_3);
    return 0;
  case 6:
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0xfff80000;
    return 0;
  case 7:
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    return 1;
  case 8:
    SVar2 = 2;
    uVar1 = (uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f;
    goto LAB_10160716;
  case 9:
    SVar2 = 3;
    uVar1 = (uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f | 0x7ff00000;
LAB_10160716:
    *(undefined4 *)param_3 = 0;
    *(uint *)((int)param_3 + 4) = uVar1;
    return SVar2;
  default:
    return 1;
  }
  *(undefined4 *)param_3 = 0;
LAB_1016068f:
  *(uint *)((int)param_3 + 4) = uVar1;
  return 0;
}

