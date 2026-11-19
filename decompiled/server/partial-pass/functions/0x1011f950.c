// rea decompile_all
// name: FUN_1011f950
// address: 0x1011f950
// body: available
// range: 0x1011f950-0x1011fb59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1011f950(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  byte *pbVar7;
  char *pcVar8;
  int *piVar9;
  bool bVar10;
  
  piVar3 = param_1;
  if (((((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x200) != 0) &&
       (iVar4 = (**(code **)(*param_1 + 0xd0))(), iVar4 != 0)) &&
      (iVar4 = (**(code **)(*param_1 + 0xbc))(), iVar4 != 0)) &&
     ((*(int *)(*(int *)(in_ECX + 4) + 0x254) == 1 ||
      (((*(uint *)(param_1[1] + 0x184) | param_1[0x8ad] | param_1[0x8ac]) & 0x20) != 0)))) {
    pcVar8 = "models/weapons/lantern/w_lantern.mdl";
    pbVar7 = (byte *)(*(int *)(*(int *)(in_ECX + 4) + 0xb8) + *(int *)(DAT_10223188 + 0x98));
    do {
      bVar1 = *pbVar7;
      bVar10 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_1011f9f4:
        uVar5 = -(uint)bVar10 | 1;
        goto LAB_1011f9f9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar10 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_1011f9f4;
      pbVar7 = pbVar7 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_1011f9f9:
    if ((uVar5 != 0) || (iVar4 = FUN_100e2380("weapon_lantern"), iVar4 == 0)) {
      piVar9 = (int *)(in_ECX + 0xf8);
      param_1 = (int *)0x20;
      do {
        if (*piVar9 != 0) {
          iVar4 = *piVar3;
          uVar6 = FUN_1011e250(*piVar9,0);
          (**(code **)(iVar4 + 0x94))(piVar9[0x20],*(int *)(DAT_10223188 + 0x98) + *piVar9,uVar6);
          *piVar9 = 0;
          piVar9[0x20] = 0;
        }
        piVar9 = piVar9 + 1;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
      param_1 = (int *)0x0;
      piVar9 = (int *)(in_ECX + 0xe0);
      do {
        piVar2 = (int *)*piVar9;
        while (piVar2 != (int *)0x0) {
          *piVar9 = piVar2[0x59];
          iVar4 = *(int *)(in_ECX + 0xdc);
          piVar2[0x43] = iVar4;
          *(int *)(piVar2[1] + 0xb8) = iVar4;
          *(undefined4 *)(piVar2[1] + 0x1d8) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1d8);
          *(uint *)(piVar2[1] + 0x1a8) =
               *(uint *)(piVar2[1] + 0x1a8) | *(uint *)(*(int *)(in_ECX + 4) + 0x1a8);
          iVar4 = FUN_100e2f80(piVar2);
          if (iVar4 == 0) {
            return;
          }
          iVar4 = (**(code **)(*piVar3 + 0x8c))(piVar2);
          if (iVar4 != 0) {
            (**(code **)(*piVar2 + 0x164))(piVar3);
          }
          piVar2 = (int *)*piVar9;
        }
        param_1 = (int *)((int)param_1 + 1);
        piVar9 = piVar9 + 1;
      } while ((int)param_1 < 6);
      FUN_100fc9f0(*(undefined4 *)(piVar3[1] + 0x20c),3,"weapons/weapon_get.wav",0x3f800000,
                   0x3f4ccccd,0,100);
      *(undefined4 *)(in_ECX + 0x7c) = 0;
      FUN_10119900(in_ECX);
    }
  }
  return;
}

