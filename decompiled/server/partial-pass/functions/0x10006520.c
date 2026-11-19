// rea decompile_all
// name: FUN_10006520
// address: 0x10006520
// body: available
// range: 0x10006520-0x1000692b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10006907) */

void FUN_10006520(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  double dVar6;
  float fVar7;
  
  if (*(float *)(DAT_10220c50 + 0x214) == 0.0) {
    if (*(int *)(DAT_10220c50 + 0xd0) != 0) {
LAB_10006553:
      *(uint *)(DAT_10220c50 + 200) = *(uint *)(DAT_10220c50 + 200) | 2;
      return;
    }
    pcVar1 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,&DAT_101a1d3c);
    iVar2 = _atoi(pcVar1);
    iVar3 = DAT_10220c50;
    if ((iVar2 != 1) || (*(int *)(DAT_10220c50 + 0xd4) != 5)) {
      if (*(float *)(DAT_10220c50 + 0xcc) == 0.0) {
        if ((*(int *)(DAT_10220c50 + 0xe4) < 2) || (*(int *)(DAT_10220c50 + 0xe8) == -0x13)) {
          if (*(int *)(DAT_10220c50 + 0xe0) == -1) goto LAB_10006553;
          if ((*(byte *)(DAT_10220c50 + 200) & 2) == 0) {
            *(undefined4 *)(DAT_10220c50 + 0xe0) = 0xffffffff;
            FUN_10008e70();
            if (iVar2 != 1) {
              uVar4 = FUN_10006e30(*(undefined1 *)(DAT_10220c50 + 0x1f0),0x3f800000);
              FUN_10007550(uVar4);
            }
            else {
              (**(code **)(DAT_10220c50 + 0x4f5b8))
                        (4,"player/plyrjmp8.wav",0x3f000000,0x3f4ccccd,0,100);
            }
            if (*(int *)(DAT_10220c50 + 0xe4) < 3) {
              iVar3 = (**(code **)(DAT_10220c50 + 0x4f58c))(0xffffffe2,0x1e);
              if (*(int *)(DAT_10220c50 + 8) == 0) {
                pcVar1 = "player/sprint/bag_movement.wav";
              }
              else {
                pcVar1 = "player/sprint/equipment_movement.wav";
              }
              (**(code **)(DAT_10220c50 + 0x4f5b8))(0,pcVar1,0x3f800000,0x3f4ccccd,0,iVar3 + 100);
            }
            pcVar1 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))
                                       (DAT_10220c50 + 0x4f3f4,&DAT_101a1d74);
            iVar3 = _atoi(pcVar1);
            if ((*(int *)(DAT_10220c50 + 0x90) == 0) &&
               ((*(uint *)(DAT_10220c50 + 0xb8) & 0x4000) == 0)) {
              pcVar1 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))
                                         (DAT_10220c50 + 0x4f3f4,&DAT_101a1d78);
              iVar3 = _atoi(pcVar1);
              dVar6 = (double)(iVar3 << 4) * 45.0;
              if (dVar6 < 0.0) {
                __libm_sse2_sqrt_precise();
                *(float *)(DAT_10220c50 + 100) = (float)dVar6;
              }
              else {
                *(float *)(DAT_10220c50 + 100) = (float)SQRT(dVar6);
              }
            }
            else if ((iVar3 != 1) ||
                    ((((*(byte *)(DAT_10220c50 + 0x45476) & 4) == 0 ||
                      (*(float *)(DAT_10220c50 + 0x8c) <= 0.0)) ||
                     (fVar5 = (float10)FUN_10002fd0(DAT_10220c50 + 0x5c), (float)fVar5 <= 50.0)))) {
              *(undefined4 *)(DAT_10220c50 + 100) = 0x43862a01;
            }
            else {
              *(undefined4 *)(DAT_10220c50 + 0xa0) = 0xc0a00000;
              *(float *)(DAT_10220c50 + 0x5c) = *(float *)(DAT_10220c50 + 0x14) * 350.0 * 1.6;
              *(float *)(DAT_10220c50 + 0x60) = *(float *)(DAT_10220c50 + 0x18) * 350.0 * 1.6;
              *(undefined4 *)(DAT_10220c50 + 100) = 0x4395aa92;
            }
            FUN_10005810();
            *(uint *)(DAT_10220c50 + 200) = *(uint *)(DAT_10220c50 + 200) | 2;
          }
        }
        else {
          *(undefined4 *)(DAT_10220c50 + 0xe0) = 0xffffffff;
          if (*(int *)(DAT_10220c50 + 0xe8) == -3) {
            *(undefined4 *)(DAT_10220c50 + 100) = 0x42c80000;
          }
          else if (*(int *)(DAT_10220c50 + 0xe8) == -4) {
            *(undefined4 *)(DAT_10220c50 + 100) = 0x42a00000;
          }
          else {
            *(undefined4 *)(DAT_10220c50 + 100) = 0x42480000;
          }
          if (*(float *)(DAT_10220c50 + 0xac) <= 0.0) {
            *(undefined4 *)(DAT_10220c50 + 0xac) = 0x459c4000;
            iVar3 = (**(code **)(DAT_10220c50 + 0x4f58c))(0xfffffff6,10);
            (**(code **)(DAT_10220c50 + 0x4f5b8))
                      (4,"player/vocal/water_breathe.wav",0x3f800000,0x3f4ccccd,0,iVar3 + 100);
            return;
          }
        }
      }
      else {
        fVar7 = *(float *)(DAT_10220c50 + 0xcc) - (float)*(byte *)(DAT_10220c50 + 0x4545a);
        *(float *)(DAT_10220c50 + 0xcc) = fVar7;
        if (fVar7 < 0.0) {
          *(undefined4 *)(iVar3 + 0xcc) = 0;
          return;
        }
      }
    }
  }
  return;
}

