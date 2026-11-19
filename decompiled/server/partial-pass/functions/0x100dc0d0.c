// rea decompile_all
// name: FUN_100dc0d0
// address: 0x100dc0d0
// body: available
// range: 0x100dc0d0-0x100dc756 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100dc0d0(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 local_8c [16];
  float local_7c;
  undefined1 local_54 [48];
  int local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pbVar2 = (byte *)(*(int *)(DAT_10223188 + 0xc) + *(int *)(DAT_10223188 + 0x98));
  pcVar9 = "c_server_settings";
  pbVar7 = pbVar2;
  do {
    bVar1 = *pbVar7;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_100dc114:
      uVar8 = -(uint)bVar10 | 1;
      goto LAB_100dc119;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_100dc114;
    pbVar7 = pbVar7 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  uVar8 = 0;
LAB_100dc119:
  if (uVar8 != 0) {
    pcVar9 = "c_difficulty_settings";
    pbVar7 = pbVar2;
    do {
      bVar1 = *pbVar7;
      bVar10 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_100dc148:
        uVar8 = -(uint)bVar10 | 1;
        goto LAB_100dc14d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar10 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_100dc148;
      pbVar7 = pbVar7 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_100dc14d:
    if (uVar8 != 0) {
      pcVar9 = "c_loadgame";
      pbVar7 = pbVar2;
      do {
        bVar1 = *pbVar7;
        bVar10 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_100dc180:
          uVar8 = -(uint)bVar10 | 1;
          goto LAB_100dc185;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar10 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_100dc180;
        pbVar7 = pbVar7 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_100dc185:
      if (uVar8 != 0) {
        pcVar9 = "c_video_stress_test";
        do {
          bVar1 = *pbVar2;
          bVar10 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_100dc1b2:
            uVar8 = -(uint)bVar10 | 1;
            goto LAB_100dc1b7;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar10 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_100dc1b2;
          pbVar2 = pbVar2 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        uVar8 = 0;
LAB_100dc1b7:
        if ((uVar8 != 0) && (*(int *)(in_ECX + 0x1ea0) == 0)) {
          switch(param_1) {
          case 0x4c:
            if (DAT_10226498 != 0) {
              local_c = *(float *)(*(int *)(in_ECX + 4) + 0x78);
              local_10 = 0.0;
              local_8 = 0.0;
              FUN_10119320(&local_10);
              iVar5 = *(int *)(in_ECX + 4);
              local_c = *(float *)(DAT_10223188 + 0x2c) * 128.0 + *(float *)(iVar5 + 0xc);
              local_8 = *(float *)(DAT_10223188 + 0x30) * 128.0 + *(float *)(iVar5 + 0x10);
              local_10 = *(float *)(DAT_10223188 + 0x28) * 128.0 + *(float *)(iVar5 + 8);
              FUN_10017950("monster_human_grunt",&local_10,iVar5 + 0x50,0);
              return;
            }
            DAT_10226498 = 1;
            (*DAT_1022303c)(1,"You must now restart to use Grunt-o-matic.\n");
            return;
          case 0x4d:
          case 0x4e:
          case 0x4f:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5d:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
          case 0x62:
          case 99:
          case 100:
          case 0x65:
          case 0x66:
          case 0x6c:
          case 0x6d:
          case 0x6e:
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
          case 0x74:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7a:
          case 0x7b:
          case 0x7c:
          case 0x7d:
          case 0x7e:
          case 0x7f:
          case 0x80:
          case 0x81:
          case 0x82:
          case 0x83:
          case 0x84:
          case 0x85:
          case 0x86:
          case 0x87:
          case 0x88:
          case 0x89:
          case 0x8a:
          case 0x8b:
          case 0x8c:
          case 0x8d:
          case 0x8e:
          case 0x8f:
          case 0x90:
          case 0x91:
          case 0x92:
          case 0x93:
          case 0x94:
          case 0x95:
          case 0x96:
          case 0x97:
          case 0x98:
          case 0x99:
          case 0x9a:
          case 0x9b:
          case 0x9c:
          case 0x9d:
          case 0x9e:
          case 0x9f:
          case 0xa0:
          case 0xa1:
          case 0xa2:
          case 0xa3:
          case 0xa4:
          case 0xa5:
          case 0xa6:
          case 0xa7:
          case 0xa8:
          case 0xa9:
          case 0xaa:
          case 0xab:
          case 0xac:
          case 0xad:
          case 0xae:
          case 0xaf:
          case 0xb0:
          case 0xb1:
          case 0xb2:
          case 0xb3:
          case 0xb4:
          case 0xb5:
          case 0xb6:
          case 0xb7:
          case 0xb8:
          case 0xb9:
          case 0xba:
          case 0xbb:
          case 0xbc:
          case 0xbd:
          case 0xbe:
          case 0xbf:
          case 0xc0:
          case 0xc1:
          case 0xc2:
          case 0xc6:
          case 200:
          case 0xc9:
            break;
          case 0x5a:
            iVar5 = (*DAT_10223030)("sohl_impulsetarget");
            if (iVar5 != 0) {
              FUN_10101ff0(iVar5);
              return;
            }
            break;
          case 0x5b:
            iVar5 = (*DAT_10223030)("sohl_impulsetarget");
            if (iVar5 != 0) {
              FUN_10101ff0(iVar5);
              return;
            }
            break;
          case 0x5c:
            iVar5 = (*DAT_10223030)("sohl_impulsetarget");
            if (iVar5 != 0) {
              FUN_10101ff0(iVar5);
              return;
            }
            break;
          case 0x67:
            piVar3 = (int *)FUN_100df6e0();
            if ((piVar3 != (int *)0x0) &&
               (piVar3 = (int *)(**(code **)(*piVar3 + 0x78))(), piVar3 != (int *)0x0)) {
              (**(code **)(*piVar3 + 0x1b4))();
              return;
            }
            break;
          case 0x68:
            FUN_10120620();
            return;
          case 0x69:
            if (*(int *)(in_ECX + 0x24e8) == 0) {
              (*DAT_1022303c)(1,"Player is silent\n");
              *(undefined4 *)(in_ECX + 0x24e8) = 1;
              return;
            }
            (*DAT_1022303c)(1,"Player is audible\n");
            *(undefined4 *)(in_ECX + 0x24e8) = 0;
            return;
          case 0x6a:
            piVar3 = (int *)FUN_100df6e0();
            if (piVar3 != (int *)0x0) {
              (*DAT_1022303c)(1,"Classname: %s",*(int *)(DAT_10223188 + 0x98) + *(int *)piVar3[1]);
              if (*(int *)(piVar3[1] + 0x1d0) == 0) {
                (*DAT_1022303c)(1," - TargetName: No Targetname\n");
              }
              else {
                (*DAT_1022303c)(1," - Targetname: %s\n",
                                *(int *)(DAT_10223188 + 0x98) + *(int *)(piVar3[1] + 0x1d0));
              }
              (*DAT_1022303c)(1,"Model: %s\n",
                              *(int *)(piVar3[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98));
              if (*(int *)(piVar3[1] + 4) != 0) {
                (*DAT_1022303c)(1,"Globalname: %s\n",
                                *(int *)(DAT_10223188 + 0x98) + *(int *)(piVar3[1] + 4));
              }
              uVar6 = (**(code **)(*piVar3 + 0x5c))();
              uVar6 = FUN_10116860(uVar6);
              (*DAT_1022303c)(1,"State: %s\n",uVar6);
              return;
            }
            break;
          case 0x6b:
            iVar4 = (*DAT_10223068)(0);
            iVar5 = *(int *)(in_ECX + 4);
            local_c = *(float *)(iVar5 + 0x17c) + *(float *)(iVar5 + 0xc);
            local_8 = *(float *)(iVar5 + 0x180) + *(float *)(iVar5 + 0x10);
            local_10 = *(float *)(iVar5 + 0x178) + *(float *)(iVar5 + 8);
            local_1c = *(float *)(DAT_10223188 + 0x28) * 1024.0 + local_10;
            local_18 = *(float *)(DAT_10223188 + 0x2c) * 1024.0 + local_c;
            local_14 = *(float *)(DAT_10223188 + 0x30) * 1024.0 + local_8;
            FUN_1011a800(&local_10,&local_1c,1,*(undefined4 *)(iVar5 + 0x20c),local_54);
            if (local_24 != 0) {
              iVar4 = local_24;
            }
            iVar5 = (*DAT_10222fd8)(iVar4,&local_10,&local_1c);
            if (iVar5 != 0) {
              (*DAT_1022303c)(1,"Texture: %s\n",iVar5);
              return;
            }
            break;
          case 0xc3:
            FUN_10017950("node_viewer_fly",*(int *)(in_ECX + 4) + 8,*(int *)(in_ECX + 4) + 0x50,0);
            return;
          case 0xc4:
            FUN_10017950("node_viewer_large",*(int *)(in_ECX + 4) + 8,*(int *)(in_ECX + 4) + 0x50,0)
            ;
            return;
          case 0xc5:
            FUN_10017950("node_viewer_human",*(int *)(in_ECX + 4) + 8,*(int *)(in_ECX + 4) + 0x50,0)
            ;
            return;
          case 199:
            uVar6 = FUN_100ccea0(*(int *)(in_ECX + 4) + 8,7);
            (*DAT_1022303c)(1,&DAT_101d7204,uVar6);
            uVar6 = FUN_100ccea0(*(int *)(in_ECX + 4) + 8,7);
            FUN_100cf190(uVar6);
            return;
          case 0xca:
            FUN_10119320(*(int *)(in_ECX + 4) + 0x74);
            iVar5 = *(int *)(in_ECX + 4);
            local_10 = *(float *)(iVar5 + 0x178) + *(float *)(iVar5 + 8) +
                       *(float *)(DAT_10223188 + 0x28) * 128.0;
            local_c = *(float *)(iVar5 + 0x17c) + *(float *)(iVar5 + 0xc) +
                      *(float *)(DAT_10223188 + 0x2c) * 128.0;
            local_8 = *(float *)(iVar5 + 0x10) + *(float *)(iVar5 + 0x180) +
                      *(float *)(DAT_10223188 + 0x30) * 128.0;
            local_18 = *(float *)(iVar5 + 0x17c) + *(float *)(iVar5 + 0xc);
            local_14 = *(float *)(iVar5 + 0x180) + *(float *)(iVar5 + 0x10);
            local_1c = *(float *)(iVar5 + 8) + *(float *)(iVar5 + 0x178);
            FUN_1011a800(&local_1c,&local_10,1,*(undefined4 *)(iVar5 + 0x20c),local_8c);
            if (local_7c != 1.0) {
              FUN_100d9f00(0);
              FUN_100f4a00(*(undefined4 *)(in_ECX + 4));
            }
            break;
          default:
            goto switchD_100dc1e3_default;
          }
        }
      }
    }
  }
switchD_100dc1e3_default:
  return;
}

