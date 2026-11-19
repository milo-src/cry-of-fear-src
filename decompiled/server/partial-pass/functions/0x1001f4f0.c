// rea decompile_all
// name: CKeypadNew::KeypadThink
// address: 0x1001f4f0
// body: available
// range: 0x1001f4f0-0x1001fb38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CKeypadNew::KeypadThink(void) */

void __thiscall CKeypadNew::KeypadThink(CKeypadNew *this)

{
  int iVar1;
  SHORT SVar2;
  undefined4 uVar3;
  float10 fVar4;
  
                    /* 0x1f4f0  156  ?KeypadThink@CKeypadNew@@AAEXXZ */
  fVar4 = (float10)FUN_1000eda0(0);
  FUN_1000e5f0((float)fVar4);
  if (*(int *)(this + 0x204) != 0) {
    SVar2 = GetAsyncKeyState(*(int *)(this + 0x204));
    if (SVar2 < 0) goto LAB_1001fb23;
    *(undefined4 *)(this + 0x204) = 0;
  }
  iVar1 = *(int *)(this + 4);
  if ((*(int *)(iVar1 + 0x24c) != 0) && (*(float *)(iVar1 + 0x25c) <= *DAT_10223188)) {
    FUN_10017740(0);
    FUN_10017740(0);
    *(undefined4 *)(*(int *)(this + 4) + 0x114) = 0;
    *(undefined4 *)(*(int *)(this + 0x200) + 0x1ea0) = 0;
    (*DAT_10223000)(1,DAT_1022664c,0,*(undefined4 *)(*(int *)(*(int *)(this + 0x200) + 4) + 0x20c));
    (*DAT_10223010)(0);
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    return;
  }
  if (*DAT_10223188 < *(float *)(iVar1 + 600)) goto LAB_1001fb23;
  SVar2 = GetAsyncKeyState(0xd);
  if (SVar2 < 0) {
LAB_1001f615:
    FUN_1001fe70("end_keypad");
    *(undefined4 *)(*(int *)(this + 4) + 0x24c) = 1;
    *(float *)(*(int *)(this + 4) + 0x25c) = *DAT_10223188 + 1.0;
  }
  else {
    SVar2 = GetAsyncKeyState(0x1b);
    if (SVar2 < 0) goto LAB_1001f615;
  }
  SVar2 = GetAsyncKeyState(0x61);
  if (SVar2 < 0) {
LAB_1001f67a:
    FUN_1001fe70("press1");
    *(float *)(*(int *)(this + 4) + 600) = *DAT_10223188 + 0.2;
    *(float *)(*(int *)(this + 4) + 0x25c) = *DAT_10223188 + 0.33;
    SVar2 = GetAsyncKeyState(0x61);
    uVar3 = 0x61;
    if (-1 < SVar2) {
      uVar3 = 0x31;
    }
    *(undefined4 *)(this + 0x204) = uVar3;
    FUN_1001f200(1);
  }
  else {
    SVar2 = GetAsyncKeyState(0x31);
    if (SVar2 < 0) goto LAB_1001f67a;
  }
  SVar2 = GetAsyncKeyState(0x62);
  if (SVar2 < 0) {
LAB_1001f701:
    FUN_1001fe70("press2");
    *(float *)(*(int *)(this + 4) + 600) = *DAT_10223188 + 0.2;
    *(float *)(*(int *)(this + 4) + 0x25c) = *DAT_10223188 + 0.33;
    SVar2 = GetAsyncKeyState(0x62);
    uVar3 = 0x62;
    if (-1 < SVar2) {
      uVar3 = 0x32;
    }
    *(undefined4 *)(this + 0x204) = uVar3;
    FUN_1001f200(2);
  }
  else {
    SVar2 = GetAsyncKeyState(0x32);
    if (SVar2 < 0) goto LAB_1001f701;
  }
  SVar2 = GetAsyncKeyState(99);
  if (SVar2 < 0) {
LAB_1001f788:
    FUN_1001fe70("press3");
    *(float *)(*(int *)(this + 4) + 600) = *DAT_10223188 + 0.2;
    *(float *)(*(int *)(this + 4) + 0x25c) = *DAT_10223188 + 0.33;
    SVar2 = GetAsyncKeyState(99);
    uVar3 = 99;
    if (-1 < SVar2) {
      uVar3 = 0x33;
    }
    *(undefined4 *)(this + 0x204) = uVar3;
    FUN_1001f200(3);
  }
  else {
    SVar2 = GetAsyncKeyState(0x33);
    if (SVar2 < 0) goto LAB_1001f788;
  }
  SVar2 = GetAsyncKeyState(100);
  if (SVar2 < 0) {
LAB_1001f80f:
    FUN_1001fe70("press4");
    *(float *)(*(int *)(this + 4) + 600) = *DAT_10223188 + 0.2;
    *(float *)(*(int *)(this + 4) + 0x25c) = *DAT_10223188 + 0.33;
    SVar2 = GetAsyncKeyState(100);
    uVar3 = 100;
    if (-1 < SVar2) {
      uVar3 = 0x34;
    }
    *(undefined4 *)(this + 0x204) = uVar3;
    FUN_1001f200(4);
  }
  else {
    SVar2 = GetAsyncKeyState(0x34);
    if (SVar2 < 0) goto LAB_1001f80f;
  }
  SVar2 = GetAsyncKeyState(0x65);
  if (SVar2 < 0) {
LAB_1001f896:
    FUN_1001fe70("press5");
    *(float *)(*(int *)(this + 4) + 600) = *DAT_10223188 + 0.2;
    *(float *)(*(int *)(this + 4) + 0x25c) = *DAT_10223188 + 0.33;
    SVar2 = GetAsyncKeyState(0x65);
    uVar3 = 0x65;
    if (-1 < SVar2) {
      uVar3 = 0x35;
    }
    *(undefined4 *)(this + 0x204) = uVar3;
    FUN_1001f200(5);
  }
  else {
    SVar2 = GetAsyncKeyState(0x35);
    if (SVar2 < 0) goto LAB_1001f896;
  }
  SVar2 = GetAsyncKeyState(0x66);
  if (SVar2 < 0) {
LAB_1001f91d:
    FUN_1001fe70("press6");
    *(float *)(*(int *)(this + 4) + 600) = *DAT_10223188 + 0.2;
    *(float *)(*(int *)(this + 4) + 0x25c) = *DAT_10223188 + 0.33;
    SVar2 = GetAsyncKeyState(0x66);
    uVar3 = 0x66;
    if (-1 < SVar2) {
      uVar3 = 0x36;
    }
    *(undefined4 *)(this + 0x204) = uVar3;
    FUN_1001f200(6);
  }
  else {
    SVar2 = GetAsyncKeyState(0x36);
    if (SVar2 < 0) goto LAB_1001f91d;
  }
  SVar2 = GetAsyncKeyState(0x67);
  if (SVar2 < 0) {
LAB_1001f9a4:
    FUN_1001fe70("press7");
    *(float *)(*(int *)(this + 4) + 600) = *DAT_10223188 + 0.2;
    *(float *)(*(int *)(this + 4) + 0x25c) = *DAT_10223188 + 0.33;
    SVar2 = GetAsyncKeyState(0x67);
    uVar3 = 0x67;
    if (-1 < SVar2) {
      uVar3 = 0x37;
    }
    *(undefined4 *)(this + 0x204) = uVar3;
    FUN_1001f200(7);
  }
  else {
    SVar2 = GetAsyncKeyState(0x37);
    if (SVar2 < 0) goto LAB_1001f9a4;
  }
  SVar2 = GetAsyncKeyState(0x68);
  if (SVar2 < 0) {
LAB_1001fa2b:
    FUN_1001fe70("press8");
    *(float *)(*(int *)(this + 4) + 600) = *DAT_10223188 + 0.2;
    *(float *)(*(int *)(this + 4) + 0x25c) = *DAT_10223188 + 0.33;
    SVar2 = GetAsyncKeyState(0x68);
    uVar3 = 0x68;
    if (-1 < SVar2) {
      uVar3 = 0x38;
    }
    *(undefined4 *)(this + 0x204) = uVar3;
    FUN_1001f200(8);
  }
  else {
    SVar2 = GetAsyncKeyState(0x38);
    if (SVar2 < 0) goto LAB_1001fa2b;
  }
  SVar2 = GetAsyncKeyState(0x69);
  if (-1 < SVar2) {
    SVar2 = GetAsyncKeyState(0x39);
    if (-1 < SVar2) goto LAB_1001fb23;
  }
  FUN_1001fe70("press9");
  *(float *)(*(int *)(this + 4) + 600) = *DAT_10223188 + 0.2;
  *(float *)(*(int *)(this + 4) + 0x25c) = *DAT_10223188 + 0.33;
  SVar2 = GetAsyncKeyState(0x69);
  uVar3 = 0x69;
  if (-1 < SVar2) {
    uVar3 = 0x39;
  }
  *(undefined4 *)(this + 0x204) = uVar3;
  FUN_1001f200(9);
LAB_1001fb23:
  (**(code **)(*(int *)this + 8))(0);
  return;
}

