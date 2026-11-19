// rea decompile_all
// name: CCoFHoodie::HoodieUse
// address: 0x10094ec0
// body: available
// range: 0x10094ec0-0x100950d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CCoFHoodie::HoodieUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CCoFHoodie::HoodieUse
          (CCoFHoodie *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4
          )

{
  int iVar1;
  undefined *puVar2;
  
                    /* 0x94ec0  142  ?HoodieUse@CCoFHoodie@@AAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if (param_1 == (CBaseEntity *)0x0) {
    return;
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0xd0))();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0xbc))();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_100125e0(*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    switch(*(undefined4 *)(*(int *)(this + 4) + 0x248)) {
    case 0:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x80;
      puVar2 = &DAT_101c9484;
      break;
    case 1:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x100;
      puVar2 = &DAT_101c94a8;
      break;
    case 2:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x200;
      puVar2 = &DAT_101c94c8;
      break;
    case 3:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x400;
      puVar2 = &DAT_101c94f0;
      break;
    case 4:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x800;
      puVar2 = &DAT_101c9510;
      break;
    case 5:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x1000;
      puVar2 = &DAT_101c9534;
      break;
    case 6:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x2000;
      puVar2 = &DAT_101c9554;
      break;
    case 7:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x4000;
      puVar2 = &DAT_101c9578;
      break;
    case 8:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x8000;
      puVar2 = &DAT_101c95a4;
      break;
    case 9:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x10000;
      puVar2 = &DAT_101c95c8;
      break;
    case 10:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x20000;
      puVar2 = &DAT_101c95ec;
      break;
    case 0xb:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x2000000;
      puVar2 = &DAT_101c960c;
      break;
    case 0xc:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x4000000;
      puVar2 = &DAT_101c963c;
      break;
    case 0xd:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x8000000;
      puVar2 = &DAT_101c966c;
      break;
    case 0xe:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x10000000;
      puVar2 = &DAT_101c9698;
      break;
    case 0xf:
      *(uint *)(iVar1 + 0x42c) = *(uint *)(iVar1 + 0x42c) | 0x20000000;
      puVar2 = &DAT_101c96c8;
      break;
    default:
      goto switchD_10094f1d_default;
    }
    FUN_10119810(iVar1,puVar2,0,0);
    FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c),0,"player/find_note.wav",0x3f800000,
                 0x3f4ccccd,0,100);
  }
switchD_10094f1d_default:
  FUN_10119900(this);
  return;
}

