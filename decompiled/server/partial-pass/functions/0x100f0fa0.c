// rea decompile_all
// name: FUN_100f0fa0
// address: 0x100f0fa0
// body: available
// range: 0x100f0fa0-0x100f1340 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f0fa0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,int param_20)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  
  FUN_100f0f60(&DAT_101db140,param_2);
  FUN_100f0f60(&DAT_101db144,param_3);
  FUN_100f0f60(&DAT_101b91e0,param_4);
  FUN_100f0f60("bolts",param_5);
  FUN_100f0f60("ARgrenades",param_6);
  FUN_100f0f60("uranium",param_8);
  FUN_100f0f60("rockets",param_7);
  FUN_100f0f60("Satchel Charge",param_9);
  FUN_100f0f60("Snarks",param_10);
  FUN_100f0f60("Trip Mine",param_11);
  FUN_100f0f60("Hand Grenade",param_12);
  FUN_100f0f60("Hornets",param_13);
  FUN_100f0f60(&DAT_101db1a8,param_14);
  FUN_100f0f60("barret",param_15);
  FUN_100f0f60(&DAT_101db1b4,param_16);
  FUN_100f0f60("asval",param_17);
  FUN_100f0f60(&DAT_101db1c0,param_18);
  FUN_100f0f60("groza",param_19);
  FUN_100f0f60("painkillers",param_20);
  piVar4 = in_ECX + 0x945;
  param_20 = 6;
  do {
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x164);
      if (iVar3 != 0) {
        do {
          piVar5 = (int *)(iVar2 + 0x164);
          if ((param_1 & 1 << ((byte)*(undefined4 *)(iVar3 + 0x168) & 0x1f)) == 0) {
            FUN_1011cd20(in_ECX,0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_14,param_15,param_16,param_17,param_18,
                         param_19);
            (**(code **)(*(int *)*piVar5 + 0x15c))();
            if (in_ECX[0x94d] == *piVar5) {
              in_ECX[0x94d] = 0;
            }
            *piVar5 = *(int *)(*piVar5 + 0x164);
          }
          else {
            FUN_1011cd20(in_ECX,1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_14,param_15,param_16,param_17,param_18,
                         param_19);
            iVar2 = *piVar5;
          }
          iVar3 = *(int *)(iVar2 + 0x164);
        } while (iVar3 != 0);
        iVar2 = *piVar4;
      }
      if ((param_1 & 1 << ((byte)*(undefined4 *)(iVar2 + 0x168) & 0x1f)) == 0) {
        FUN_1011cd20(in_ECX,0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_14,param_15,param_16,param_17,param_18,
                     param_19);
        (**(code **)(*(int *)*piVar4 + 0x15c))();
        iVar2 = *piVar4;
        if (in_ECX[0x94d] == iVar2) {
          in_ECX[0x94d] = 0;
          iVar2 = *piVar4;
        }
        *piVar4 = *(int *)(iVar2 + 0x164);
      }
      else {
        FUN_1011cd20(in_ECX,1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_14,param_15,param_16,param_17,param_18,
                     param_19);
      }
    }
    piVar4 = piVar4 + 1;
    param_20 = param_20 + -1;
  } while (param_20 != 0);
  uVar1 = *(uint *)(in_ECX[1] + 0x16c);
  *(uint *)(in_ECX[1] + 0x16c) = uVar1 & 0x7fffffff;
  *(uint *)(in_ECX[1] + 0x16c) = *(uint *)(in_ECX[1] + 0x16c) & param_1;
  if (((int)uVar1 < 0) && ((param_1 & 1) == 0)) {
    *(uint *)(in_ECX[1] + 0x16c) = *(uint *)(in_ECX[1] + 0x16c) | 0x80000000;
  }
  piVar4 = (int *)in_ECX[0x94b];
  if (piVar4 != (int *)0x0) {
    if ((param_1 & 1 << ((byte)piVar4[0x5a] & 0x1f)) == 0) {
      FUN_100f1440();
      (**(code **)(*(int *)in_ECX[0x94b] + 0x14c))();
      *(undefined4 *)(in_ECX[1] + 0xbc) = 0;
      *(undefined4 *)(in_ECX[1] + 0xc0) = 0;
      in_ECX[0x94b] = 0;
      (**(code **)(*in_ECX + 600))();
      (*DAT_10223000)(1,DAT_102264cc,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(0);
      (*DAT_10223008)(0);
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      return;
    }
    iVar2 = (**(code **)(*piVar4 + 0x1a0))();
    if (iVar2 == 0) {
      fVar6 = (float10)FUN_1011ab20();
      *(float *)(in_ECX[0x94b] + 0x1d8) = (float)fVar6;
    }
  }
  (**(code **)(*in_ECX + 600))();
  return;
}

