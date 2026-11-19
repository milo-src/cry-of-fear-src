// rea decompile_all
// name: FUN_1011fd90
// address: 0x1011fd90
// body: available
// range: 0x1011fd90-0x10120201 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011fd90(void)

{
  int iVar1;
  
  _memset(&DAT_10231888,0,0x580);
  _memset(&DAT_10231e08,0,0x100);
  DAT_10231f58 = 0;
  if (DAT_10222df4 != 0) {
    FUN_1011fb60("weapon_csak47");
    FUN_1011fb60("weapon_csaug");
    FUN_1011fb60("weapon_csawp");
    FUN_1011fb60("weapon_csbomb");
    FUN_1011fb60("weapon_csdeagle");
    FUN_1011fb60("weapon_cselites");
    FUN_1011fb60("weapon_csfamas");
    FUN_1011fb60("weapon_csfiveseven");
    FUN_1011fb60("weapon_csflashbang");
    FUN_1011fb60("weapon_csg3sg1");
    FUN_1011fb60("weapon_csm4a1");
  }
  if (DAT_10222ee4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_10222ee4 + 0x20))();
    if (iVar1 != 0) {
      FUN_10119790("ammo_glock");
      FUN_10119790("ammo_p345");
      FUN_10119790("ammo_shells");
      FUN_10119790("ammo_rifle");
      FUN_10119790("ammo_revolver");
      FUN_10119790("ammo_m16");
      FUN_10119790("ammo_vp70");
      FUN_10119790("ammo_g43");
    }
  }
  FUN_10119790("item_battery");
  FUN_10119790("item_suit");
  FUN_10119790("item_antidote");
  FUN_10119790("item_security");
  FUN_10119790("item_longjump");
  FUN_10119790("monster_slower3");
  FUN_10119790("item_glocktaclight");
  FUN_10119790("item_phonebattery");
  FUN_1011fb60("weapon_flashlight");
  FUN_1011fb60("weapon_mobile");
  FUN_1011fb60("weapon_glock");
  FUN_1011fb60("weapon_browning_wheelchair");
  FUN_1011fb60("weapon_booklaser");
  FUN_1011fb60("weapon_axe");
  FUN_1011fb60("weapon_dualweapon");
  FUN_1011fb60("weapon_p345");
  FUN_1011fb60("weapon_g43");
  FUN_1011fb60("weapon_shotgun");
  FUN_1011fb60("weapon_m16");
  FUN_1011fb60("weapon_vp70");
  FUN_1011fb60("weapon_rifle");
  FUN_1011fb60("weapon_syringe");
  FUN_1011fb60("weapon_action");
  FUN_1011fb60("weapon_camera");
  FUN_1011fb60("weapon_switchblade");
  FUN_1011fb60("weapon_lantern");
  FUN_1011fb60("weapon_nightstick");
  FUN_1011fb60("weapon_sledgehammer");
  FUN_1011fb60("weapon_branch");
  FUN_1011fb60("weapon_flare");
  FUN_1011fb60("weapon_tmp");
  FUN_1011fb60("weapon_mp5");
  FUN_1011fb60("weapon_famas");
  FUN_1011fb60("weapon_revolver");
  FUN_10119790("weaponbox");
  FUN_10116990("sprites/gunsmoke.spr");
  FUN_10116990("models/flash1.mdl");
  FUN_10116990("models/flash2.mdl");
  FUN_10116990("models/flash3.mdl");
  DAT_10231f10 = FUN_10116990("sprites/zerogxplode.spr");
  DAT_10231f18 = FUN_10116990("sprites/WXplo1.spr");
  DAT_10231f14 = FUN_10116990("sprites/steam1.spr");
  DAT_10231f1c = FUN_10116990("sprites/bubble.spr");
  DAT_10231f24 = FUN_10116990("sprites/bloodspray.spr");
  DAT_10231f20 = FUN_10116990("sprites/blood.spr");
  DAT_10231f28 = FUN_10116990("sprites/null.spr");
  _DAT_10231f30 = FUN_10116990("sprites/splash_main.spr");
  _DAT_10231f2c = FUN_10116990("sprites/waterdrop.spr");
  DAT_10231f08 = FUN_10116990(PTR_s_sprites_laserbeam_spr_1021b4e8);
  _DAT_10231f0c = FUN_10116990("sprites/laserdot.spr");
  _DAT_10231f40 = (*DAT_10223130)(1,"events/smokepuff.sc");
  DAT_10231f44 = (*DAT_10223130)(1,"events/viewpunch.sc");
  _DAT_10231f48 = (*DAT_10223130)(1,"events/weaponshoot.sc");
  DAT_10231f4c = (*DAT_10223130)(1,"events/clientsound.sc");
  DAT_10231f50 = (*DAT_10223130)(1,"events/muzzleflash.sc");
  DAT_10231f54 = (*DAT_10223130)(1,"events/revolvershells.sc");
  FUN_10116990("models/grenade.mdl");
  FUN_10116990("sprites/explode1.spr");
  FUN_10116a30("weapons/weapon_fire_empty.wav");
  FUN_10116a30("weapons/weapon_fire_empty_noclick.wav");
  FUN_10116a30("weapons/melee_swing.wav");
  FUN_10116a30("weapons/melee_hit.wav");
  FUN_10116a30("weapons/sleeve_generic1.wav");
  FUN_10116a30("weapons/sleeve_generic2.wav");
  FUN_10116a30("weapons/sleeve_generic3.wav");
  FUN_10116a30("weapons/dead_arm.wav");
  FUN_10116a30("weapons/debris1.wav");
  FUN_10116a30("weapons/debris2.wav");
  FUN_10116a30("weapons/debris3.wav");
  FUN_10116a30("weapons/weapon_get.wav");
  FUN_10116a30("weapons/item_get.wav");
  FUN_10116990("sprites/wsplash_x.spr");
  FUN_100d08f0("spread_settings.txt");
  return;
}

