// rea decompile_all
// name: FUN_10027280
// address: 0x10027280
// body: available
// range: 0x10027280-0x10027756 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027280(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  int *in_ECX;
  char *pcVar9;
  bool bVar10;
  float10 fVar11;
  undefined1 local_58 [20];
  undefined1 local_44 [28];
  int local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (((float)in_ECX[0x73] < *DAT_10223188 || (float)in_ECX[0x73] == *DAT_10223188) &&
     (in_ECX[0x4a] == 0)) {
    FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),1,
                 "weapons/camera/take_photo.wav",0x3f800000,0x3f4ccccd,0,100);
    FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),0,
                 "weapons/camera/flash_charge.wav",0x3f800000,0x3f4ccccd,0,100);
    (*DAT_10223000)(5,DAT_1022655c,*(int *)(in_ECX[0x58] + 4) + 8,0);
    (*DAT_1022301c)(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 8));
    (*DAT_1022301c)(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0xc));
    (*DAT_1022301c)(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x10));
    (*DAT_10223008)(0x28);
    (*DAT_10223008)(1);
    (*DAT_10223008)(0x1e);
    (*DAT_10223004)();
    (*DAT_10223000)(1,DAT_10226694,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
    (*DAT_10223004)();
    (**(code **)(*in_ECX + 0x198))(3,1,0);
    uVar3 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                            *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
    fVar11 = (float10)FUN_1000f390(uVar3);
    local_8 = (float)(fVar11 + (float10)*DAT_10223188);
    in_ECX[0x74] = (int)local_8;
    in_ECX[0x73] = (int)local_8;
    uVar3 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                            *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
    fVar11 = (float10)FUN_1000f390(uVar3);
    in_ECX[0x76] = (int)(float)(fVar11 + (float10)*DAT_10223188);
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) == 0) {
      FUN_10119320(((int *)in_ECX[0x58])[1] + 0x74);
      iVar5 = *(int *)(in_ECX[0x58] + 4);
      local_8 = DAT_10223188[0xc];
      local_14 = *(float *)(iVar5 + 8) + *(float *)(iVar5 + 0x178) + DAT_10223188[10] * 512.0;
      local_10 = *(float *)(iVar5 + 0xc) + *(float *)(iVar5 + 0x17c) + DAT_10223188[0xb] * 512.0;
      local_c = *(float *)(iVar5 + 0x10) + *(float *)(iVar5 + 0x180) + local_8 * 512.0;
      iVar2 = *(int *)(in_ECX[0x58] + 4);
      local_1c = *(float *)(iVar2 + 0x17c) + *(float *)(iVar2 + 0xc);
      local_18 = *(float *)(iVar2 + 0x180) + *(float *)(iVar2 + 0x10);
      local_20 = *(float *)(iVar2 + 8) + *(float *)(iVar2 + 0x178);
      FUN_1011a800(&local_20,&local_14,0,*(undefined4 *)(iVar5 + 0x20c),local_58);
      if (local_28 != 0) {
        for (piVar4 = (int *)FUN_101186b0(0,local_44,0x42800000); piVar4 != (int *)0x0;
            piVar4 = (int *)FUN_101186b0(piVar4,local_44,0x42800000)) {
          local_8 = DAT_10223188[0x26];
          pcVar9 = "camera_spot_trigger";
          pbVar6 = (byte *)(*(int *)piVar4[1] + (int)local_8);
          do {
            bVar1 = *pbVar6;
            bVar10 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_100276a0:
              uVar7 = -(uint)bVar10 | 1;
              goto LAB_100276a5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar10 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_100276a0;
            pbVar6 = pbVar6 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_100276a5:
          if (uVar7 == 0) {
            FUN_10101ff0(((int *)piVar4[1])[0x73] + (int)local_8,in_ECX[0x58],in_ECX[0x58],3,0);
          }
          else {
            iVar5 = (**(code **)(*piVar4 + 0xd0))();
            if ((((iVar5 == 0) &&
                 (piVar8 = (int *)(**(code **)(*piVar4 + 0x78))(), piVar8 != (int *)0x0)) &&
                (*(int *)piVar8[1] != 0)) &&
               (iVar5 = FUN_1013f5f0((int)DAT_10223188[0x26] + *(int *)piVar8[1],"monster_"),
               iVar5 != 0)) {
              (**(code **)(*piVar8 + 100))
                        (*(undefined4 *)(in_ECX[0x58] + 4),*(undefined4 *)(in_ECX[0x58] + 4),0,
                         0x10000000);
            }
          }
        }
      }
    }
    else {
      uVar3 = (**(code **)(*(int *)in_ECX[0x58] + 0x228))(&local_20,0x44800000);
      piVar4 = (int *)FUN_101186b0(0,uVar3);
      if (piVar4 != (int *)0x0) {
        do {
          iVar5 = (**(code **)(*piVar4 + 0xd0))();
          if ((((iVar5 == 0) &&
               (iVar5 = (**(code **)(*(int *)in_ECX[0x58] + 0x154))(piVar4), iVar5 != 0)) &&
              ((iVar5 = (**(code **)(*(int *)in_ECX[0x58] + 0x114))(piVar4), iVar5 != 0 &&
               ((iVar5 = (**(code **)(*piVar4 + 0x78))(), iVar5 != 0 && (**(int **)(iVar5 + 4) != 0)
                ))))) &&
             (iVar5 = FUN_1013f5f0((int)DAT_10223188[0x26] + **(int **)(iVar5 + 4),"monster_"),
             iVar5 != 0)) {
            (**(code **)(*piVar4 + 100))
                      (*(undefined4 *)(in_ECX[0x58] + 4),*(undefined4 *)(in_ECX[0x58] + 4),0,
                       0x10000000);
          }
          uVar3 = (**(code **)(*(int *)in_ECX[0x58] + 0x228))(&local_20,0x44800000);
          piVar4 = (int *)FUN_101186b0(piVar4,uVar3);
        } while (piVar4 != (int *)0x0);
        return;
      }
    }
  }
  return;
}

