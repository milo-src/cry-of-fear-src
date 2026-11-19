// rea decompile_all
// name: FUN_1008b400
// address: 0x1008b400
// body: available
// range: 0x1008b400-0x1008b795 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008b400(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  float local_8;
  
  if (param_2 != 0) {
    iVar2 = FUN_1002a8e0(0);
    FUN_1008ac80(param_4);
    local_c = (*DAT_10223070)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
    if ((local_c != 0) && (iVar1 = *(int *)(local_c + 0xd0), 0 < param_2)) {
      do {
        iVar4 = local_c;
        if (iVar2 == 0) {
          iVar2 = FUN_1002a8e0(0);
          FUN_1008ac80(param_4);
        }
        uVar3 = (*DAT_102230b0)(param_3 != 0,*(int *)(iVar1 + 0x40 + iVar4) + -1);
        *(undefined4 *)(*(int *)(iVar2 + 4) + 0x114) = uVar3;
        if (param_1 != 0) {
          fVar6 = (float10)(*DAT_102230b4)(0,0x3f800000);
          local_8 = (float)(fVar6 * (float10)*(float *)(param_1 + 0xf4));
          *(float *)(*(int *)(iVar2 + 4) + 8) = *(float *)(param_1 + 0xc4) + local_8;
          fVar6 = (float10)(*DAT_102230b4)(0,0x3f800000);
          local_8 = (float)(fVar6 * (float10)*(float *)(param_1 + 0xf8));
          *(float *)(*(int *)(iVar2 + 4) + 0xc) = *(float *)(param_1 + 200) + local_8;
          fVar6 = (float10)(*DAT_102230b4)(0,0x3f800000);
          local_8 = (float)(fVar6 * (float10)*(float *)(param_1 + 0xfc));
          *(float *)(*(int *)(iVar2 + 4) + 0x10) = *(float *)(param_1 + 0xcc) + local_8 + 1.0;
          iVar4 = *(int *)(iVar2 + 4);
          fVar7 = DAT_10222f30 * -1.0;
          *(ulonglong *)(iVar4 + 0x20) = CONCAT44(DAT_10222f2c * -1.0,DAT_10222f28 * -1.0);
          *(float *)(iVar4 + 0x28) = fVar7;
          iVar4 = *(int *)(iVar2 + 4);
          fVar6 = (float10)(*DAT_102230b4)(0xbe800000,0x3e800000);
          *(float *)(iVar4 + 0x20) = (float)(fVar6 + (float10)*(float *)(iVar4 + 0x20));
          iVar4 = *(int *)(iVar2 + 4);
          fVar6 = (float10)(*DAT_102230b4)(0xbe800000,0x3e800000);
          *(float *)(iVar4 + 0x24) = (float)(fVar6 + (float10)*(float *)(iVar4 + 0x24));
          iVar4 = *(int *)(iVar2 + 4);
          fVar6 = (float10)(*DAT_102230b4)(0xbe800000,0x3e800000);
          *(float *)(iVar4 + 0x28) = (float)(fVar6 + (float10)*(float *)(iVar4 + 0x28));
          fVar6 = (float10)(*DAT_102230b4)(0x43960000,0x43c80000);
          iVar4 = *(int *)(iVar2 + 4);
          local_8 = (float)fVar6;
          *(ulonglong *)(iVar4 + 0x20) =
               CONCAT44(*(float *)(iVar4 + 0x24) * local_8,*(float *)(iVar4 + 0x20) * local_8);
          *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) * local_8;
          fVar6 = (float10)(*DAT_102230b4)(0x42c80000,0x43480000);
          *(float *)(*(int *)(iVar2 + 4) + 0x5c) = (float)fVar6;
          fVar6 = (float10)(*DAT_102230b4)(0x42c80000,0x43960000);
          *(float *)(*(int *)(iVar2 + 4) + 0x60) = (float)fVar6;
          iVar4 = *(int *)(param_1 + 0x20c);
          if ((iVar4 == 0) && (iVar4 = (*DAT_1022305c)(0), iVar4 == 0)) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = *(int **)(iVar4 + 0x7c);
          }
          uVar3 = (**(code **)(*piVar5 + 0x70))();
          iVar4 = *(int *)(iVar2 + 4);
          *(undefined4 *)(iVar2 + 0xdc) = uVar3;
          if (*(float *)(param_1 + 0x164) <= -50.0) {
            fVar7 = *(float *)(iVar4 + 0x28);
            if (*(float *)(param_1 + 0x164) <= -200.0) {
              fVar9 = 4.0;
              fVar7 = fVar7 * 4.0;
              goto LAB_1008b710;
            }
            fVar7 = fVar7 + fVar7;
            fVar9 = *(float *)(iVar4 + 0x20) + *(float *)(iVar4 + 0x20);
            fVar8 = *(float *)(iVar4 + 0x24) + *(float *)(iVar4 + 0x24);
          }
          else {
            fVar9 = 0.7;
            fVar7 = *(float *)(iVar4 + 0x28) * 0.7;
LAB_1008b710:
            fVar8 = *(float *)(iVar4 + 0x24) * fVar9;
            fVar9 = *(float *)(iVar4 + 0x20) * fVar9;
          }
          *(ulonglong *)(iVar4 + 0x20) = CONCAT44(fVar8,fVar9);
          *(float *)(iVar4 + 0x28) = fVar7;
          local_18 = 0;
          local_14 = 0;
          local_10 = 0;
          *(undefined4 *)(*(int *)(iVar2 + 4) + 0x10c) = 2;
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          FUN_1011a030(*(undefined4 *)(iVar2 + 4),&local_24,&local_18);
        }
        FUN_1008a440();
        iVar2 = 0;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}

