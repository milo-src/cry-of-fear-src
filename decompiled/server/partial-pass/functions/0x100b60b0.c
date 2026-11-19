// rea decompile_all
// name: CItemPadlock::Finished
// address: 0x100b60b0
// body: available
// range: 0x100b60b0-0x100b61ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CItemPadlock::Finished(void) */

void __thiscall CItemPadlock::Finished(CItemPadlock *this)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0xb60b0  125  ?Finished@CItemPadlock@@QAEXXZ */
  iVar2 = FUN_10118460(0,"player");
  if (iVar2 != 0) {
    FUN_10101ff0(*(int *)(*(int *)(this + 4) + 0x1cc) + *(int *)(DAT_10223188 + 0x98),this,this,3,0)
    ;
    uVar4 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c);
    FUN_10117180(uVar4,uVar4);
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    FUN_10119c00(iVar2,&local_10,0x3f000000,0x3dcccccd,0xff,0);
    uVar4 = 1;
    FUN_100125e0(*(undefined4 *)(iVar2 + 4),1);
    FUN_100deff0(uVar4);
    iVar3 = FUN_100125e0(*(undefined4 *)(iVar2 + 4));
    *(uint *)(iVar3 + 0x2500) = *(uint *)(iVar3 + 0x2500) & 0xfffffff7;
    iVar3 = FUN_100125e0(*(undefined4 *)(iVar2 + 4));
    puVar1 = (uint *)(*(int *)(iVar3 + 4) + 0x1a8);
    *puVar1 = *puVar1 & 0xffffff7f;
    (*DAT_10223000)(1,DAT_102265d0,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
    (*DAT_10223008)(0);
    (*DAT_10223004)();
  }
  return;
}

