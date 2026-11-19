// rea decompile_all
// name: FUN_10007550
// address: 0x10007550
// body: available
// range: 0x10007550-0x1000881c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007550(int param_1,float param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined *puVar9;
  
  *(uint *)(DAT_10220c50 + 0x98) = (uint)(*(int *)(DAT_10220c50 + 0x98) == 0);
  if (*(float *)(DAT_10220c50 + 0x214) != 0.0) {
    return;
  }
  if (*(int *)(DAT_10220c50 + 0x4f5b4) == 0) {
    return;
  }
  if (DAT_10233900 == 1) {
    DAT_10220c5c = 0;
    DAT_10233900 = 0;
    FUN_10006200();
    DAT_10220c5c = 1;
  }
  if (((*(ushort *)(DAT_10220c50 + 0x45476) & 0x1000) == 0) ||
     ((*(uint *)(DAT_10220c50 + 0xb8) & 0x40000) == 0)) {
    if (*(int *)(DAT_10220c50 + 0xe4) < 3) {
      iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0xffffffe2,0x1e);
      iVar1 = iVar1 + 100;
      pcVar2 = *(code **)(DAT_10220c50 + 0x4f5b8);
      uVar8 = 0x3dcccccd;
      if (*(int *)(DAT_10220c50 + 8) == 0) goto LAB_10007678;
      pcVar7 = "player/sprint/equipment_movement.wav";
      goto LAB_1000767d;
    }
  }
  else if (*(int *)(DAT_10220c50 + 0xe4) < 3) {
    iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0xffffffe2,0x1e);
    iVar1 = iVar1 + 100;
    pcVar2 = *(code **)(DAT_10220c50 + 0x4f5b8);
    uVar8 = 0x3f333333;
    if (*(int *)(DAT_10220c50 + 8) == 0) {
LAB_10007678:
      pcVar7 = "player/sprint/bag_movement.wav";
    }
    else {
      pcVar7 = "player/sprint/equipment_movement.wav";
    }
LAB_1000767d:
    (*pcVar2)(0,pcVar7,uVar8,0x3f4ccccd,0,iVar1);
  }
  pcVar7 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,&DAT_101a1470);
  iVar1 = _atoi(pcVar7);
  if ((*(int *)(DAT_10220c50 + 0xe4) < 3) && (*(int *)(DAT_10220c50 + 8) == 0)) {
    if (iVar1 == 0) {
      if (((*(ushort *)(DAT_10220c50 + 0x45476) & 0x1000) == 0) ||
         ((*(uint *)(DAT_10220c50 + 0xb8) & 0x40000) == 0)) {
        fVar5 = 0.0;
        uVar6 = 0x3f000000;
        uVar8 = 0xbf400000;
      }
      else {
        fVar5 = 0.0;
        uVar6 = 0x3f800000;
        uVar8 = 0xc0400000;
      }
    }
    else {
      iVar1 = -2;
      if (*(int *)(DAT_10220c50 + 0x98) == 0) {
        iVar1 = 1;
      }
      if (((*(ushort *)(DAT_10220c50 + 0x45476) & 0x1000) == 0) ||
         ((*(uint *)(DAT_10220c50 + 0xb8) & 0x40000) == 0)) {
        uVar8 = 0xbf400000;
        uVar6 = 0x3f000000;
      }
      else {
        uVar8 = 0xc0400000;
        uVar6 = 0x3f800000;
      }
      fVar5 = (float)iVar1;
    }
    FUN_10009dd0(uVar8,uVar6,fVar5);
  }
  iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,1);
  iVar1 = iVar1 + *(int *)(DAT_10220c50 + 0x98) * 2;
  if ((*(int *)(DAT_10220c50 + 8) != 0) && (*(int *)(*(int *)(DAT_10220c50 + 0x4f4f4) + 0x40) == 0))
  {
    return;
  }
  if (param_1 == 6) {
    puVar9 = &DAT_101a147c;
LAB_100078f7:
    pcVar7 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,puVar9);
    if ((*pcVar7 != '\0') && (pcVar7[1] != '\0')) {
LAB_10007916:
      FUN_10007470(pcVar7,iVar1,param_2);
      return;
    }
  }
  else if (param_1 == 7) {
    pcVar7 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,&DAT_101a1484);
    if ((*pcVar7 != '\0') && (pcVar7[1] != '\0')) {
      if (DAT_10220fec == 0) {
        DAT_10220fec = 1;
        return;
      }
      bVar4 = DAT_10220fec == 3;
      DAT_10220fec = DAT_10220fec + 1;
      if (bVar4) {
        DAT_10220fec = 0;
      }
      FUN_10007470(pcVar7,iVar1,param_2);
      return;
    }
  }
  else {
    if (param_1 == 8) {
      puVar9 = &DAT_101a1474;
      goto LAB_100078f7;
    }
    pcVar7 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,&DAT_101a148c);
    if ((*pcVar7 != '\0') && (pcVar7[1] != '\0')) goto LAB_10007916;
    pcVar7 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,"stype");
    iVar3 = _atoi(pcVar7);
    if (iVar3 == -1) {
      param_1 = 0;
    }
    else if (iVar3 != 0) {
      param_1 = iVar3;
    }
  }
  if (((*(uint *)(DAT_10220c50 + 0xb8) & 0x4000) != 0) && (*(int *)(DAT_10220c50 + 0xe4) < 3)) {
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      pcVar7 = "player/footsteps/crawl1.wav";
      break;
    case 1:
      pcVar7 = "player/footsteps/crawl2.wav";
      break;
    case 2:
      pcVar7 = "player/footsteps/crawl3.wav";
      break;
    case 3:
      pcVar7 = "player/footsteps/crawl4.wav";
      break;
    default:
      goto switchD_10007869_default;
    }
    (**(code **)(DAT_10220c50 + 0x4f5b8))(0,pcVar7,0x3f333333,0x3f4ccccd,0,100);
  }
