// rea decompile_all
// name: CTriggerHurt::RadiationThink
// address: 0x1010f100
// body: available
// range: 0x1010f100-0x1010f32e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CTriggerHurt::RadiationThink(void) */

void __thiscall CTriggerHurt::RadiationThink(CTriggerHurt *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
                    /* 0x10f100  233  ?RadiationThink@CTriggerHurt@@QAEXXZ */
  iVar6 = *(int *)(this + 4);
  uVar1 = *(undefined8 *)(iVar6 + 8);
  uVar3 = *(undefined4 *)(iVar6 + 0x10);
  uVar4 = *(undefined4 *)(iVar6 + 0x180);
  uVar2 = *(undefined8 *)(iVar6 + 0x178);
  *(ulonglong *)(iVar6 + 8) =
       CONCAT44((*(float *)(iVar6 + 0xd4) + *(float *)(iVar6 + 200)) * 0.5,
                (*(float *)(iVar6 + 0xd0) + *(float *)(iVar6 + 0xc4)) * 0.5);
  *(float *)(iVar6 + 0x10) = (*(float *)(iVar6 + 0xd8) + *(float *)(iVar6 + 0xcc)) * 0.5;
  iVar6 = *(int *)(this + 4);
  *(ulonglong *)(iVar6 + 0x178) =
       CONCAT44(*(float *)(iVar6 + 0x17c) * 0.0,*(float *)(iVar6 + 0x178) * 0.0);
  *(float *)(iVar6 + 0x180) = *(float *)(iVar6 + 0x180) * 0.0;
  iVar5 = (*DAT_10222f8c)(*(undefined4 *)(*(int *)(this + 4) + 0x20c));
  iVar6 = *(int *)(this + 4);
  *(undefined8 *)(iVar6 + 8) = uVar1;
  *(undefined4 *)(iVar6 + 0x10) = uVar3;
  iVar6 = *(int *)(this + 4);
  *(undefined8 *)(iVar6 + 0x178) = uVar2;
  *(undefined4 *)(iVar6 + 0x180) = uVar4;
  if (iVar5 != 0) {
    iVar6 = (*DAT_10223060)(iVar5);
    if (iVar6 != 0) {
      iVar7 = FUN_100125e0(iVar5 + 0x80);
      iVar6 = *(int *)(this + 4);
      fVar11 = (*(float *)(iVar6 + 0xd0) + *(float *)(iVar6 + 0xc4)) * 0.5 -
               (*(float *)(iVar5 + 0x144) + *(float *)(iVar5 + 0x150)) * 0.5;
      fVar10 = (*(float *)(iVar6 + 0xd4) + *(float *)(iVar6 + 200)) * 0.5 -
               (*(float *)(iVar5 + 0x148) + *(float *)(iVar5 + 0x154)) * 0.5;
      fVar9 = (*(float *)(iVar6 + 0xd8) + *(float *)(iVar6 + 0xcc)) * 0.5 -
              (*(float *)(iVar5 + 0x14c) + *(float *)(iVar5 + 0x158)) * 0.5;
      dVar8 = (double)(fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9);
      if (dVar8 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar8 = SQRT(dVar8);
      }
      if ((float)dVar8 <= *(float *)(iVar7 + 0x24a0)) {
        *(float *)(iVar7 + 0x24a0) = (float)dVar8;
      }
    }
  }
  (**(code **)(*(int *)this + 8))(0x3e800000);
  return;
}

