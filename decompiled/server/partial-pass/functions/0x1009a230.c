// rea decompile_all
// name: CCofStressTest::ReportEffect
// address: 0x1009a230
// body: available
// range: 0x1009a230-0x1009a379 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CCofStressTest::ReportEffect(void) */

void __thiscall CCofStressTest::ReportEffect(CCofStressTest *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  
                    /* 0x9a230  243  ?ReportEffect@CCofStressTest@@QAEXXZ */
  (*DAT_1022302c)("fps_current");
  iVar3 = FUN_1013df50();
  *(int *)(this + 0xe4) = iVar3;
  bVar1 = iVar3 < *(int *)(this + 0xe0);
  bVar2 = 4 < *(int *)(this + 0xe0) - iVar3;
  iVar3 = FUN_10118460(0,"player");
  if (iVar3 == 0) {
    return;
  }
  switch(*(undefined4 *)(this + 0xdc)) {
  case 1:
    piVar4 = (int *)FUN_10118590(0,"stressbump");
    if (piVar4 == (int *)0x0) {
      return;
    }
    if (bVar1 && bVar2) {
      pcVar5 = "gfx/vgui/stress/stress_bump_bad.tga";
      break;
    }
    pcVar5 = "gfx/vgui/stress/stress_bump_good.tga";
LAB_1009a34c:
    *(int *)(piVar4[1] + 0x1d8) = (int)pcVar5 - *(int *)(DAT_10223188 + 0x98);
    goto LAB_1009a360;
  case 2:
    piVar4 = (int *)FUN_10118590(0,"stresswater");
    if (piVar4 == (int *)0x0) {
      return;
    }
    if (!bVar1 || !bVar2) {
      pcVar5 = "gfx/vgui/stress/stress_water_good.tga";
      goto LAB_1009a34c;
    }
    pcVar5 = "gfx/vgui/stress/stress_water_bad.tga";
    break;
  case 3:
    piVar4 = (int *)FUN_10118590(0,"stresslight");
    if (piVar4 == (int *)0x0) {
      return;
    }
    if (!bVar1 || !bVar2) {
      pcVar5 = "gfx/vgui/stress/stress_lights_good.tga";
      goto LAB_1009a34c;
    }
    pcVar5 = "gfx/vgui/stress/stress_lights_bad.tga";
    break;
  case 4:
    piVar4 = (int *)FUN_10118590(0,"stressweather");
    if (piVar4 == (int *)0x0) {
      return;
    }
    if (!bVar1 || !bVar2) {
      pcVar5 = "gfx/vgui/stress/stress_weather_good.tga";
      goto LAB_1009a34c;
    }
    pcVar5 = "gfx/vgui/stress/stress_weather_bad.tga";
    break;
  default:
    goto switchD_1009a28b_default;
  }
  *(int *)(piVar4[1] + 0x1d8) = (int)pcVar5 - *(int *)(DAT_10223188 + 0x98);
LAB_1009a360:
  (**(code **)(*piVar4 + 0xe8))(iVar3,iVar3,3,0);
switchD_1009a28b_default:
  return;
}

