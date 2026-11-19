// rea decompile_all
// name: CPasswordNote::NoteUse
// address: 0x10083120
// body: available
// range: 0x10083120-0x10083412 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CPasswordNote::NoteUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CPasswordNote::NoteUse
          (CPasswordNote *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *_Source;
  char local_a8 [128];
  char local_28 [32];
  uint local_8;
  
                    /* 0x83120  215  ?NoteUse@CPasswordNote@@AAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (CBaseEntity *)0x0) ||
     (iVar3 = (**(code **)(*(int *)param_1 + 0xd0))(), iVar3 == 0)) goto LAB_10083401;
  iVar3 = FUN_100125e0(*(undefined4 *)(param_1 + 4));
  iVar4 = FUN_10118460(0,"cof_computer");
  if (iVar4 == 0) {
    (*DAT_1022303c)(1,"No computer at all!\n");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = *(int *)(iVar4 + 4);
  iVar1 = *(int *)(iVar5 + 0x24c);
  if ((iVar1 == 0) || (iVar2 = *(int *)(iVar5 + 0x250), iVar2 == 0)) {
    (*DAT_1022303c)(1,"No computer user or 3! %i %i\n",iVar1,*(undefined4 *)(iVar5 + 0x250));
    goto LAB_10083401;
  }
  if ((*(int *)(this + 0x104) == 0) && (this[0x100] == (CPasswordNote)0x0)) {
    iVar5 = *(int *)(this + 4);
    this[0x100] = (CPasswordNote)0x1;
    iVar5 = FUN_10017950("cof_document",iVar5 + 8,iVar5 + 0x50,*(undefined4 *)(iVar5 + 0x20c));
    if (iVar5 != 0) {
      piVar6 = (int *)FUN_10018560(*(undefined4 *)(iVar5 + 4));
      iVar4 = FUN_100185c0(*(undefined4 *)(iVar4 + 4));
      if ((piVar6 != (int *)0x0) && (iVar4 != 0)) {
        if (iVar1 - 1U < 8) {
          if (*(int *)(*(int *)(this + 4) + 0x248) == 0) {
            if (iVar2 - 1U < 8) {
              FUN_1001f160(local_a8,"user%i",iVar1);
              _strncpy((char *)(piVar6 + 0x37),local_a8,0x20);
              FUN_1001f160(local_28,"%s.txt",*(undefined4 *)(&DAT_10213f14 + iVar1 * 4));
              _strncpy((char *)(piVar6 + 0x57),local_28,0x20);
              _Source = "gfx/vgui/notes/hiddennote2.tga";
              goto LAB_10083317;
            }
          }
          else if (iVar2 - 1U < 8) {
            FUN_1001f160(local_a8,"pass%i",iVar2);
            _strncpy((char *)(piVar6 + 0x37),local_a8,0x20);
            FUN_1001f160(local_28,"%s.txt",*(undefined4 *)(&DAT_102141e8 + iVar2 * 4));
            _strncpy((char *)(piVar6 + 0x57),local_28,0x20);
            _Source = "gfx/vgui/notes/hiddennote1.tga";
LAB_10083317:
            _strncpy((char *)(piVar6 + 0x78),_Source,0x30);
          }
        }
        (**(code **)(*piVar6 + 0x2c))();
        *(int **)(this + 0x104) = piVar6;
        if (iVar3 != 0) {
          FUN_10017740(piVar6);
          goto LAB_10083363;
        }
        goto LAB_10083401;
      }
    }
  }
  if (iVar3 != 0) {
LAB_10083363:
    if (*(int *)(*(int *)(this + 4) + 0x248) == 0) {
      (*DAT_10223000)(1,DAT_102265f0,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
      (*DAT_10223008)(1);
      (*DAT_10223008)(iVar1);
      (*DAT_10223004)();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    (*DAT_10223000)();
    (*DAT_10223008)(2);
    (*DAT_10223008)(iVar2);
    (*DAT_10223004)();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_10083401:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

