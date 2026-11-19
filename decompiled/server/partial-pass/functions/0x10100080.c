// rea decompile_all
// name: FUN_10100080
// address: 0x10100080
// body: available
// range: 0x10100080-0x101001ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10100080(int param_1,undefined2 *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((DAT_1022c8c4 != 0) && (-1 < param_1)) {
    bVar3 = *(byte *)(&DAT_1022c8d8 + param_1 * 0xd);
    pcVar9 = &DAT_1022c8c8 + param_1 * 0x34;
    puVar2 = &DAT_1022c8dc + param_1 * 0x34;
    do {
      uVar11 = 0;
      if (bVar3 != 0) {
        do {
          bVar5 = puVar2[uVar11];
          if (bVar5 != 0xff) {
            puVar2[uVar11] = 0xff;
            *param_2 = 0x21;
            pcVar10 = pcVar9;
            do {
              cVar4 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar4 != '\0');
            uVar11 = (int)pcVar10 - (int)pcVar9;
            pcVar10 = (char *)((int)param_2 + -1);
            do {
              pcVar1 = pcVar10 + 1;
              pcVar10 = pcVar10 + 1;
            } while (*pcVar1 != '\0');
            uVar6 = (uint)bVar5;
            for (uVar7 = uVar11 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar7 = uVar11 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar10 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar10 = pcVar10 + 1;
            }
            FUN_1001f160(local_10,&DAT_101c20cc,uVar6);
            pcVar9 = local_10;
            do {
              cVar4 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar4 != '\0');
            uVar7 = (int)pcVar9 - (int)local_10;
            pcVar9 = (char *)((int)param_2 + -1);
            do {
              pcVar10 = pcVar9 + 1;
              pcVar9 = pcVar9 + 1;
            } while (*pcVar10 != '\0');
            pcVar10 = local_10;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar9 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            }
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar7,uVar11,uVar6);
            return;
          }
          bVar5 = (char)uVar11 + 1;
          uVar11 = (uint)bVar5;
        } while (bVar5 < bVar3);
      }
      FUN_10100000(puVar2,bVar3);
    } while( true );
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

