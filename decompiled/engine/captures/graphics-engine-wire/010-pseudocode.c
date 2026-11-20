
void FUN_01da64aa(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *local_14;
  
  bVar1 = false;
  if (DAT_0242f300 == 0) {
    FUN_01df2656(s_MESSAGE_END_called_with_no_activ_01ec252c);
  }
  DAT_0242f300 = 0;
  if ((DAT_0242f2f4 == 0) || ((*(uint *)(DAT_0242f2f4 + 0x228) & 0x2000) == 0)) {
    if ((DAT_01ec1a9c & 2) == 0) {
      if (0x3a < DAT_0242f2fc) {
        for (local_14 = DAT_024988ac; (local_14 != (int *)0x0 && (*local_14 != DAT_0242f2fc));
            local_14 = (int *)local_14[6]) {
        }
        if ((local_14 == (int *)0x0) && (DAT_0242f2f8 == 3)) {
          for (local_14 = DAT_024988a8; (local_14 != (int *)0x0 && (*local_14 != DAT_0242f2fc));
              local_14 = (int *)local_14[6]) {
          }
        }
        if (local_14 == (int *)0x0) {
          FUN_01d4abd8(s_PF_MessageEnd_I__Unknown_User_Ms_01ec259c,DAT_0242f2fc);
          return;
        }
        if (local_14[1] == -1) {
          bVar1 = true;
          if (0xc0 < DAT_01ec1aa8) {
            FUN_01d7d873(s_PF_MessageEnd_I__Refusing_to_sen_01ec25c4,local_14 + 2,DAT_01ec1aa8,0xc0)
            ;
            return;
          }
        }
        else if (local_14[1] != DAT_01ec1aa8) {
          FUN_01df2656(s_User_Msg___s____d_bytes_written__01ec2634,local_14 + 2,DAT_01ec1aa8,
                       local_14[1]);
          return;
        }
      }
      iVar2 = FUN_01da62cf(DAT_0242f2f8);
      if (((DAT_0242f2f8 != 0) || (*(int *)(iVar2 + 0x10) + DAT_01ec1aa8 <= *(int *)(iVar2 + 0xc)))
         && (*(int *)(iVar2 + 8) != 0)) {
        if ((0x3a < DAT_0242f2fc) && ((DAT_0242f2f8 == 1 || (DAT_0242f2f8 == 8)))) {
          iVar3 = FUN_01da8405(DAT_0242f2f4);
          if ((iVar3 < 1) || (DAT_0251f328 < iVar3)) {
            FUN_01d7d873(s_WriteDest_Parm__not_a_client_01ec2664);
          }
          piVar4 = (int *)(DAT_0251f324 + (iVar3 + -1) * 0x5018);
          if (piVar4[5] == 0) {
            return;
          }
          if ((*piVar4 == 0) && (piVar4[1] == 0)) {
            return;
          }
          if (piVar4[0x952] != 0) {
            return;
          }
        }
        FUN_01d4705f(iVar2,DAT_0242f2fc);
        if (bVar1) {
          FUN_01d4705f(iVar2,DAT_01ec1aa8);
        }
        FUN_01d471b1(iVar2,DAT_01ec1aa8,PTR_DAT_01ec1aa0);
        switch(DAT_0242f2f8) {
        case 4:
          FUN_01dd6a43(DAT_0242f2f4,&DAT_0242eb24,2,0);
          break;
        case 5:
          FUN_01dd6a43(DAT_0242f2f4,&DAT_0242eb24,4,0);
          break;
        case 6:
          FUN_01dd6a43(DAT_0242f2f4,&DAT_0242eb24,4,1);
          break;
        case 7:
          FUN_01dd6a43(DAT_0242f2f4,&DAT_0242eb24,4,1);
        }
      }
    }
    else {
      FUN_01df2656(s_MESSAGE_END_called__but_message_b_01ec2558);
    }
  }
  return;
}

