// rea decompile_all
// name: FUN_100c2450
// address: 0x100c2450
// body: available
// range: 0x100c2450-0x100c2647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c2450(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *in_ECX;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  
  iVar3 = FUN_1000e950(0x1c);
  if (iVar3 != -1) {
    in_ECX[0xc1] = in_ECX[0xc1] | 0x800;
  }
  iVar3 = FUN_1000e950(0x1d);
  if (iVar3 != -1) {
    in_ECX[0xc1] = in_ECX[0xc1] | 0x1000;
  }
  iVar3 = FUN_1000e950(0x1e);
  if (iVar3 != -1) {
    in_ECX[0xc1] = in_ECX[0xc1] | 0x2000;
  }
  iVar3 = FUN_1000e950(0x1f);
  if (iVar3 != -1) {
    in_ECX[0xc1] = in_ECX[0xc1] | 0x4000;
  }
  iVar3 = FUN_1000e950(0x18);
  if (iVar3 != -1) {
    pcVar7 = "monster_leech";
    pbVar6 = (byte *)(*(int *)in_ECX[1] + *(int *)(DAT_10223188 + 0x98));
    do {
      bVar1 = *pbVar6;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100c24f4:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_100c24f9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100c24f4;
      pbVar6 = pbVar6 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100c24f9:
    if (uVar4 != 0) {
      in_ECX[0xc1] = in_ECX[0xc1] | 0x10000;
    }
  }
  iVar3 = in_ECX[1];
  if ((*(int *)(iVar3 + 0x108) == 5) || (*(int *)(iVar3 + 0x1a4) < 0)) {
    *(uint *)(iVar3 + 0x1a8) = *(uint *)(iVar3 + 0x1a8) & 0xfffffdff;
  }
  else {
    *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + 1.0;
    (*DAT_10222fb0)(*(undefined4 *)(in_ECX[1] + 0x20c));
    iVar3 = (*DAT_10222fb4)(*(undefined4 *)(in_ECX[1] + 0x20c),0,0,0);
    if ((iVar3 == 0) && (piVar2 = (int *)in_ECX[1], (*(byte *)(piVar2 + 0x69) & 0x80) == 0)) {
      (*DAT_1022303c)(1,"%s \"%s\" stuck in wall--level design error",
                      *piVar2 + *(int *)(DAT_10223188 + 0x98),
                      piVar2[0x74] + *(int *)(DAT_10223188 + 0x98));
    }
  }
  if (*(int *)(in_ECX[1] + 0x1cc) != 0) {
    uVar5 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0x1cc));
    FUN_100c2650(uVar5);
  }
  iVar3 = *in_ECX;
  in_ECX[0x1e] = (int)CBaseMonster::CallMonsterThink;
  fVar9 = (float10)(*DAT_102230b4)(0x3dcccccd,0x3ecccccd);
  (**(code **)(iVar3 + 0x10))((float)(fVar9 + (float10)(float)in_ECX[0x16]));
  if (*(int *)(in_ECX[1] + 0x1d0) != 0) {
    FUN_100c2a70(1);
    (**(code **)(*in_ECX + 0x1b0))(1);
    uVar5 = (**(code **)(*in_ECX + 0x18c))(0x22);
    FUN_1000aa50(uVar5);
  }
  return;
}

