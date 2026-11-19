// rea decompile_all
// name: CCoFDeadCat::CatUse
// address: 0x100931f0
// body: available
// range: 0x100931f0-0x10093368 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CCoFDeadCat::CatUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CCoFDeadCat::CatUse(CCoFDeadCat *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
                   float param_4)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  
                    /* 0x931f0  49  ?CatUse@CCoFDeadCat@@AAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if (param_1 == (CBaseEntity *)0x0) {
    return;
  }
  iVar4 = (**(code **)(*(int *)param_1 + 0xd0))();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = (**(code **)(*(int *)param_1 + 0xbc))();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = FUN_100125e0(*(undefined4 *)(param_1 + 4));
  if (iVar4 != 0) {
    pfVar1 = (float *)(*(int *)(this + 4) + 600);
    if (*pfVar1 <= *DAT_10223188 && *DAT_10223188 != *pfVar1) {
      if (((*(int *)(*(int *)(this + 4) + 0x248) < 5) ||
          (cVar3 = FUN_100dd000(0x200,0,0), cVar3 != '\0')) ||
         (0 < *(int *)(*(int *)(this + 4) + 0x24c))) {
        *(int *)(*(int *)(this + 4) + 0x248) = *(int *)(*(int *)(this + 4) + 0x248) + 1;
        FUN_10119810(iVar4,&DAT_101c9334,5,0);
        fVar2 = *DAT_10223188 + 0.75;
      }
      else {
        FUN_10119810(iVar4,&DAT_101c9324,0,0);
        FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c),2,"subtitles/hellokitty.wav",
                     0x3f800000,0x3f4ccccd,0,100);
        *(uint *)(iVar4 + 0x42c) = *(uint *)(iVar4 + 0x42c) | 0x200;
        FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c),0,"player/find_note.wav",
                     0x3f800000,0x3f4ccccd,0,100);
        *(undefined4 *)(*(int *)(this + 4) + 0x24c) = 1;
        fVar2 = *DAT_10223188 + 1.5;
      }
      *(float *)(*(int *)(this + 4) + 600) = fVar2;
      return;
    }
    return;
  }
  return;
}

