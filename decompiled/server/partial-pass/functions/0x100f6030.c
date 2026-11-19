// rea decompile_all
// name: FUN_100f6030
// address: 0x100f6030
// body: available
// range: 0x100f6030-0x100f64e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100f6030(int param_1,int param_2,float param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int *in_ECX;
  byte *pbVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char *pcVar14;
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  float local_10;
  int local_c;
  float local_8;
  
  if ((char)in_ECX[0x7a9] == '\0') {
    local_8 = 0.5;
    if ((((param_4 & 0x40) != 0) && (DAT_10222ee4 != (int *)0x0)) &&
       (iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar2 != 0)) {
      local_8 = 1.0;
    }
    iVar2 = (**(code **)(*in_ECX + 0xbc))();
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_2 + 0x20c);
      if ((iVar2 == 0) && (iVar2 = (*DAT_1022305c)(0), iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x7c);
      }
      local_c = iVar2;
      if (DAT_10222ee4 != (int *)0x0) {
        iVar3 = (**(code **)(*DAT_10222ee4 + 0x48))();
        if (iVar3 == 0) {
          return 0;
        }
        if (((DAT_10222ee4 != (int *)0x0) &&
            (iVar3 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar3 != 0)) &&
           (((*(byte *)(*(int *)(iVar2 + 4) + 0x1a8) & 0x20) != 0 && (DAT_10222f14 == 0)))) {
          iVar2 = FUN_1010a470();
          param_3 = ((float)iVar2 * 0.2 + 1.0) * param_3 * 1.2;
        }
      }
      if ((param_3 < 40.0) && (DAT_10222f14 != 0)) {
        param_3 = param_3 * 0.8;
      }
      in_ECX[0x926] = (int)param_3;
      fVar12 = *(float *)(in_ECX[1] + 0x1c0);
      if ((fVar12 != 0.0) && ((param_4 & 0x140a4) == 0)) {
        fVar13 = param_3 * 0.2;
        fVar11 = (param_3 - fVar13) * local_8;
        if (fVar11 <= fVar12) {
          fVar11 = fVar12 - fVar11;
        }
        else {
          fVar11 = 0.0;
          fVar13 = param_3 - (1.0 / local_8) * fVar12;
        }
        *(float *)(in_ECX[1] + 0x1c0) = fVar11;
        param_3 = fVar13;
      }
      local_8 = (float)FUN_1008bc50(param_1,param_2,(float)(int)param_3,param_4);
      iVar2 = 0;
      do {
        if ((param_4 & 0x8000 << ((byte)iVar2 & 0x1f)) != 0) {
          *(undefined1 *)((int)in_ECX + iVar2 + 0x310) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
      (*DAT_10223000)(9,0x33,0,0);
      (*DAT_10223008)(9);
      (*DAT_10223008)(2);
      uVar4 = (*DAT_10223064)(*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223010)(uVar4);
      uVar4 = (*DAT_10223064)(*(undefined4 *)(param_1 + 0x20c));
      (*DAT_10223010)(uVar4);
      (*DAT_10223014)(5);
      (*DAT_10223004)();
      in_ECX[0xc3] = in_ECX[0xc3] | param_4;
      in_ECX[0x932] = -1;
      if (((param_4 & 0x2000042) == 0) || (param_1 == in_ECX[1])) {
        fVar12 = 0.0;
        fVar11 = 1.0;
      }
      else {
        if ((param_4 & 0x40) == 0) {
          fVar9 = (float10)(*DAT_1022302c)("bullet_punch_max");
          pcVar14 = "bullet_punch_divide";
        }
        else {
          fVar9 = (float10)(*DAT_1022302c)("blast_punch_max");
          pcVar14 = "blast_punch_divide";
        }
        fVar10 = (float10)(*DAT_1022302c)(pcVar14);
        fVar11 = (float)fVar10;
        if (fVar11 == 0.0) {
          fVar11 = 1.0;
        }
        fVar13 = (float)fVar9;
        if (param_3 <= (float)fVar9) {
          fVar13 = param_3;
        }
        iVar2 = in_ECX[1];
        local_10 = 0.0;
        local_18 = CONCAT44(*(float *)(param_1 + 0xc) - *(float *)(iVar2 + 0xc),
                            *(float *)(param_1 + 8) - *(float *)(iVar2 + 8));
        puVar5 = (undefined8 *)FUN_10017e70(local_30);
        local_18 = *puVar5;
        local_10 = *(float *)(puVar5 + 1);
        local_20 = *(undefined4 *)(iVar2 + 0x78);
        local_24 = 0;
        local_1c = 0;
        FUN_10119320(&local_24);
        fVar12 = (*(float *)(DAT_10223188 + 0x44) * local_18._4_4_ +
                  (float)local_18 * *(float *)(DAT_10223188 + 0x40) +
                 *(float *)(DAT_10223188 + 0x48) * local_10) * (fVar13 / fVar11);
        fVar11 = (*(float *)(DAT_10223188 + 0x2c) * local_18._4_4_ +
                  (float)local_18 * *(float *)(DAT_10223188 + 0x28) +
                 *(float *)(DAT_10223188 + 0x30) * local_10) * (fVar13 / fVar11);
      }
      FUN_100f91b0(fVar11,fVar12,fVar12);
      if ((param_3 < *(float *)(in_ECX[1] + 0x164)) && ((param_4 & 0x20) == 0)) {
        local_24 = 0x42400000;
        local_20 = 0;
        local_1c = 0;
        FUN_10119c00();
      }
      if (local_c != 0) {
        pcVar14 = "trigger_hurt";
        iVar2 = *(int *)(*(int *)(local_c + 4) + 0x20c);
        pbVar7 = (byte *)(*(int *)(-(uint)(iVar2 != 0) & iVar2 + 0x80U) +
                         *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar7;
          bVar8 = bVar1 < (byte)*pcVar14;
          if (bVar1 != *pcVar14) {
LAB_100f64a5:
            uVar6 = -(uint)bVar8 | 1;
            goto LAB_100f64aa;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar8 = bVar1 < (byte)pcVar14[1];
          if (bVar1 != pcVar14[1]) goto LAB_100f64a5;
          pbVar7 = pbVar7 + 2;
          pcVar14 = pcVar14 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_100f64aa:
        if (uVar6 != 0) {
          in_ECX[0x196] = (int)((float)in_ECX[0x196] + param_3);
        }
      }
      FUN_100e9eb0();
      return local_8;
    }
  }
  return 0;
}

