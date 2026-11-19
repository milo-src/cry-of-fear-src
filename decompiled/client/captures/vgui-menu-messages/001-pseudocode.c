
undefined4 FUN_100235b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  char *pcVar20;
  char cVar21;
  float10 fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined *puVar26;
  
  FUN_10080850(param_3,param_2);
  if (*(int *)(DAT_101b2600 + 0x1498) == 0) {
    return 1;
  }
  iVar3 = FUN_100808b0();
  uVar4 = FUN_10080a10();
  uVar5 = FUN_10080a10();
  FUN_10080a10();
  uVar6 = FUN_10080a10();
  fVar22 = (float10)FUN_10080910();
  uVar7 = FUN_10080a10();
  uVar8 = FUN_10080a10();
  uVar9 = FUN_10080a10();
  uVar10 = FUN_10080a10();
  uVar11 = FUN_10080a10();
  uVar12 = FUN_10080a10();
  iVar13 = FUN_100808b0();
  iVar14 = FUN_100808b0();
  iVar15 = FUN_100808b0();
  FUN_100808b0();
  FUN_100808b0();
  iVar16 = FUN_100808b0();
  uVar17 = FUN_10080a10();
  iVar18 = FUN_100808b0();
  iVar19 = FUN_10080a10();
  if (iVar19 < 0x618) {
    if (iVar19 < 0x5dc) {
      if (iVar19 < 0x5a0) {
        if (iVar19 < 0x4b0) {
          if (iVar19 < 0x438) {
            cVar21 = (iVar19 < 900) + '\x06';
          }
          else {
            cVar21 = '\x05';
          }
        }
        else {
          cVar21 = '\x04';
        }
      }
      else {
        cVar21 = '\x03';
      }
    }
    else {
      cVar21 = '\x02';
    }
  }
  else {
    cVar21 = '\x01';
  }
  piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xc4);
  (**(code **)(*piVar2 + 0x200))(piVar2,&DAT_101417fc);
  if (iVar16 != 0) {
    FUN_1007fbb0(1);
    FUN_1007faf0("stats.mp3");
    switch(cVar21) {
    case '\x01':
      puVar26 = &DAT_10141818;
      break;
    case '\x02':
      puVar26 = &DAT_10141824;
      break;
    case '\x03':
      puVar26 = &DAT_10141830;
      break;
    case '\x04':
      puVar26 = &DAT_1014183c;
      break;
    case '\x05':
      puVar26 = &DAT_10141848;
      break;
    case '\x06':
      puVar26 = &DAT_10141854;
      break;
    case '\a':
      puVar26 = &DAT_10141860;
      break;
    default:
      goto switchD_10023708_default;
    }
    piVar2 = *(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xc4);
    (**(code **)(*piVar2 + 0x200))(piVar2,puVar26);
  }
