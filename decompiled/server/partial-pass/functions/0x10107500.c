// rea decompile_all
// name: FUN_10107500
// address: 0x10107500
// body: available
// range: 0x10107500-0x10107667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10107500(void)

{
  float fVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  undefined4 unaff_EBX;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  
  iVar4 = 0;
  FUN_100014e0((double)DAT_10223188[1]);
  if (DAT_10222f04 != 0) {
    FUN_100c9ae0();
    return;
  }
  fVar6 = (float10)(*DAT_1022302c)();
  fVar1 = (float)(fVar6 * (float10)60.0);
  if (fVar1 == 0.0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = fVar1 - *DAT_10223188;
  }
  if ((fVar1 != 0.0) && (fVar1 <= *DAT_10223188)) {
LAB_10107657:
    (**(code **)(*in_ECX + 0xfc))();
    return;
  }
  if (DAT_1021461c != 0.0) {
    iVar3 = 0;
    iVar4 = 9999;
    iVar5 = iVar4;
    if (0 < DAT_10231000) {
      do {
        if (DAT_1021461c <= (float)(int)(&DAT_10230f80)[iVar3]) goto LAB_10107657;
        iVar4 = (int)(DAT_1021461c - (float)(int)(&DAT_10230f80)[iVar3]);
        if (iVar5 <= iVar4) {
          iVar4 = iVar5;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar4;
      } while (iVar3 < DAT_10231000);
    }
  }
  if (iVar4 != DAT_10231004) {
    uVar2 = FUN_1011a8a0(&DAT_101dfb4c,iVar4);
    (*DAT_1022316c)(&PTR_s_mp_fragsleft_10214714,uVar2);
  }
  if (DAT_10214734 != (float)DAT_10231008) {
    uVar2 = FUN_1011a8a0(&DAT_101dfb4c,(int)fVar7,unaff_EBX);
    (*DAT_1022316c)(&PTR_s_mp_timeleft_10214728,uVar2);
  }
  DAT_10231008 = (int)fVar7;
  DAT_10231004 = iVar4;
  return;
}

