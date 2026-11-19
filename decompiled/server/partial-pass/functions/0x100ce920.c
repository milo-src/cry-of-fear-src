// rea decompile_all
// name: CTestHull::PathFind
// address: 0x100ce920
// body: available
// range: 0x100ce920-0x100cea9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CTestHull::PathFind(void) */

void __thiscall CTestHull::PathFind(CTestHull *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_d0;
  int aiStack_cc [49];
  uint local_8;
  
                    /* 0xce920  218  ?PathFind@CTestHull@@QAEXXZ */
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((DAT_102238b0 != 0) && (DAT_102238b4 != 0)) {
    iVar1 = FUN_100cd5e0(&local_d0,0,0x13,0,0);
    if (iVar1 != 0) {
      (*DAT_1022303c)(2,&DAT_101d7204,iVar1);
      iVar2 = 0;
      puVar4 = (undefined4 *)(local_d0 * 0x58 + DAT_102238bc);
      if (0 < iVar1 + -1) {
        do {
          puVar3 = (undefined4 *)(aiStack_cc[iVar2] * 0x58 + DAT_102238bc);
          (*DAT_10223000)(0,0x17,0,0);
          (*DAT_10223008)(0x66);
          (*DAT_1022301c)(*puVar4);
          (*DAT_1022301c)(puVar4[1]);
          (*DAT_1022301c)((float)puVar4[2] + 8.0);
          (*DAT_1022301c)(*puVar3);
          (*DAT_1022301c)(puVar3[1]);
          (*DAT_1022301c)((float)puVar3[2] + 8.0);
          (*DAT_10223004)();
          iVar2 = iVar2 + 1;
          puVar4 = puVar3;
        } while (iVar2 < iVar1 + -1);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    (*DAT_1022303c)(2,"No Path!\n");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*DAT_1022303c)(2,"Graph not ready!\n");
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

