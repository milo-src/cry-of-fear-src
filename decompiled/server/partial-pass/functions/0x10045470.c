// rea decompile_all
// name: FUN_10045470
// address: 0x10045470
// body: available
// range: 0x10045470-0x1004554a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10045470(void)

{
  float fVar1;
  int *in_ECX;
  float10 fVar2;
  undefined4 uVar3;
  undefined1 local_10 [12];
  
  FUN_100dfea0(local_10,0x3db27eb6);
  fVar1 = *DAT_10223188;
  if (((((float)in_ECX[0x76] <= fVar1) && ((float)in_ECX[0x73] <= fVar1)) &&
      ((float)in_ECX[0x74] <= fVar1)) && ((in_ECX[0x4a] == 0 && (in_ECX[0x50] == 0)))) {
    if ((char)in_ECX[0x5e] == '\0') {
      if (in_ECX[0x79] == 0) {
        uVar3 = 10;
      }
      else {
        uVar3 = 9;
      }
    }
    else if (in_ECX[0x79] == 0) {
      uVar3 = 0x13;
    }
    else {
      uVar3 = 0x12;
    }
    (**(code **)(*in_ECX + 0x198))(uVar3,1,0);
    uVar3 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                            *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
    fVar2 = (float10)FUN_1000f390(uVar3);
    in_ECX[0x76] = (int)(float)(fVar2 + (float10)*DAT_10223188);
  }
  return;
}

