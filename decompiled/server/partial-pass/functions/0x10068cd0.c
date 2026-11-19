// rea decompile_all
// name: FUN_10068cd0
// address: 0x10068cd0
// body: available
// range: 0x10068cd0-0x1006949a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10068cd0(void)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *in_ECX;
  byte *pbVar9;
  char *pcVar10;
  bool bVar11;
  undefined1 local_c8 [12];
  undefined1 local_bc [12];
  undefined1 local_b0 [20];
  float local_9c;
  undefined1 local_98 [12];
  int local_8c;
  int local_88 [32];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar4 = (**(code **)(*in_ECX + 0xbc))();
  if (iVar4 == 0) goto LAB_1006948a;
  if ((*(float *)(in_ECX[1] + 0x10) != (float)in_ECX[0xda]) &&
     (iVar4 = (**(code **)(*in_ECX + 0xbc))(), iVar4 != 0)) {
    *(float *)(in_ECX[1] + 0x10) = (float)in_ECX[0xda];
  }
  if ((float)in_ECX[0xe1] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xe1]) {
    iVar4 = (*DAT_102230b0)(0,1);
    if (iVar4 == 0) {
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"roofboss/rb_mouthidle1.wav",0x3f800000,0,0,
                   100);
      fVar2 = *DAT_10223188 + 7.49;
    }
    else {
      if (iVar4 != 1) goto LAB_10068df0;
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"roofboss/rb_mouthidle2.wav",0x3f800000,0,0,
                   100);
      fVar2 = *DAT_10223188 + 9.43;
    }
    in_ECX[0xe1] = (int)fVar2;
  }
