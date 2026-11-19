// rea decompile_all
// name: FUN_10070660
// address: 0x10070660
// body: available
// range: 0x10070660-0x10070c09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10070660(void)

{
  uint *puVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  float10 fVar7;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  float local_8;
  
  (**(code **)(*in_ECX + 0x30))();
  iVar4 = *(int *)(in_ECX[1] + 0xb8);
  if (iVar4 == 0) {
    pcVar3 = "models/booksimon.mdl";
  }
  else {
    pcVar3 = (char *)(*(int *)(DAT_10223188 + 0x98) + iVar4);
  }
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),pcVar3);
  fVar7 = (float10)(*DAT_1022302c)("cof_monsterhumanscale");
  local_8 = (float)fVar7;
  local_c = 0x42900000;
  local_18 = 0;
  local_14 = (float)(int)fVar7;
  local_20 = (float)-(int)fVar7;
  local_1c = local_20;
  local_10 = local_14;
  FUN_1011a030(in_ECX[1],&local_20,&local_14);
  *(undefined4 *)(in_ECX[1] + 0x10c) = 3;
  *(undefined4 *)(in_ECX[1] + 0x108) = 4;
  iVar4 = in_ECX[1];
  in_ECX[199] = 0xf7;
  if (*(float *)(iVar4 + 0x164) == 0.0) {
    *(undefined4 *)(iVar4 + 0x164) = 0x42c80000;
    iVar4 = in_ECX[1];
  }
  local_18 = 0x41e00000;
  *(undefined8 *)(iVar4 + 0x178) = 0;
  *(undefined4 *)(iVar4 + 0x180) = 0x41e00000;
  in_ECX[0x82] = 0x3f000000;
  in_ECX[0x89] = 0;
  in_ECX[0xc1] = 0x340;
  if (*(float *)(in_ECX[1] + 0x168) == 0.0) {
    DAT_10222f24 = 1;
    DAT_10222f20 = 1;
    if ((DAT_10222f14 != 0) && (iVar4 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar4 != 0)) {
      (*DAT_10223000)(2,DAT_102266d8,0,0);
      (*DAT_10223008)(1);
      (*DAT_10223004)();
    }
    iVar4 = 1;
    if (0 < *(int *)(DAT_10223188 + 0x90)) {
      do {
        iVar5 = FUN_10119680(iVar4);
        if (iVar5 != 0) {
          local_20 = 0.0;
          local_1c = 0.0;
          local_18 = 0;
          FUN_10119c00(iVar5,&local_20,0x40000000,0,0xff,0);
          (*DAT_10223000)(1,DAT_1022667c,0,*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c));
          (*DAT_10223008)(0);
          (*DAT_10223008)(0);
          (*DAT_10223004)();
          FUN_100ea5c0((int)"fucked.mp3" - *(int *)(DAT_10223188 + 0x98),1,0x3f800000);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)(DAT_10223188 + 0x90));
    }
  }
  iVar4 = in_ECX[1];
  in_ECX[0xdb] = 0x3c;
  in_ECX[0xe1] = *(int *)(iVar4 + 0x254);
  if (*(float *)(iVar4 + 0x168) != 0.0) {
    if (*(int *)(iVar4 + 0x24c) == 0) {
      *(undefined4 *)(iVar4 + 0x24c) = 0x32;
    }
    FUN_1000eb40(2,0);
    switch(in_ECX[0xe1]) {
    case 0:
switchD_10070902_caseD_0:
      FUN_1000eb40(0,1);
      FUN_1000eb40(1,0);
      in_ECX[0xdf] = 5;
      break;
    case 1:
switchD_10070902_caseD_1:
      FUN_1000eb40(0,3);
      FUN_1000eb40(1,0);
      in_ECX[0xdf] = 0xf;
      break;
    case 2:
switchD_10070902_caseD_2:
      FUN_1000eb40(0,2);
      FUN_1000eb40(1,1);
      in_ECX[0xdf] = 0x1e;
      break;
    case 3:
switchD_10070902_caseD_3:
      FUN_1000eb40(0,4);
      FUN_1000eb40(1,0);
      in_ECX[0xdf] = -1;
    default:
      break;
    }
switchD_10070902_default:
    in_ECX[0xe2] = 0;
    (**(code **)(*in_ECX + 0x13c))();
    if (*(float *)(in_ECX[1] + 0x168) == 0.0) {
      in_ECX[0xdb] = 300;
      iVar4 = 300;
    }
    else {
      iVar4 = in_ECX[0xdb];
    }
    *(float *)(in_ECX[1] + 0x164) = (float)iVar4;
    *(float *)(in_ECX[1] + 0x1b4) = (float)in_ECX[0xdb];
    if ((*(float *)(in_ECX[1] + 0x168) != 0.0) && (in_ECX[0xe0] == 0)) {
      puVar1 = (uint *)(in_ECX[1] + 0x118);
      *puVar1 = *puVar1 | 0x80;
    }
    bVar2 = false;
    if (DAT_10222ee4 != (int *)0x0) {
      iVar4 = (**(code **)(*DAT_10222ee4 + 0x20))();
      if (iVar4 != 0) {
        piVar6 = (int *)(*DAT_10223068)(1);
        iVar4 = 1;
        if (1 < *(int *)(DAT_10223188 + 0x94)) {
          do {
            if (((*piVar6 == 0) && (piVar6[0x1f] != 0)) && (*(char *)(piVar6[0x1f] + 10) != '\0')) {
              bVar2 = true;
              break;
            }
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 0xcb;
          } while (iVar4 < *(int *)(DAT_10223188 + 0x94));
        }
      }
      if (((DAT_10222ee4 != (int *)0x0) &&
          (iVar4 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar4 != 0)) && (!bVar2)) {
        *(undefined1 *)((int)in_ECX + 10) = 1;
        iVar4 = 1;
        if (0 < *(int *)(DAT_10223188 + 0x90)) {
          do {
            piVar6 = (int *)FUN_10119680(iVar4);
            if (((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 0xd0))(), iVar5 != 0)) &&
               (iVar5 = FUN_100125e0(piVar6[1]), iVar5 != 0)) {
              *(undefined1 *)(iVar5 + 0x5f4) = 1;
              *(int *)(iVar5 + 0x5f8) =
                   (int)"gfx/vgui/boss/simon_health_empty.tga" - *(int *)(DAT_10223188 + 0x98);
              *(int *)(iVar5 + 0x5fc) =
                   (int)"gfx/vgui/boss/simon_health_full.tga" - *(int *)(DAT_10223188 + 0x98);
              *(int *)(iVar5 + 0x600) = (int)*(float *)(in_ECX[1] + 0x1b4);
              *(int *)(iVar5 + 0x604) = (int)*(float *)(in_ECX[1] + 0x164);
              *(undefined4 *)(iVar5 + 0x608) = *(undefined4 *)(in_ECX[1] + 0x1d0);
              (*DAT_10223000)(1,DAT_10226620,0,*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c));
              (*DAT_10223008)(1);
              (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar5 + 0x5f8));
              (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar5 + 0x5fc));
              (*DAT_10223010)(*(undefined4 *)(iVar5 + 0x604));
              (*DAT_10223010)(*(undefined4 *)(iVar5 + 0x600));
              (*DAT_10223004)();
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 <= *(int *)(DAT_10223188 + 0x90));
        }
      }
    }
    return;
  }
  in_ECX[0xe1] = 0;
  FUN_1000eb40(2,0);
  switch(in_ECX[0xe1]) {
  case 0:
    goto switchD_10070902_caseD_0;
  case 1:
    goto switchD_10070902_caseD_1;
  case 2:
    goto switchD_10070902_caseD_2;
  case 3:
    goto switchD_10070902_caseD_3;
  default:
    goto switchD_10070902_default;
  }
}

