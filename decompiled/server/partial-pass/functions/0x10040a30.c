// rea decompile_all
// name: thunk_FUN_10089d40
// address: 0x10040a30
// body: available
// range: 0x10040a30-0x10040a34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10089d40(void)

{
  bool bVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  
  bVar1 = false;
  FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),1,"common/bodysplat.wav",0x3f800000,0x3f4ccccd,0,
               100);
  iVar2 = (**(code **)(*in_ECX + 0xd0))();
  if (iVar2 != 0) {
    iVar2 = FUN_100125e0(in_ECX[1]);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x1f29) = 1;
      *(undefined1 *)(iVar2 + 0x501) = 1;
    }
    fVar3 = (float10)(*DAT_1022302c)("violence_hgibs");
    if ((float)fVar3 == 0.0) {
      return;
    }
    iVar2 = 1;
    do {
      FUN_1008ad80(in_ECX[1],"models/simon_gibs.mdl",iVar2 + -1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    return;
  }
  iVar2 = (**(code **)(*in_ECX + 0x214))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*in_ECX + 0x218))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*in_ECX + 0x21c))();
      if (iVar2 == 0) goto LAB_10089eec;
      fVar3 = (float10)(*DAT_1022302c)("violence_agibs");
      if ((float)fVar3 != 0.0) {
        FUN_1008b390(in_ECX[1],4,0);
      }
    }
    else {
      fVar3 = (float10)(*DAT_1022302c)("violence_hgibs");
      if ((float)fVar3 != 0.0) {
        FUN_1008b0b0(in_ECX[1]);
        FUN_1008b390(in_ECX[1],4,1);
      }
    }
  }
  else {
    fVar3 = (float10)(*DAT_1022302c)("violence_hgibs");
    if ((float)fVar3 != 0.0) {
      FUN_1008b0e0(in_ECX[1],*(int *)(DAT_10223188 + 0x98) + iVar2);
      FUN_1008b400(in_ECX[1],4,1,*(int *)(DAT_10223188 + 0x98) + iVar2);
    }
  }
  bVar1 = true;
LAB_10089eec:
  iVar2 = (**(code **)(*in_ECX + 0xd0))();
  if (iVar2 == 0) {
    if (bVar1) {
      in_ECX[0x1e] = (int)CBaseEntity::SUB_Remove;
      (**(code **)(*in_ECX + 8))(0);
      return;
    }
    (**(code **)(*in_ECX + 0x220))();
  }
  return;
}

