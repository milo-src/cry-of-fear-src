// rea decompile_all
// name: CGasArea::DamageThink
// address: 0x1010a5f0
// body: available
// range: 0x1010a5f0-0x1010a7c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CGasArea::DamageThink(void) */

void __thiscall CGasArea::DamageThink(CGasArea *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  int local_8c;
  undefined4 local_88 [32];
  uint local_8;
  
                    /* 0x10a5f0  64  ?DamageThink@CGasArea@@QAEXXZ */
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar7 = *(int *)(this + 4);
  local_98 = *(float *)(this + 0xe0);
  local_a0 = *(float *)(iVar7 + 200) - local_98;
  local_9c = *(float *)(iVar7 + 0xcc) - 0.0;
  local_a4 = *(float *)(iVar7 + 0xc4) - local_98;
  local_94 = *(float *)(iVar7 + 0xd4) + local_98;
  local_90 = *(float *)(iVar7 + 0xd8) + 0.0;
  local_98 = *(float *)(iVar7 + 0xd0) + local_98;
  local_8c = FUN_10118390(local_88,0x20,&local_a4,&local_98,0x28);
  iVar7 = 0;
  if (0 < local_8c) {
    do {
      piVar5 = (int *)(**(code **)(*(int *)local_88[iVar7] + 0x78))();
      if (((piVar5 != (int *)0x0) && (*(float *)(piVar5[1] + 0x170) != 0.0)) &&
         (iVar6 = (**(code **)(*piVar5 + 0xbc))(), iVar6 != 0)) {
        iVar6 = piVar5[1];
        iVar4 = *(int *)(this + 4);
        fVar1 = *(float *)(iVar6 + 8);
        if ((((fVar1 < *(float *)(iVar4 + 0xc4) || fVar1 == *(float *)(iVar4 + 0xc4)) ||
             (fVar2 = *(float *)(iVar6 + 0xc),
             fVar2 < *(float *)(iVar4 + 200) || fVar2 == *(float *)(iVar4 + 200))) ||
            ((fVar3 = *(float *)(iVar6 + 0x10),
             fVar3 < *(float *)(iVar4 + 0xcc) || fVar3 == *(float *)(iVar4 + 0xcc) ||
             ((*(float *)(iVar4 + 0xd0) <= fVar1 || (*(float *)(iVar4 + 0xd4) <= fVar2)))))) ||
           (*(float *)(iVar4 + 0xd8) <= fVar3)) {
          uVar8 = 0;
        }
        else {
          (**(code **)(*piVar5 + 100))(iVar4,iVar4,*(undefined4 *)(this + 0xe4),0x10000);
          uVar8 = 1;
        }
        (**(code **)(*piVar5 + 0x28))(uVar8);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_8c);
  }
  *(float *)(*(int *)(this + 4) + 0x104) = *DAT_10223188 + 0.3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

