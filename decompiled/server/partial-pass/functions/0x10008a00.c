// rea decompile_all
// name: FUN_10008a00
// address: 0x10008a00
// body: available
// range: 0x10008a00-0x10008e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10008bb1 to 0x10006f90 FUN_10006f90 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10008bb9 to 0x100070a0 FUN_100070a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10008c99 to 0x10004990 FUN_10004990 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10008e43 to 0x10003c70 FUN_10003c70 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008a00(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined4 *)(DAT_10220c50 + 4) = param_1;
  FUN_10004170();
  *(undefined4 *)(DAT_10220c50 + 0x45490) = 0;
  *(float *)(DAT_10220c50 + 0x10) = (float)*(byte *)(DAT_10220c50 + 0x4545a) * 0.001;
  FUN_10009000();
  FUN_10002ae0(DAT_10220c50 + 0x44,DAT_10220c50 + 0x14,DAT_10220c50 + 0x20,DAT_10220c50 + 0x2c);
  if ((*(int *)(DAT_10220c50 + 0xd8) != 0) || (0 < *(int *)(DAT_10220c50 + 0x1fc))) {
    FUN_10009150();
    FUN_10003c70();
    return;
  }
  if (((*(int *)(DAT_10220c50 + 0xdc) == 8) || (*(int *)(DAT_10220c50 + 0xdc) == 0)) ||
     (iVar1 = FUN_100044b0(), iVar1 == 0)) {
    FUN_10003c70();
    *(undefined4 *)(DAT_10220c50 + 0xec) = *(undefined4 *)(DAT_10220c50 + 0xe4);
    if (*(int *)(DAT_10220c50 + 0xe8) < -0x10) {
      *(undefined4 *)(DAT_10220c50 + 0xec) = 0;
    }
    else {
      *(undefined4 *)(DAT_10220c50 + 0xec) = *(undefined4 *)(DAT_10220c50 + 0xe4);
    }
    if (*(int *)(DAT_10220c50 + 0xe0) == -1) {
      *(uint *)(DAT_10220c50 + 0x9c) = *(uint *)(DAT_10220c50 + 100) ^ 0x80000000;
    }
    DAT_10220c54 = 0;
    if (((*(int *)(DAT_10220c50 + 0xd0) == 0) && ((*(uint *)(DAT_10220c50 + 0xb8) & 0x1000000) == 0)
        ) && (iVar3 = FUN_10006930(), iVar3 != 0)) {
      DAT_10220c54 = 1;
    }
    FUN_100099e0();
    FUN_10005400();
    if ((*(int *)(DAT_10220c50 + 0xd0) == 0) && ((*(uint *)(DAT_10220c50 + 0xb8) & 0x1000000) == 0))
    {
      if (iVar3 == 0) {
        if ((*(int *)(DAT_10220c50 + 0xdc) != 3) && (*(int *)(DAT_10220c50 + 0xdc) != 8)) {
          *(undefined4 *)(DAT_10220c50 + 0xdc) = 3;
        }
      }
      else {
        FUN_10006a40(iVar3);
      }
    }
    iVar1 = DAT_10220c50;
    switch(*(undefined4 *)(DAT_10220c50 + 0xdc)) {
    default:
      (**(code **)(DAT_10220c50 + 0x4f568))
                ("Bogus pmove player movetype %i on (%i) 0=cl 1=sv\n",
                 *(undefined4 *)(DAT_10220c50 + 0xdc),*(undefined4 *)(DAT_10220c50 + 4));
      return;
    case 3:
      iVar2 = FUN_100061b0();
      if (iVar2 == 0) {
        FUN_10003730();
        iVar1 = DAT_10220c50;
      }
      if (*(float *)(iVar1 + 0xcc) != 0.0) {
        FUN_1000a590();
        FUN_10005880();
        FUN_10004990();
        return;
      }
      if ((*(int *)(iVar1 + 0xe4) < 2) || (*(int *)(iVar1 + 0xe8) == -0x13)) {
        if ((*(byte *)(iVar1 + 0x45476) & 2) == 0) {
          *(uint *)(iVar1 + 200) = *(uint *)(iVar1 + 200) & 0xfffffffd;
          iVar1 = DAT_10220c50;
        }
        else if (iVar3 == 0) {
          FUN_10006520();
          iVar1 = DAT_10220c50;
        }
        if (*(int *)(iVar1 + 0xe0) != -1) {
          *(undefined4 *)(iVar1 + 100) = 0;
          FUN_10005ea0();
        }
        FUN_10004880();
        if (*(int *)(DAT_10220c50 + 0xe0) == -1) {
          FUN_10003a20();
        }
        else {
          FUN_10009e50();
        }
        FUN_10003c70();
        *(float *)(DAT_10220c50 + 0x5c) =
             *(float *)(DAT_10220c50 + 0x5c) - *(float *)(DAT_10220c50 + 0x74);
        *(float *)(DAT_10220c50 + 0x60) =
             *(float *)(DAT_10220c50 + 0x60) - *(float *)(DAT_10220c50 + 0x78);
        *(float *)(DAT_10220c50 + 100) =
             *(float *)(DAT_10220c50 + 100) - *(float *)(DAT_10220c50 + 0x7c);
        FUN_10004880();
        iVar3 = FUN_100061b0();
        if (iVar3 == 0) {
          FUN_10005810();
        }
        if (*(int *)(DAT_10220c50 + 0xe0) != -1) {
          *(undefined4 *)(DAT_10220c50 + 100) = 0;
        }
        FUN_10003ef0();
      }
      else {
        if (*(int *)(iVar1 + 0xe4) == 2) {
          FUN_10004bd0();
          iVar1 = DAT_10220c50;
        }
        if ((*(float *)(iVar1 + 100) <= 0.0 && *(float *)(iVar1 + 100) != 0.0) &&
           (*(float *)(iVar1 + 0xcc) != 0.0)) {
          *(undefined4 *)(iVar1 + 0xcc) = 0;
          iVar1 = DAT_10220c50;
        }
        if ((*(byte *)(iVar1 + 0x45476) & 2) == 0) {
          *(uint *)(iVar1 + 200) = *(uint *)(iVar1 + 200) & 0xfffffffd;
        }
        else {
          FUN_10006520();
        }
        FUN_1000a630();
        *(float *)(DAT_10220c50 + 0x5c) =
             *(float *)(DAT_10220c50 + 0x5c) - *(float *)(DAT_10220c50 + 0x74);
        *(float *)(DAT_10220c50 + 0x60) =
             *(float *)(DAT_10220c50 + 0x60) - *(float *)(DAT_10220c50 + 0x78);
        *(float *)(DAT_10220c50 + 100) =
             *(float *)(DAT_10220c50 + 100) - *(float *)(DAT_10220c50 + 0x7c);
        FUN_10003c70();
      }
      return;
    case 5:
      FUN_10004990();
      if ((*(byte *)(DAT_10220c50 + 0x45476) & 2) == 0) {
        *(uint *)(DAT_10220c50 + 200) = *(uint *)(DAT_10220c50 + 200) & 0xfffffffd;
      }
      else if (iVar3 == 0) {
        FUN_10006520();
      }
      *(float *)(DAT_10220c50 + 0x5c) =
           *(float *)(DAT_10220c50 + 0x74) + *(float *)(DAT_10220c50 + 0x5c);
      *(float *)(DAT_10220c50 + 0x60) =
           *(float *)(DAT_10220c50 + 0x78) + *(float *)(DAT_10220c50 + 0x60);
      *(float *)(DAT_10220c50 + 100) =
           *(float *)(DAT_10220c50 + 0x7c) + *(float *)(DAT_10220c50 + 100);
      FUN_10005880();
      *(float *)(DAT_10220c50 + 0x5c) =
           *(float *)(DAT_10220c50 + 0x5c) - *(float *)(DAT_10220c50 + 0x74);
      *(float *)(DAT_10220c50 + 0x60) =
           *(float *)(DAT_10220c50 + 0x60) - *(float *)(DAT_10220c50 + 0x78);
      *(float *)(DAT_10220c50 + 100) =
           *(float *)(DAT_10220c50 + 100) - *(float *)(DAT_10220c50 + 0x7c);
    case 0:
      break;
    case 6:
    case 10:
      FUN_100070a0();
      return;
    case 8:
      FUN_10006f90();
      return;
    }
  }
  return;
}

