// rea decompile_all
// name: CPhoneCall::EndCall
// address: 0x1005ff90
// body: available
// range: 0x1005ff90-0x1006013b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CPhoneCall::EndCall(void) */

void __thiscall CPhoneCall::EndCall(CPhoneCall *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 uVar10;
  
                    /* 0x5ff90  102  ?EndCall@CPhoneCall@@QAEXXZ */
  piVar4 = (int *)FUN_100177a0();
  iVar5 = (**(code **)(*piVar4 + 0xd0))();
  if (iVar5 != 0) {
    iVar5 = FUN_100177a0();
    iVar5 = FUN_100125e0(*(undefined4 *)(iVar5 + 4));
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0x1ea0) = 0;
      if (*(int *)(iVar5 + 0x252c) != 0) {
        iVar2 = *(int *)(*(int *)(iVar5 + 0x252c) + 4);
        pcVar8 = "weapon_mobile";
        iVar3 = *(int *)(iVar2 + 0x20c);
        pbVar7 = (byte *)(*(int *)(-(uint)(iVar3 != 0) & iVar3 + 0x80U) + (int)DAT_10223188[0x26]);
        do {
          bVar1 = *pbVar7;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_10060032:
            uVar6 = -(uint)bVar9 | 1;
            goto LAB_10060037;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar9 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_10060032;
          pbVar7 = pbVar7 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_10060037:
        if (uVar6 == 0) {
          piVar4 = (int *)FUN_10052e30(iVar2);
          if (*(int *)(*(int *)(this + 4) + 0x1cc) != 0) {
            FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)(*(int *)(this + 4) + 0x1cc),this,this,3,
                         0);
          }
          if (piVar4 != (int *)0x0) {
            iVar2 = *(int *)(iVar5 + 0x1e98);
            piVar4[0x76] = (int)(*DAT_10223188 + 1.1);
            if (iVar2 == 0) {
              uVar10 = 0xf;
            }
            else {
              uVar10 = 0x10;
            }
            (**(code **)(*piVar4 + 0x198))(uVar10,1,0);
            *(float *)(iVar5 + 0x308) = *DAT_10223188 + 1.1;
            *(undefined1 *)(iVar5 + 0x1ee8) = 0;
            FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c),0,"phone/tone_send.wav",
                         0x3f800000,0x3f4ccccd,0,100);
            *(uint *)(iVar5 + 0x2500) = *(uint *)(iVar5 + 0x2500) & 0xfffffff7;
            *(undefined4 *)(iVar5 + 0x1eb4) = 0;
            *(undefined4 *)(*(int *)(iVar5 + 4) + 0x260) = 0;
            *(undefined4 *)(this + 0x78) = 0;
          }
        }
      }
    }
  }
  return;
}

