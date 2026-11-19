
void FUN_10031e90(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 ****ppppuVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char *pcVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  undefined1 local_20c [16];
  int iStack_1fc;
  undefined **local_1f8 [2];
  undefined8 local_1f0;
  uint local_1e8 [10];
  int aiStack_1c0 [13];
  undefined4 local_18c;
  undefined **local_188;
  undefined4 local_140;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_13c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_138;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_134;
  int local_130;
  undefined4 ***local_12c [4];
  undefined4 local_11c;
  undefined1 local_118 [4];
  char local_114 [6];
  undefined1 local_10e [250];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10132f1e;
  local_10 = ExceptionList;
  local_14 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_140 = 0;
  pcVar6 = (char *)(*DAT_101b2724)(local_14);
  pcVar13 = pcVar6;
  do {
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar13[(int)(local_114 + (-1 - (int)pcVar6))] = cVar1;
  } while (cVar1 != '\0');
  puVar5 = (undefined4 *)(local_118 + 3);
  do {
    puVar11 = puVar5;
    puVar5 = (undefined4 *)((int)puVar11 + 1);
  } while (*(char *)((int)puVar11 + 1) != '\0');
  *(undefined4 *)((int)puVar11 + 1) = 0x5641532f;
  *(undefined2 *)((int)puVar11 + 5) = 0x2f45;
  *(undefined1 *)((int)puVar11 + 7) = 0;
  FUN_1000c900(local_114,"%ssaveinfo%i.cof",local_114,param_1);
  local_1f8[0] = &PTR_10141150;
  local_8 = 0;
  local_140 = 1;
  local_188 = std::basic_istream<char,std::char_traits<char>_>::vftable;
  local_18c = 0x58;
  local_1f0 = 0;
  FUN_10024be0(local_1e8,0);
  local_8 = 2;
  *(undefined ***)((int)local_1f8 + (int)local_1f8[0][1]) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(undefined **)((int)&iStack_1fc + (int)local_1f8[0][1]) = local_1f8[0][1] + -0x70;
  FUN_10020d10();
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar7 = FUN_10024e40(local_114,1,0x40);
  if (iVar7 == 0) {
    puVar3 = local_1f8[0][1];
    uVar8 = (uint)(*(int *)((int)aiStack_1c0 + (int)puVar3) == 0) * 4 + 2 |
            *(uint *)((int)local_1e8 + (int)(puVar3 + -4)) & 0x17;
    *(uint *)((int)local_1e8 + (int)(puVar3 + -4)) = uVar8;
    uVar8 = *(uint *)((int)local_1e8 + (int)puVar3) & uVar8;
    if (uVar8 != 0) {
      if ((uVar8 & 4) == 0) {
        pcVar13 = "ios_base::failbit set";
        if ((uVar8 & 2) == 0) {
          pcVar13 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar13 = "ios_base::badbit set";
      }
      uVar10 = FUN_10024d60(&local_138,1);
      FUN_10021850(pcVar13,uVar10);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_20c,&DAT_1017433c);
    }
  }
  local_11c = 0;
  local_118 = (undefined1  [4])0xf;
  local_12c[0] = (undefined4 ***)((uint)local_12c[0] & 0xffffff00);
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_13c = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_138 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_134 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_8 = 6;
  if ((*(byte *)((int)local_1e8 + (int)(local_1f8[0][1] + -4)) & 6) != 0) goto LAB_10032271;
  piVar9 = (int *)FUN_10020990(local_1f8,local_12c);
  bVar2 = *(byte *)(*(int *)(*piVar9 + 4) + 0xc + (int)piVar9);
  pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  while ((bVar2 & 6) == 0) {
    if (this == pbVar14) {
      FUN_10025e60(this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_12c);
      pbVar14 = local_134;
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_12c);
      local_138 = this + 0x18;
    }
    this = local_138;
    piVar9 = (int *)FUN_10020990(local_1f8,local_12c);
    pbVar4 = local_13c;
    bVar2 = *(byte *)(*(int *)(*piVar9 + 4) + 0xc + (int)piVar9);
  }
  switch(param_1) {
  case 1:
    ppppuVar12 = local_12c;
    if (0xf < (uint)local_118) {
      ppppuVar12 = (undefined4 ****)local_12c[0];
    }
    (**(code **)(**(int **)(local_130 + 0xbc) + 0x200))(*(int **)(local_130 + 0xbc),ppppuVar12);
    piVar9 = *(int **)(local_130 + 0xbc);
    break;
  case 2:
    ppppuVar12 = local_12c;
    if (0xf < (uint)local_118) {
      ppppuVar12 = (undefined4 ****)local_12c[0];
    }
    (**(code **)(**(int **)(local_130 + 0xc0) + 0x200))(*(int **)(local_130 + 0xc0),ppppuVar12);
    piVar9 = *(int **)(local_130 + 0xc0);
    break;
  case 3:
    ppppuVar12 = local_12c;
    if (0xf < (uint)local_118) {
      ppppuVar12 = (undefined4 ****)local_12c[0];
    }
    (**(code **)(**(int **)(local_130 + 0xc4) + 0x200))(*(int **)(local_130 + 0xc4),ppppuVar12);
    piVar9 = *(int **)(local_130 + 0xc4);
    break;
  case 4:
    ppppuVar12 = local_12c;
    if (0xf < (uint)local_118) {
      ppppuVar12 = (undefined4 ****)local_12c[0];
    }
    (**(code **)(**(int **)(local_130 + 200) + 0x200))(*(int **)(local_130 + 200),ppppuVar12);
    piVar9 = *(int **)(local_130 + 200);
    break;
  case 5:
    ppppuVar12 = local_12c;
    if (0xf < (uint)local_118) {
      ppppuVar12 = (undefined4 ****)local_12c[0];
    }
    (**(code **)(**(int **)(local_130 + 0xcc) + 0x200))(*(int **)(local_130 + 0xcc),ppppuVar12);
    piVar9 = *(int **)(local_130 + 0xcc);
    break;
  default:
    goto switchD_100320f1_default;
  }
  (**(code **)(*piVar9 + 0x21c))(4);
switchD_100320f1_default:
  if (pbVar4 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::
    _Destroy_range<fuzzer::fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              (pbVar4,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)this,
               (fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                *)&local_13c);
    std::_Deallocate<8,0>(pbVar4,(((int)pbVar14 - (int)pbVar4) / 0x18) * 0x18);
  }
  if (0xf < (uint)local_118) {
    std::_Deallocate<8,0>(local_12c[0],(int)local_118 + 1);
  }
LAB_10032271:
  local_11c = 0;
  local_118 = (undefined1  [4])0xf;
  local_12c[0] = (undefined4 ***)((uint)local_12c[0] & 0xffffff00);
  FUN_100220d0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

