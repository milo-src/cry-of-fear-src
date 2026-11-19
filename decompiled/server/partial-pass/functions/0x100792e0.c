// rea decompile_all
// name: FUN_100792e0
// address: 0x100792e0
// body: available
// range: 0x100792e0-0x10079556 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100792e0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  in_ECX[0x4a] = 0;
  iVar2 = *(int *)(in_ECX[0x58] + 0x1f08);
  if (iVar2 < 2) {
    iVar1 = 0;
    if (in_ECX[0x7e] != 0) {
      in_ECX[0x7e] = 0;
      iVar1 = 0;
    }
  }
  else if (iVar2 < 6) {
    iVar1 = 1;
    if (in_ECX[0x7e] != 1) {
      in_ECX[0x7e] = 1;
      iVar1 = 1;
    }
  }
  else {
    iVar1 = in_ECX[0x7e];
    if (iVar2 < 9) {
      if (iVar1 != 2) {
        in_ECX[0x7e] = 2;
        iVar1 = 2;
      }
    }
    else if (iVar1 != 3) {
      in_ECX[0x7e] = 3;
      iVar1 = 3;
    }
  }
  if (*(int *)(in_ECX[1] + 0x114) != iVar1) {
    *(int *)(in_ECX[1] + 0x114) = iVar1;
    (**(code **)(*in_ECX + 0x19c))(in_ECX[0x58],*(undefined4 *)(in_ECX[1] + 0x114));
  }
  if (DAT_10222ee4 != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))();
    if (iVar2 != 0) {
      if ((char)in_ECX[0x81] != '\0') {
        if (*(float *)(in_ECX[1] + 0x1b4) != 1.0) {
          FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),1,
                       "weapons/switchblade/switchblade_draw2.wav",0x3f800000,0x3f4ccccd,0,100);
        }
        FUN_1011c1a0("models/weapons/switchblade/v_switchblade.mdl",
                     "police/models/weapons/switchblade/p_switchblade.mdl",6,"crowbar",0,0);
        return;
      }
      if (*(float *)(in_ECX[1] + 0x1b4) != 1.0) {
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),1,
                     "weapons/switchblade/switchblade_draw.wav",0x3f800000,0x3f4ccccd,0,100);
      }
      FUN_1011c1a0("models/weapons/switchblade/v_switchblade.mdl",
                   "police/models/weapons/switchblade/p_switchblade.mdl",1,"crowbar",0,0);
      return;
    }
  }
  if ((char)in_ECX[0x81] != '\0') {
    if (*(float *)(in_ECX[1] + 0x1b4) != 1.0) {
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),1,
                   "weapons/switchblade/switchblade_draw2.wav",0x3f800000,0x3f4ccccd,0,100);
    }
    FUN_1011c1a0("models/weapons/switchblade/v_switchblade.mdl","models/null.mdl",6,"crowbar",0,0);
    return;
  }
  if (*(float *)(in_ECX[1] + 0x1b4) != 1.0) {
    FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),1,
                 "weapons/switchblade/switchblade_draw.wav",0x3f800000,0x3f4ccccd,0,100);
  }
  FUN_1011c1a0("models/weapons/switchblade/v_switchblade.mdl","models/null.mdl",1,"crowbar",0,0);
  return;
}

