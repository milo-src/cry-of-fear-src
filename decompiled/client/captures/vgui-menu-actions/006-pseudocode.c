
void FUN_100294c0(void)

{
  Panel PVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Panel *in_ECX;
  Panel *pPVar6;
  Panel *pPVar7;
  float fVar8;
  int iVar9;
  Panel *pPVar10;
  bool bVar11;
  float10 fVar12;
  double dVar13;
  double dVar14;
  Panel *local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  Panel *local_18;
  int local_14;
  int local_10;
  int local_c;
  Panel local_5;
  
  iVar9 = DAT_101b27c0 / 0xf;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  local_28 = in_ECX;
  if (DAT_1018ed64 == 0) {
    DAT_101b27b9 = DAT_101b27b9 == '\0';
    if ((bool)DAT_101b27b9) {
      (**(code **)(**(int **)(in_ECX + 0xc4) + 4))(&local_1c,&local_14);
      (**(code **)(**(int **)(in_ECX + 200) + 4))(&local_10,&local_18);
      iVar4 = -DAT_101b27c0;
      if (iVar4 < local_14) {
        local_14 = local_14 - iVar9;
      }
      if (local_14 < iVar4) {
        local_14 = iVar4;
      }
      iVar4 = (int)local_18 - (int)DAT_1018f434;
      if ((int)local_18 < (int)DAT_1018f434) {
        local_18 = local_18 + iVar9;
        iVar4 = (int)local_18 - (int)DAT_1018f434;
      }
      if (local_18 != DAT_1018f434 && SBORROW4((int)local_18,(int)DAT_1018f434) == iVar4 < 0) {
        local_18 = DAT_1018f434;
      }
      goto LAB_100295cc;
    }
  }
  else {
    DAT_101b27b9 = DAT_101b27b9 == '\0';
    if ((bool)DAT_101b27b9) {
      (**(code **)(**(int **)(in_ECX + 0xc4) + 4))(&local_1c,&local_14);
      (**(code **)(**(int **)(in_ECX + 200) + 4))(&local_10,&local_18);
      if (local_14 < 0) {
        local_14 = local_14 + iVar9;
      }
      if (0 < local_14) {
        local_14 = 0;
      }
      pPVar6 = DAT_1018f434 + -DAT_101b27c0;
      iVar4 = (int)local_18 - (int)pPVar6;
      if ((int)pPVar6 < (int)local_18) {
        local_18 = local_18 + -iVar9;
        iVar4 = (int)local_18 - (int)pPVar6;
      }
      if (SBORROW4((int)local_18,(int)pPVar6) != iVar4 < 0) {
        local_18 = pPVar6;
      }
LAB_100295cc:
      (**(code **)**(undefined4 **)(in_ECX + 0xc4))(local_1c,local_14);
      (**(code **)**(undefined4 **)(in_ECX + 200))(local_10,local_18);
    }
  }
  if ((in_ECX[0x2b8] == (Panel)0x1) && (in_ECX[0xbd] == (Panel)0x0)) {
    fVar12 = (float10)(*DAT_101b26e0)();
    local_1c = (float)fVar12;
    if ((*(float *)(in_ECX + 700) <= local_1c && local_1c != *(float *)(in_ECX + 700)) &&
       (in_ECX[0xbc] == (Panel)0x0)) {
      FUN_1007fbb0(1);
      FUN_1007faf0("stats.mp3");
      in_ECX[0xbc] = (Panel)0x1;
      (**(code **)(**(int **)(in_ECX + 200) + 0x24))(0);
      (**(code **)(**(int **)(in_ECX + 0xc4) + 0x24))(0);
      if ((DAT_101b27c4 != 0) && (*(int *)(DAT_101b2600 + 0x1498) != 0)) {
        (**(code **)(*(int *)in_ECX + 0x24))(0);
        (**(code **)(**(int **)(DAT_101b2600 + 0x1498) + 0x24))(1);
      }
    }
  }
  DAT_1018f6e0 = DAT_1018f6e0 == '\0';
  pPVar6 = in_ECX;
  if (!(bool)DAT_1018f6e0) goto LAB_1002a4c1;
  pPVar7 = in_ECX + 0xcc;
  do {
    PVar1 = *pPVar7;
    pPVar7 = pPVar7 + 1;
  } while (PVar1 != (Panel)0x0);
  if (2 < (uint)((int)pPVar7 - (int)(in_ECX + 0xcd))) {
    (**(code **)(**(int **)(in_ECX + 0x2b4) + 0x138))(&local_1c,&local_20,&local_24,&local_18);
    if (0 < (int)local_18) {
      local_18 = local_18 + -0xf;
    }
    if ((int)local_18 < 0) {
      local_18 = (Panel *)0x0;
    }
    (**(code **)(**(int **)(in_ECX + 0x2b4) + 0x200))(*(int **)(in_ECX + 0x2b4),in_ECX + 0xcc);
    (**(code **)(**(int **)(in_ECX + 0x2b4) + 0x24))(1);
    (**(code **)**(undefined4 **)(in_ECX + 0x2b4))(0,DAT_1018f430 / 2);
    (**(code **)(**(int **)(in_ECX + 0x2b4) + 0x120))(0xff,0xff,0xff,local_18);
  }
  if (in_ECX[0x1cc] == (Panel)0x0) {
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x2b4) + 0x28))();
    if (cVar3 != '\0') {
      (**(code **)(**(int **)(in_ECX + 0x2b4) + 0x24))(0);
    }
    if (((in_ECX[0xbc] == (Panel)0x0) || (in_ECX[0xbd] != (Panel)0x0)) || (DAT_101b27c4 != 0)) {
      pPVar7 = in_ECX + 0x7c8;
      iVar9 = *(int *)pPVar7;
      if (in_ECX[0x7cc] == (Panel)0x0) {
        if (0 < iVar9) {
          iVar9 = iVar9 + -0xf;
          goto LAB_1002a12a;
        }
      }
      else if (iVar9 < 0xff) {
        iVar9 = iVar9 + 0xf;
LAB_1002a12a:
        *(int *)pPVar7 = iVar9;
      }
      if (iVar9 < 0x100) {
        if (iVar9 < 0) {
          *(int *)pPVar7 = 0;
        }
      }
      else {
        *(int *)pPVar7 = 0xff;
      }
      if (in_ECX[0xbd] != (Panel)0x0) {
        *(int *)pPVar7 = 0xff;
      }
      local_10 = 1;
      if (0 < *(int *)(in_ECX + 0x7c0)) {
        local_18 = in_ECX + 0x3c4;
        do {
          (**(code **)(**(int **)local_18 + 4))(&local_28,&local_c);
          iVar9 = ((int)DAT_1018f434 / *(int *)(in_ECX + 0x1d4)) / 0x14;
          if (*(float *)(DAT_105433d0 + 0xc) == 0.0) {
            if (iVar9 < 1) {
              iVar9 = 1;
            }
          }
          else {
            iVar9 = 0x14;
          }
          if (in_ECX[0x7c5] == (Panel)0x0) {
            iVar9 = -iVar9;
          }
          local_c = local_c + iVar9;
          (**(code **)(**(int **)local_18 + 0x138))(&local_1c,&local_20,&local_24,&local_14);
          local_5 = in_ECX[0x7c5];
          if (local_5 == (Panel)0x0) {
            dVar13 = (double)(int)DAT_1018f434 * 0.25;
            dVar14 = (double)local_c;
            if ((double)(int)DAT_1018f434 - dVar13 < dVar14) {
              local_14 = local_14 + -5;
            }
          }
          else {
            if ((0 < local_c) &&
               ((double)local_c < (double)(int)DAT_1018f434 - (double)(int)DAT_1018f434 * 0.25)) {
              local_14 = local_14 + -5;
            }
            dVar13 = (double)local_c;
            dVar14 = (double)(int)DAT_1018f434 - (double)(int)DAT_1018f434 * 0.25;
          }
          if (dVar14 < dVar13) {
            local_14 = local_14 + 5;
          }
          if (((local_10 == *(int *)(in_ECX + 0x7c0) / 2) &&
              ((int)DAT_1018f434 / 2 + -0x10 < local_c)) &&
             ((in_ECX[0x7cc] == (Panel)0x0 &&
              ((in_ECX[0x7cd] == (Panel)0x0 && (in_ECX[0xbd] == (Panel)0x0)))))) {
            in_ECX[0x7cc] = (Panel)0x1;
          }
          if (local_14 < 0) {
            local_14 = 0;
          }
          else if (0xff < local_14) {
            local_14 = 0xff;
          }
          if ((int)DAT_1018f434 < local_c) {
            local_14 = 0xff;
          }
          if (local_5 == (Panel)0x0) {
            if (((local_10 == *(int *)(in_ECX + 0x7c0)) && (local_c < (int)DAT_1018f434 / 2 + -0x10)
                ) && (in_ECX[0xbd] == (Panel)0x0)) {
              *(undefined2 *)(in_ECX + 0x7cc) = 0x100;
              local_c = (int)DAT_1018f434 / 2 + -0x10;
              if (in_ECX[0x2b8] == (Panel)0x0) {
                in_ECX[0x2b8] = (Panel)0x1;
                fVar12 = (float10)(*DAT_101b26e0)();
                *(float *)(in_ECX + 700) = (float)(fVar12 + (float10)3.0);
              }
            }
          }
          else if (((local_10 == *(int *)(in_ECX + 0x7c0)) &&
                   ((int)DAT_1018f434 / 2 + -0x10 < local_c)) && (in_ECX[0xbd] == (Panel)0x0)) {
            *(undefined2 *)(in_ECX + 0x7cc) = 0x100;
            local_c = (int)DAT_1018f434 / 2 + -0x10;
            if (in_ECX[0x2b8] == (Panel)0x0) {
              in_ECX[0x2b8] = (Panel)0x1;
              fVar12 = (float10)(*DAT_101b26e0)();
              *(float *)(in_ECX + 700) = (float)(fVar12 + (float10)3.0);
              FUN_1007fc10(0x40000000);
            }
          }
          pPVar7 = local_18;
          iVar9 = *(int *)(in_ECX + 0x7c8);
          (**(code **)(**(int **)local_18 + 0x120))(iVar9,iVar9,iVar9,local_14);
          (**(code **)**(undefined4 **)pPVar7)(local_28,local_c);
          local_10 = local_10 + 1;
          local_18 = local_18 + 4;
        } while (local_10 <= *(int *)(in_ECX + 0x7c0));
      }
    }
    else {
      if (in_ECX[0xbe] != (Panel)0x0) {
        in_ECX[0xbe] = (Panel)0x0;
        in_ECX[0x1cc] = (Panel)0x1;
      }
      (**(code **)(*(int *)in_ECX + 300))(0xff,0xff,0xff,0xff);
      local_1c = 1.4013e-45;
      if (0 < *(int *)(in_ECX + 0x7c0)) {
        pPVar6 = in_ECX + 0x3c4;
        do {
          (**(code **)(**(int **)pPVar6 + 0x138))(&local_18,&local_10,&local_14,&local_c);
          local_c = local_c + 0xf;
          if (0xff < local_c) {
            local_c = 0xff;
          }
          iVar9 = *(int *)(in_ECX + 0x7c8);
          (**(code **)(**(int **)pPVar6 + 0x120))(iVar9,iVar9,iVar9,local_c);
          pPVar6 = pPVar6 + 4;
          local_1c = (float)((int)local_1c + 1);
        } while ((int)local_1c <= *(int *)(in_ECX + 0x7c0));
      }
      iVar9 = *(int *)(in_ECX + 0x7c8);
      pPVar7 = in_ECX + 0x7c8;
      in_ECX[0x7cc] = (Panel)0x1;
      iVar4 = iVar9 + -0xff;
      iVar5 = iVar9;
      if (iVar9 < 0xff) {
        iVar5 = iVar9 + 0xf;
        *(int *)pPVar7 = iVar5;
        iVar4 = iVar9 + -0xf0;
      }
      if (iVar5 == 0xff || SBORROW4(iVar5,0xff) != iVar4 < 0) {
        if (iVar5 < 0) {
          *(int *)pPVar7 = 0;
        }
      }
      else {
        *(int *)pPVar7 = 0xff;
      }
      cVar3 = (**(code **)(**(int **)(in_ECX + 0x22c) + 0x28))();
      if (cVar3 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0x22c) + 0x24))(1);
      }
      (**(code **)(**(int **)(in_ECX + 0x22c) + 0x138))(&local_18,&local_10,&local_14,&local_c);
      if (0 < local_c) {
        local_c = local_c + -5;
      }
      if (local_c < 0) {
        local_c = 0;
      }
      iVar9 = *(int *)pPVar7;
      (**(code **)(**(int **)(in_ECX + 0x22c) + 0x120))(iVar9,iVar9,iVar9,local_c);
      cVar3 = (**(code **)(**(int **)(in_ECX + 0x230) + 0x28))();
      if (cVar3 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0x230) + 0x24))(1);
      }
      (**(code **)(**(int **)(in_ECX + 0x22c) + 0x138))(&local_18,&local_10,&local_14,&local_c);
      if (0 < local_c) {
        local_c = local_c + -1;
      }
      if (local_c < 0) {
        local_c = 0;
      }
      (**(code **)(**(int **)(in_ECX + 0x230) + 0x120))(0xff,0,0,local_c);
      cVar3 = (**(code **)(**(int **)(in_ECX + 0x228) + 0x28))();
      if (cVar3 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0x228) + 0x24))(1);
      }
      (**(code **)(**(int **)(in_ECX + 0x228) + 0x138))(&local_18,&local_10,&local_14,&local_c);
      if (0 < local_c) {
        local_c = local_c + -5;
      }
      if (local_c < 0) {
        local_c = 0;
      }
      iVar9 = *(int *)pPVar7;
      (**(code **)(**(int **)(in_ECX + 0x228) + 0x120))(iVar9,iVar9,iVar9,local_c);
      pPVar10 = in_ECX + 0x238;
      iVar9 = 0xe;
      do {
        cVar3 = (**(code **)(**(int **)pPVar10 + 0x28))();
        if (cVar3 == '\0') {
          (**(code **)(**(int **)pPVar10 + 0x24))(1);
        }
        (**(code **)(**(int **)pPVar10 + 0x138))(&local_18,&local_10,&local_14,&local_c);
        if (0 < local_c) {
          local_c = local_c + -5;
        }
        if (local_c < 0) {
          local_c = 0;
        }
        (**(code **)(**(int **)pPVar10 + 0x24))(1);
        (**(code **)(**(int **)pPVar10 + 4))(&local_24,&local_20);
        iVar4 = *(int *)pPVar7;
        (**(code **)(**(int **)pPVar10 + 0x120))(iVar4,iVar4,iVar4,local_c);
        (**(code **)**(undefined4 **)pPVar10)(local_24,local_20);
        pPVar10 = pPVar10 + 4;
        iVar9 = iVar9 + -1;
        pPVar6 = local_28;
      } while (iVar9 != 0);
    }
    if (pPVar6[0xbc] == (Panel)0x0) {
LAB_1002a47a:
      bVar11 = false;
      if (pPVar6[0xbd] == (Panel)0x0) {
        fVar8 = 0.0;
LAB_1002a485:
        iVar9 = 0xff - *(int *)(in_ECX + 0x7c8);
        (**(code **)(*(int *)pPVar6 + 300))(iVar9,iVar9,iVar9,fVar8);
        bVar11 = pPVar6[0xbd] == (Panel)0x0;
      }
    }
    else {
      bVar11 = false;
      if (pPVar6[0xbd] == (Panel)0x0) {
        if (DAT_101b27c4 != 0) goto LAB_1002a47a;
        (**(code **)(*(int *)pPVar6 + 0x140))(&local_20,&local_24,&local_28,&local_1c);
        iVar9 = (int)local_1c + -0xff;
        fVar8 = local_1c;
        if ((int)local_1c < 0xff) {
          fVar8 = (float)((int)local_1c + 5);
          iVar9 = (int)local_1c + -0xfa;
        }
        local_1c = fVar8;
        if (fVar8 != 3.57331e-43 && SBORROW4((int)fVar8,0xff) == iVar9 < 0) {
          fVar8 = 3.57331e-43;
          local_1c = fVar8;
        }
        goto LAB_1002a485;
      }
    }
    if (bVar11) goto LAB_1002a4c1;
  }
  else {
    uVar2 = *(uint *)(in_ECX + 0x1d0);
    if ((uVar2 & 0x40) == 0) {
      if ((char)uVar2 < '\0') {
        if (DAT_101b27b8 == '\0') {
          FUN_10029180(0x80,&DAT_10142490,0x32,"models/costumes/unfolded_clothes.mdl",1);
          DAT_101b27bc = 1;
LAB_10029a23:
          DAT_104d26c5 = 0;
          DAT_104d26d1 = 0;
          DAT_104d26d2 = 0;
          DAT_101b27b8 = '\x01';
        }
      }
      else if ((uVar2 & 0x100) == 0) {
        if ((uVar2 & 0x200) == 0) {
          if ((uVar2 & 0x400) == 0) {
            if ((uVar2 & 0x800) == 0) {
              if ((uVar2 & 0x1000) == 0) {
                if ((uVar2 & 0x2000) == 0) {
                  if ((uVar2 & 0x4000) == 0) {
                    if ((uVar2 & 0x8000) == 0) {
                      if ((uVar2 & 0x10000) == 0) {
                        if ((uVar2 & 0x20000) == 0) {
                          if ((uVar2 & 0x40000) == 0) {
                            if ((uVar2 & 0x80000) == 0) {
                              if ((uVar2 & 0x100000) == 0) {
                                if ((uVar2 & 0x200000) == 0) {
                                  if ((uVar2 & 0x400000) == 0) {
                                    if ((uVar2 & 0x800000) == 0) {
                                      if ((uVar2 & 0x20) == 0) {
                                        if ((uVar2 & 0x1000000) == 0) {
                                          if ((uVar2 & 0x2000000) == 0) {
                                            if ((uVar2 & 0x4000000) == 0) {
                                              if ((uVar2 & 0x8000000) == 0) {
                                                if ((uVar2 & 0x10000000) == 0) {
                                                  if ((uVar2 & 0x20000000) == 0) {
                                                    if ((uVar2 & 0x40000000) == 0) {
                                                      if ((int)uVar2 < 0) {
                                                        if (DAT_101b27b8 == '\0') {
                                                          FUN_10029180(0x80000000,&DAT_101427dc,0x32
                                                                       ,"models/doctor_unlock.mdl",0
                                                                      );
                                                          DAT_101b27b8 = '\x01';
                                                        }
                                                      }
                                                      else if (in_ECX[0xbe] != (Panel)0x0) {
                                                        in_ECX[0xbe] = (Panel)0x0;
                                                        (**(code **)(*(int *)in_ECX + 0x24))(0);
                                                        FUN_100aaad0();
                                                        DAT_101b27bc = 0;
                                                        if (DAT_10542a68 == 0) {
                                                          (*DAT_101b2654)("closegame");
                                                          FUN_100aaad0();
                                                        }
                                                        else {
                                                          (*DAT_101b2658)("map c_game_menu1");
                                                          FUN_100aaad0();
                                                        }
                                                      }
                                                    }
                                                    else if (DAT_101b27b8 == '\0') {
                                                      FUN_10029180(0x40000000,&DAT_101427c4,0x32,
                                                                   "models/items/generic_note.mdl",0
                                                                  );
                                                      DAT_101b27b8 = '\x01';
                                                    }
                                                  }
                                                  else if (DAT_101b27b8 == '\0') {
                                                    FUN_10029180(0x20000000,&DAT_101427ac,0x32,
                                                                 "models/items/generic_note.mdl",0);
                                                    DAT_101b27b8 = '\x01';
                                                  }
                                                }
                                                else if (DAT_101b27b8 == '\0') {
                                                  FUN_10029180(0x10000000,&DAT_10142794,0x32,
                                                               "models/items/generic_note.mdl",0);
                                                  DAT_101b27b8 = '\x01';
                                                }
                                              }
                                              else if (DAT_101b27b8 == '\0') {
                                                FUN_10029180(0x8000000,&DAT_1014277c,0x32,
                                                             "models/items/generic_note.mdl",0);
                                                DAT_101b27b8 = '\x01';
                                              }
                                            }
                                            else if (DAT_101b27b8 == '\0') {
                                              FUN_10029180(0x4000000,&DAT_10142764,0x32,
                                                           "models/items/generic_note.mdl",0);
                                              DAT_101b27b8 = '\x01';
                                            }
                                          }
                                          else if (DAT_101b27b8 == '\0') {
                                            FUN_10029180(0x2000000,&DAT_1014274c,0x32,
                                                         "models/items/generic_note.mdl",0);
                                            DAT_101b27b8 = '\x01';
                                          }
                                        }
                                        else if (DAT_101b27b8 == '\0') {
                                          FUN_10029180(0x1000000,&DAT_10142734,0x32,
                                                       "models/items/w_nightvision.mdl",0);
                                          DAT_101b27b8 = '\x01';
                                        }
                                      }
                                      else if (DAT_101b27b8 == '\0') {
                                        FUN_10029180(0x20,&DAT_101426f8,0x32,
                                                     "models/items/cassette_tape.mdl",0);
                                        DAT_101b27b8 = '\x01';
                                      }
                                    }
                                    else if (DAT_101b27b8 == '\0') {
                                      FUN_10029180(0x800000,&DAT_101426dc,0x32,
                                                   "models/items/package.mdl",0);
                                      DAT_101b27b8 = '\x01';
                                    }
                                  }
                                  else if (DAT_101b27b8 == '\0') {
                                    FUN_10029180(0x400000,&DAT_101426b8,0x32,
                                                 "models/developer_commentary.mdl",0);
                                    DAT_101b27b8 = '\x01';
                                  }
                                }
                                else if (DAT_101b27b8 == '\0') {
                                  FUN_10029180(0x200000,&DAT_10142680,0x32,
                                               "models/weapons/booklaser/w_booklaser.mdl",0);
                                  DAT_101b27b8 = '\x01';
                                }
                              }
                              else if (DAT_101b27b8 == '\0') {
                                FUN_10029180(0x100000,&DAT_10142638,0x32,
                                             "models/weapons/camera/w_camera.mdl",0);
                                DAT_101b27b8 = '\x01';
                              }
                            }
                            else if (DAT_101b27b8 == '\0') {
                              FUN_10029180(0x80000,&DAT_10142600,0x32,"models/weapons/axe/w_axe.mdl"
                                           ,0);
                              DAT_101b27b8 = '\x01';
                            }
                          }
                          else if (DAT_101b27b8 == '\0') {
                            FUN_10029180(0x40000,&DAT_101425e4,0x32,
                                         "models/costumes/unfolded_clothes.mdl",0);
                            DAT_101b27b8 = '\x01';
                          }
                        }
                        else if (DAT_101b27b8 == '\0') {
                          FUN_10029180(0x20000,&DAT_101425c8,0x32,
                                       "models/costumes/unfolded_clothes.mdl",1);
                          DAT_101b27bc = 0xb;
                          goto LAB_10029a23;
                        }
                      }
                      else if (DAT_101b27b8 == '\0') {
                        FUN_10029180(0x10000,&DAT_101425ac,0x32,
                                     "models/costumes/unfolded_clothes.mdl",1);
                        DAT_101b27bc = 10;
                        goto LAB_10029a23;
                      }
                    }
                    else if (DAT_101b27b8 == '\0') {
                      FUN_10029180(0x8000,&DAT_10142590,0x32,"models/costumes/unfolded_clothes.mdl",
                                   1);
                      DAT_101b27bc = 9;
                      goto LAB_10029a23;
                    }
                  }
                  else if (DAT_101b27b8 == '\0') {
                    FUN_10029180(0x4000,&DAT_1014256c,0x32,"models/costumes/unfolded_clothes.mdl",0)
                    ;
                    DAT_101b27bc = 8;
                    goto LAB_10029a23;
                  }
                }
                else if (DAT_101b27b8 == '\0') {
                  FUN_10029180(0x2000,&DAT_10142550,0x32,"models/costumes/unfolded_clothes.mdl",1);
                  DAT_101b27bc = 7;
                  goto LAB_10029a23;
                }
              }
              else if (DAT_101b27b8 == '\0') {
                FUN_10029180(0x1000,&DAT_10142528,0x32,"models/costumes/unfolded_clothes.mdl",0);
                DAT_101b27bc = 6;
                goto LAB_10029a23;
              }
            }
            else if (DAT_101b27b8 == '\0') {
              FUN_10029180(0x800,&DAT_1014250c,0x32,"models/costumes/unfolded_clothes.mdl",0);
              DAT_101b27bc = 5;
              goto LAB_10029a23;
            }
          }
          else if (DAT_101b27b8 == '\0') {
            FUN_10029180(0x400,&DAT_101424e8,0x32,"models/costumes/unfolded_clothes.mdl",1);
            DAT_101b27bc = 4;
            goto LAB_10029a23;
          }
        }
        else if (DAT_101b27b8 == '\0') {
          FUN_10029180(0x200,&DAT_101424cc,0x32,"models/costumes/unfolded_clothes.mdl",1);
          DAT_101b27bc = 3;
          goto LAB_10029a23;
        }
      }
      else if (DAT_101b27b8 == '\0') {
        FUN_10029180(0x100,&DAT_101424b4,0x32,"models/costumes/unfolded_clothes.mdl",0);
        DAT_101b27bc = 2;
        goto LAB_10029a23;
      }
    }
    else if (DAT_101b27b8 == '\0') {
      FUN_10029180(0x40,&DAT_10142444,0x32,"models/weapons/famas/w_famas.mdl",0);
      DAT_101b27b8 = '\x01';
    }
  }
  (**(code **)(*(int *)pPVar6 + 300))(0xff,0xff,0xff,0xff);
LAB_1002a4c1:
  vgui::Panel::solve(pPVar6);
  return;
}

