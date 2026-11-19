// rea decompile_all
// name: _HeapManager::getMemoryWithBuffer
// address: 0x1014883f
// body: available
// range: 0x1014883f-0x101488a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void * __thiscall _HeapManager::getMemoryWithBuffer(unsigned int)
   
   Library: Visual Studio 2019 Release */

void * __thiscall _HeapManager::getMemoryWithBuffer(_HeapManager *this,uint param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1 + 7 & 0xfffffff8;
  if (uVar4 == 0) {
    uVar4 = 8;
  }
  uVar3 = *(uint *)(this + 0x10);
  if (uVar3 < uVar4) {
    uVar3 = 0x1000;
    if (uVar4 < 0x1001) {
      puVar1 = operator_new(0x1004,(_HeapManager *)&DAT_10232974,1);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        if (*(undefined4 **)(this + 0xc) == (undefined4 *)0x0) {
          *(undefined4 **)(this + 8) = puVar1;
        }
        else {
          **(undefined4 **)(this + 0xc) = puVar1;
        }
        *(undefined4 **)(this + 0xc) = puVar1;
        goto LAB_10148891;
      }
    }
    pvVar2 = (void *)0x0;
  }
  else {
LAB_10148891:
    *(uint *)(this + 0x10) = uVar3 - uVar4;
    pvVar2 = (void *)(*(int *)(this + 0xc) + 4 + (uVar3 - uVar4));
  }
  return pvVar2;
}

