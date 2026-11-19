// rea decompile_all
// name: CBookSimon::RealKilled
// address: 0x10070050
// body: available
// range: 0x10070050-0x1007026b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBookSimon::RealKilled(void) */

void __thiscall CBookSimon::RealKilled(CBookSimon *this)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
                    /* 0x70050  235  ?RealKilled@CBookSimon@@QAEXXZ */
  iVar5 = 1;
  if (0 < (int)DAT_10223188[0x24]) {
    do {
      iVar2 = FUN_10119680(iVar5);
      if ((iVar2 != 0) && (pcVar3 = (char *)(*DAT_10223030)("sv_coop_music"), pcVar3 != (char *)0x0)
         ) {
        pcVar4 = pcVar3;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (1 < (uint)((int)pcVar4 - (int)(pcVar3 + 1))) {
          FUN_100ea5c0((int)pcVar3 - (int)DAT_10223188[0x26],DAT_10222f18,DAT_10222f1c);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= (int)DAT_10223188[0x24]);
  }
  if ((DAT_10222f14 != 0) && (iVar5 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar5 != 0)) {
    DAT_102231a1 = 0;
    DAT_10222f24 = 0;
    DAT_102231a2 = 1;
    iVar5 = (*DAT_102230b0)(0x78,0xf0);
    _DAT_102231a4 = (float)iVar5 + *DAT_10223188;
    (*DAT_10223000)(2,DAT_102266a8,0,0);
    (*DAT_10223008)(0);
    (*DAT_10223008)(0);
    (*DAT_10223008)(2);
    (*DAT_10223004)();
    if (*(int *)(this + 0x388) != 0) {
      FUN_100befc0(**(int **)(this + 4) + (int)DAT_10223188[0x26],*(int *)(this + 0x388));
      *(undefined4 *)(this + 0x388) = 0;
    }
  }
  *(uint *)(this + 0x2ec) = *(uint *)(this + 0x2ec) | 0x80;
  FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),1,"common/null.wav",0x3f800000,0x3f4ccccd
               ,0,100);
  iVar2 = *(int *)(this + 4);
  *(uint *)(this + 0x180) = *(uint *)(this + 0x180) | 0x100;
  *(undefined4 *)(this + 0x228) = 8;
  iVar5 = *(int *)(iVar2 + 0x19c);
  if (iVar5 == 0) {
    iVar5 = (*DAT_1022305c)(0);
    iVar2 = *(int *)(this + 4);
    if (iVar5 == 0) goto LAB_1007021b;
  }
  if (*(int **)(iVar5 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar5 + 0x7c) + 0x54))(iVar2);
    iVar2 = *(int *)(this + 4);
  }
LAB_1007021b:
  if ((*(byte *)(iVar2 + 0x1a8) & 0x20) != 0) {
    *(undefined4 *)(this + 0x7c) = 0;
    (**(code **)(*(int *)this + 0x144))();
    iVar2 = *(int *)(this + 4);
  }
  if (*(float *)(iVar2 + 0x164) <= -99.0 && *(float *)(iVar2 + 0x164) != -99.0) {
    *(undefined4 *)(iVar2 + 0x164) = 0;
  }
  *(undefined4 *)(this + 0x228) = 8;
  FUN_10119900(this);
  return;
}

