
void FUN_100aa7f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  iVar2 = (**(code **)(DAT_101b275c + 4))();
  if (iVar2 != 0) {
    return;
  }
  if ((DAT_1018f648 != 0) && (param_1 != 5)) {
    return;
  }
  for (iVar2 = *(int *)(in_ECX + 0x13d0); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc0)) {
    if (*(int *)(iVar2 + 0xc4) == param_1) {
      return;
    }
  }
  switch(param_1) {
  case 4:
    piVar3 = (int *)FUN_100a8a30(1);
    break;
  case 5:
    piVar3 = (int *)FUN_100a8a30(3);
    break;
  case 6:
    piVar3 = (int *)FUN_100a8a30(2);
    break;
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x21:
    goto switchD_100aa85a_caseD_7;
  case 9:
    piVar3 = (int *)FUN_100a8a30(4);
    break;
  case 0x1e:
    piVar3 = (int *)FUN_100aa760();
    break;
  case 0x1f:
    piVar3 = (int *)FUN_100aa730();
    break;
  case 0x20:
    if (*(int **)(in_ECX + 0x1440) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100aa88a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(in_ECX + 0x1440) + 0x24))();
      return;
    }
    goto switchD_100aa85a_caseD_7;
  case 0x22:
    piVar3 = (int *)FUN_100aa7c0();
    break;
  case 0x23:
    if (*(int **)(in_ECX + 0x1474) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100aa8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(in_ECX + 0x1474) + 0x24))();
      return;
    }
    goto switchD_100aa85a_caseD_7;
  case 0x24:
    if (*(int **)(in_ECX + 0x1478) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100aa8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(in_ECX + 0x1478) + 0x24))();
      return;
    }
    goto switchD_100aa85a_caseD_7;
  case 0x25:
    if (*(int **)(in_ECX + 0x1468) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100aa8c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(in_ECX + 0x1468) + 0x24))();
      return;
    }
    goto switchD_100aa85a_caseD_7;
  case 0x26:
    piVar3 = (int *)FUN_100aa720();
    break;
  default:
    goto switchD_100aa85a_default;
  }
  if (piVar3 != (int *)0x0) {
    FUN_100a9040();
    piVar3[0x31] = param_1;
    piVar3[0x33] = 1;
    (**(code **)(*piVar3 + 0x40))();
    piVar1 = *(int **)(in_ECX + 0x13d0);
    if (piVar1 != (int *)0x0) {
      if ((piVar1[0x31] == 3) && (param_1 == 2)) {
        (**(code **)(*piVar1 + 0x204))();
        *(int **)(in_ECX + 0x13d0) = piVar3;
        FUN_100aa620(piVar1);
        (**(code **)(**(int **)(in_ECX + 0x13d0) + 0x200))();
        FUN_100aaad0();
        return;
      }
      FUN_100aa620(piVar3);
      return;
    }
    *(int **)(in_ECX + 0x13d0) = piVar3;
    (**(code **)(*piVar3 + 0x200))();
    FUN_100aaad0();
  }
switchD_100aa85a_caseD_7:
switchD_100aa85a_default:
  return;
}

