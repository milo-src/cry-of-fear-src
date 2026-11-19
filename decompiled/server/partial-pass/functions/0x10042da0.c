// rea decompile_all
// name: FUN_10042da0
// address: 0x10042da0
// body: available
// range: 0x10042da0-0x1004312e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042da0(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if ((param_1 != (int *)0x0) && (*(int *)(*(int *)(in_ECX + 4) + 0x250) < 1)) {
    FUN_10017740(param_1);
    iVar2 = (**(code **)(*param_1 + 0xd0))();
    if ((iVar2 != 0) && (*(float *)(in_ECX + 0x1a0) < *DAT_10223188)) {
      if (*(int *)(in_ECX + 0x180) == 0) {
        iVar2 = *(int *)(in_ECX + 0x1a4);
        if (iVar2 == 0) {
          *(undefined4 *)(in_ECX + 0x1a4) = 1;
          FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),3,"buttons/valve_start.wav",
                       0x3f800000,0x3f4ccccd,0,100);
          iVar2 = *(int *)(in_ECX + 0x1a4);
          *(float *)(in_ECX + 0x1a8) = *DAT_10223188 + 0.31;
        }
        if ((iVar2 == 1) && (*(float *)(in_ECX + 0x1a8) <= *DAT_10223188)) {
          *(undefined4 *)(in_ECX + 0x1a4) = 2;
          FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),6,"buttons/valve_turn.wav",
                       0x3f800000,0x3f4ccccd,0,100);
        }
        iVar2 = *(int *)(in_ECX + 4);
        iVar1 = *(int *)(iVar2 + 0x254);
        if (iVar1 == 0) {
          *(float *)(iVar2 + 0x50) = (float)*(int *)(iVar2 + 0x24c) + *(float *)(iVar2 + 0x50);
          if (359.0 < *(float *)(*(int *)(in_ECX + 4) + 0x50)) {
            *(undefined4 *)(*(int *)(in_ECX + 4) + 0x50) = 0x43b38000;
          }
        }
        else if (iVar1 == 1) {
          *(float *)(iVar2 + 0x54) = (float)*(int *)(iVar2 + 0x24c) + *(float *)(iVar2 + 0x54);
          if (359.0 < *(float *)(*(int *)(in_ECX + 4) + 0x54)) {
            *(undefined4 *)(*(int *)(in_ECX + 4) + 0x54) = 0x43b38000;
          }
        }
        else if (iVar1 == 2) {
          *(float *)(iVar2 + 0x58) = (float)*(int *)(iVar2 + 0x24c) + *(float *)(iVar2 + 0x58);
          if (359.0 < *(float *)(*(int *)(in_ECX + 4) + 0x58)) {
            *(undefined4 *)(*(int *)(in_ECX + 4) + 0x58) = 0x43b38000;
          }
        }
        iVar2 = FUN_10017780();
        if (iVar2 != 0) {
          iVar2 = *(int *)(*(int *)(in_ECX + 4) + 0x188);
          if (iVar2 == 0) {
            iVar2 = FUN_10017780();
            if (iVar2 != 0) {
              iVar2 = FUN_100177a0();
              *(float *)(*(int *)(iVar2 + 4) + 0x50) =
                   (float)*(int *)(*(int *)(in_ECX + 4) + 0x24c) +
                   *(float *)(*(int *)(iVar2 + 4) + 0x50);
              iVar2 = FUN_100177a0();
              if (359.0 < *(float *)(*(int *)(iVar2 + 4) + 0x50)) {
                iVar2 = FUN_100177a0();
                *(undefined4 *)(*(int *)(iVar2 + 4) + 0x50) = 0x43b38000;
              }
            }
          }
          else if (iVar2 == 1) {
            iVar2 = FUN_10017780();
            if (iVar2 != 0) {
              iVar2 = FUN_100177a0();
              *(float *)(*(int *)(iVar2 + 4) + 0x54) =
                   (float)*(int *)(*(int *)(in_ECX + 4) + 0x24c) +
                   *(float *)(*(int *)(iVar2 + 4) + 0x54);
              iVar2 = FUN_100177a0();
              if (359.0 < *(float *)(*(int *)(iVar2 + 4) + 0x54)) {
                iVar2 = FUN_100177a0();
                *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54) = 0x43b38000;
              }
            }
          }
          else if (iVar2 == 2) {
            iVar2 = FUN_10017780();
            if (iVar2 != 0) {
              iVar2 = FUN_100177a0();
              *(float *)(*(int *)(iVar2 + 4) + 0x58) =
                   (float)*(int *)(*(int *)(in_ECX + 4) + 0x24c) +
                   *(float *)(*(int *)(iVar2 + 4) + 0x58);
              iVar2 = FUN_100177a0();
              if (359.0 < *(float *)(*(int *)(iVar2 + 4) + 0x58)) {
                iVar2 = FUN_100177a0();
                *(undefined4 *)(*(int *)(iVar2 + 4) + 0x58) = 0x43b38000;
              }
            }
          }
        }
        *(float *)(in_ECX + 0x1a0) = *DAT_10223188 + 0.025;
      }
      else {
        if (*(int *)(in_ECX + 0x184) != 0) {
          FUN_10119810(param_1,(int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x184),5,0);
        }
        iVar2 = *(int *)(*(int *)(in_ECX + 4) + 500);
        if (iVar2 != 0) {
          FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),4,
                       (int)DAT_10223188[0x26] + iVar2,0x3f800000,0x3f4ccccd,0,100);
          return;
        }
      }
    }
  }
  return;
}

