
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10065ef0(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  int in_ECX;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  undefined1 *puVar16;
  bool bVar17;
  float10 fVar18;
  float fVar19;
  int *piVar20;
  short *psVar21;
  int *piVar22;
  short *psVar23;
  undefined *puVar24;
  undefined4 uVar25;
  float local_48;
  float local_44;
  float local_40;
  short *local_3c;
  float local_38;
  undefined4 *local_34;
  undefined1 *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  short *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  byte local_5;
  
  if (DAT_10542bb4 == 0) {
    local_5 = 0;
    local_c = in_ECX;
    iVar3 = (*DAT_101b2698)();
    local_2c = (uint)local_5;
    if (1 < iVar3) {
      local_2c = 1;
    }
    iVar4 = (*DAT_101b26d8)();
    iVar3 = *(int *)(in_ECX + 0x30);
    if (((iVar3 != iVar4) || (((DAT_10542bbc == 0 && (DAT_10542bc0 == 0)) && (DAT_105436d8 == 0))))
       && ((((iVar3 != iVar4 || (DAT_1054506c < 3)) || (DAT_1018d578 == 0)) ||
           (*(int *)(DAT_1018d578 + 0x9c) == 0x11)))) {
      if (((((*(int *)(iVar3 + 0x304) == 0x5c) && (cVar2 = FUN_10072710(), cVar2 == '\0')) &&
           (DAT_10542bc0 == 0)) &&
          ((iVar3 = (*DAT_101b2730)(), *(float *)(DAT_105433e4 + 0xc) != 0.0 ||
           ((iVar3 != 0 &&
            ((((((iVar4 = FUN_100d3cf0(iVar3,"college1dark"), iVar4 != 0 ||
                 (iVar4 = FUN_100d3cf0(iVar3,"forest1"), iVar4 != 0)) ||
                (iVar4 = FUN_100d3cf0(iVar3,"forest2"), iVar4 != 0)) ||
               ((iVar4 = FUN_100d3cf0(iVar3,"forest3"), iVar4 != 0 ||
                (iVar4 = FUN_100d3cf0(iVar3,"forest4"), iVar4 != 0)))) ||
              (iVar4 = FUN_100d3cf0(iVar3,"forest5"), iVar4 != 0)) ||
             (iVar4 = FUN_100d3cf0(iVar3,"forest6"), iVar4 != 0)))))))) &&
         (iVar4 = (*DAT_101b26d4)(), iVar4 != 0)) {
        iVar15 = *(int *)(in_ECX + 0x30);
        if (DAT_10542bbc == 0) {
          if (DAT_105436d8 == 0) {
            local_48 = *(float *)(iVar4 + 0xb48) - *(float *)(iVar15 + 0xb48);
            local_44 = *(float *)(iVar4 + 0xb4c) - *(float *)(iVar15 + 0xb4c);
            local_40 = *(float *)(iVar4 + 0xb50);
          }
          else {
            local_48 = *(float *)(DAT_105436d8 + 0xb48) - *(float *)(iVar15 + 0xb48);
            local_44 = *(float *)(DAT_105436d8 + 0xb4c) - *(float *)(iVar15 + 0xb4c);
            local_40 = *(float *)(DAT_105436d8 + 0xb50);
          }
        }
        else {
          local_48 = DAT_105458d0 - *(float *)(iVar15 + 0xb48);
          local_44 = DAT_105458d4 - *(float *)(iVar15 + 0xb4c);
          local_40 = DAT_105458d8;
        }
        local_40 = local_40 - *(float *)(iVar15 + 0xb50);
        if ((iVar3 != 0) &&
           (((iVar4 = FUN_100d3cf0(iVar3,"college1dark"), iVar4 != 0 ||
             (iVar4 = FUN_100d3cf0(iVar3,"forest1"), iVar4 != 0)) ||
            (((iVar4 = FUN_100d3cf0(iVar3,"forest2"), iVar4 != 0 ||
              (((iVar4 = FUN_100d3cf0(iVar3,"forest3"), iVar4 != 0 ||
                (iVar4 = FUN_100d3cf0(iVar3,"forest4"), iVar4 != 0)) ||
               (iVar4 = FUN_100d3cf0(iVar3,"forest5"), iVar4 != 0)))) ||
             (iVar3 = FUN_100d3cf0(iVar3,"forest6"), iVar3 != 0)))))) {
          fVar18 = (float10)FUN_10094510(&local_48);
          local_38 = (float)fVar18;
          if (800.0 < local_38) {
            return;
          }
        }
        fVar18 = (float10)FUN_10094510(&local_48);
        local_38 = (float)fVar18;
        if (1000.0 < local_38) {
          return;
        }
      }
      if (((*(int *)(*(int *)(in_ECX + 0x30) + 0x304) == 0x5d) &&
          (cVar2 = FUN_10072710(), cVar2 == '\0')) &&
         ((DAT_10542bc0 == 0 && (iVar3 = (*DAT_101b26d4)(), iVar3 != 0)))) {
        iVar4 = *(int *)(in_ECX + 0x30);
        local_48 = *(float *)(iVar3 + 0xb48) - *(float *)(iVar4 + 0xb48);
        local_44 = *(float *)(iVar3 + 0xb4c) - *(float *)(iVar4 + 0xb4c);
        local_40 = *(float *)(iVar3 + 0xb50) - *(float *)(iVar4 + 0xb50);
        fVar18 = (float10)FUN_10094510(&local_48);
        local_38 = (float)fVar18;
        if (1000.0 < local_38) {
          return;
        }
      }
      if (((*(int *)(*(int *)(in_ECX + 0x30) + 0x304) == 0x5e) &&
          (cVar2 = FUN_10072710(), cVar2 == '\0')) &&
         ((DAT_10542bc0 == 0 && (iVar3 = (*DAT_101b26d4)(), iVar3 != 0)))) {
        iVar4 = *(int *)(in_ECX + 0x30);
        local_48 = *(float *)(iVar3 + 0xb48) - *(float *)(iVar4 + 0xb48);
        local_44 = *(float *)(iVar3 + 0xb4c) - *(float *)(iVar4 + 0xb4c);
        local_40 = *(float *)(iVar3 + 0xb50) - *(float *)(iVar4 + 0xb50);
        fVar18 = (float10)FUN_10094510(&local_48);
        if (600.0 < (float)fVar18) {
          return;
        }
      }
      iVar3 = *(int *)(in_ECX + 0x4c);
      iVar4 = *(int *)(in_ECX + 0x44);
      local_14 = *(int *)(iVar3 + 0x54) + iVar4;
      local_30 = (undefined1 *)(*(int *)(iVar3 + 0x60) + iVar4);
      iVar15 = *(int *)(in_ECX + 0x40b0);
      if ((iVar15 != 0) && (*(int *)(*(int *)(in_ECX + 0x30) + 0x304) != 0x3c)) {
        local_28 = *(int *)(iVar15 + 0xb8) + iVar15;
        local_34 = (undefined4 *)(*(int *)(iVar3 + 100) + iVar4);
        local_20 = (short *)(*(int *)(iVar3 + 0x4c) + iVar4);
        uVar12 = *(int *)(iVar3 + 0x58) + iVar4;
        local_24 = *(int *)(iVar15 + 200) + iVar15;
        iVar4 = (int)*(short *)(*(int *)(local_c + 0x30) + 0x2e8);
        if ((iVar4 != 0) && (iVar4 < *(int *)(iVar15 + 0xc4))) {
          local_24 = local_24 + *(int *)(iVar15 + 0xc0) * iVar4 * 2;
        }
        local_38 = (float)uVar12;
        if (0 < *(int *)(iVar3 + 0x50)) {
          iVar4 = 0;
          iVar15 = 0;
          do {
            FUN_10091790(iVar4 + uVar12,
                         (uint)*(byte *)(iVar15 + local_14) * 0x30 + *(int *)(local_c + 0x40a8),
                         DAT_104ce4a8 + iVar4);
            iVar15 = iVar15 + 1;
            iVar4 = iVar4 + 0xc;
            iVar3 = *(int *)(local_c + 0x4c);
          } while (iVar15 < *(int *)(iVar3 + 0x50));
        }
        local_5 = '\0';
        local_1c = 0;
        if (0 < *(int *)(iVar3 + 0x48)) {
          local_18 = (int *)(local_20 + 6);
          iVar3 = DAT_104ce4ac;
          puVar13 = local_34;
          puVar16 = local_30;
          do {
            local_20 = (short *)0x0;
            local_34 = *(undefined4 **)
                        (local_28 + 0x40 + *(short *)(local_24 + local_18[-1] * 2) * 0x50);
            if (0 < *local_18) {
              local_38 = (float)((uint)local_34 & 2);
              do {
                FUN_10068d70(iVar3,*puVar16,local_34,*puVar13,puVar13[1],puVar13[2]);
                if (local_38 != 0.0) {
                  FUN_10065050(&DAT_104ce4b8 + ((iVar3 - DAT_104ce4ac) / 0xc) * 8,*puVar16,*puVar13,
                               puVar13[1],puVar13[2]);
                }
                iVar3 = iVar3 + 0xc;
                local_20 = (short *)((int)local_20 + 1);
                puVar13 = puVar13 + 3;
                puVar16 = puVar16 + 1;
              } while ((int)local_20 < *local_18);
            }
            local_18 = local_18 + 5;
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)(*(int *)(local_c + 0x4c) + 0x48));
        }
        (*DAT_101be678)(0x404);
        local_1c = *(int *)(*(int *)(local_c + 0x44) + 0x90) + *(int *)(local_c + 0x44);
        iVar3 = *(int *)(local_c + 0x4c);
        local_38 = 0.0;
        if (0 < *(int *)(iVar3 + 0x48)) {
          do {
            iVar4 = *(int *)(local_c + 0x44);
            iVar3 = *(int *)(iVar3 + 0x4c) + (int)local_38 * 0x14;
            iVar15 = iVar3 + iVar4;
            piVar14 = (int *)(*(int *)(iVar15 + 4) + iVar4);
            iVar3 = *(short *)(local_24 + *(int *)(iVar3 + 8 + iVar4) * 2) * 0x50 + local_28;
            local_34 = (undefined4 *)(1.0 / (float)*(int *)(iVar3 + 0x44));
            local_30 = (undefined1 *)(1.0 / (float)*(int *)(iVar3 + 0x48));
            local_18 = piVar14;
            local_10 = iVar3;
            iVar4 = FUN_100d3cf0(iVar3,"hoodie_grey");
            if ((iVar4 == 0) && (iVar4 = FUN_100d3cf0(iVar3,"hoodie_blood"), iVar4 == 0)) {
              iVar4 = FUN_100d3cf0(iVar3,"jeans");
              if ((iVar4 == 0) || (iVar4 = FUN_100d3cf0(iVar3,"jeanss"), iVar4 != 0)) {
                iVar4 = FUN_100d3cf0(iVar3,"head_face");
                if (iVar4 == 0) {
                  iVar4 = FUN_100d3cf0(iVar3,&DAT_1014dd08);
                  if (iVar4 == 0) {
                    iVar4 = FUN_100d3cf0(iVar3,"sleeve");
                    if (iVar4 == 0) {
                      iVar4 = FUN_100d3cf0(iVar3,"fingers");
                      if (iVar4 == 0) {
                        iVar4 = FUN_100d3cf0(iVar3,"glove");
                        if (iVar4 == 0) {
                          iVar4 = FUN_100d3cf0(iVar3,"cam_vfind");
                          if (iVar4 == 0) {
                            iVar4 = FUN_100d3cf0(iVar3,"diffusegay");
                            if (iVar4 != 0) {
                              if (DAT_104ce4a1 != '\0') {
                                FUN_10064ac0(*(undefined4 *)(iVar3 + 0x44),
                                             *(undefined4 *)(iVar3 + 0x48));
                                DAT_104ce4a1 = '\0';
                              }
                              if (DAT_104d26e6 != '\0') {
                                (*DAT_101be64c)(0xde1,DAT_104d26f0);
                                goto LAB_100669bc;
                              }
                            }
                          }
                          else if ((*(float *)(DAT_105433f8 + 0xc) != 0.0) &&
                                  (FUN_10064c10(*(undefined4 *)(iVar3 + 0x44),
                                                *(undefined4 *)(iVar3 + 0x48),0,0),
                                  DAT_104d26e5 != '\0')) {
                            local_5 = '\x01';
                            (*DAT_101be64c)(0xde1,DAT_104d26e8);
                            DAT_104d26e5 = '\0';
                            goto LAB_100669bc;
                          }
                        }
                        else {
                          iVar4 = (*DAT_101b26d8)();
                          if (((*(int *)(local_c + 0x30) == iVar4) && (DAT_10542bb1 != '\0')) &&
                             (FUN_100642b0(0), DAT_104d26d0 != '\0')) {
                            (*DAT_101be64c)(0xde1,DAT_104d26cc);
                            goto LAB_100669bc;
                          }
                        }
                        goto LAB_100668d9;
                      }
                      iVar4 = *(int *)(local_c + 0x30);
                      iVar7 = (*DAT_101b26d8)();
                      if ((((char)local_2c == '\0') && (DAT_10542bb0 == '\0')) ||
                         (((DAT_10556b48 == 0 && (iVar4 != iVar7)) &&
                          ((DAT_10542bc0 == 0 || (iVar4 != DAT_10542bc0)))))) {
LAB_100669a9:
                        uVar12 = (uint)*(ushort *)(iVar3 + 0x4c);
                      }
                      else {
                        piVar6 = (int *)(*DAT_101b26d4)();
                        piVar14 = local_18;
                        if ((piVar6 == (int *)0x0) || (piVar6[0x2e5] == 0)) goto LAB_100669bc;
                        iVar4 = *piVar6 + -1;
                        if ((((iVar4 < 0) || (iVar7 = (*DAT_101b2698)(), iVar7 < iVar4)) ||
                            (iVar4 = (*DAT_1054582c)(iVar4), iVar4 == 0)) ||
                           (FUN_100648d0(iVar4), uVar12 = DAT_104d26c8, DAT_104d26c7 == '\0'))
                        goto LAB_100669a9;
                      }
                      (*DAT_101be64c)(0xde1,uVar12);
                      piVar14 = local_18;
                    }
                    else {
                      iVar4 = (*DAT_101b26d8)();
                      bVar17 = *(int *)(local_c + 0x30) == iVar4;
                      if ((bVar17) && (DAT_1018d578 != 0)) {
                        local_20 = (short *)0x0;
                        if (*(int *)(DAT_1018d578 + 0x9c) == 0x14) {
                          bVar17 = false;
                        }
                      }
                      if ((char)local_2c == '\0') {
                        if (DAT_1018ca1c == 0) {
                          pcVar10 = &DAT_1018a0dc;
                          do {
                            pcVar9 = pcVar10;
                            pcVar10 = pcVar9 + 1;
                          } while (*pcVar9 != '\0');
                          if (pcVar9 + -0x1018a0dc < (char *)0x3) {
                            (*DAT_101be64c)(0xde1,*(undefined2 *)(iVar3 + 0x4c));
                            goto LAB_100669bc;
                          }
                        }
                        FUN_10064d60();
                        if (DAT_104d26c6 == '\0') goto LAB_100668d9;
                        (*DAT_101be64c)(0xde1,DAT_104d26bc);
                      }
                      else {
                        if ((((DAT_10556b48 == 0) && (!bVar17)) &&
                            ((DAT_10542bc0 == 0 || (*(int *)(local_c + 0x30) != DAT_10542bc0)))) ||
                           (FUN_10064a40(0), DAT_104d26d3 == '\0')) goto LAB_100668d9;
                        (*DAT_101be64c)(0xde1,DAT_104d26dc);
                      }
                    }
                  }
                  else {
                    if (((DAT_10556b48 == 0) ||
                        ((((((iVar4 = FUN_100d3cf0(iVar3,"page1"), iVar4 == 0 ||
                             ((_DAT_1018a3f8 & 0x2000000) != 0)) &&
                            ((iVar4 = FUN_100d3cf0(iVar3,"page2"), iVar4 == 0 ||
                             ((_DAT_1018a3f8 & 0x4000000) != 0)))) &&
                           ((iVar4 = FUN_100d3cf0(iVar3,"page3"), iVar4 == 0 ||
                            ((_DAT_1018a3f8 & 0x8000000) != 0)))) &&
                          ((iVar4 = FUN_100d3cf0(iVar3,"page4"), iVar4 == 0 ||
                           ((_DAT_1018a3f8 & 0x10000000) != 0)))) &&
                         ((iVar4 = FUN_100d3cf0(iVar3,"page5"), iVar4 == 0 ||
                          ((_DAT_1018a3f8 & 0x20000000) != 0)))))) ||
                       (FUN_10064870(), DAT_104d26c4 == '\0')) goto LAB_100668d9;
                    (*DAT_101be64c)(0xde1,DAT_104d26c0);
                  }
                }
                else {
                  if (((DAT_1018ca1c == 0) ||
                      (iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"booksimon"), iVar4 != 0
                      )) || (FUN_100641d0(), DAT_104d26d2 == '\0')) goto LAB_100668d9;
                  (*DAT_101be64c)(0xde1,DAT_104d26d8);
                }
              }
              else {
                if ((((DAT_1018ca1c == 0) && (DAT_101b27bc == 0)) ||
                    ((iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"badkarne1"), iVar4 != 0
                     || ((iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"sophie.mdl"),
                         iVar4 != 0 ||
                         (iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"tortyrscen"),
                         iVar4 != 0)))))) ||
                   ((iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"deadvictim"), iVar4 != 0
                    || (((((iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"booksimon"),
                           iVar4 != 0 ||
                           (iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"coopend"),
                           iVar4 != 0)) ||
                          (iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),&DAT_1014dcd8),
                          iVar4 != 0)) ||
                         ((iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"gettingshotgun"),
                          iVar4 != 0 ||
                          (iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"booksimon"),
                          iVar4 != 0)))) ||
                        ((iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"sophie_dead"),
                         iVar4 != 0 || (FUN_10064ec0(), DAT_104d26d1 == '\0'))))))))
                goto LAB_100668d9;
                (*DAT_101be64c)(0xde1,DAT_104d26d4);
              }
            }
            else {
              if ((DAT_1018ca1c == 0) ||
                 ((iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"unfolded_clothes"),
                  iVar4 != 0 ||
                  (iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"booksimon"), iVar4 != 0))))
              {
                iVar4 = FUN_100d3cf0(*(undefined4 *)(local_c + 0x34),"unfolded_clothes");
                if ((iVar4 == 0) || (DAT_101b27bc < 1)) goto LAB_100668d9;
                uVar25 = 1;
              }
              else {
                uVar25 = 0;
              }
              FUN_10064340(uVar25);
              if (DAT_104d26c5 == '\0') {
LAB_100668d9:
                (*DAT_101be64c)(0xde1,*(undefined2 *)(iVar3 + 0x4c));
              }
              else {
                (*DAT_101be64c)(0xde1,DAT_104d26b8);
              }
            }
