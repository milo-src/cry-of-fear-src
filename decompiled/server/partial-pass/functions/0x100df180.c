// rea decompile_all
// name: FUN_100df180
// address: 0x100df180
// body: available
// range: 0x100df180-0x100df679 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100df180(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_c;
  int local_8;
  
  iVar8 = 0;
  iVar9 = 0;
  local_c = 0;
  iVar10 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x20c);
  if (DAT_10222ee4 == (int *)0x0) {
LAB_100df3cc:
    if (*(int *)(DAT_10223188 + 0x10) != 0) {
      pcVar7 = (char *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0x10));
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 != pcVar7 + 1) {
        iVar8 = FUN_10118590(0,pcVar7);
        if ((((iVar8 == 0) || (iVar3 = *(int *)(*(int *)(iVar8 + 4) + 0x20c), iVar3 == 0)) ||
            (iVar3 = (*DAT_10223060)(iVar3), iVar3 == 0)) && (iVar8 == 0)) goto LAB_100df42f;
        goto LAB_100df641;
      }
    }
    iVar8 = FUN_10118460(0,"info_player_start");
    if (iVar8 == 0) goto LAB_100df42f;
    iVar3 = *(int *)(*(int *)(iVar8 + 4) + 0x20c);
    if (iVar3 != 0) {
      (*DAT_10223060)(iVar3);
    }
  }
  else {
    iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))();
    if ((iVar2 != 0) && (local_8 = 1, 0 < *(int *)(DAT_10223188 + 0x90))) {
      do {
        iVar2 = FUN_10119680(local_8);
        if ((iVar2 != 0) && (param_1 == iVar2)) {
          switch(local_8) {
          case 1:
            iVar9 = FUN_10118460(iVar9,"cof_coop_spawn1");
            if (iVar9 != 0) {
              do {
                iVar2 = *(int *)(iVar9 + 4);
                if (*(int *)(iVar2 + 0x248) == 0) goto LAB_100df66d;
                iVar9 = FUN_10118460(iVar9,"cof_coop_spawn1");
              } while (iVar9 != 0);
              iVar9 = 0;
            }
            break;
          case 2:
            iVar10 = FUN_10118460(iVar10,"cof_coop_spawn2");
            if (iVar10 != 0) {
              do {
                iVar2 = *(int *)(iVar10 + 4);
                if (*(int *)(iVar2 + 0x248) == 0) goto LAB_100df66d;
                iVar10 = FUN_10118460(iVar10,"cof_coop_spawn2");
              } while (iVar10 != 0);
              iVar10 = 0;
            }
            break;
          case 3:
            iVar8 = FUN_10118460(iVar8,"cof_coop_spawn3");
            if (iVar8 != 0) {
              do {
                iVar2 = *(int *)(iVar8 + 4);
                if (*(int *)(iVar2 + 0x248) == 0) goto LAB_100df66d;
                iVar8 = FUN_10118460(iVar8,"cof_coop_spawn3");
              } while (iVar8 != 0);
              iVar8 = 0;
            }
            break;
          case 4:
            for (local_c = FUN_10118460(local_c,"cof_coop_spawn4"); local_c != 0;
                local_c = FUN_10118460(local_c,"cof_coop_spawn4")) {
              if (*(int *)(*(int *)(local_c + 4) + 0x248) == 0) {
                return *(undefined4 *)(*(int *)(local_c + 4) + 0x20c);
              }
            }
          }
        }
        local_8 = local_8 + 1;
      } while (local_8 <= *(int *)(DAT_10223188 + 0x90));
    }
    if (DAT_10222ee4 == (int *)0x0) goto LAB_100df3cc;
    iVar8 = (**(code **)(*DAT_10222ee4 + 0x2c))();
    if (iVar8 == 0) {
      if ((DAT_10222ee4 != (int *)0x0) &&
         (iVar10 = (**(code **)(*DAT_10222ee4 + 0x24))(), iVar8 = DAT_10226714, iVar10 != 0)) {
        for (iVar10 = (*DAT_102230b0)(1,5); 0 < iVar10; iVar10 = iVar10 + -1) {
          iVar8 = FUN_10118460(iVar8,"info_player_deathmatch");
        }
        if (((iVar8 == 0) || (iVar10 = *(int *)(*(int *)(iVar8 + 4) + 0x20c), iVar10 == 0)) ||
           (iVar9 = (*DAT_10223060)(iVar10), iVar10 = iVar8, iVar9 == 0)) {
          iVar8 = FUN_10118460(iVar8,"info_player_deathmatch");
          iVar10 = iVar8;
        }
        do {
          if (((iVar8 != 0) && (iVar9 = FUN_100e4ef0(param_1,iVar8), iVar9 != 0)) &&
             ((iVar9 = *(int *)(iVar8 + 4), *(float *)(iVar9 + 8) != 0.0 ||
              ((*(float *)(iVar9 + 0xc) != 0.0 || (*(float *)(iVar9 + 0x10) != 0.0))))))
          goto LAB_100df641;
          iVar8 = FUN_10118460(iVar8,"info_player_deathmatch");
        } while (iVar8 != iVar10);
        if (((iVar8 != 0) && (iVar10 = *(int *)(*(int *)(iVar8 + 4) + 0x20c), iVar10 != 0)) &&
           (iVar10 = (*DAT_10223060)(iVar10), iVar10 != 0)) {
          for (piVar5 = (int *)FUN_101186b0(0,*(int *)(iVar8 + 4) + 8,0x43000000);
              piVar5 != (int *)0x0;
              piVar5 = (int *)FUN_101186b0(piVar5,*(int *)(iVar8 + 4) + 8,0x43000000)) {
            iVar10 = (**(code **)(*piVar5 + 0xd0))();
            if ((iVar10 != 0) && (*(int *)(piVar5[1] + 0x20c) != iVar3)) {
              iVar10 = (*DAT_10223068)(0);
              if (iVar10 == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = iVar10 + 0x80;
              }
              iVar9 = (*DAT_10223068)(0);
              if (iVar9 == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = iVar9 + 0x80;
              }
              (**(code **)(*piVar5 + 100))(iVar9,iVar10,0x43960000,0);
            }
          }
          goto LAB_100df641;
        }
      }
      goto LAB_100df3cc;
    }
    iVar8 = FUN_10118460(DAT_10226714,"info_player_coop");
    if ((((iVar8 == 0) || (iVar3 = *(int *)(*(int *)(iVar8 + 4) + 0x20c), iVar3 == 0)) ||
        (iVar3 = (*DAT_10223060)(iVar3), iVar3 == 0)) &&
       (((iVar8 = FUN_10118460(DAT_10226714,"info_player_start"), iVar8 == 0 ||
         (iVar3 = *(int *)(*(int *)(iVar8 + 4) + 0x20c), iVar3 == 0)) ||
        (iVar3 = (*DAT_10223060)(iVar3), iVar3 == 0)))) goto LAB_100df3cc;
  }
LAB_100df641:
  iVar3 = *(int *)(*(int *)(iVar8 + 4) + 0x20c);
  if ((iVar3 != 0) && (iVar3 = (*DAT_10223060)(iVar3), iVar3 != 0)) {
    iVar2 = *(int *)(iVar8 + 4);
    DAT_10226714 = iVar8;
LAB_100df66d:
    return *(undefined4 *)(iVar2 + 0x20c);
  }
LAB_100df42f:
  (*DAT_1022303c)(4,"PutClientInServer: no info_player_start on level");
  uVar4 = (*DAT_10223068)(0);
  return uVar4;
}

