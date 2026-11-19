// rea decompile_all
// name: __crt_strtox::parse_floating_point_write_result<float>
// address: 0x101604d8
// body: available
// range: 0x101604d8-0x1016061a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point_write_result<float>(enum
   __crt_strtox::floating_point_parse_result,struct __crt_strtox::floating_point_string const
   &,float * const)
   
   Library: Visual Studio 2019 Release */

SLD_STATUS __cdecl
__crt_strtox::parse_floating_point_write_result<float>
          (floating_point_parse_result param_1,floating_point_string *param_2,float *param_3)

{
  SLD_STATUS SVar1;
  float fVar2;
  
  switch(param_1) {
  case 0:
    SVar1 = convert_decimal_string_to_floating_type<float>(param_2,param_3);
    break;
  case 1:
    SVar1 = convert_hexadecimal_string_to_floating_type<float>(param_2,param_3);
    break;
  case 2:
    fVar2 = (float)(-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000);
    goto LAB_10160527;
  case 3:
    fVar2 = (float)(((param_2[0x308] == (floating_point_string)0x0) - 1 & 0x80000000) + 0x7f800000 |
                   (uint)*param_3 & 0x7f800000);
    goto LAB_1016055e;
  case 4:
    fVar2 = (float)(((param_2[0x308] == (floating_point_string)0x0) - 1 & 0x80000000) + 0x7fffffff);
LAB_10160527:
    *param_3 = fVar2;
LAB_1016052c:
    SVar1 = 0;
    break;
  case 5:
    fVar2 = (float)(((param_2[0x308] == (floating_point_string)0x0) - 1 & 0x80000000) + 0x7f800000 |
                    (uint)*param_3 & 0x7f800000 | 1);
LAB_1016055e:
    *param_3 = fVar2;
    goto LAB_1016052c;
  case 6:
    *param_3 = -NAN;
    goto LAB_1016052c;
  case 7:
    *param_3 = 0.0;
  default:
    SVar1 = 1;
    break;
  case 8:
    SVar1 = 2;
    *param_3 = (float)(-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000);
    break;
  case 9:
    SVar1 = 3;
    *param_3 = (float)(((param_2[0x308] == (floating_point_string)0x0) - 1 & 0x80000000) +
                       0x7f800000 | (uint)*param_3 & 0x7f800000);
  }
  return SVar1;
}

