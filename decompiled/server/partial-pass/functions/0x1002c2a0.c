// rea decompile_all
// name: CCoFDevCommentary::DevThink
// address: 0x1002c2a0
// body: available
// range: 0x1002c2a0-0x1002c4a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CCoFDevCommentary::DevThink(void) */

void __thiscall CCoFDevCommentary::DevThink(CCoFDevCommentary *this)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
                    /* 0x2c2a0  82  ?DevThink@CCoFDevCommentary@@AAEXXZ */
  iVar4 = *(int *)(this + 4);
  if (*(float *)(iVar4 + 0x264) <= *DAT_10223188 && *DAT_10223188 != *(float *)(iVar4 + 0x264)) {
    if ((*(byte *)(iVar4 + 0x1a4) & 1) == 0) {
      fVar5 = (float10)(*DAT_1022302c)("dev_commentary");
      if ((float)fVar5 == 0.0) {
        FUN_10119900(this);
      }
    }
    if (*(int *)(*(int *)(this + 4) + 0x298) == 0) {
      iVar4 = FUN_10118460(0,"player");
      if (iVar4 != 0) {
        *(undefined4 *)(*(int *)(this + 4) + 0x298) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c);
      }
    }
    else {
      piVar1 = *(int **)(*(int *)(*(int *)(this + 4) + 0x298) + 0x7c);
      if (piVar1 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar1 + 0xd0))();
        if ((iVar4 != 0) && ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 1) == 0)) {
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 0x400000;
          FUN_100125e0(piVar1[1],0x400000,0,0);
          cVar2 = FUN_100dd000(uVar6,uVar7,uVar8);
          if (cVar2 == '\0') {
            FUN_10119900(this);
          }
        }
      }
    }
    *(float *)(*(int *)(this + 4) + 0x264) = *DAT_10223188 + 0.5;
    iVar4 = *(int *)(this + 4);
  }
  if (*(int *)(iVar4 + 0x19c) != 0) {
    uVar3 = GetAsyncKeyState(0xd);
    if (((uVar3 & 0x8000) != 0) ||
       (*(float *)(*(int *)(this + 4) + 600) <= *DAT_10223188 &&
        *DAT_10223188 != *(float *)(*(int *)(this + 4) + 600))) {
      iVar4 = *(int *)(*(int *)(this + 4) + 0x19c);
      if (iVar4 == 0) {
        iVar4 = (*DAT_1022305c)(0);
        if (iVar4 == 0) goto LAB_1002c48c;
      }
      piVar1 = *(int **)(iVar4 + 0x7c);
      if (piVar1 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar1 + 0xd0))();
        if (iVar4 != 0) {
          iVar4 = *(int *)(this + 4);
          if (*(int *)(iVar4 + 0x24c) != 1) {
            *(undefined1 *)((int)piVar1 + 0x21e9) = 0;
            iVar4 = *(int *)(this + 4);
          }
          if (*(int *)(iVar4 + 0x250) != 1) {
            *(uint *)(piVar1[1] + 0x1a8) = *(uint *)(piVar1[1] + 0x1a8) & 0xffffff7f;
          }
          piVar1[0x8c5] = 1;
          (*DAT_10223034)("volume",*(undefined4 *)(*(int *)(this + 4) + 0x268));
          *(undefined4 *)(*(int *)(this + 4) + 0x19c) = 0;
          piVar1[0x940] = piVar1[0x940] & 0xfffffff7;
          piVar1[0x7ad] = 0;
          *(undefined4 *)(piVar1[1] + 0x260) = 0;
        }
      }
    }
  }
LAB_1002c48c:
  (**(code **)(*(int *)this + 8))(0);
  return;
}

