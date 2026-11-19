// rea decompile_all
// name: FUN_100be8e0
// address: 0x100be8e0
// body: available
// range: 0x100be8e0-0x100bea5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100be8e0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined1 local_5c [16];
  float local_4c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  int *local_8;
  
  if (DAT_102238b0 == 0) {
    (*DAT_1022303c)(2,"find_hintnode: graph not ready!\n");
    return -1;
  }
  iVar4 = DAT_10225974;
  if (DAT_102238c8 <= DAT_10225974) {
    iVar4 = 0;
  }
  iVar6 = 0;
  iVar3 = DAT_102238c8;
  DAT_10225974 = iVar4;
  local_8 = in_ECX;
  if (0 < DAT_102238c8) {
    do {
      piVar1 = local_8;
      local_c = (iVar4 + iVar6) % iVar3;
      pfVar5 = (float *)(local_c * 0x58 + DAT_102238bc);
      if (((*(short *)(pfVar5 + 0x14) != 0) &&
          (iVar2 = (**(code **)(*local_8 + 0x1e0))(*(short *)(pfVar5 + 0x14)), iVar3 = DAT_102238c8,
          iVar4 = DAT_10225974, iVar2 != 0)) &&
         ((*(short *)((int)pfVar5 + 0x52) == 0 ||
          (iVar2 = FUN_1000e950((int)*(short *)((int)pfVar5 + 0x52)), iVar3 = DAT_102238c8,
          iVar4 = DAT_10225974, iVar2 != -1)))) {
        iVar4 = piVar1[1];
        local_18 = *pfVar5 + *(float *)(iVar4 + 0x178);
        local_14 = *(float *)(iVar4 + 0x17c) + pfVar5[1];
        local_10 = *(float *)(iVar4 + 0x180) + pfVar5[2];
        local_20 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0xc);
        local_1c = *(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10);
        local_24 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 8);
        FUN_1011a800(&local_24,&local_18,1,*(undefined4 *)(iVar4 + 0x20c),local_5c);
        iVar3 = DAT_102238c8;
        iVar4 = DAT_10225974;
        if (local_4c == 1.0) {
          DAT_10225974 = local_c + 1;
          return local_c;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  DAT_10225974 = 0;
  return -1;
}

