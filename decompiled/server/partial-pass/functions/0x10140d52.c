// rea decompile_all
// name: FindMITargetTypeInstance
// address: 0x10140d52
// body: available
// range: 0x10140d52-0x10140e3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindMITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindMITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  _s_RTTIBaseClassDescriptor _Var1;
  int iVar2;
  uint uVar3;
  _s_RTTIBaseClassDescriptor *p_Var4;
  bool bVar5;
  int iVar6;
  _s_RTTIBaseClassDescriptor *p_Var7;
  uint uVar8;
  _s_RTTIBaseClassDescriptor *local_10;
  uint local_c;
  uint local_8;
  
  p_Var7 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_8 = 0xffffffff;
  local_10 = (_s_RTTIBaseClassDescriptor *)0x0;
  uVar8 = 0;
  local_c = 0;
  iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
  uVar3 = *(uint *)(*(int *)(param_2 + 0x10) + 8);
  if (uVar3 == 0) {
    return (_s_RTTIBaseClassDescriptor *)0x0;
  }
  while( true ) {
    p_Var4 = *(_s_RTTIBaseClassDescriptor **)(iVar2 + uVar8 * 4);
    if ((local_c < uVar8 - local_8) &&
       (bVar5 = TypeidsEqual(*(TypeDescriptor **)p_Var4,param_5), bVar5)) {
      p_Var7 = p_Var4;
      if (local_10 != (_s_RTTIBaseClassDescriptor *)0x0) {
        if (((byte)p_Var4[0x14] & 3) != 0) {
          return (_s_RTTIBaseClassDescriptor *)0x0;
        }
        _Var1 = local_10[0x14];
        goto joined_r0x10140df9;
      }
      local_c = *(uint *)(p_Var4 + 4);
      local_8 = uVar8;
    }
    bVar5 = TypeidsEqual(*(TypeDescriptor **)p_Var4,param_3);
    if (((bVar5) && (iVar6 = PMDtoOffset(param_1,(PMD *)(p_Var4 + 8)), iVar6 == param_4)) &&
       (local_10 = p_Var4, p_Var7 != (_s_RTTIBaseClassDescriptor *)0x0)) break;
    uVar8 = uVar8 + 1;
    if (uVar3 <= uVar8) {
      return (_s_RTTIBaseClassDescriptor *)0x0;
    }
  }
  if (local_c < uVar8 - local_8) {
    if (((byte)p_Var7[0x14] & 3) != 0) {
      return (_s_RTTIBaseClassDescriptor *)0x0;
    }
    _Var1 = p_Var4[0x14];
  }
  else if (((byte)p_Var7[0x14] & 0x40) == 0) {
    if (local_8 != 0) {
      return p_Var7;
    }
    _Var1 = p_Var4[0x14];
  }
  else {
    _Var1 = *(_s_RTTIBaseClassDescriptor *)
             (*(int *)(*(int *)(*(int *)(p_Var7 + 0x18) + 0xc) + (uVar8 - local_8) * 4) + 0x14);
  }
joined_r0x10140df9:
  if (((byte)_Var1 & 1) != 0) {
    return (_s_RTTIBaseClassDescriptor *)0x0;
  }
  return p_Var7;
}

