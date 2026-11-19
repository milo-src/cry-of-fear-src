// rea decompile_all
// name: CHeadCrab::LeapTouch
// address: 0x100c3070
// body: available
// range: 0x100c3070-0x100c3135 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CHeadCrab::LeapTouch(class CBaseEntity *) */

void __thiscall CHeadCrab::LeapTouch(CHeadCrab *this,CBaseEntity *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  
                    /* 0xc3070  165  ?LeapTouch@CHeadCrab@@QAEXPAVCBaseEntity@@@Z */
  if (*(float *)(*(int *)(param_1 + 4) + 0x170) != 0.0) {
    iVar2 = (**(code **)(*(int *)param_1 + 0x50))();
    iVar3 = (**(code **)(*(int *)this + 0x50))();
    if (iVar2 != iVar3) {
      if ((*(uint *)(*(int *)(this + 4) + 0x1a8) & 0x200) == 0) {
        uVar1 = *(undefined4 *)(*(int *)(this + 4) + 0x20c);
        uVar4 = (**(code **)(*(int *)this + 0x248))();
        fVar5 = (float10)(**(code **)(*(int *)this + 0x24c))(0x40000000,0,uVar4);
        iVar2 = (*DAT_102230b0)(0,0,(float)fVar5);
        FUN_100fc9f0(uVar1,1,(&PTR_s_headcrab_hc_headbite_wav_1021778c)[iVar2]);
        iVar2 = *(int *)param_1;
        uVar1 = *(undefined4 *)(this + 4);
        fVar5 = (float10)(**(code **)(*(int *)this + 0x244))(4);
        (**(code **)(iVar2 + 100))(uVar1,uVar1,(float)fVar5);
      }
      *(undefined4 *)(this + 0x7c) = 0;
    }
  }
  return;
}

