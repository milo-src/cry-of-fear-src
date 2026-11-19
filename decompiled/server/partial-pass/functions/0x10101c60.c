// rea decompile_all
// name: CBaseToggle::AngularMoveNow
// address: 0x10101c60
// body: available
// range: 0x10101c60-0x10101dba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBaseToggle::AngularMoveNow(void) */

void __thiscall CBaseToggle::AngularMoveNow(CBaseToggle *this)

{
  int iVar1;
  float unaff_ESI;
  double dVar2;
  float fVar3;
  float fVar4;
  float local_14;
  float fStack_10;
  
                    /* 0x101c60  7  ?AngularMoveNow@CBaseToggle@@QAEXXZ */
  if (*(int *)(this + 0x14) == 0) {
    fVar3 = *(float *)(this + 0x174);
    fStack_10 = (float)((ulonglong)*(undefined8 *)(this + 0x16c) >> 0x20);
    local_14 = (float)*(undefined8 *)(this + 0x16c);
  }
  else {
    iVar1 = *(int *)(*(int *)(this + 0x14) + 4);
    local_14 = *(float *)(this + 0x16c) + *(float *)(iVar1 + 0x50);
    fStack_10 = *(float *)(iVar1 + 0x54) + *(float *)(this + 0x170);
    fVar3 = *(float *)(iVar1 + 0x58) + *(float *)(this + 0x174);
  }
  iVar1 = *(int *)(this + 4);
  if (((local_14 == *(float *)(iVar1 + 0x50)) && (fStack_10 == *(float *)(iVar1 + 0x54))) &&
     (fVar3 == *(float *)(iVar1 + 0x58))) {
    AngularMoveDone(this);
    return;
  }
  fStack_10 = fStack_10 - *(float *)(iVar1 + 0x54);
  fVar3 = fVar3 - *(float *)(iVar1 + 0x58);
  local_14 = local_14 - *(float *)(iVar1 + 0x50);
  dVar2 = (double)(fStack_10 * fStack_10 + local_14 * local_14 + fVar3 * fVar3);
  if (dVar2 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar2 = SQRT(dVar2);
  }
  fVar4 = 1.4013e-45;
  fVar3 = *(float *)(this + 0x168);
  (**(code **)(*(int *)this + 4))((float)dVar2 / fVar3,1);
  *(code **)(this + 0x78) = AngularMoveDone;
  FUN_100c4b90(this,unaff_ESI / fVar4,((float)dVar2 / fVar3) / fVar4,local_14 / fVar4);
  return;
}

