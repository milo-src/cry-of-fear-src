// rea decompile_all
// name: CFuncRotating::RotatingUse
// address: 0x10010f90
// body: available
// range: 0x10010f90-0x10011112 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CFuncRotating::RotatingUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CFuncRotating::RotatingUse
          (CFuncRotating *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  float fVar1;
  int iVar2;
  
                    /* 0x10f90  256
                       ?RotatingUse@CFuncRotating@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar2 = FUN_10018350(param_3);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(this + 4);
  if ((*(byte *)(iVar2 + 0x1a4) & 0x10) == 0) {
    if (*(float *)(this + 0xf0) == 0.0) {
      *(undefined4 *)(this + 0xf4) = 2;
      FUN_100fc9f0(*(undefined4 *)(iVar2 + 0x20c),6,
                   *(int *)(iVar2 + 0x1f8) + *(int *)(DAT_10223188 + 0x98),
                   *(undefined4 *)(this + 0xe4),*(undefined4 *)(this + 0xe0),0,100);
      iVar2 = *(int *)(this + 4);
      *(undefined4 *)(this + 0xf0) = *(undefined4 *)(iVar2 + 0x1fc);
      fVar1 = *(float *)(iVar2 + 0x1fc);
      FUN_100c4b90(this,*(float *)(iVar2 + 0x44) * fVar1,*(float *)(iVar2 + 0x48) * fVar1,
                   *(float *)(iVar2 + 0x4c) * fVar1);
      *(code **)(this + 0x78) = Rotate;
      Rotate(this);
      return;
    }
    *(undefined4 *)(this + 0xf4) = 0;
  }
  else {
    if (*(float *)(this + 0xf0) == 0.0) {
      *(undefined4 *)(this + 0xf4) = 1;
      *(code **)(this + 0x78) = SpinUp;
      FUN_100fc9f0(*(undefined4 *)(iVar2 + 0x20c),6,
                   *(int *)(iVar2 + 0x1f8) + *(int *)(DAT_10223188 + 0x98),0x3c23d70a,
                   *(undefined4 *)(this + 0xe0),0,0x1e);
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
      return;
    }
    *(undefined4 *)(this + 0xf4) = 3;
  }
  *(code **)(this + 0x78) = SpinDown;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