LAB_100669bc:
            uVar12 = *(uint *)(iVar3 + 0x40);
            if (((uVar12 & 0x20) != 0) && (DAT_104ce4b4 == 0)) {
              (*DAT_101be698)(0xbe2);
              (*DAT_101be650)(0x302,1);
              uVar12 = *(uint *)(iVar3 + 0x40);
            }
            if (((uVar12 & 0x40) != 0) && (DAT_104ce4b4 == 0)) {
              (*DAT_101be698)(0xbc0);
              (*DAT_101be644)(0x204,0x3f000000);
            }
            psVar5 = (short *)(int)*(short *)piVar14;
            local_20 = psVar5;
            if ((*(byte *)(local_28 + 0x40 + *(short *)(local_24 + *(int *)(iVar15 + 8) * 2) * 0x50)
                & 2) == 0) {
              while (local_20 = psVar5, psVar5 != (short *)0x0) {
                piVar14 = (int *)((int)piVar14 + 2);
                if ((int)psVar5 < 0) {
                  (*DAT_101be648)(6);
                  psVar5 = (short *)-(int)psVar5;
                  local_20 = psVar5;
                }
                else {
                  (*DAT_101be648)(5);
                }
                if (0 < (int)psVar5) {
LAB_10066e40:
                  iVar15 = local_14;
                  iVar4 = local_1c;
                  if (((DAT_1018d578 != 0) && (*(int *)(DAT_1018d578 + 0x9c) == 0xf)) &&
                     (DAT_10542a78 == 0)) {
                    if ((DAT_105458b0 != 3) || (DAT_10556b48 == 0)) {
LAB_10066eac:
                      iVar3 = (*DAT_101b26d8)();
                      if (*(int *)(local_c + 0x30) == iVar3) {
                        if (DAT_10545868 == 0xd) {
                          puVar24 = &DAT_1014dd7c;
                        }
                        else {
                          puVar24 = &DAT_1014dd80;
                        }
                        iVar4 = FUN_100d3cf0((uint)*(byte *)(*(short *)piVar14 + iVar15) * 0x70 +
                                             iVar4,puVar24);
                        iVar3 = local_10;
                        if (iVar4 != 0) goto LAB_10067796;
                      }
                      goto LAB_10066ef5;
                    }
                    if (DAT_10545864 == 0xd) {
                      puVar24 = &DAT_1014dd7c;
                    }
                    else {
                      puVar24 = &DAT_1014dd80;
                    }
                    iVar7 = FUN_100d3cf0((uint)*(byte *)(*(short *)piVar14 + local_14) * 0x70 +
                                         local_1c,puVar24);
                    iVar3 = local_10;
                    if (iVar7 == 0) goto LAB_10066eac;
                    goto LAB_10067796;
                  }
LAB_10066ef5:
                  iVar4 = local_c;
                  local_18 = *(int **)(*(int *)(local_c + 0x30) + 0x358);
                  if ((int)local_18 < 1) goto LAB_10067480;
                  iVar3 = local_10;
                  if (((uint)local_18 & 0x100) == 0) {
                    if ((char)local_18 < '\0') {
                      pcVar10 = "Bip01 L Leg1";
                      pbVar11 = (byte *)((uint)*(byte *)(*(short *)piVar14 + local_14) * 0x70 +
                                        local_1c);
                      pbVar8 = pbVar11;
                      do {
                        bVar1 = *pbVar8;
                        bVar17 = bVar1 < (byte)*pcVar10;
                        if (bVar1 != *pcVar10) {
LAB_10067006:
                          uVar12 = -(uint)bVar17 | 1;
                          goto LAB_1006700b;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar8[1];
                        bVar17 = bVar1 < (byte)pcVar10[1];
                        if (bVar1 != pcVar10[1]) goto LAB_10067006;
                        pbVar8 = pbVar8 + 2;
                        pcVar10 = pcVar10 + 2;
                      } while (bVar1 != 0);
                      uVar12 = 0;
LAB_1006700b:
                      if (uVar12 != 0) {
                        pcVar10 = "Bip01 L Foot";
                        do {
                          bVar1 = *pbVar11;
                          bVar17 = bVar1 < (byte)*pcVar10;
                          if (bVar1 != *pcVar10) goto LAB_10067038;
                          if (bVar1 == 0) break;
                          bVar1 = pbVar11[1];
                          bVar17 = bVar1 < (byte)pcVar10[1];
                          if (bVar1 != pcVar10[1]) goto LAB_10067038;
                          pbVar11 = pbVar11 + 2;
                          pcVar10 = pcVar10 + 2;
                        } while (bVar1 != 0);
LAB_10067034:
                        uVar12 = 0;
                        goto LAB_1006703d;
                      }
                      goto LAB_10067796;
                    }
                    goto LAB_10067048;
                  }
                  pcVar10 = "Bip01 L Leg1";
                  pbVar11 = (byte *)((uint)*(byte *)(*(short *)piVar14 + local_14) * 0x70 + local_1c
                                    );
                  pbVar8 = pbVar11;
                  do {
                    bVar1 = *pbVar8;
                    bVar17 = bVar1 < (byte)*pcVar10;
                    if (bVar1 != *pcVar10) {
LAB_10066f51:
                      uVar12 = -(uint)bVar17 | 1;
                      goto LAB_10066f56;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar8[1];
                    bVar17 = bVar1 < (byte)pcVar10[1];
                    if (bVar1 != pcVar10[1]) goto LAB_10066f51;
                    pbVar8 = pbVar8 + 2;
                    pcVar10 = pcVar10 + 2;
                  } while (bVar1 != 0);
                  uVar12 = 0;
LAB_10066f56:
                  if (uVar12 != 0) {
                    pcVar10 = "Bip01 L Leg";
                    pbVar8 = pbVar11;
                    do {
                      bVar1 = *pbVar8;
                      bVar17 = bVar1 < (byte)*pcVar10;
                      if (bVar1 != *pcVar10) {
LAB_10066f85:
                        uVar12 = -(uint)bVar17 | 1;
                        goto LAB_10066f8a;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar8[1];
                      bVar17 = bVar1 < (byte)pcVar10[1];
                      if (bVar1 != pcVar10[1]) goto LAB_10066f85;
                      pbVar8 = pbVar8 + 2;
                      pcVar10 = pcVar10 + 2;
                    } while (bVar1 != 0);
                    uVar12 = 0;
LAB_10066f8a:
                    if (uVar12 == 0) goto LAB_10067796;
                    pcVar10 = "Bip01 L Foot";
                    do {
                      bVar1 = *pbVar11;
                      bVar17 = bVar1 < (byte)*pcVar10;
                      if (bVar1 != *pcVar10) goto LAB_10067038;
                      if (bVar1 == 0) goto LAB_10067034;
                      bVar1 = pbVar11[1];
                      bVar17 = bVar1 < (byte)pcVar10[1];
                      if (bVar1 != pcVar10[1]) goto LAB_10067038;
                      pbVar11 = pbVar11 + 2;
                      pcVar10 = pcVar10 + 2;
                    } while (bVar1 != 0);
                    uVar12 = 0;
                    goto LAB_1006703d;
                  }
                  goto LAB_10067796;
                }
LAB_100677a8:
                (*DAT_101be6a0)();
                psVar5 = (short *)(int)*(short *)piVar14;
              }
            }
            else {
              while (psVar5 != (short *)0x0) {
                piVar14 = (int *)((int)piVar14 + 2);
                if ((int)psVar5 < 0) {
                  (*DAT_101be648)(6);
                  psVar5 = (short *)-(int)psVar5;
                }
                else {
                  (*DAT_101be648)(5);
                }
                for (; 0 < (int)psVar5; psVar5 = (short *)((int)psVar5 + -1)) {
                  (*DAT_101be714)((float)*(int *)(&DAT_104ce4b8 + *(short *)((int)piVar14 + 2) * 8)
                                  * (float)local_34,
                                  (float)*(int *)(&DAT_104ce4bc + *(short *)((int)piVar14 + 2) * 8)
                                  * (float)local_30);
                  iVar4 = FUN_100d3cf0(iVar3,"fullbright");
                  if (iVar4 == 0) {
                    iVar4 = (int)*(short *)((int)piVar14 + 2);
                    piVar6 = (int *)*(short **)(DAT_104ce4ac + iVar4 * 0xc);
                    piVar20 = (int *)*(short **)(DAT_104ce4ac + 4 + iVar4 * 0xc);
                    piVar22 = (int *)*(short **)(DAT_104ce4ac + 8 + iVar4 * 0xc);
                  }
                  else {
                    local_20 = *(short **)(DAT_104cddbc + 0xc);
                    local_18 = (int *)local_20;
                    iVar4 = FUN_100d3cf0(iVar3,"corona_");
                    piVar6 = local_18;
                    piVar20 = local_18;
                    piVar22 = local_18;
                    if (iVar4 != 0) {
                      fVar18 = (float10)(*DAT_101b2714)(0xbdcccccd,0x3dcccccd);
                      local_20 = (short *)(float)(fVar18 + (float10)(float)local_20);
                      piVar6 = (int *)local_20;
                      piVar20 = (int *)local_20;
                      piVar22 = (int *)local_20;
                    }
                  }
                  (*DAT_101be664)(piVar6,piVar20,piVar22,DAT_1018fe88);
                  iVar4 = (int)*(short *)piVar14;
                  (*DAT_101be748)(*(undefined4 *)(DAT_104ce4a8 + iVar4 * 0xc),
                                  *(undefined4 *)(DAT_104ce4a8 + 4 + iVar4 * 0xc),
                                  *(undefined4 *)(DAT_104ce4a8 + 8 + iVar4 * 0xc));
                  piVar14 = (int *)((int)piVar14 + 8);
                }
                (*DAT_101be6a0)();
                psVar5 = (short *)(int)*(short *)piVar14;
              }
            }
            uVar12 = *(uint *)(iVar3 + 0x40);
            if (((uVar12 & 0x20) != 0) && (DAT_104ce4b4 == 0)) {
              (*DAT_101be688)(0xbe2);
              uVar12 = *(uint *)(iVar3 + 0x40);
            }
            if (((uVar12 & 0x40) != 0) && (DAT_104ce4b4 == 0)) {
              (*DAT_101be688)(0xbc0);
              (*DAT_101be644)(0x204,0);
            }
            if (local_5 != '\0') {
              (*DAT_101be64c)(0xde1,DAT_104d26ec);
            }
            local_38 = (float)((int)local_38 + 1);
            iVar3 = *(int *)(local_c + 0x4c);
          } while ((int)local_38 < *(int *)(iVar3 + 0x48));
        }
      }
    }
  }
  return;
