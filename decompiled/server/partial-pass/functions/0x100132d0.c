// rea decompile_all
// name: FUN_100132d0
// address: 0x100132d0
// body: available
// range: 0x100132d0-0x10013458 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100132d0(int param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  char *pcVar3;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = *(float *)(param_1 + 0xf4) * 0.5 + *param_2;
  local_c = *(float *)(param_1 + 0xf8) * 0.5 + param_2[1];
  local_8 = *(float *)(param_1 + 0xfc) * 0.5 + param_2[2];
  FUN_1011a290(&local_10);
  fVar1 = (float10)(*DAT_102230b4)(0x3e800000,0x3f400000);
  fVar2 = (float10)(*DAT_102230b4)(0,0x3f800000);
  switch((int)(fVar2 * (float10)6.0)) {
  case 0:
    pcVar3 = "buttons/spark1.wav";
    break;
  case 1:
    pcVar3 = "buttons/spark2.wav";
    break;
  case 2:
    pcVar3 = "buttons/spark3.wav";
    break;
  case 3:
    pcVar3 = "buttons/spark4.wav";
    break;
  case 4:
    pcVar3 = "buttons/spark5.wav";
    break;
  case 5:
    pcVar3 = "buttons/spark6.wav";
    break;
  default:
    goto switchD_1001337c_default;
  }
  FUN_100fc9f0(*(undefined4 *)(param_1 + 0x20c),2,pcVar3,(float)(fVar1 * (float10)0.4),0x3f4ccccd,0,
               100);
switchD_1001337c_default:
  return;
}

