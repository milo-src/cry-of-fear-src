// rea decompile_all
// name: CCoFDevCommentary::DevUse
// address: 0x1002c4b0
// body: available
// range: 0x1002c4b0-0x1002c75f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CCoFDevCommentary::DevUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CCoFDevCommentary::DevUse
          (CCoFDevCommentary *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  float10 fVar4;
  
                    /* 0x2c4b0  83  ?DevUse@CCoFDevCommentary@@AAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  if (param_1 == (CBaseEntity *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*(int *)param_1 + 0xd0))();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_100125e0(*(undefined4 *)(param_1 + 4));
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(*(int *)(this + 4) + 0x1ec) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x19c) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c);
  (*DAT_10223000)(1,DAT_10226544,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
  (*DAT_10223008)(0);
  (*DAT_10223008)(1);
  (*DAT_1022301c)(0);
  (*DAT_10223020)(*(int *)(*(int *)(this + 4) + 0x1ec) + (int)DAT_10223188[0x26]);
  (*DAT_10223004)();
  fVar4 = (float10)(*DAT_1022302c)("volume");
  *(float *)(*(int *)(this + 4) + 0x268) = (float)fVar4;
  (*DAT_10223034)("volume",*(float *)(*(int *)(this + 4) + 0x268) * 0.25);
  *(uint *)(iVar2 + 0x2500) = *(uint *)(iVar2 + 0x2500) | 8;
  *(undefined4 *)(iVar2 + 0x1eb4) = 1;
  if (*(char *)(iVar2 + 0x21e9) == '\0') {
    *(undefined1 *)(iVar2 + 0x21e9) = 1;
  }
  else {
    *(undefined4 *)(*(int *)(this + 4) + 0x24c) = 1;
  }
  uVar1 = *(uint *)(*(int *)(iVar2 + 4) + 0x1a8);
  if ((char)uVar1 < '\0') {
    *(undefined4 *)(*(int *)(this + 4) + 0x250) = 1;
  }
  else {
    *(uint *)(*(int *)(iVar2 + 4) + 0x1a8) = uVar1 | 0x80;
  }
  *(float *)(*(int *)(this + 4) + 600) = *(float *)(*(int *)(this + 4) + 0x25c) + *DAT_10223188;
  if (*(int *)(*(int *)(this + 4) + 0x1d8) == 0) {
    switch(*(undefined4 *)(*(int *)(this + 4) + 0x248)) {
    case 0:
      (*DAT_10223000)(1,DAT_10226658,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
      pcVar3 = &DAT_101acb8c;
      break;
    case 1:
      (*DAT_10223000)(1,DAT_10226658,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
      pcVar3 = &DAT_101acbac;
      break;
    case 2:
      (*DAT_10223000)(1,DAT_10226658,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
      pcVar3 = &DAT_101acbcc;
      break;
    case 3:
      (*DAT_10223000)(1,DAT_10226658,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
      pcVar3 = &DAT_101acbec;
      break;
    case 4:
      (*DAT_10223000)(1,DAT_10226658,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
      pcVar3 = &DAT_101acc0c;
      break;
    case 5:
      (*DAT_10223000)(1,DAT_10226658,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
      pcVar3 = "Mr. Sunabouzu - On Sporkeh";
      break;
    default:
      goto switchD_1002c638_default;
    }
  }
  else {
    (*DAT_10223000)(1,DAT_10226658,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
    pcVar3 = (char *)(*(int *)(*(int *)(this + 4) + 0x1d8) + (int)DAT_10223188[0x26]);
  }
  (*DAT_10223020)(pcVar3);
  (*DAT_10223020)(0);
  (*DAT_10223004)();
switchD_1002c638_default:
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x260) = 0x40a00000;
  return;
}