switchD_10007869_default:
  switch(param_1) {
  case 1:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      goto switchD_1000851e_caseD_0;
    case 1:
switchD_1000851e_caseD_1:
      uVar8 = 100;
LAB_100084e5:
      pcVar7 = "player/footsteps/metal2.wav";
      break;
    case 2:
switchD_1000851e_caseD_2:
      uVar8 = 100;
LAB_100083b4:
      pcVar7 = "player/footsteps/metal3.wav";
      break;
    case 3:
switchD_1000851e_caseD_3:
      uVar8 = 100;
LAB_100083d7:
      pcVar7 = "player/footsteps/metal4.wav";
      break;
    default:
      goto switchD_100087c2_default;
    }
    break;
  case 2:
    switch(iVar1) {
    case 0:
      (**(code **)(DAT_10220c50 + 0x4f5b8))(4,"player/footsteps/dirt1.wav",param_2,0x3f4ccccd,0,100)
      ;
      return;
    case 1:
      (**(code **)(DAT_10220c50 + 0x4f5b8))(4,"player/footsteps/dirt2.wav",param_2,0x3f4ccccd,0,100)
      ;
      return;
    case 2:
      (**(code **)(DAT_10220c50 + 0x4f5b8))(4,"player/footsteps/dirt3.wav",param_2,0x3f4ccccd,0,100)
      ;
      return;
    case 3:
      (**(code **)(DAT_10220c50 + 0x4f5b8))(4,"player/footsteps/dirt4.wav",param_2,0x3f4ccccd,0,100)
      ;
      return;
    default:
      return;
    }
  case 3:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      goto switchD_1000851e_caseD_0;
    case 1:
      goto switchD_1000851e_caseD_1;
    case 2:
      goto switchD_1000851e_caseD_2;
    case 3:
      goto switchD_1000851e_caseD_3;
    default:
      goto switchD_100087c2_default;
    }
  case 4:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      goto switchD_1000851e_caseD_0;
    case 1:
      goto switchD_1000851e_caseD_1;
    case 2:
      goto switchD_1000851e_caseD_2;
    case 3:
      goto switchD_1000851e_caseD_3;
    default:
      goto switchD_100087c2_default;
    }
  case 5:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
