// rea decompile_all
// name: FUN_1001cf70
// address: 0x1001cf70
// body: available
// range: 0x1001cf70-0x1001d76a inclusive
// range: 0x1001d770-0x1001d824 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cf70(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *local_c;
  char *local_8;
  
  FUN_10119790("monster_sawcrazy");
  FUN_10116990("models/error.mdl");
  FUN_10116a30("ambience/van_number.wav");
  FUN_10116a30("ambience/really_muschi.wav");
  FUN_10116a30("player/morphine_dream.wav");
  FUN_10116a30("player/heartbeat1.wav");
  FUN_10116a30("ambience/laugh1.wav");
  FUN_10116a30("ambience/laugh2.wav");
  FUN_10116a30("ambience/laugh3.wav");
  FUN_10116a30("player/vocal/underwaterhurt1.wav");
  FUN_10116a30("player/vocal/underwaterhurt2.wav");
  FUN_10116a30("player/vocal/underwaterhurt3.wav");
  FUN_10116a30("player/vocal/water_surface.wav");
  FUN_10116a30("player/pl_fallpain.wav");
  FUN_10116a30("player/pl_swim.wav");
  FUN_10116990("sprcache");
  FUN_10116a30("ambience/soundcache");
  FUN_10116990("models/generic_gore.mdl");
  FUN_10116a30("ui/3d_click.wav");
  FUN_10116a30("ui/3d_rollover.wav");
  FUN_10116a30("stranger/st_hearbeat.wav");
  if ((DAT_10222ee4 == (int *)0x0) || (iVar1 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar1 != 0)) {
    FUN_10116a30("player/sprint/equipment_movement.wav");
    FUN_10116a30("common/votekick/votekick_failed.wav");
    FUN_10116a30("common/votekick/votekick_notify.wav");
    pcVar2 = "common/votekick/votekick_succeeded.wav";
  }
  else {
    pcVar2 = "player/sprint/bag_movement.wav";
  }
  FUN_10116a30(pcVar2);
  FUN_10116a30("player/show_hint.wav");
  FUN_10116a30("inventory/game_start.wav");
  FUN_10116a30("player/vocal/water_breathe.wav");
  FUN_10116a30("player/footsteps/crawl1.wav");
  FUN_10116a30("player/footsteps/crawl2.wav");
  FUN_10116a30("player/footsteps/crawl3.wav");
  FUN_10116a30("player/footsteps/crawl4.wav");
  FUN_10116a30("player/get_down.wav");
  FUN_10116a30("player/get_up.wav");
  FUN_10116a30("player/footsteps/concrete1.wav");
  FUN_10116a30("player/footsteps/concrete2.wav");
  FUN_10116a30("player/footsteps/concrete3.wav");
  FUN_10116a30("player/footsteps/concrete4.wav");
  FUN_10116a30("player/footsteps/dirt1.wav");
  FUN_10116a30("player/footsteps/dirt2.wav");
  FUN_10116a30("player/footsteps/dirt3.wav");
  FUN_10116a30("player/footsteps/dirt4.wav");
  FUN_10116a30("player/footsteps/grass1.wav");
  FUN_10116a30("player/footsteps/grass2.wav");
  FUN_10116a30("player/footsteps/grass3.wav");
  FUN_10116a30("player/footsteps/grass4.wav");
  FUN_10116a30("player/footsteps/metal1.wav");
  FUN_10116a30("player/footsteps/metal2.wav");
  FUN_10116a30("player/footsteps/metal3.wav");
  FUN_10116a30("player/footsteps/metal4.wav");
  FUN_10116a30("player/footsteps/mud1.wav");
  FUN_10116a30("player/footsteps/mud2.wav");
  FUN_10116a30("player/footsteps/mud3.wav");
  FUN_10116a30("player/footsteps/mud4.wav");
  FUN_10116a30("player/footsteps/sand1.wav");
  FUN_10116a30("player/footsteps/sand2.wav");
  FUN_10116a30("player/footsteps/sand3.wav");
  FUN_10116a30("player/footsteps/sand4.wav");
  FUN_10116a30("player/footsteps/snow1.wav");
  FUN_10116a30("player/footsteps/snow2.wav");
  FUN_10116a30("player/footsteps/snow3.wav");
  FUN_10116a30("player/footsteps/snow4.wav");
  FUN_10116a30("player/footsteps/wood1.wav");
  FUN_10116a30("player/footsteps/wood2.wav");
  FUN_10116a30("player/footsteps/wood3.wav");
  FUN_10116a30("player/footsteps/wood4.wav");
  FUN_10116a30("player/exit_water.wav");
  FUN_10116a30("player/footsteps/splash1.wav");
  FUN_10116a30("player/footsteps/splash2.wav");
  FUN_10116a30("player/footsteps/splash3.wav");
  FUN_10116a30("player/footsteps/splash4.wav");
  FUN_10116a30("player/footsteps/wade1.wav");
  FUN_10116a30("player/footsteps/wade2.wav");
  FUN_10116a30("player/footsteps/wade3.wav");
  FUN_10116a30("player/footsteps/wade4.wav");
  FUN_10116a30("player/footsteps/glass1.wav");
  FUN_10116a30("player/footsteps/glass2.wav");
  FUN_10116a30("player/footsteps/glass3.wav");
  FUN_10116a30("player/footsteps/glass4.wav");
  FUN_10116a30("player/footsteps/paper1.wav");
  FUN_10116a30("player/footsteps/paper2.wav");
  FUN_10116a30("player/footsteps/paper3.wav");
  FUN_10116a30("player/footsteps/paper4.wav");
  FUN_10116a30("player/footsteps/carpet1.wav");
  FUN_10116a30("player/footsteps/carpet2.wav");
  FUN_10116a30("player/footsteps/carpet3.wav");
  FUN_10116a30("player/footsteps/carpet4.wav");
  FUN_10116a30("player/footsteps/twig_snap1.wav");
  FUN_10116a30("player/footsteps/twig_snap2.wav");
  FUN_10116a30("player/footsteps/twig_snap3.wav");
  FUN_10116a30("player/footsteps/twig_snap4.wav");
  FUN_10116a30("player/footsteps/twig_snap5.wav");
  FUN_10116a30("player/footsteps/twig_snap6.wav");
  FUN_10116a30("player/footsteps/twig_snap7.wav");
  FUN_10116a30("player/footsteps/twig_snap8.wav");
  FUN_10116a30("player/footsteps/twig_snap9.wav");
  FUN_10116a30("player/footsteps/gravel1.wav");
  FUN_10116a30("player/footsteps/gravel2.wav");
  FUN_10116a30("player/footsteps/gravel3.wav");
  FUN_10116a30("player/footsteps/gravel4.wav");
  FUN_10116a30("buttons/spark5.wav");
  FUN_10116a30("buttons/spark6.wav");
  FUN_10116a30("debris/glass1.wav");
  FUN_10116a30("debris/glass2.wav");
  FUN_10116a30("debris/glass3.wav");
  FUN_10116a30("items/flashlight1.wav");
  FUN_10116a30("items/flashlight1.wav");
  FUN_10116a30("common/bodysplat.wav");
  FUN_10116990("models/player.mdl");
  FUN_10116990("models/simon_gibs.mdl");
  FUN_10116990("sprites/blood_puff.spr");
  FUN_10116a30("unlockables/nv_on.wav");
  FUN_10116a30("unlockables/nv_off.wav");
  FUN_10116a30("common/wpn_hudoff.wav");
  FUN_10116a30("common/wpn_hudon.wav");
  FUN_10116a30("common/wpn_moveselect.wav");
  FUN_10116a30("common/wpn_select.wav");
  FUN_10116a30("common/wpn_denyselect.wav");
  FUN_10116a30("player/water_jump.wav");
  FUN_10116a30("player/water_small_splash.wav");
  FUN_10116a30("player/water_splash.wav");
  FUN_10116990("models/flash1.mdl");
  FUN_10116990("sprites/scr_set.spr");
  if ((DAT_10222ee4 == (int *)0x0) || (iVar1 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar1 != 0)) {
    FUN_10116a30("player/police/player_out_of_breath1.wav");
    FUN_10116a30("player/police/player_out_of_breath2.wav");
    FUN_10116a30("player/police/sprint_breathe1.wav");
    FUN_10116a30("player/police/sprint_breathe2.wav");
    FUN_10116a30("player/police/sprint_breathe3.wav");
    local_c = "player/police/sprint_breathe6.wav";
    pcVar4 = "player/police/sprint_breathe9.wav";
    local_8 = "player/police/sprint_breathe5.wav";
    pcVar6 = "player/police/sprint_breathe8.wav";
    pcVar3 = "player/police/sprint_breathe7.wav";
    pcVar2 = "player/police/sprint_breathe4.wav";
  }
  else {
    iVar1 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc),&DAT_101a924c)
    ;
    if (iVar1 == 0) {
      pcVar4 = "player/sprint/sprint_breathe5.wav";
      local_c = "player/sprint/sprint_breathe2.wav";
      pcVar6 = "player/sprint/sprint_breathe4.wav";
      local_8 = "player/sprint/sprint_breathe1.wav";
      pcVar3 = "player/sprint/sprint_breathe3.wav";
      pcVar2 = "player/player_out_of_breath.wav";
    }
    else {
      pcVar4 = "player/doctor/sprint_breathe5.wav";
      local_c = "player/doctor/sprint_breathe2.wav";
      pcVar6 = "player/doctor/sprint_breathe4.wav";
      local_8 = "player/doctor/sprint_breathe1.wav";
      pcVar3 = "player/doctor/sprint_breathe3.wav";
      pcVar2 = "player/doctor/player_out_of_breath.wav";
    }
  }
  FUN_10116a30(pcVar2);
  FUN_10116a30(local_8);
  FUN_10116a30(local_c);
  FUN_10116a30(pcVar3);
  FUN_10116a30(pcVar6);
  FUN_10116a30(pcVar4);
  FUN_10116a30("inventory/inventory_click.wav");
  FUN_10116a30("inventory/inventory_close.wav");
  FUN_10116a30("inventory/inventory_no.wav");
  FUN_10116a30("inventory/inventory_open.wav");
  FUN_10116a30("inventory/inventory_toggle.wav");
  if ((DAT_10222ee4 == (int *)0x0) || (iVar1 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar1 == 0)) {
    iVar1 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc),&DAT_101a924c)
    ;
    uVar5 = 0;
    if (iVar1 == 0) {
      do {
        FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_vocal_Pain_Pain1_wav_10211cc8 + uVar5));
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x40);
      uVar5 = 0;
      do {
        FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_vocal_Death_Death1_wav_10211db8 + uVar5));
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x1c);
      uVar5 = 0;
      do {
        FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_vocal_Swing_Swing1_wav_10211d50 + uVar5));
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x28);
      uVar5 = 0;
      do {
        FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_vocal_MorphineInjection_M_10211c60 + uVar5))
        ;
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x20);
      uVar5 = 0;
      do {
        FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_vocal_LowHealth_lhealth1__10211c90 + uVar5))
        ;
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x14);
    }
    else {
      do {
        FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_doctor_Pain_Pain1_wav_10211d08 + uVar5));
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x20);
      uVar5 = 0;
      do {
        FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_doctor_Death_Death1_wav_10211dd4 + uVar5));
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x1c);
      uVar5 = 0;
      do {
        FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_doctor_Swing_Swing1_wav_10211d78 + uVar5));
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x28);
      uVar5 = 0;
      do {
        FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_doctor_LowHealth_lhealth1_10211ca4 + uVar5))
        ;
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x14);
    }
  }
  else {
    uVar5 = 0;
    do {
      FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_police_adlib_follow_1_wav_10211c0c + uVar5));
      uVar5 = uVar5 + 4;
    } while (uVar5 < 0x1c);
    uVar5 = 0;
    do {
      FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_police_adlib_help_1_wav_10211c28 + uVar5));
      uVar5 = uVar5 + 4;
    } while (uVar5 < 0x14);
    uVar5 = 0;
    do {
      FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_police_adlib_something_1__10211c3c + uVar5));
      uVar5 = uVar5 + 4;
    } while (uVar5 < 0x24);
    uVar5 = 0;
    do {
      FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_police_Pain_Pain1_wav_10211d28 + uVar5));
      uVar5 = uVar5 + 4;
    } while (uVar5 < 0x28);
    uVar5 = 0;
    do {
      FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_police_Death_Death1_wav_10211df0 + uVar5));
      uVar5 = uVar5 + 4;
    } while (uVar5 < 0x14);
    uVar5 = 0;
    do {
      FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_police_Swing_Swing1_wav_10211da0 + uVar5));
      uVar5 = uVar5 + 4;
    } while (uVar5 < 0x18);
    uVar5 = 0;
    do {
      FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_police_MorphineInjection__10211c80 + uVar5));
      uVar5 = uVar5 + 4;
    } while (uVar5 < 0x10);
    uVar5 = 0;
    do {
      FUN_10116a30(*(undefined4 *)((int)&PTR_s_player_police_LowHealth_lhealth1_10211cb8 + uVar5));
      uVar5 = uVar5 + 4;
    } while (uVar5 < 0x10);
  }
  FUN_10116a30(PTR_s_player_vocal_Vomit_vomit1_wav_10211e04);
  return;
}

