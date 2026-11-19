// rea decompile_all
// name: FUN_100ea630
// address: 0x100ea630
// body: available
// range: 0x100ea630-0x100ead6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100ea630(void)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined8 *puVar8;
  float *pfVar9;
  int *in_ECX;
  uint uVar10;
  float fVar11;
  undefined1 local_bc [48];
  int local_8c;
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined8 local_18;
  float local_10;
  int *local_c;
  float local_8;
  
  if ((char)in_ECX[0x7ba] != '\0') {
    return;
  }
  if (in_ECX[0x7a8] != 0) {
    return;
  }
  iVar4 = FUN_100e4ed0();
  if (iVar4 != 0) {
    return;
  }
  if (((*(uint *)(in_ECX[1] + 0x184) | in_ECX[0x8ac] | in_ECX[0x8ad]) & 0x20) == 0) {
    return;
  }
  if (*DAT_10223188 <= (float)in_ECX[0x184] && (float)in_ECX[0x184] != *DAT_10223188) {
    return;
  }
  iVar4 = FUN_10017780();
  if (iVar4 != 0) {
    return;
  }
  if ((*(byte *)(in_ECX + 0x8ac) & 0x20) != 0) {
    iVar4 = FUN_10017780();
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_100177a0();
      (**(code **)(*piVar5 + 0xe8))();
      FUN_10017740(0);
      return;
    }
    if ((int *)in_ECX[0x8c3] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x8c3] + 0xe8))();
      in_ECX[0x8c3] = 0;
      return;
    }
    if ((in_ECX[0x8b9] & 2U) != 0) {
      in_ECX[0x935] = 0xc0;
      in_ECX[0x8b9] = in_ECX[0x8b9] & 0xfffffffd;
      return;
    }
    iVar4 = *(int *)(in_ECX[1] + 0x1a0);
    if (((((iVar4 != 0) || (iVar4 = (*DAT_1022305c)(0), iVar4 != 0)) &&
         (piVar5 = *(int **)(iVar4 + 0x7c), piVar5 != (int *)0x0)) &&
        (((*(byte *)(in_ECX[1] + 0x184) & 2) == 0 && ((*(uint *)(in_ECX[1] + 0x1a8) & 0x200) != 0)))
        ) && ((uVar6 = (**(code **)(*piVar5 + 0x40))(), (uVar6 & 0x40) != 0 &&
              (iVar4 = (**(code **)(*piVar5 + 0xb4))(in_ECX[1]), iVar4 != 0)))) {
      in_ECX[0x8b9] = in_ECX[0x8b9] | 2;
      uVar6 = FUN_100f6a40((int)*(float *)(piVar5[1] + 0x1fc),*(undefined4 *)(piVar5[1] + 0x188));
      in_ECX[0x935] = uVar6 | 0xc0;
      return;
    }
  }
  local_28 = 0.7;
  local_c = (int *)0x0;
  FUN_10119320(in_ECX[1] + 0x74);
  iVar4 = in_ECX[1];
  local_8 = DAT_10223188[0xc];
  local_34 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 8) + DAT_10223188[10] * 80.0;
  local_30 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0xc) + DAT_10223188[0xb] * 80.0;
  local_2c = *(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10) + local_8 * 80.0;
  local_3c = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0xc);
  local_38 = *(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10);
  local_40 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 8);
  FUN_1011a800(&local_40,&local_34,0,*(undefined4 *)(iVar4 + 0x20c),local_bc);
  if (((local_8c == 0) || (piVar5 = *(int **)(local_8c + 0x7c), piVar5 == (int *)0x0)) ||
     (uVar6 = (**(code **)(*piVar5 + 0x40))(), (uVar6 & 0x38) == 0)) {
    piVar7 = (int *)FUN_101186b0(0,in_ECX[1] + 8,0x42a00000);
    piVar5 = (int *)0x0;
    for (; piVar7 != (int *)0x0; piVar7 = (int *)FUN_101186b0(piVar7,in_ECX[1] + 8,0x42a00000)) {
      uVar6 = (**(code **)(*piVar7 + 0x40))();
      fVar11 = local_28;
      uVar1 = local_18;
      piVar3 = local_c;
      if (((piVar7 != in_ECX) && ((uVar6 & 0x38) != 0)) && ((uVar6 & 0x100) == 0)) {
        iVar4 = (**(code **)(*piVar7 + 0x78))();
        if (iVar4 == 0) {
          iVar4 = in_ECX[1];
          local_20 = *(float *)(iVar4 + 0x178);
          local_1c = *(float *)(iVar4 + 8);
          local_5c = *(float *)(iVar4 + 0x17c);
          local_8 = *(float *)(iVar4 + 0xc);
          local_24 = *(float *)(iVar4 + 0x180);
          local_60 = *(float *)(iVar4 + 0x10);
          pfVar9 = (float *)FUN_10012420(local_78,piVar7[1]);
          local_18 = CONCAT44(pfVar9[1] - (local_8 + local_5c),*pfVar9 - (local_20 + local_1c));
          local_10 = pfVar9[2] - (local_60 + local_24);
          iVar4 = piVar7[1];
          local_54 = *(float *)(iVar4 + 0xf8) * 0.5;
          local_50 = *(float *)(iVar4 + 0xfc) * 0.5;
          local_58 = *(float *)(iVar4 + 0xf4) * 0.5;
          puVar8 = (undefined8 *)FUN_10117df0(local_84,&local_18,&local_58);
        }
        else {
          FUN_1000e730(*(undefined4 *)(*(int *)(iVar4 + 4) + 300),&local_40,&local_34);
          iVar2 = in_ECX[1];
          local_20 = *(float *)(iVar2 + 0x180);
          iVar4 = *(int *)(iVar4 + 4);
          local_1c = *(float *)(iVar2 + 0x10);
          local_4c = (local_40 + local_34) * 0.5;
          local_48 = (local_3c + local_30) * 0.5;
          local_44 = (local_38 + local_2c) * 0.5;
          local_18 = CONCAT44((local_48 + *(float *)(iVar4 + 0xc)) -
                              (*(float *)(iVar2 + 0xc) + *(float *)(iVar2 + 0x17c)),
                              (local_4c + *(float *)(iVar4 + 8)) -
                              (*(float *)(iVar2 + 0x178) + *(float *)(iVar2 + 8)));
          local_10 = (local_44 + *(float *)(iVar4 + 0x10)) - (local_1c + local_20);
          local_8 = local_44;
          puVar8 = (undefined8 *)FUN_10117df0(local_6c,&local_18,&local_4c);
        }
        uVar1 = *puVar8;
        local_10 = *(float *)(puVar8 + 1);
        local_18._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_18._0_4_ = (float)uVar1;
        fVar11 = DAT_10223188[0xb] * local_18._4_4_ + DAT_10223188[10] * (float)local_18 +
                 DAT_10223188[0xc] * local_10;
        piVar5 = piVar7;
        piVar3 = piVar7;
        if ((fVar11 <= local_28) &&
           ((((float)local_18 != (float)DAT_10222f34 || (local_18._4_4_ != DAT_10222f34._4_4_)) ||
            (local_10 != DAT_10222f3c)))) {
          piVar5 = local_c;
          fVar11 = local_28;
          piVar3 = local_c;
        }
      }
      local_c = piVar3;
      local_18 = uVar1;
      local_28 = fVar11;
    }
    if (piVar5 == (int *)0x0) {
      iVar4 = in_ECX[1];
      local_24 = DAT_10223188[0xc];
      local_58 = *(float *)(iVar4 + 8) + *(float *)(iVar4 + 0x178) + DAT_10223188[10] * 128.0;
      local_54 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0xc) + DAT_10223188[0xb] * 128.0;
      local_50 = *(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10) + local_24 * 128.0;
      local_48 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0xc);
      local_44 = *(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10);
      local_4c = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 8);
      FUN_1011a800(&local_4c,&local_58,0,*(undefined4 *)(iVar4 + 0x20c),local_bc);
      if (local_8c == 0) {
        return;
      }
      piVar5 = *(int **)(local_8c + 0x7c);
      if (piVar5 == (int *)0x0) {
        return;
      }
      uVar6 = (**(code **)(*piVar5 + 0x40))();
      if ((uVar6 & 0x200) == 0) {
        return;
      }
    }
  }
  if (piVar5 == in_ECX) {
    return;
  }
  uVar6 = (**(code **)(*piVar5 + 0x40))();
  uVar10 = uVar6 & 0x10;
  if (((*(byte *)(in_ECX[1] + 0x184) & 0x20) == 0) || (uVar10 == 0)) {
    if (((*(byte *)(in_ECX + 0x8ac) & 0x20) == 0) || ((uVar6 & 0x28) == 0)) {
      if ((*(byte *)(in_ECX + 0x8ad) & 0x20) == 0) {
        return;
      }
      uVar6 = (**(code **)(*piVar5 + 0x40))();
      if ((uVar6 & 0x20) == 0) {
        return;
      }
      goto LAB_100ead32;
    }
    if (uVar10 == 0) goto LAB_100ead32;
  }
  in_ECX[0x8b9] = in_ECX[0x8b9] | 0x10;
LAB_100ead32:
  (**(code **)(*piVar5 + 0xe8))();
  if (uVar10 == 0) {
    in_ECX[0x184] = (int)(*DAT_10223188 + 0.5);
  }
  return;
}