switchD_100087c2_caseD_0:
      uVar8 = 100;
      pcVar7 = "player/footsteps/concrete1.wav";
      break;
    case 1:
switchD_100087c2_caseD_1:
      uVar8 = 100;
      pcVar7 = "player/footsteps/concrete2.wav";
      break;
    case 2:
switchD_100087c2_caseD_2:
      uVar8 = 100;
      pcVar7 = "player/footsteps/concrete3.wav";
      break;
    case 3:
switchD_100087c2_caseD_3:
      uVar8 = 100;
      pcVar7 = "player/footsteps/concrete4.wav";
      break;
    default:
      goto switchD_100087c2_default;
    }
    break;
  case 6:
    DAT_10226704 = 2 - (uint)(*(int *)(DAT_10220c50 + 0x98) != 0);
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      uVar8 = 100;
      pcVar7 = "player/footsteps/splash1.wav";
      break;
    case 1:
      uVar8 = 100;
      pcVar7 = "player/footsteps/splash2.wav";
      break;
    case 2:
      uVar8 = 100;
      pcVar7 = "player/footsteps/splash3.wav";
      break;
    case 3:
      uVar8 = 100;
      pcVar7 = "player/footsteps/splash4.wav";
      break;
    default:
      goto switchD_100087c2_default;
    }
    break;
  case 7:
    if (2 < *(int *)(DAT_10220c50 + 0xe4)) {
      return;
    }
    DAT_10226704 = 3;
    switch(iVar1) {
    case 0:
      (**(code **)(DAT_10220c50 + 0x4f5b8))
                (4,"player/footsteps/wade1.wav",param_2,0x3f4ccccd,0,0x50);
      return;
    case 1:
      (**(code **)(DAT_10220c50 + 0x4f5b8))
                (4,"player/footsteps/wade2.wav",param_2,0x3f4ccccd,0,0x50);
      return;
    case 2:
      (**(code **)(DAT_10220c50 + 0x4f5b8))
                (4,"player/footsteps/wade3.wav",param_2,0x3f4ccccd,0,0x50);
      return;
    case 3:
      (**(code **)(DAT_10220c50 + 0x4f5b8))
                (4,"player/footsteps/wade4.wav",param_2,0x3f4ccccd,0,0x50);
      return;
    default:
      DAT_10226704 = 3;
      return;
    }
  case 8:
    if (*(int *)(DAT_10220c50 + 0x98) == 0) {
      uVar8 = 0xbf000000;
    }
    else {
      uVar8 = 0x3f000000;
    }
    FUN_10009dd0(0xc0a00000,uVar8,0);
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      uVar8 = 0x96;
      break;
    case 1:
      uVar8 = 0x96;
      goto LAB_100084e5;
    case 2:
      uVar8 = 0x96;
      goto LAB_100083b4;
    case 3:
      uVar8 = 0x96;
      goto LAB_100083d7;
    default:
      goto switchD_100087c2_default;
    }
    goto LAB_10008391;
  case 9:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      uVar8 = 100;
      pcVar7 = "player/footsteps/wood1.wav";
      break;
    case 1:
      uVar8 = 100;
      pcVar7 = "player/footsteps/wood2.wav";
      break;
    case 2:
      uVar8 = 100;
      pcVar7 = "player/footsteps/wood3.wav";
      break;
    case 3:
      uVar8 = 100;
      pcVar7 = "player/footsteps/wood4.wav";
      break;
    default:
      goto switchD_100087c2_default;
    }
    break;
  case 10:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      uVar8 = 100;
      pcVar7 = "player/footsteps/carpet1.wav";
      break;
    case 1:
      uVar8 = 100;
      pcVar7 = "player/footsteps/carpet2.wav";
      break;
    case 2:
      uVar8 = 100;
      pcVar7 = "player/footsteps/carpet3.wav";
      break;
    case 3:
      uVar8 = 100;
      pcVar7 = "player/footsteps/carpet4.wav";
      break;
    default:
      goto switchD_100087c2_default;
    }
    break;
  case 0xb:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
