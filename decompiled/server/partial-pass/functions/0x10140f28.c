// rea decompile_all
// name: FindVITargetTypeInstance
// address: 0x10140f28
// body: available
// range: 0x10140f28-0x1014108a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindVITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2019 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindVITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  int iVar1;
  uint uVar2;
  _s_RTTIBaseClassDescriptor *p_Var3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  _s_RTTIBaseClassDescriptor *p_Var11;
  _s_RTTIBaseClassDescriptor *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  _s_RTTIBaseClassDescriptor *local_10;
  _s_RTTIBaseClassDescriptor *local_c;
  
  p_Var11 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_c = (_s_RTTIBaseClassDescriptor *)0x0;
  uVar10 = 0;
  local_20 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_10 = (_s_RTTIBaseClassDescriptor *)0x0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
  uVar2 = *(uint *)(*(int *)(param_2 + 0x10) + 8);
  local_18 = 0;
  local_14 = 0xffffffff;
  bVar5 = true;
  local_1c = -1;
  if (uVar2 == 0) {
    return (_s_RTTIBaseClassDescriptor *)0x0;
  }
  do {
    p_Var3 = *(_s_RTTIBaseClassDescriptor **)(iVar1 + uVar10 * 4);
    if ((local_18 < uVar10 - local_14) &&
       (bVar6 = TypeidsEqual(*(TypeDescriptor **)p_Var3,param_5), bVar6)) {
      if (((byte)p_Var3[0x14] & 3) == 0) {
        local_20 = p_Var3;
      }
      local_18 = *(uint *)(p_Var3 + 4);
      local_14 = uVar10;
      local_10 = p_Var3;
    }
    bVar6 = TypeidsEqual(*(TypeDescriptor **)p_Var3,param_3);
    iVar8 = local_1c;
    if ((bVar6) && (iVar7 = PMDtoOffset(param_1,(PMD *)(p_Var3 + 8)), iVar7 == param_4)) {
      if (uVar10 - local_14 <= local_18) {
        if (bVar5) {
          if (((byte)local_10[0x14] & 0x40) == 0) {
            if (local_14 == 0) {
              bVar5 = (bool)(~(((byte)p_Var3[0x14] & 1) != 0) & 1);
            }
            bVar9 = 1;
          }
          else {
            uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(local_10 + 0x18) + 0xc) +
                                      (uVar10 - local_14) * 4) + 0x14);
            bVar9 = ~(byte)(uVar4 >> 2) & 1;
            bVar5 = (bool)(~((uVar4 & 1) != 0) & 1);
          }
          if ((((bVar5) && (bVar9 != 0)) &&
              (iVar8 = PMDtoOffset(param_1,(PMD *)(local_10 + 8)),
              bVar6 = p_Var11 != (_s_RTTIBaseClassDescriptor *)0x0, p_Var11 = local_10, bVar6)) &&
             (local_1c != iVar8)) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
        }
        goto LAB_1014104d;
      }
      if (((byte)p_Var3[0x14] & 5) != 0) goto LAB_1014104d;
    }
    else {
LAB_1014104d:
      local_1c = iVar8;
      p_Var3 = local_c;
    }
    local_c = p_Var3;
    uVar10 = uVar10 + 1;
    if (uVar2 <= uVar10) {
      if ((bVar5) && (p_Var11 != (_s_RTTIBaseClassDescriptor *)0x0)) {
        return p_Var11;
      }
      if ((local_c != (_s_RTTIBaseClassDescriptor *)0x0) &&
         (local_20 != (_s_RTTIBaseClassDescriptor *)0x0)) {
        return local_20;
      }
      return (_s_RTTIBaseClassDescriptor *)0x0;
    }
  } while( true );
}

