// rea decompile_all
// name: FUN_100b0210
// address: 0x100b0210
// body: available
// range: 0x100b0210-0x100b057e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b0210(void)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  int local_110;
  int local_10c;
  undefined1 local_108 [128];
  char local_88 [128];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (*(char *)(in_ECX + 8) != '\0') {
    iVar7 = 0;
    local_10c = 0;
    if ((*(float *)(in_ECX + 0xc) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0xc)) &&
       (*(int *)(in_ECX + 4) != 0)) {
      FUN_10119200("Votekick: Deciding to kick\n");
      local_110 = 1;
      if (0 < (int)DAT_10223188[0x24]) {
        do {
          iVar3 = FUN_10119680(local_110);
          if (iVar3 != 0) {
            pbVar8 = *(byte **)(in_ECX + 4);
            pbVar4 = (byte *)(*DAT_10223184)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
            do {
              bVar1 = *pbVar4;
              bVar9 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_100b02d0:
                uVar5 = -(uint)bVar9 | 1;
                goto LAB_100b02d5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar9 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_100b02d0;
              pbVar4 = pbVar4 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            uVar5 = 0;
LAB_100b02d5:
            iVar7 = local_10c;
            if (uVar5 == 0) {
              uVar6 = (*DAT_10223184)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c),
                                      *(undefined4 *)(in_ECX + 4));
              (*DAT_1022303c)(1,
                              "VOTEKICK - Found player %s with ID of %s against the kick ID of %s\n"
                              ,*(int *)(*(int *)(iVar3 + 4) + 0x1d4) + (int)DAT_10223188[0x26],uVar6
                             );
              *(int *)(in_ECX + 0x18) =
                   *(int *)(*(int *)(iVar3 + 4) + 0x1d4) + (int)DAT_10223188[0x26];
              iVar7 = iVar3;
              local_10c = iVar3;
            }
          }
          local_110 = local_110 + 1;
          fVar2 = DAT_10223188[0x24];
        } while (local_110 <= (int)fVar2);
        if (iVar7 != 0) {
          iVar7 = 1;
          if (*(int *)(in_ECX + 0x14) < *(int *)(in_ECX + 0x10)) {
            if (0 < (int)fVar2) {
              do {
                iVar3 = FUN_10119680(iVar7);
                if (iVar3 != 0) {
                  _sprintf_s(local_88,0x80," Vote kick: Kicking %s",
                             *(int *)(*(int *)(local_10c + 4) + 0x1d4) + (int)DAT_10223188[0x26]);
                  (*DAT_10223000)(1,DAT_10226518,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
                  uVar6 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
                  (*DAT_10223008)(uVar6);
                  (*DAT_10223020)(local_88);
                  (*DAT_10223004)();
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 <= (int)DAT_10223188[0x24]);
            }
            uVar6 = (*DAT_1022305c)(0,&DAT_10222f34,"common/votekick/votekick_succeeded.wav",
                                    0x3f800000,0,0,100);
            FUN_101182b0(uVar6);
            FUN_1001f160(local_108,"kick \"%s\"\n",
                         *(int *)(*(int *)(local_10c + 4) + 0x1d4) + (int)DAT_10223188[0x26]);
            (*DAT_10222fe4)(local_108);
          }
          else {
            if (0 < (int)fVar2) {
              do {
                iVar3 = FUN_10119680(iVar7);
                if (iVar3 != 0) {
                  (*DAT_10223000)(1,DAT_10226518,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
                  uVar6 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
                  (*DAT_10223008)(uVar6);
                  (*DAT_10223020)(" Vote kick failed. Yes votes must exceed no votes.");
                  (*DAT_10223004)();
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 <= (int)DAT_10223188[0x24]);
            }
            uVar6 = (*DAT_1022305c)(0,&DAT_10222f34,"common/votekick/votekick_failed.wav",0x3f800000
                                    ,0,0,100);
            FUN_101182b0(uVar6);
          }
        }
      }
      *(undefined1 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 0x18) = 0;
      *(undefined4 *)(in_ECX + 0x14) = 0;
      *(undefined4 *)(in_ECX + 0x10) = 0;
      *(undefined4 *)(in_ECX + 0x20) = 0;
      *(undefined4 *)(in_ECX + 0x24) = 0;
      *(undefined4 *)(in_ECX + 0x28) = 0;
      *(undefined4 *)(in_ECX + 0x2c) = 0;
      *(undefined4 *)(in_ECX + 0x30) = 0;
      *(undefined4 *)(in_ECX + 0x34) = 0;
      *(undefined4 *)(in_ECX + 0x38) = 0;
      *(undefined4 *)(in_ECX + 0x3c) = 0;
      *(undefined4 *)(in_ECX + 0x40) = 0;
      *(undefined4 *)(in_ECX + 0x44) = 0;
      *(undefined4 *)(in_ECX + 0x48) = 0;
      *(undefined4 *)(in_ECX + 0x4c) = 0;
      *(undefined4 *)(in_ECX + 0x50) = 0;
      *(undefined4 *)(in_ECX + 0x54) = 0;
      *(undefined4 *)(in_ECX + 0x58) = 0;
      *(undefined4 *)(in_ECX + 0x5c) = 0;
      *(undefined4 *)(in_ECX + 0x60) = 0;
      *(undefined4 *)(in_ECX + 100) = 0;
      *(undefined4 *)(in_ECX + 0x68) = 0;
      *(undefined4 *)(in_ECX + 0x6c) = 0;
      *(undefined4 *)(in_ECX + 0x70) = 0;
      *(undefined4 *)(in_ECX + 0x74) = 0;
      *(undefined4 *)(in_ECX + 0x78) = 0;
      *(undefined4 *)(in_ECX + 0x7c) = 0;
      *(undefined4 *)(in_ECX + 0x80) = 0;
      *(undefined4 *)(in_ECX + 0x84) = 0;
      *(undefined4 *)(in_ECX + 0x88) = 0;
      *(undefined4 *)(in_ECX + 0x8c) = 0;
      *(undefined4 *)(in_ECX + 0x90) = 0;
      *(undefined4 *)(in_ECX + 0x94) = 0;
      *(undefined4 *)(in_ECX + 0x98) = 0;
      *(undefined4 *)(in_ECX + 0x9c) = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