LAB_10067038:
  uVar12 = -(uint)bVar17 | 1;
LAB_1006703d:
  if (uVar12 == 0) goto LAB_10067796;
LAB_10067048:
  if (((uint)local_18 & 0x400) == 0) {
    if (((uint)local_18 & 0x200) != 0) {
      pcVar10 = "Bip01 R Leg1";
      pbVar11 = (byte *)((uint)*(byte *)(*(short *)piVar14 + local_14) * 0x70 + local_1c);
      pbVar8 = pbVar11;
      do {
        bVar1 = *pbVar8;
        bVar17 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_10067143:
          uVar12 = -(uint)bVar17 | 1;
          goto LAB_10067148;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar17 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10067143;
        pbVar8 = pbVar8 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar12 = 0;
LAB_10067148:
      if (uVar12 == 0) goto LAB_10067796;
      pcVar10 = "Bip01 R Foot";
      do {
        bVar1 = *pbVar11;
        bVar17 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) goto LAB_10067175;
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar17 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10067175;
        pbVar11 = pbVar11 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
LAB_10067171:
      uVar12 = 0;
      goto LAB_1006717a;
    }
  }
  else {
    pcVar10 = "Bip01 R Leg1";
    pbVar11 = (byte *)((uint)*(byte *)(*(short *)piVar14 + local_14) * 0x70 + local_1c);
    pbVar8 = pbVar11;
    do {
      bVar1 = *pbVar8;
      bVar17 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10067090:
        uVar12 = -(uint)bVar17 | 1;
        goto LAB_10067095;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar17 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10067090;
      pbVar8 = pbVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar12 = 0;
LAB_10067095:
    if (uVar12 == 0) goto LAB_10067796;
    pcVar10 = "Bip01 R Leg";
    pbVar8 = pbVar11;
    do {
      bVar1 = *pbVar8;
      bVar17 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_100670c4:
        uVar12 = -(uint)bVar17 | 1;
        goto LAB_100670c9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar17 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_100670c4;
      pbVar8 = pbVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar12 = 0;
LAB_100670c9:
    if (uVar12 == 0) goto LAB_10067796;
    pcVar10 = "Bip01 R Foot";
    do {
      bVar1 = *pbVar11;
      bVar17 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) goto LAB_10067175;
      if (bVar1 == 0) goto LAB_10067171;
      bVar1 = pbVar11[1];
      bVar17 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10067175;
      pbVar11 = pbVar11 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar12 = 0;
LAB_1006717a:
    if (uVar12 == 0) goto LAB_10067796;
  }
  if (((uint)local_18 & 0x10) != 0) {
    pcVar10 = "Bip01 L Arm1";
    pbVar11 = (byte *)((uint)*(byte *)(*(short *)piVar14 + local_14) * 0x70 + local_1c);
    pbVar8 = pbVar11;
    do {
      bVar1 = *pbVar8;
      bVar17 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_100671c4:
        uVar12 = -(uint)bVar17 | 1;
        goto LAB_100671c9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar17 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_100671c4;
      pbVar8 = pbVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar12 = 0;
LAB_100671c9:
    if (uVar12 == 0) goto LAB_10067796;
    pcVar10 = "Bip01 L Arm2";
    pbVar8 = pbVar11;
    do {
      bVar1 = *pbVar8;
      bVar17 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_100671f8:
        uVar12 = -(uint)bVar17 | 1;
        goto LAB_100671fd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar17 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_100671f8;
      pbVar8 = pbVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar12 = 0;
LAB_100671fd:
    if (uVar12 == 0) goto LAB_10067796;
    pcVar10 = "Bip01 L Hand";
    do {
      bVar1 = *pbVar11;
      bVar17 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) goto LAB_100672b2;
      if (bVar1 == 0) goto LAB_100672ae;
      bVar1 = pbVar11[1];
      bVar17 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_100672b2;
      pbVar11 = pbVar11 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar12 = 0;
    goto joined_r0x100672b9;
  }
  if (((uint)local_18 & 8) != 0) {
    pcVar10 = "Bip01 L Arm2";
    pbVar11 = (byte *)((uint)*(byte *)(*(short *)piVar14 + local_14) * 0x70 + local_1c);
    pbVar8 = pbVar11;
    do {
      bVar1 = *pbVar8;
      bVar17 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10067280:
        uVar12 = -(uint)bVar17 | 1;
        goto LAB_10067285;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar17 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10067280;
      pbVar8 = pbVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar12 = 0;
LAB_10067285:
    if (uVar12 == 0) goto LAB_10067796;
    pcVar10 = "Bip01 L Hand";
    do {
      bVar1 = *pbVar11;
      bVar17 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) goto LAB_100672b2;
      if (bVar1 == 0) break;
      bVar1 = pbVar11[1];
      bVar17 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_100672b2;
      pbVar11 = pbVar11 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
LAB_100672ae:
    uVar12 = 0;
    goto joined_r0x100672b9;
  }
  if (((uint)local_18 & 2) != 0) {
    pcVar10 = "Bip01 L Hand";
    pbVar8 = (byte *)((uint)*(byte *)(*(short *)piVar14 + local_14) * 0x70 + local_1c);
    do {
      bVar1 = *pbVar8;
      bVar17 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10067300:
        uVar12 = -(uint)bVar17 | 1;
        goto joined_r0x100672b9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar17 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10067300;
      pbVar8 = pbVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar12 = 0;
    goto joined_r0x100672b9;
  }
LAB_1006730d:
  if (((uint)local_18 & 0x40) == 0) {
    if (((uint)local_18 & 0x20) != 0) {
      pcVar10 = "Bip01 R Arm2";
      pbVar11 = (byte *)((uint)*(byte *)(*(short *)piVar14 + local_14) * 0x70 + local_1c);
      pbVar8 = pbVar11;
      do {
        bVar1 = *pbVar8;
        bVar17 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_10067400:
          uVar12 = -(uint)bVar17 | 1;
          goto LAB_10067405;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar17 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10067400;
        pbVar8 = pbVar8 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar12 = 0;
LAB_10067405:
      if (uVar12 == 0) goto LAB_10067796;
      pcVar10 = "Bip01 R Hand";
      do {
        bVar1 = *pbVar11;
        bVar17 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) goto LAB_10067470;
        if (bVar1 == 0) goto LAB_1006746c;
        bVar1 = pbVar11[1];
        bVar17 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10067470;
        pbVar11 = pbVar11 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar12 = 0;
      goto LAB_10067475;
    }
    if (((uint)local_18 & 4) != 0) {
      pcVar10 = "Bip01 R Hand";
      pbVar8 = (byte *)((uint)*(byte *)(*(short *)piVar14 + local_14) * 0x70 + local_1c);
      do {
        bVar1 = *pbVar8;
        bVar17 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) goto LAB_10067470;
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar17 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10067470;
        pbVar8 = pbVar8 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
LAB_1006746c:
      uVar12 = 0;
      goto LAB_10067475;
    }
  }
  else {
    pcVar10 = "Bip01 R Arm1";
    pbVar11 = (byte *)((uint)*(byte *)(*(short *)piVar14 + local_14) * 0x70 + local_1c);
    pbVar8 = pbVar11;
    do {
      bVar1 = *pbVar8;
      bVar17 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10067350:
        uVar12 = -(uint)bVar17 | 1;
        goto LAB_10067355;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar17 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10067350;
      pbVar8 = pbVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar12 = 0;
LAB_10067355:
    if (uVar12 == 0) goto LAB_10067796;
    pcVar10 = "Bip01 R Arm2";
    pbVar8 = pbVar11;
    do {
      bVar1 = *pbVar8;
      bVar17 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10067384:
        uVar12 = -(uint)bVar17 | 1;
        goto LAB_10067389;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar17 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10067384;
      pbVar8 = pbVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar12 = 0;
LAB_10067389:
    if (uVar12 == 0) goto LAB_10067796;
    pcVar10 = "Bip01 R Hand";
    do {
      bVar1 = *pbVar11;
      bVar17 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) goto LAB_10067470;
      if (bVar1 == 0) goto LAB_1006746c;
      bVar1 = pbVar11[1];
      bVar17 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10067470;
      pbVar11 = pbVar11 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar12 = 0;
LAB_10067475:
    if (uVar12 == 0) goto LAB_10067796;
  }
LAB_10067480:
  (*DAT_101be714)((float)(int)*(short *)((int)piVar14 + 4) * (float)local_34,
                  (float)(int)*(short *)((int)piVar14 + 6) * (float)local_30);
  if (*(float *)(DAT_104cddbc + 0xc) == 0.0) {
    iVar3 = (int)*(short *)((int)piVar14 + 2);
    (*DAT_101be664)(*(undefined4 *)(DAT_104ce4ac + iVar3 * 0xc),
                    *(undefined4 *)(DAT_104ce4ac + 4 + iVar3 * 0xc),
                    *(undefined4 *)(DAT_104ce4ac + 8 + iVar3 * 0xc),DAT_1018fe88);
    iVar3 = (int)*(short *)piVar14;
    (*DAT_101be748)(*(undefined4 *)(DAT_104ce4a8 + iVar3 * 0xc),
                    *(undefined4 *)(DAT_104ce4a8 + 4 + iVar3 * 0xc),
                    *(undefined4 *)(DAT_104ce4a8 + 8 + iVar3 * 0xc));
    iVar3 = local_10;
    goto LAB_10067796;
  }
  iVar15 = (*DAT_101b26d8)();
  iVar4 = *(int *)(iVar4 + 0x30);
  iVar7 = FUN_100d3cf0(local_10,"fullbright");
  iVar3 = local_10;
  if (iVar7 == 0) {
    if (((DAT_10556b48 == 0) && (iVar4 != iVar15)) ||
       ((iVar4 = FUN_100d3cf0(local_10,"sleeve"), iVar4 == 0 &&
        (iVar4 = FUN_100d3cf0(iVar3,"glove"), iVar4 == 0)))) {
LAB_10067659:
      iVar4 = (int)*(short *)((int)piVar14 + 2);
      psVar5 = *(short **)(DAT_104ce4ac + iVar4 * 0xc);
      psVar21 = *(short **)(DAT_104ce4ac + 4 + iVar4 * 0xc);
      psVar23 = *(short **)(DAT_104ce4ac + 8 + iVar4 * 0xc);
    }
    else {
      local_3c = (short *)(DAT_105595a4 + _DAT_105595a0);
      fVar18 = (float10)(*DAT_101b26e0)();
      local_18 = (int *)(float)fVar18;
      if ((float)local_3c <= (float)local_18) {
        fVar19 = 1.0;
      }
      else {
        fVar18 = (float10)(*DAT_101b26e0)();
        local_3c = (short *)(float)((fVar18 - (float10)_DAT_105595a0) / (float10)DAT_105595a4);
        psVar5 = (short *)0x3f800000;
        if ((float)local_3c <= 1.0) {
          psVar5 = local_3c;
        }
        fVar19 = (1.0 - (float)psVar5) + 2.0;
      }
      iVar4 = (int)*(short *)((int)piVar14 + 2);
      psVar5 = (short *)(*(float *)(DAT_104ce4ac + iVar4 * 0xc) / fVar19);
      psVar21 = (short *)(*(float *)(DAT_104ce4ac + 4 + iVar4 * 0xc) / fVar19);
      psVar23 = (short *)(*(float *)(DAT_104ce4ac + 8 + iVar4 * 0xc) / fVar19);
    }
  }
  else {
    iVar4 = FUN_100d3cf0(local_10,"fullbright_mess");
    if (iVar4 == 0) {
      local_3c = *(short **)(DAT_104cddbc + 0xc);
      local_18 = (int *)local_3c;
      iVar4 = FUN_100d3cf0(iVar3,"corona_");
      psVar5 = local_3c;
      psVar21 = local_3c;
      psVar23 = local_3c;
      if (iVar4 != 0) {
        fVar18 = (float10)(*DAT_101b2714)(0xbdcccccd,0x3dcccccd);
        local_18 = (int *)(float)(fVar18 + (float10)(float)local_18);
        psVar5 = (short *)local_18;
        psVar21 = (short *)local_18;
        psVar23 = (short *)local_18;
      }
    }
    else {
      if (DAT_1018cb49 != '\0') goto LAB_10067659;
      psVar5 = *(short **)(DAT_104cddbc + 0xc);
      psVar21 = psVar5;
      psVar23 = psVar5;
    }
  }
  (*DAT_101be664)(psVar5,psVar21,psVar23,DAT_1018fe88);
  iVar4 = (int)*(short *)piVar14;
  (*DAT_101be748)(*(undefined4 *)(DAT_104ce4a8 + iVar4 * 0xc),
                  *(undefined4 *)(DAT_104ce4a8 + 4 + iVar4 * 0xc),
                  *(undefined4 *)(DAT_104ce4a8 + 8 + iVar4 * 0xc));
LAB_10067796:
  piVar14 = (int *)((int)piVar14 + 8);
  local_20 = (short *)((int)local_20 + -1);
  if ((int)local_20 < 1) goto LAB_100677a8;
  goto LAB_10066e40;
LAB_10067175:
  uVar12 = -(uint)bVar17 | 1;
  goto LAB_1006717a;
LAB_100672b2:
  uVar12 = -(uint)bVar17 | 1;
joined_r0x100672b9:
  if (uVar12 == 0) goto LAB_10067796;
  goto LAB_1006730d;
LAB_10067470:
  uVar12 = -(uint)bVar17 | 1;
  goto LAB_10067475;
}

