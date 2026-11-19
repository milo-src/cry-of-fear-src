// rea decompile_all
// name: CPhoneCall::ChangeSubtitle
// address: 0x1005fc20
// body: available
// range: 0x1005fc20-0x1005ff8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CPhoneCall::ChangeSubtitle(void) */

void __thiscall CPhoneCall::ChangeSubtitle(CPhoneCall *this)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  
                    /* 0x5fc20  52  ?ChangeSubtitle@CPhoneCall@@QAEXXZ */
  piVar3 = (int *)FUN_100177a0();
  iVar4 = (**(code **)(*piVar3 + 0xd0))();
  if (iVar4 != 0) {
    iVar4 = FUN_100177a0();
    piVar3 = (int *)FUN_100125e0(*(undefined4 *)(iVar4 + 4));
    if ((piVar3 != (int *)0x0) && (piVar3[0x94b] != 0)) {
      pcVar11 = "weapon_mobile";
      iVar4 = *(int *)(*(int *)(piVar3[0x94b] + 4) + 0x20c);
      pbVar10 = (byte *)(*(int *)(-(uint)(iVar4 != 0) & iVar4 + 0x80U) + (int)DAT_10223188[0x26]);
      do {
        bVar1 = *pbVar10;
        bVar12 = bVar1 < (byte)*pcVar11;
        if (bVar1 != *pcVar11) {
LAB_1005fcc0:
          uVar5 = -(uint)bVar12 | 1;
          goto LAB_1005fcc5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar12 = bVar1 < (byte)pcVar11[1];
        if (bVar1 != pcVar11[1]) goto LAB_1005fcc0;
        pbVar10 = pbVar10 + 2;
        pcVar11 = pcVar11 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_1005fcc5:
      if (uVar5 == 0) {
        iVar4 = (**(code **)(*piVar3 + 0xbc))();
        if (iVar4 == 0) {
          uVar6 = FUN_10017790(&DAT_101b5fb0,2,0);
          FUN_10119810(uVar6);
          iVar4 = FUN_100177a0();
          FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c),0,"common/null.wav",0x3f800000,
                       0x3f4ccccd,0,100);
          return;
        }
        piVar7 = (int *)FUN_10052e30(*(undefined4 *)(piVar3[0x94b] + 4));
        if (piVar7 != (int *)0x0) {
          iVar4 = *(int *)(this + 500);
          if (this[0x200] == (CPhoneCall)0x0) {
            this[0x200] = (CPhoneCall)0x1;
            (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + iVar4 * 4 + 0x16c));
            *(code **)(this + 0x78) = ChangeSubtitle;
            pcVar11 = "phone/phone_ringtone.wav";
            if (*(int *)(*(int *)(this + 4) + 0x248) != 0) {
              pcVar11 = "phone/phone_ringing.wav";
            }
            FUN_1001e990(*(undefined4 *)(piVar3[1] + 0x20c),0,pcVar11);
            FUN_100fc9f0(*(undefined4 *)(piVar3[1] + 0x20c),0,"phone/tone_send.wav",0x3f800000,
                         0x3f4ccccd,0,100);
            if (*(int *)(this + 0x1f0) != 0) {
              iVar4 = FUN_100177a0();
              FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c),0,
                           (int)DAT_10223188[0x26] + *(int *)(this + 0x1f0),0x3f800000,0x3f4ccccd,0,
                           100);
            }
            iVar4 = piVar3[0x7a6];
            piVar7[0x76] = (int)(*DAT_10223188 + 1.1);
            if (iVar4 == 0) {
              (**(code **)(*piVar7 + 0x198))(0xc,1,0);
              *(undefined1 *)(piVar3 + 0x7ba) = 1;
              return;
            }
            (**(code **)(*piVar7 + 0x198))(0xd);
            *(undefined1 *)(piVar3 + 0x7ba) = 1;
            return;
          }
          piVar3 = (int *)FUN_10118460(0,"subtitle_main");
          if ((piVar3 != (int *)0x0) && (iVar8 = FUN_10118460(0,"player"), iVar8 != 0)) {
            iVar2 = *(int *)(this + *(int *)(this + 500) * 4 + 0xe8);
            if (iVar2 == 0) {
              (*DAT_1022303c)(1,"SUBTITLE CHANGE: Could not change number!\n");
            }
            else {
              iVar9 = FUN_1005fbc0(piVar3[1]);
              *(float *)(iVar9 + 0xdc) = (float)iVar2;
              (**(code **)(*piVar3 + 0xe8))(iVar8,iVar8,3,0);
            }
          }
          if (iVar4 < 0x20) {
            if ((*(int *)(this + iVar4 * 4 + 0xec) != 0) &&
               (0.0 < *(float *)(this + iVar4 * 4 + 0x170))) {
              *(int *)(this + 500) = *(int *)(this + 500) + 1;
              (**(code **)(*(int *)this + 8))
                        (*(undefined4 *)(this + *(int *)(this + 500) * 4 + 0x16c));
            }
            if (*(float *)(this + iVar4 * 4 + 0x170) < 0.1) {
              *(code **)(this + 0x78) = EndCall;
              (**(code **)(*(int *)this + 8))(0x3f800000);
            }
          }
        }
      }
    }
  }
  return;
}