switchD_10023708_default:
  if (iVar13 != 0) {
    if (iVar13 == 2) {
      (**(code **)(**(int **)(DAT_101b2600 + 0x1498) + 0x24))(1);
    }
    if (iVar18 != 0) {
      (**(code **)(**(int **)(DAT_101b2600 + 0x1498) + 0x24))(1);
    }
    if ((0 < iVar3) && (pcVar20 = (char *)(&DAT_10556cb0)[iVar3 * 5], pcVar20 != (char *)0x0)) {
      pcVar1 = pcVar20 + 1;
      do {
        cVar21 = *pcVar20;
        pcVar20 = pcVar20 + 1;
      } while (cVar21 != '\0');
      if (pcVar20 != pcVar1) {
        iVar13 = **(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xcc + iVar3 * 0x28);
        if (iVar14 == 0) {
          if (iVar15 == 0) {
            (**(code **)(iVar13 + 0x120))(0xff,0xff,0xff,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xd0 + iVar3 * 0x28) + 0x120))
                      (0xff,0xff,0xff,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xd4 + iVar3 * 0x28) + 0x120))
                      (0xff,0xff,0xff,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xd8 + iVar3 * 0x28) + 0x120))
                      (0xff,0xff,0xff,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xdc + iVar3 * 0x28) + 0x120))
                      (0xff,0xff,0xff,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xe0 + iVar3 * 0x28) + 0x120))
                      (0xff,0xff,0xff,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xe4 + iVar3 * 0x28) + 0x120))
                      (0xff,0xff,0xff,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xe8 + iVar3 * 0x28) + 0x120))
                      (0xff,0xff,0xff,0);
            uVar25 = 0xff;
            uVar24 = 0xff;
          }
          else {
            (**(code **)(iVar13 + 0x120))(0xff,0xd3,0x51);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xd0 + iVar3 * 0x28) + 0x120))
                      (0xff,0xd3,0x51,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xd4 + iVar3 * 0x28) + 0x120))
                      (0xff,0xd3,0x51,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xd8 + iVar3 * 0x28) + 0x120))
                      (0xff,0xd3,0x51,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xdc + iVar3 * 0x28) + 0x120))
                      (0xff,0xd3,0x51,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xe0 + iVar3 * 0x28) + 0x120))
                      (0xff,0xd3,0x51,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xe4 + iVar3 * 0x28) + 0x120))
                      (0xff,0xd3,0x51,0);
            (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xe8 + iVar3 * 0x28) + 0x120))
                      (0xff,0xd3,0x51,0);
            uVar25 = 0x51;
            uVar24 = 0xd3;
          }
          uVar23 = 0xff;
        }
        else {
          (**(code **)(iVar13 + 0x120))(0x75,0,0);
          (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xd0 + iVar3 * 0x28) + 0x120))
                    (0x75,0,0,0);
          (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xd4 + iVar3 * 0x28) + 0x120))
                    (0x75,0,0,0);
          (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xd8 + iVar3 * 0x28) + 0x120))
                    (0x75,0,0,0);
          (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xdc + iVar3 * 0x28) + 0x120))
                    (0x75,0,0,0);
          (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xe0 + iVar3 * 0x28) + 0x120))
                    (0x75,0,0,0);
          (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xe4 + iVar3 * 0x28) + 0x120))
                    (0x75,0,0,0);
          (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xe8 + iVar3 * 0x28) + 0x120))
                    (0x75,0,0,0);
          uVar25 = 0;
          uVar24 = 0;
          uVar23 = 0x75;
        }
        (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xec + iVar3 * 0x28) + 0x120))
                  (uVar23,uVar24,uVar25,0);
        iVar13 = **(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xcc + iVar3 * 0x28);
        uVar4 = FUN_10029420(&DAT_1014186c,(&DAT_10556cb0)[iVar3 * 5],uVar4);
        (**(code **)(iVar13 + 0x200))
                  (*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1498) + 0xcc + iVar3 * 0x28),uVar4);
        iVar13 = **(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xd0 + iVar3 * 0x28);
        uVar4 = FUN_10029420(&DAT_10141884,(&DAT_10556cb0)[iVar3 * 5],uVar5);
        (**(code **)(iVar13 + 0x200))
                  (*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1498) + 0xd0 + iVar3 * 0x28),uVar4);
        iVar13 = **(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xd4 + iVar3 * 0x28);
        uVar4 = FUN_10029420(&DAT_10141898,(&DAT_10556cb0)[iVar3 * 5],uVar6);
        (**(code **)(iVar13 + 0x200))
                  (*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1498) + 0xd4 + iVar3 * 0x28),uVar4);
        iVar13 = **(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xd8 + iVar3 * 0x28);
        uVar4 = FUN_10029420(&DAT_101418b0,(&DAT_10556cb0)[iVar3 * 5],(int)fVar22);
        (**(code **)(iVar13 + 0x200))
                  (*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1498) + 0xd8 + iVar3 * 0x28),uVar4);
        iVar13 = **(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xdc + iVar3 * 0x28);
        uVar4 = FUN_10029420(&DAT_101418c4,(&DAT_10556cb0)[iVar3 * 5],uVar7);
        (**(code **)(iVar13 + 0x200))
                  (*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1498) + 0xdc + iVar3 * 0x28),uVar4);
        iVar13 = **(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xe0 + iVar3 * 0x28);
        uVar4 = FUN_10029420(&DAT_101418dc,(&DAT_10556cb0)[iVar3 * 5],uVar10,uVar9,uVar8);
        (**(code **)(iVar13 + 0x200))
                  (*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1498) + 0xe0 + iVar3 * 0x28),uVar4);
        iVar13 = **(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xe4 + iVar3 * 0x28);
        uVar4 = FUN_10029420(&DAT_101418f8,(&DAT_10556cb0)[iVar3 * 5],uVar11);
        (**(code **)(iVar13 + 0x200))
                  (*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1498) + 0xe4 + iVar3 * 0x28),uVar4);
        iVar13 = **(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xe8 + iVar3 * 0x28);
        uVar4 = FUN_10029420(&DAT_10141914,(&DAT_10556cb0)[iVar3 * 5],uVar12);
        (**(code **)(iVar13 + 0x200))
                  (*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1498) + 0xe8 + iVar3 * 0x28),uVar4);
        if (iVar16 != 0) {
          iVar13 = **(int **)(*(int *)(DAT_101b2600 + 0x1498) + 0xec + iVar3 * 0x28);
          uVar4 = FUN_10029420(&DAT_10141930,(&DAT_10556cb0)[iVar3 * 5],uVar17);
          (**(code **)(iVar13 + 0x200))
                    (*(undefined4 *)(*(int *)(DAT_101b2600 + 0x1498) + 0xec + iVar3 * 0x28),uVar4);
        }
      }
    }
    return 1;
  }
  (**(code **)(**(int **)(DAT_101b2600 + 0x1498) + 0x24))(0);
  return 0;
}

