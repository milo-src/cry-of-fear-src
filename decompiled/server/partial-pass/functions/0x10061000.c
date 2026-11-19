// rea decompile_all
// name: CPhoneCall::WaitForCall
// address: 0x10061000
// body: available
// range: 0x10061000-0x10061211 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CPhoneCall::WaitForCall(void) */

void __thiscall CPhoneCall::WaitForCall(CPhoneCall *this)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  
                    /* 0x61000  361  ?WaitForCall@CPhoneCall@@QAEXXZ */
  iVar2 = FUN_10017780();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_100177a0();
    iVar2 = (**(code **)(*piVar3 + 0xd0))();
    if (iVar2 != 0) {
      iVar2 = FUN_100177a0();
      piVar3 = (int *)FUN_100125e0(*(undefined4 *)(iVar2 + 4));
      if (piVar3 != (int *)0x0) {
        if ((*(uint *)(piVar3[1] + 0x1a8) & 0x200) != 0) {
          iVar2 = FUN_100e2380("weapon_mobile");
          if (iVar2 == 0) {
            return;
          }
          if (this[0xdc] == (CPhoneCall)0x0) {
            this[0xdc] = (CPhoneCall)0x1;
            if (*(int *)(*(int *)(this + 4) + 0x248) != 0) {
              FUN_100fc9f0(*(undefined4 *)(piVar3[1] + 0x20c),0,"phone/phone_ringing.wav",0x3f800000
                           ,0x3f4ccccd,0,100);
              piVar3[0x940] = piVar3[0x940] | 8;
              piVar3[0x7ad] = 1;
              *(undefined4 *)(piVar3[1] + 0x260) = 0x40a00000;
              (**(code **)(*(int *)this + 8))(0x40400000);
              return;
            }
            FUN_100fc9f0(*(undefined4 *)(piVar3[1] + 0x20c),0,"phone/phone_ringtone.wav",0x3f800000,
                         0x3f4ccccd,0,100);
            piVar3[0x7a8] = 3;
          }
          if (piVar3[0x94b] != 0) {
            pcVar6 = "weapon_mobile";
            iVar2 = *(int *)(*(int *)(piVar3[0x94b] + 4) + 0x20c);
            pbVar5 = (byte *)(*(int *)(-(uint)(iVar2 != 0) & iVar2 + 0x80U) +
                             (int)DAT_10223188[0x26]);
            do {
              bVar1 = *pbVar5;
              bVar7 = bVar1 < (byte)*pcVar6;
              if (bVar1 != *pcVar6) {
LAB_10061170:
                uVar4 = -(uint)bVar7 | 1;
                goto LAB_10061175;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar7 = bVar1 < (byte)pcVar6[1];
              if (bVar1 != pcVar6[1]) goto LAB_10061170;
              pbVar5 = pbVar5 + 2;
              pcVar6 = pcVar6 + 2;
            } while (bVar1 != 0);
            uVar4 = 0;
LAB_10061175:
            if (((uVar4 == 0) && (iVar2 = (**(code **)(*piVar3 + 0xbc))(), iVar2 != 0)) &&
               ((float)piVar3[0xc2] <= *DAT_10223188 && *DAT_10223188 != (float)piVar3[0xc2])) {
              piVar3[0x940] = piVar3[0x940] | 8;
              piVar3[0x7ad] = 1;
              *(undefined4 *)(piVar3[1] + 0x260) = 0x40a00000;
              *(undefined4 *)(this + 500) = 1;
              (**(code **)(*(int *)this + 8))(0x40400000);
              *(code **)(this + 0x78) = ChangeSubtitle;
              FUN_10017740(piVar3);
              piVar3[0xc2] = (int)(*DAT_10223188 + 4.0);
            }
          }
        }
        (**(code **)(*(int *)this + 8))(0x3dcccccd);
      }
    }
  }
  return;
}

