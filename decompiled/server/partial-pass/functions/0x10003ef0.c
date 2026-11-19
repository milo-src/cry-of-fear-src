// rea decompile_all
// name: FUN_10003ef0
// address: 0x10003ef0
// body: available
// range: 0x10003ef0-0x10004168 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003ef0(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  char *pcVar6;
  undefined4 local_8;
  
  if (*(int *)(DAT_10220c50 + 0xe0) == -1) {
    return;
  }
  if ((*(int *)(DAT_10220c50 + 0xd0) == 0) &&
     (fVar5 = *(float *)(DAT_10220c50 + 0x9c), 350.0 <= fVar5)) {
    local_8 = 0x3f000000;
    if (*(int *)(DAT_10220c50 + 0xe4) < 1) {
      if (fVar5 <= 580.0) {
        if (fVar5 <= 290.0) {
          if (fVar5 < 200.0) goto LAB_10004152;
        }
        else {
          pcVar6 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))
                                     (DAT_10220c50 + 0x4f3f4,&DAT_101a1d3c);
          iVar1 = _atoi(pcVar6);
          if (iVar1 == 1) {
            (**(code **)(DAT_10220c50 + 0x4f5b8))
                      (2,"player/pl_fallpain.wav",0x3f800000,0x3f4ccccd,0,100);
          }
          local_8 = 0x3f59999a;
        }
      }
      else {
        local_8 = 0x3f800000;
        (**(code **)(DAT_10220c50 + 0x4f5b8))
                  (2,"player/pl_fallpain.wav",0x3f800000,0x3f4ccccd,0,100);
      }
    }
    *(undefined4 *)(DAT_10220c50 + 0x94) = 0;
    FUN_100099e0();
    if (*(int *)(DAT_10220c50 + 0xe4) < 3) {
      if (*(int *)(DAT_10220c50 + 8) == 0) {
        pcVar6 = "player/sprint/bag_movement.wav";
      }
      else {
        pcVar6 = "player/sprint/equipment_movement.wav";
      }
      (**(code **)(DAT_10220c50 + 0x4f5b8))(0,pcVar6,0x3f333333,0x3f4ccccd,0,100);
    }
    uVar2 = FUN_10006e30(*(undefined1 *)(DAT_10220c50 + 0x1f0),local_8);
    FUN_10007550(uVar2);
    fVar5 = 700.0;
    if (*(float *)(DAT_10220c50 + 0x9c) <= 700.0) {
      fVar5 = *(float *)(DAT_10220c50 + 0x9c);
    }
    fVar5 = fVar5 * 0.42;
    *(float *)(DAT_10220c50 + 0x234) = fVar5 + *(float *)(DAT_10220c50 + 0x234);
    fVar4 = fVar5 / 10.0;
    fVar5 = fVar5 / -10.0;
    fVar3 = (float10)(**(code **)(DAT_10220c50 + 0x4f590))(fVar5,fVar4,fVar5,fVar4);
    *(float *)(DAT_10220c50 + 0x238) = *(float *)(DAT_10220c50 + 0x238) + (float)fVar3;
    fVar3 = (float10)(**(code **)(DAT_10220c50 + 0x4f590))(fVar5,fVar4);
    *(float *)(DAT_10220c50 + 0x23c) = *(float *)(DAT_10220c50 + 0x23c) + (float)fVar3;
  }
LAB_10004152:
  if (*(int *)(DAT_10220c50 + 0xe0) != -1) {
    *(undefined4 *)(DAT_10220c50 + 0x9c) = 0;
  }
  return;
}

