// rea decompile_all
// name: FUN_1008b7a0
// address: 0x1008b7a0
// body: available
// range: 0x1008b7a0-0x1008bab9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008b7a0(int param_1,float param_2,float param_3,float param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  if ((DAT_10222eec != 1) && (0 < param_5)) {
    do {
      iVar1 = FUN_1002a8e0(0);
      FUN_1008ac80("models/stickygib.mdl");
      uVar2 = (*DAT_102230b0)(0,2);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x114) = uVar2;
      if (param_1 != 0) {
        fVar5 = (float10)(*DAT_102230b4)(0xc0400000,0x40400000);
        local_8 = (float)(fVar5 + (float10)param_2);
        *(float *)(*(int *)(iVar1 + 4) + 8) = local_8;
        fVar5 = (float10)(*DAT_102230b4)(0xc0400000,0x40400000);
        local_8 = (float)(fVar5 + (float10)param_3);
        *(float *)(*(int *)(iVar1 + 4) + 0xc) = local_8;
        fVar5 = (float10)(*DAT_102230b4)(0xc0400000,0x40400000);
        local_8 = (float)(fVar5 + (float10)param_4);
        *(float *)(*(int *)(iVar1 + 4) + 0x10) = local_8;
        iVar3 = *(int *)(iVar1 + 4);
        fVar6 = DAT_10222f30 * -1.0;
        *(ulonglong *)(iVar3 + 0x20) = CONCAT44(DAT_10222f2c * -1.0,DAT_10222f28 * -1.0);
        *(float *)(iVar3 + 0x28) = fVar6;
        iVar3 = *(int *)(iVar1 + 4);
        fVar5 = (float10)(*DAT_102230b4)(0xbe19999a,0x3e19999a);
        *(float *)(iVar3 + 0x20) = (float)(fVar5 + (float10)*(float *)(iVar3 + 0x20));
        iVar3 = *(int *)(iVar1 + 4);
        fVar5 = (float10)(*DAT_102230b4)(0xbe19999a,0x3e19999a);
        *(float *)(iVar3 + 0x24) = (float)(fVar5 + (float10)*(float *)(iVar3 + 0x24));
        iVar3 = *(int *)(iVar1 + 4);
        fVar5 = (float10)(*DAT_102230b4)(0xbe19999a,0x3e19999a);
        *(float *)(iVar3 + 0x28) = (float)(fVar5 + (float10)*(float *)(iVar3 + 0x28));
        iVar3 = *(int *)(iVar1 + 4);
        *(ulonglong *)(iVar3 + 0x20) =
             CONCAT44(*(float *)(iVar3 + 0x24) * 900.0,*(float *)(iVar3 + 0x20) * 900.0);
        *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) * 900.0;
        fVar5 = (float10)(*DAT_102230b4)(0x437a0000,0x43c80000);
        *(float *)(*(int *)(iVar1 + 4) + 0x5c) = (float)fVar5;
        fVar5 = (float10)(*DAT_102230b4)(0x437a0000,0x43c80000);
        *(float *)(*(int *)(iVar1 + 4) + 0x60) = (float)fVar5;
        iVar3 = *(int *)(param_1 + 0x20c);
        if ((iVar3 == 0) && (iVar3 = (*DAT_1022305c)(0), iVar3 == 0)) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = *(int **)(iVar3 + 0x7c);
        }
        uVar2 = (**(code **)(*piVar4 + 0x70))();
        iVar3 = *(int *)(iVar1 + 4);
        *(undefined4 *)(iVar1 + 0xdc) = uVar2;
        if (*(float *)(param_1 + 0x164) <= -50.0) {
          fVar6 = *(float *)(iVar3 + 0x28);
          if (*(float *)(param_1 + 0x164) <= -200.0) {
            fVar8 = 4.0;
            fVar6 = fVar6 * 4.0;
            goto LAB_1008ba21;
          }
          fVar6 = fVar6 + fVar6;
          fVar8 = *(float *)(iVar3 + 0x20) + *(float *)(iVar3 + 0x20);
          fVar7 = *(float *)(iVar3 + 0x24) + *(float *)(iVar3 + 0x24);
        }
        else {
          fVar8 = 0.7;
          fVar6 = *(float *)(iVar3 + 0x28) * 0.7;
LAB_1008ba21:
          fVar7 = *(float *)(iVar3 + 0x24) * fVar8;
          fVar8 = *(float *)(iVar3 + 0x20) * fVar8;
        }
        *(ulonglong *)(iVar3 + 0x20) = CONCAT44(fVar7,fVar8);
        *(float *)(iVar3 + 0x28) = fVar6;
        local_14 = 0;
        local_10 = 0;
        local_c = 0;
        *(undefined4 *)(*(int *)(iVar1 + 4) + 0x108) = 6;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10c) = 2;
        FUN_1011a030(*(undefined4 *)(iVar1 + 4),&local_20,&local_14);
        *(code **)(iVar1 + 0x7c) = CGib::StickyGibTouch;
        *(undefined4 *)(iVar1 + 0x78) = 0;
      }
      FUN_1008a440();
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