switchD_10007de4_caseD_0:
      uVar8 = 100;
      pcVar7 = "player/footsteps/mud1.wav";
      break;
    case 1:
switchD_10007de4_caseD_1:
      uVar8 = 100;
      pcVar7 = "player/footsteps/mud2.wav";
      break;
    case 2:
switchD_10007de4_caseD_2:
      uVar8 = 100;
      pcVar7 = "player/footsteps/mud3.wav";
      break;
    case 3:
switchD_10007de4_caseD_3:
      uVar8 = 100;
      pcVar7 = "player/footsteps/mud4.wav";
      break;
    default:
      goto switchD_100087c2_default;
    }
    break;
  case 0xc:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      uVar8 = 100;
      pcVar7 = "player/footsteps/grass1.wav";
      break;
    case 1:
      uVar8 = 100;
      pcVar7 = "player/footsteps/grass2.wav";
      break;
    case 2:
      uVar8 = 100;
      pcVar7 = "player/footsteps/grass3.wav";
      break;
    case 3:
      uVar8 = 100;
      pcVar7 = "player/footsteps/grass4.wav";
      break;
    default:
      goto switchD_100087c2_default;
    }
    break;
  case 0xd:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      goto switchD_10007de4_caseD_0;
    case 1:
      goto switchD_10007de4_caseD_1;
    case 2:
      goto switchD_10007de4_caseD_2;
    case 3:
      goto switchD_10007de4_caseD_3;
    default:
      goto switchD_100087c2_default;
    }
  case 0xe:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      uVar8 = 100;
      pcVar7 = "player/footsteps/sand1.wav";
      break;
    case 1:
      uVar8 = 100;
      pcVar7 = "player/footsteps/sand2.wav";
      break;
    case 2:
      uVar8 = 100;
      pcVar7 = "player/footsteps/sand3.wav";
      break;
    case 3:
      uVar8 = 100;
      pcVar7 = "player/footsteps/sand4.wav";
      break;
    default:
      goto switchD_100087c2_default;
    }
    break;
  case 0xf:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      uVar8 = 100;
      pcVar7 = "player/footsteps/snow1.wav";
      break;
    case 1:
      uVar8 = 100;
      pcVar7 = "player/footsteps/snow2.wav";
      break;
    case 2:
      uVar8 = 100;
      pcVar7 = "player/footsteps/snow3.wav";
      break;
    case 3:
      uVar8 = 100;
      pcVar7 = "player/footsteps/snow4.wav";
      break;
    default:
      goto switchD_100087c2_default;
    }
    break;
  case 0x10:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      uVar8 = 100;
      pcVar7 = "player/footsteps/glass1.wav";
      break;
    case 1:
      uVar8 = 100;
      pcVar7 = "player/footsteps/glass2.wav";
      break;
    case 2:
      uVar8 = 100;
      pcVar7 = "player/footsteps/glass3.wav";
      break;
    case 3:
      uVar8 = 100;
      pcVar7 = "player/footsteps/glass4.wav";
      break;
    default:
      goto switchD_100087c2_default;
    }
    break;
  case 0x11:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      uVar8 = 100;
      pcVar7 = "player/footsteps/paper1.wav";
      break;
    case 1:
      uVar8 = 100;
      pcVar7 = "player/footsteps/paper2.wav";
      break;
    case 2:
      uVar8 = 100;
      pcVar7 = "player/footsteps/paper3.wav";
      break;
    case 3:
      uVar8 = 100;
      pcVar7 = "player/footsteps/paper4.wav";
      break;
    default:
      goto switchD_100087c2_default;
    }
    break;
  case 0x12:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      uVar8 = 100;
      pcVar7 = "player/footsteps/gravel1.wav";
      break;
    case 1:
      uVar8 = 100;
      pcVar7 = "player/footsteps/gravel2.wav";
      break;
    case 2:
      uVar8 = 100;
      pcVar7 = "player/footsteps/gravel3.wav";
      break;
    case 3:
      uVar8 = 100;
      pcVar7 = "player/footsteps/gravel4.wav";
      break;
    default:
      goto switchD_100087c2_default;
    }
    break;
  case 0x13:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      pcVar7 = "player/footsteps/grass1.wav";
      break;
    case 1:
      pcVar7 = "player/footsteps/grass2.wav";
      break;
    case 2:
      pcVar7 = "player/footsteps/grass3.wav";
      break;
    case 3:
      pcVar7 = "player/footsteps/grass4.wav";
      break;
    default:
      goto switchD_10007f59_default;
    }
    (**(code **)(DAT_10220c50 + 0x4f5b8))(4,pcVar7,param_2,0x3f4ccccd,0,100);
