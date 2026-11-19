// rea decompile_all
// name: __crt_strtox::shift_left
// address: 0x10169190
// body: available
// range: 0x10169190-0x101692be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    bool __cdecl __crt_strtox::shift_left(struct __crt_strtox::big_integer &,unsigned int)
   
   Library: Visual Studio 2019 Release */

bool __cdecl __crt_strtox::shift_left(big_integer *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  big_integer *pbVar6;
  undefined1 local_1ec [460];
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  big_integer *local_c;
  int local_8;
  
  uVar1 = param_2 & 0x1f;
  uVar4 = param_2 >> 5;
  local_1c = 0x20 - uVar1;
  local_10 = uVar4;
  iVar2 = __allshl();
  local_20 = iVar2 - 1;
  local_18 = ~local_20;
  local_14 = 0;
  uVar5 = *(uint *)(param_1 + *(int *)param_1 * 4);
  iVar2 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  if (uVar5 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 1;
  }
  if ((*(int *)param_1 + uVar4 < 0x74) &&
     (local_14 = (uint)(0x20U - iVar2 < uVar1) + *(int *)param_1 + uVar4, local_14 < 0x74)) {
    local_8 = local_14 - 1;
    if (local_8 != uVar4 - 1) {
      uVar5 = local_8 - local_10;
      local_c = param_1 + local_8 * 4 + 4;
      local_8 = local_8 - (uVar4 - 1);
      pbVar6 = param_1 + uVar5 * 4;
      do {
        if (uVar5 < *(uint *)param_1) {
          uVar4 = *(uint *)(pbVar6 + 4);
        }
        else {
          uVar4 = 0;
        }
        if (uVar5 - 1 < *(uint *)param_1) {
          uVar3 = *(uint *)pbVar6;
        }
        else {
          uVar3 = 0;
        }
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + -4;
        *(uint *)local_c =
             (uVar3 & local_18) >> ((byte)local_1c & 0x1f) | (uVar4 & local_20) << (sbyte)uVar1;
        local_c = local_c + -4;
        local_8 = local_8 + -1;
        uVar4 = local_10;
      } while (local_8 != 0);
    }
    pbVar6 = param_1;
    if (uVar4 != 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)(pbVar6 + 4) = 0;
        pbVar6 = pbVar6 + 4;
      }
    }
    *(uint *)param_1 = local_14;
    return true;
  }
  *(undefined4 *)param_1 = 0;
  _memcpy_s(param_1 + 4,0x1cc,local_1ec,0);
  return false;
}

