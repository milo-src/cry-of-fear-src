// rea decompile_all
// name: CPendulum::PendulumUse
// address: 0x10010990
// body: available
// range: 0x10010990-0x10010ac1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CPendulum::PendulumUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CPendulum::PendulumUse
          (CPendulum *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
                    /* 0x10990  219  ?PendulumUse@CPendulum@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar2 = FUN_10018350(param_3);
  if (iVar2 != 0) {
    iVar2 = *(int *)(this + 4);
    if (*(float *)(iVar2 + 0x1fc) != 0.0) {
      if ((*(uint *)(iVar2 + 0x1a4) & 0x10) != 0) {
        fVar3 = (float10)FUN_10101dc0(*(uint *)(iVar2 + 0x1a4),iVar2 + 0x50,this + 0x100);
        iVar2 = *(int *)(this + 4);
        fVar1 = *(float *)(this + 0xec);
        FUN_100c4b90(this,*(float *)(iVar2 + 0x44) * fVar1,*(float *)(iVar2 + 0x48) * fVar1,
                     *(float *)(iVar2 + 0x4c) * fVar1);
        (**(code **)(*(int *)this + 8))((float)fVar3 / *(float *)(this + 0xec));
        *(code **)(this + 0x78) = StopThink;
        return;
      }
      *(undefined4 *)(iVar2 + 0x1fc) = 0;
      FUN_10017ad0();
      FUN_100c4b90(this,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c);
      return;
    }
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    *(code **)(this + 0x78) = SwingThink;
    *(undefined4 *)(this + 0xe4) = *DAT_10223188;
    *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0xec);
  }
  return;
}

