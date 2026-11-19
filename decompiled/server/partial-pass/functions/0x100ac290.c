// rea decompile_all
// name: FUN_100ac290
// address: 0x100ac290
// body: available
// range: 0x100ac290-0x100ac335 inclusive
// range: 0x100ac3bb-0x100ac40f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100ac290(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int in_ECX;
  float10 fVar6;
  char *local_20 [6];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  uVar2 = *(uint *)(in_ECX + 0xec);
  iVar3 = (*DAT_102230b0)(0,2);
  if (iVar3 == 0) {
    iVar3 = (*DAT_102230b0)(0,0x22);
    iVar3 = iVar3 + 0x5f;
  }
  else {
    iVar3 = 100;
  }
  fVar6 = (float10)(*DAT_102230b4)(0x3f400000,0x3f800000);
  fVar1 = (float)fVar6;
  if (uVar2 == 6) {
    iVar4 = (*DAT_102230b0)(0,1);
    if (iVar4 == 0) {
LAB_100ac32f:
                    /* WARNING: Could not recover jumptable at 0x100ac32f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(&DAT_100ac410 + uVar2 * 4))();
      return;
    }
    local_20[0] = "debris/metal1.wav";
    local_20[1] = "debris/metal3.wav";
    local_20[2] = "debris/metal2.wav";
    fVar5 = 2.8026e-45;
  }
  else {
    if (uVar2 < 9) goto LAB_100ac32f;
    fVar5 = fVar1;
    if (fVar1 == 0.0) goto LAB_100ac3ff;
  }
  iVar3 = (*DAT_102230b0)(0,(int)fVar5 + -1,fVar1,0x3f4ccccd,0,iVar3);
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),2,local_20[iVar3]);
LAB_100ac3ff:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