switchD_10007f59_default:
    iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(1,10);
    if (3 < iVar1) {
      return;
    }
    iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0xfffffffb,5);
    iVar1 = iVar1 + 100;
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,8);
    iVar3 = DAT_10220c50;
    switch(uVar8) {
    case 0:
      iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,0,0x3f4ccccd,0,iVar1);
      (**(code **)(iVar3 + 0x4f5b8))(0,"player/footsteps/twig_snap1.wav",(float)iVar1 + param_2);
      return;
    default:
      return;
    case 2:
      iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,0,0x3f4ccccd,0,iVar1);
      (**(code **)(iVar3 + 0x4f5b8))(0,"player/footsteps/twig_snap2.wav",(float)iVar1 + param_2);
      return;
    case 3:
      iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,0,0x3f4ccccd,0,iVar1);
      (**(code **)(iVar3 + 0x4f5b8))(0,"player/footsteps/twig_snap3.wav",(float)iVar1 + param_2);
      return;
    case 4:
      iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,0,0x3f4ccccd,0,iVar1);
      (**(code **)(iVar3 + 0x4f5b8))(0,"player/footsteps/twig_snap4.wav",(float)iVar1 + param_2);
      return;
    case 5:
      iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,0,0x3f4ccccd,0,iVar1);
      (**(code **)(iVar3 + 0x4f5b8))(0,"player/footsteps/twig_snap5.wav",(float)iVar1 + param_2);
      return;
    case 6:
      iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,0,0x3f4ccccd,0,iVar1);
      (**(code **)(iVar3 + 0x4f5b8))(0,"player/footsteps/twig_snap6.wav",(float)iVar1 + param_2);
      return;
    case 7:
      iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,0,0x3f4ccccd,0,iVar1);
      (**(code **)(iVar3 + 0x4f5b8))(0,"player/footsteps/twig_snap7.wav",(float)iVar1 + param_2);
      return;
    case 8:
      iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,0,0x3f4ccccd,0,iVar1);
      (**(code **)(iVar3 + 0x4f5b8))(0,"player/footsteps/twig_snap8.wav",(float)iVar1 + param_2);
      return;
    case 9:
      iVar1 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,0,0x3f4ccccd,0,iVar1);
      (**(code **)(iVar3 + 0x4f5b8))(0,"player/footsteps/twig_snap9.wav",(float)iVar1 + param_2);
      return;
    }
  default:
    uVar8 = (**(code **)(DAT_10220c50 + 0x4f58c))(0,3);
    switch(uVar8) {
    case 0:
      goto switchD_100087c2_caseD_0;
    case 1:
      goto switchD_100087c2_caseD_1;
    case 2:
      goto switchD_100087c2_caseD_2;
    case 3:
      goto switchD_100087c2_caseD_3;
    default:
      goto switchD_100087c2_default;
    }
  }
  goto LAB_10008807;
switchD_1000851e_caseD_0:
  uVar8 = 100;
LAB_10008391:
  pcVar7 = "player/footsteps/metal1.wav";
LAB_10008807:
  (**(code **)(DAT_10220c50 + 0x4f5b8))(4,pcVar7,param_2,0x3f4ccccd,0,uVar8);
switchD_100087c2_default:
  return;
}

