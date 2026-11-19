// rea decompile_all
// name: FUN_1004c100
// address: 0x1004c100
// body: available
// range: 0x1004c100-0x1004c35b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004c100(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((((param_1 != (int *)0x0) && (iVar2 = (**(code **)(*param_1 + 0xd0))(), iVar2 != 0)) &&
      (iVar2 = FUN_10119060(in_ECX[0x5f],param_1), iVar2 != 0)) &&
     ((iVar2 = in_ECX[1], *(int *)(iVar2 + 0x1cc) != 0 && (*(int *)(iVar2 + 0x1d8) != 0)))) {
    if (in_ECX[0x60] != 0) {
      (*DAT_10223038)("sv_coop_music",*(int *)(DAT_10223188 + 0x98) + in_ECX[0x60]);
      iVar2 = in_ECX[1];
    }
    iVar2 = FUN_10118590(0,*(int *)(iVar2 + 0x1cc) + *(int *)(DAT_10223188 + 0x98));
    iVar3 = FUN_100125e0(param_1[1]);
    if ((iVar2 != 0) && (iVar3 != 0)) {
      if (DAT_10222f20 != 0) {
        FUN_10119810(iVar3,&DAT_101b1590,2,0);
        return;
      }
      if (*(int *)(*(int *)(iVar2 + 4) + 0x248) != 1) {
        FUN_10119810(iVar3,&DAT_101ac294,2,0);
        return;
      }
      iVar2 = *(int *)(in_ECX[1] + 0x1ec);
      if (iVar2 != 0) {
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,*(int *)(DAT_10223188 + 0x98) + iVar2,
                     0x3f800000,0x3f4ccccd,0,100);
      }
      if (DAT_10222e10 != 0) {
        _memset((void *)(DAT_10222e10 + 4),0,0x10f38);
      }
      iVar2 = 1;
      if (0 < *(int *)(DAT_10223188 + 0x90)) {
        do {
          iVar3 = FUN_10119680(iVar2);
          if (iVar3 != 0) {
            *(undefined1 *)(iVar3 + 0x1ea4) = 1;
            local_10 = 0;
            local_c = 0;
            local_8 = 0;
            FUN_10119c00(iVar3,&local_10,0x3f000000,0x40000000,0xff,5);
            FUN_100deff0(0);
            *(uint *)(iVar3 + 0x2500) = *(uint *)(iVar3 + 0x2500) | 9;
            puVar1 = (uint *)(*(int *)(iVar3 + 4) + 0x1a8);
            *puVar1 = *puVar1 | 0x80;
            if (in_ECX[0x60] != 0) {
              FUN_100ea5c0(in_ECX[0x60],*(undefined4 *)(in_ECX[1] + 0x248),
                           *(undefined4 *)(in_ECX[1] + 600));
            }
            if (DAT_10222e10 != 0) {
              FUN_1002a480(iVar3);
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 <= *(int *)(DAT_10223188 + 0x90));
      }
      in_ECX[0x1e] = (int)CInterDoorCoopChangeLevel::ChangeLevelThink;
      (**(code **)(*in_ECX + 8))(0x40000000);
    }
  }
  return;
}