LAB_10068df0:
  if ((char)in_ECX[0xe6] == '\0') {
    iVar4 = FUN_10118460(0,"player");
    if ((iVar4 != 0) && (iVar6 = (**(code **)(*in_ECX + 0x114))(iVar4), iVar6 != 0)) {
      iVar4 = *(int *)(iVar4 + 4);
      FUN_100c00f0(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc),
                   *(undefined4 *)(iVar4 + 0x10));
      (**(code **)(*in_ECX + 0x1c0))();
      (**(code **)(*in_ECX + 0x130))((int)*(float *)(in_ECX[1] + 0xb0));
    }
    if (((float)in_ECX[0xe2] < *DAT_10223188 || (float)in_ECX[0xe2] == *DAT_10223188) ||
       ((char)in_ECX[0xe6] != '\0')) {
      if ((char)in_ECX[0xe0] == '\0') {
        uVar7 = 2;
      }
      else {
        uVar7 = 7;
      }
      iVar4 = (*DAT_102230b0)(0,uVar7);
      if (iVar4 == 1) {
        iVar4 = FUN_10118460(0,"player");
        if (((iVar4 != 0) && (iVar4 = (**(code **)(*in_ECX + 0x114))(iVar4), iVar4 != 0)) &&
           ((char)in_ECX[0xde] == '\0')) {
          *(undefined1 *)(in_ECX + 0xde) = 1;
          FUN_100c20c0("attack");
          *(undefined1 *)(in_ECX + 0xe0) = 1;
          iVar4 = (*DAT_102230b0)(0xfffffff6,10);
          FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),3,"roofboss/rb_stomopen.wav",0x3f800000,0,
                       0,iVar4 + 100);
          *(undefined1 *)(in_ECX + 0xdb) = 1;
          in_ECX[0xdc] = (int)(DAT_102267a0 + *DAT_10223188);
        }
      }
      else if (((char)in_ECX[0xdb] == '\0') && ((char)in_ECX[0xde] == '\0')) {
        iVar4 = FUN_1006a0c0(local_88,0x60,in_ECX[1] + 8,0x45800000);
        iVar6 = 1;
        if (1 < iVar4) {
          iVar6 = (*DAT_102230b0)(1,iVar4 + -1);
        }
        iVar4 = local_88[iVar6];
        if (iVar4 != 0) {
          in_ECX[0xe7] = (int)(*DAT_10223188 + 10.0);
          iVar4 = *(int *)(iVar4 + 4);
          *(undefined8 *)(in_ECX + 0xe3) = *(undefined8 *)(iVar4 + 8);
          in_ECX[0xe5] = *(int *)(iVar4 + 0x10);
          *(undefined1 *)(in_ECX + 0xe6) = 1;
          *(undefined1 *)(in_ECX + 0xe0) = 0;
        }
      }
    }
    else {
      if ((char)in_ECX[0xdb] == '\0') {
        *(undefined1 *)(in_ECX + 0xdb) = 0;
      }
      if ((char)in_ECX[0xde] == '\0') {
        *(undefined1 *)(in_ECX + 0xde) = 0;
      }
    }
  }
  else {
    if ((float)in_ECX[0xe7] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xe7]) {
      *(ulonglong *)(in_ECX + 0xe3) = CONCAT44(DAT_10222f34._4_4_,(float)DAT_10222f34);
      in_ECX[0xe5] = (int)DAT_10222f3c;
      *(undefined1 *)(in_ECX + 0xe6) = 0;
    }
    pfVar1 = (float *)(in_ECX + 0xe3);
    if ((((float)in_ECX[0xe3] == (float)DAT_10222f34) && ((float)in_ECX[0xe4] == DAT_10222f34._4_4_)
        ) && ((float)in_ECX[0xe5] == DAT_10222f3c)) {
      *(undefined1 *)(in_ECX + 0xe6) = 0;
    }
    else {
      FUN_10119420(*(undefined4 *)(in_ECX[1] + 0x20c),pfVar1,0x41600000,1);
      FUN_100c00f0(*pfVar1,in_ECX[0xe4],in_ECX[0xe5]);
      (**(code **)(*in_ECX + 0x1c0))();
      (**(code **)(*in_ECX + 0x130))((int)*(float *)(in_ECX[1] + 0xb0));
      for (iVar4 = FUN_101186b0(0,pfVar1,0x42a00000); iVar4 != 0;
          iVar4 = FUN_101186b0(iVar4,pfVar1,0x42a00000)) {
        pcVar10 = "monster_roofboss";
        iVar6 = *(int *)(*(int *)(iVar4 + 4) + 0x20c);
        pbVar9 = (byte *)(*(int *)(-(uint)(iVar6 != 0) & iVar6 + 0x80U) + (int)DAT_10223188[0x26]);
        do {
          bVar3 = *pbVar9;
          bVar11 = bVar3 < (byte)*pcVar10;
          if (bVar3 != *pcVar10) {
LAB_10068f40:
            uVar5 = -(uint)bVar11 | 1;
            goto LAB_10068f45;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar9[1];
          bVar11 = bVar3 < (byte)pcVar10[1];
          if (bVar3 != pcVar10[1]) goto LAB_10068f40;
          pbVar9 = pbVar9 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar3 != 0);
        uVar5 = 0;
LAB_10068f45:
        if (uVar5 == 0) {
          local_8c = (*DAT_102230b0)(2,7);
          iVar6 = FUN_10118460(0,"player");
          if (iVar6 != 0) {
            iVar6 = *(int *)(iVar6 + 4);
            FUN_100c00f0(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc),
                         *(undefined4 *)(iVar6 + 0x10));
            (**(code **)(*in_ECX + 0x1c0))();
            (**(code **)(*in_ECX + 0x130))((int)*(float *)(in_ECX[1] + 0xb0));
          }
          in_ECX[0xe2] = (int)((float)local_8c + *DAT_10223188);
          fVar2 = DAT_10222f34._4_4_;
          *pfVar1 = (float)DAT_10222f34;
          in_ECX[0xe4] = (int)fVar2;
          in_ECX[0xe5] = (int)DAT_10222f3c;
          *(undefined1 *)(in_ECX + 0xe6) = 0;
        }
      }
    }
  }
  if ((char)in_ECX[0xdb] != '\0') {
    if ((float)in_ECX[0xdc] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xdc]) {
      *(undefined1 *)(in_ECX + 0xdb) = 0;
      *(undefined1 *)(in_ECX + 0xde) = 0;
      iVar4 = (*DAT_102230b0)(0xfffffff6,10);
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),3,"roofboss/rb_stomclose.wav",0x3f800000,0,0,
                   iVar4 + 100);
      FUN_100c20c0(&DAT_101aa610);
      if ((char)in_ECX[0xdb] == '\0') goto LAB_10069483;
    }
    fVar2 = *DAT_10223188;
    if ((fVar2 < (float)in_ECX[0xdc]) &&
       ((float)in_ECX[0xdd] <= fVar2 && fVar2 != (float)in_ECX[0xdd])) {
      in_ECX[0xdd] = (int)(fVar2 + 1.0);
      FUN_1000e7c0(0,local_98,local_b0);
      if (((float)in_ECX[0xdf] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xdf]) &&
         (iVar4 = (*DAT_102230b0)(0,1), iVar4 == 1)) {
        iVar4 = (*DAT_102230b0)(0,1);
        if (iVar4 == 0) {
          FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),4,"roofboss/rb_attack1.wav",0x3f800000,0,0
                       ,100);
          fVar2 = *DAT_10223188 + 1.66;
        }
        else {
          if (iVar4 != 1) goto LAB_100693d0;
          FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),4,"roofboss/rb_attack2.wav",0x3f800000,0,0
                       ,100);
          fVar2 = *DAT_10223188 + 2.93;
        }
        in_ECX[0xdf] = (int)fVar2;
      }
LAB_100693d0:
      uVar7 = FUN_1011a8d0(local_c8,local_bc,*(undefined4 *)(in_ECX[1] + 0x20c));
      piVar8 = (int *)FUN_10017950("roofboss_head",local_98,uVar7);
      FUN_10119320(piVar8[1] + 0x50);
      iVar4 = piVar8[1];
      local_9c = DAT_10223188[0xc] * 300.0;
      *(ulonglong *)(iVar4 + 0x20) = CONCAT44(DAT_10223188[0xb] * 300.0,DAT_10223188[10] * 300.0);
      *(float *)(iVar4 + 0x28) = local_9c;
      iVar4 = (**(code **)(*piVar8 + 0x78))();
      if ((iVar4 != 0) && (iVar4 = FUN_10118460(0,"player"), iVar4 != 0)) {
        FUN_10017740(iVar4);
      }
    }
  }
LAB_10069483:
  FUN_100c0430();
LAB_1006948a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

