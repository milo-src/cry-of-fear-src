// rea decompile_all
// name: FUN_10021a30
// address: 0x10021a30
// body: available
// range: 0x10021a30-0x10021b6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10021a30(void)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  double dVar5;
  int in_stack_00000018;
  
  FUN_1011a290(in_stack_00000018 + 0x14);
  uVar2 = (*DAT_1022305c)(0);
  iVar3 = (*DAT_102230b0)(0xfffffff6,10);
  FUN_101182b0(uVar2,in_stack_00000018 + 0x14,"doc_ai/bar_ricochet.wav",0x3fc00000,0,0,iVar3 + 100);
  pfVar1 = (float *)(*(int *)(in_ECX + 4) + 0x1b8);
  if (*pfVar1 <= *DAT_10223188 && *DAT_10223188 != *pfVar1) {
    do {
      iVar3 = (*DAT_102230b0)(0,5);
    } while ((float)iVar3 == *(float *)(*(int *)(in_ECX + 4) + 0x168));
    *(float *)(*(int *)(in_ECX + 4) + 0x168) = (float)iVar3;
    iVar4 = *(int *)(*(int *)(in_ECX + 4) + 0x1d8);
    if (iVar4 != 0) {
      iVar4 = FUN_10118590(0,(int)DAT_10223188[0x26] + iVar4);
      if (iVar4 != 0) {
        dVar5 = FID_conflict__atof((wchar_t *)(&PTR_DAT_10211f8c)[iVar3]);
        *(float *)(*(int *)(in_ECX + 4) + 0x1b8) = (float)dVar5 + *DAT_10223188;
        FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c),2,
                     (&PTR_s_doc_ai_be_careful_dont_make_me_a_10211fa4)[iVar3],0x3f800000,0x3f4ccccd
                     ,0,100);
      }
    }
  }
  return;
}

