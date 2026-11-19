// rea decompile_all
// name: CBasePlayer::PreSave
// address: 0x100ef1d0
// body: available
// range: 0x100ef1d0-0x100ef2c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBasePlayer::PreSave(int) */

void __thiscall CBasePlayer::PreSave(CBasePlayer *this,int param_1)

{
  CBasePlayer *pCVar1;
  int iVar2;
  float10 fVar3;
  
                    /* 0xef1d0  229  ?PreSave@CBasePlayer@@QAEXH@Z */
  iVar2 = (**(code **)(*(int *)this + 0xbc))();
  if (iVar2 != 0) {
    _DAT_10217e38 = param_1;
    FUN_100f4050(200);
    *(uint *)(this + 0x2500) = *(uint *)(this + 0x2500) | 9;
    *(uint *)(*(int *)(this + 4) + 0x1a8) = *(uint *)(*(int *)(this + 4) + 0x1a8) | 0x80;
    FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),2,"save/save_sequence.wav",0x3f800000,
                 0x3f4ccccd,0,100);
    iVar2 = *(int *)(this + 4);
    *(undefined8 *)(iVar2 + 0x20) = DAT_10222f34;
    *(undefined4 *)(iVar2 + 0x28) = DAT_10222f3c;
    FUN_100deff0(0);
    FUN_10119810(this,&DAT_101dc888,2,0);
    fVar3 = (float10)(*DAT_1022302c)("difficulty");
    if ((float)fVar3 == 4.0) {
      pCVar1 = this + 0x1ef4;
      *(int *)pCVar1 = *(int *)pCVar1 + -1;
      if (*(int *)pCVar1 == 0) {
        FUN_100e2240("inventoryitems/cassettetape.txt",1);
      }
    }
    this[8] = (CBasePlayer)0x1;
    (**(code **)(*(int *)this + 8))(0x40400000);
    *(code **)(this + 0x78) = EndSave;
  }
  return;
}

