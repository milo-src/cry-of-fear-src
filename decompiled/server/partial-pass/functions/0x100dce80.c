// rea decompile_all
// name: FUN_100dce80
// address: 0x100dce80
// body: available
// range: 0x100dce80-0x100dcfd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100dce80(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  
  if (((in_ECX[0xc3] & 0xffffc000U) != 0) && (2.0 <= ABS(*DAT_10223188 - (float)in_ECX[0x927]))) {
    in_ECX[0x927] = (int)*DAT_10223188;
    iVar6 = 0;
    do {
      uVar2 = 0x8000 << ((byte)iVar6 & 0x1f);
      if ((in_ECX[0xc3] & uVar2) != 0) {
        switch(iVar6) {
        case 0:
        case 1:
        case 3:
        case 5:
        case 6:
        case 7:
          uVar4 = 2;
          break;
        case 2:
          (**(code **)(*in_ECX + 100))(in_ECX[1],in_ECX[1],0x40000000,0);
          uVar4 = 5;
          break;
        case 4:
          if (in_ECX[0x931] < in_ECX[0x930]) {
            iVar3 = in_ECX[0x930] - in_ECX[0x931];
            iVar5 = 10;
            if (iVar3 < 10) {
              iVar5 = iVar3;
            }
            (**(code **)(*in_ECX + 0x68))((float)iVar5,0);
            in_ECX[0x931] = in_ECX[0x931] + iVar5;
          }
          uVar4 = 4;
          break;
        default:
          uVar4 = 0;
        }
        bVar1 = *(byte *)(iVar6 + 0x310 + (int)in_ECX);
        if (bVar1 == 0) {
          *(undefined1 *)(iVar6 + 0x310 + (int)in_ECX) = uVar4;
        }
        else {
          if (iVar6 == 1) {
            if (bVar1 < 2) {
LAB_100dcf7a:
              if (in_ECX[0x8b4] != 0) {
                *(undefined1 *)(iVar6 + 0x310 + (int)in_ECX) = 0;
                in_ECX[0x8b4] = in_ECX[0x8b4] + -1;
                bVar1 = *(byte *)(iVar6 + 0x310 + (int)in_ECX);
              }
              goto LAB_100dcf9a;
            }
LAB_100dcfa0:
            *(byte *)(iVar6 + 0x310 + (int)in_ECX) = bVar1 - 1;
            if ((byte)(bVar1 - 1) != '\0') goto LAB_100dcfc7;
          }
          else {
            if ((iVar6 == 2) && (bVar1 < 5)) goto LAB_100dcf7a;
LAB_100dcf9a:
            if (bVar1 != 0) goto LAB_100dcfa0;
          }
          *(undefined1 *)(iVar6 + 0x310 + (int)in_ECX) = 0;
          in_ECX[0xc3] = in_ECX[0xc3] & ~uVar2;
        }
      }
LAB_100dcfc7:
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
  }
  return;
}

