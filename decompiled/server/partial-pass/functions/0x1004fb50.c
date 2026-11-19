// rea decompile_all
// name: FUN_1004fb50
// address: 0x1004fb50
// body: available
// range: 0x1004fb50-0x1004fe7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fb50(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *in_ECX;
  char *pcVar8;
  bool bVar9;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((param_1 != 0) && (*(int *)(in_ECX[1] + 0xb8) != 0)) {
    iVar3 = FUN_100125e0(*(undefined4 *)(param_1 + 4));
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x252c) != 0)) {
      pcVar8 = "weapon_flare";
      iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x252c) + 4) + 0x20c);
      pbVar4 = (byte *)(*(int *)(-(uint)(iVar6 != 0) & iVar6 + 0x80U) +
                       *(int *)(DAT_10223188 + 0x98));
      do {
        bVar2 = *pbVar4;
        bVar9 = bVar2 < (byte)*pcVar8;
        if (bVar2 != *pcVar8) {
LAB_1004fbe1:
          uVar5 = -(uint)bVar9 | 1;
          goto LAB_1004fbe6;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar9 = bVar2 < (byte)pcVar8[1];
        if (bVar2 != pcVar8[1]) goto LAB_1004fbe1;
        pbVar4 = pbVar4 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_1004fbe6:
      if (((uVar5 == 0) && (iVar6 = FUN_100e0310(0xd), iVar6 != 0)) &&
         (*(int *)(*(int *)(iVar6 + 4) + 0x248) != 0)) {
LAB_1004fc89:
        FUN_10119810(iVar3,&DAT_101b1c38,5,0);
        return;
      }
      pcVar8 = "weapon_dualweapon";
      iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x252c) + 4) + 0x20c);
      pbVar4 = (byte *)(*(int *)(-(uint)(iVar6 != 0) & iVar6 + 0x80U) +
                       *(int *)(DAT_10223188 + 0x98));
      do {
        bVar2 = *pbVar4;
        bVar9 = bVar2 < (byte)*pcVar8;
        if (bVar2 != *pcVar8) {
LAB_1004fc55:
          uVar5 = -(uint)bVar9 | 1;
          goto LAB_1004fc5a;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar9 = bVar2 < (byte)pcVar8[1];
        if (bVar2 != pcVar8[1]) goto LAB_1004fc55;
        pbVar4 = pbVar4 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_1004fc5a:
      if ((((uVar5 == 0) && ((*(int *)(iVar3 + 0x1e70) == 0xd || (*(int *)(iVar3 + 0x1e74) == 0xd)))
           ) && (iVar6 = FUN_100e0310(0xd), iVar6 != 0)) &&
         (*(int *)(*(int *)(iVar6 + 4) + 0x248) != 0)) goto LAB_1004fc89;
    }
    *(bool *)(in_ECX + 0x39) = param_4 != 0.0;
    if (iVar3 != 0) {
      in_ECX[0x45] = iVar3;
      FUN_100deff0(0);
      uVar7 = FUN_10017950("camera_model",in_ECX[1] + 8,in_ECX[1] + 0x50,
                           *(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
      *(undefined4 *)(iVar3 + 0x5ac) = uVar7;
      if ((char)in_ECX[0x39] == '\0') {
        iVar6 = 1;
      }
      else {
        iVar6 = in_ECX[0x6b];
      }
      in_ECX[0x6c] = iVar6;
      if (*(int *)(iVar3 + 0x5ac) != 0) {
        iVar6 = in_ECX[1];
        local_c = *(undefined4 *)(iVar6 + 0xc);
        local_8 = *(undefined4 *)(iVar6 + 0x10);
        local_10 = *(undefined4 *)(iVar6 + 8);
        FUN_10119fe0(*(int *)(iVar3 + 0x5ac),&local_10);
        (*DAT_10222f50)(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x5ac) + 4) + 0x20c),
                        *(int *)(in_ECX[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98));
        if ((char)in_ECX[0x39] != '\0') {
          iVar6 = *(int *)(*(int *)(iVar3 + 0x5ac) + 4);
          *(float *)(iVar6 + 0x10) = (float)in_ECX[0x46] + *(float *)(iVar6 + 0x10);
        }
        FUN_10017740(*(undefined4 *)(iVar3 + 0x5ac));
        *(undefined4 *)(iVar3 + 0x5c0) = *(undefined4 *)(iVar3 + 0x388);
        *(undefined4 *)(iVar3 + 0x5c4) = *(undefined4 *)(iVar3 + 0x38c);
        (*DAT_10223000)(1,DAT_1022664c,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
        iVar6 = FUN_100177a0();
        uVar7 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c));
        (*DAT_10223010)(uVar7);
        (*DAT_10223008)(1);
        (*DAT_10223004)();
        puVar1 = (uint *)(*(int *)(in_ECX[0x45] + 4) + 0x1a8);
        *puVar1 = *puVar1 | 0x80;
        puVar1 = (uint *)(*(int *)(in_ECX[0x45] + 4) + 0x1a8);
        *puVar1 = *puVar1 | 0x40;
        *(undefined4 *)(in_ECX[1] + 0x19c) = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c);
      }
      in_ECX[0x1e] = (int)CCoFLadderManager::LadderThink;
      (**(code **)(*in_ECX + 8))(0x3dcccccd);
      FUN_1004f470();
    }
  }
  return;
}

