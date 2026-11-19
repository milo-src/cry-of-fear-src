
void __thiscall FUN_1003dd0f(void *this,uint *param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint *puVar9;
  size_t sVar10;
  size_t sVar11;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  void *this_08;
  void *this_09;
  void *this_10;
  void *this_11;
  void *this_12;
  void *this_13;
  void *this_14;
  void *this_15;
  void *this_16;
  void *this_17;
  void *this_18;
  void *this_19;
  void *this_20;
  undefined *puVar12;
  char *pcVar13;
  undefined4 *local_64;
  int *local_60;
  undefined4 *local_5c;
  int *local_58;
  undefined4 *local_48;
  int *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  
  uVar2 = FUN_100b1620(this,(byte *)param_1,(byte *)s_OpenGameMenu_100e5700);
  if (uVar2 == 0) {
    if (*(int *)((int)this + 0xb4) != 0) {
      pvVar3 = (void *)FUN_100743aa(0x18);
      if (pvVar3 == (void *)0x0) {
        local_3c = (undefined4 *)0x0;
      }
      else {
        local_3c = FUN_10072495(pvVar3,s_Command_100e5720,s_command_100e5718,&DAT_100e5710);
      }
      (**(code **)(*(int *)this + 0x7c))(*(undefined4 *)((int)this + 0xb4),local_3c,0);
    }
  }
  else {
    uVar2 = FUN_100b1620(param_1,(byte *)param_1,(byte *)s_OpenPlatformMenu_100e5728);
    if (uVar2 == 0) {
      if ((*(int *)((int)this + 0xb0) != 0) && (*(char *)((int)this + 0xb8) != '\0')) {
        pvVar3 = (void *)FUN_100743aa(0x18);
        if (pvVar3 == (void *)0x0) {
          local_40 = (undefined4 *)0x0;
        }
        else {
          local_40 = FUN_10072495(pvVar3,s_Command_100e574c,s_command_100e5744,&DAT_100e573c);
        }
        (**(code **)(*(int *)this + 0x7c))(*(undefined4 *)((int)this + 0xb0),local_40,0);
      }
    }
    else {
      uVar2 = FUN_100b1620(param_1,(byte *)param_1,(byte *)s_OpenPlayerListDialog_100e5754);
      if (uVar2 == 0) {
        FUN_1003f0ec(this);
      }
      else {
        uVar2 = FUN_100b1620(this_00,(byte *)param_1,(byte *)s_OpenNewGameDialog_100e576c);
        if (uVar2 == 0) {
          FUN_1003e718(this);
        }
        else {
          uVar2 = FUN_100b1620(this_01,(byte *)param_1,(byte *)s_OpenLoadGameDialog_100e5780);
          if (uVar2 == 0) {
            FUN_1003e7ae(this);
          }
          else {
            uVar2 = FUN_100b1620(param_1,(byte *)param_1,(byte *)s_OpenSaveGameDialog_100e5794);
            if (uVar2 == 0) {
              FUN_1003e844(this);
            }
            else {
              uVar2 = FUN_100b1620(this_02,(byte *)param_1,(byte *)s_OpenOptionsDialog_100e57a8);
              if (uVar2 == 0) {
                FUN_1003e8da(this);
              }
              else {
                uVar2 = FUN_100b1620(this_03,(byte *)param_1,(byte *)s_OpenServerBrowser_100e57bc);
                if (uVar2 == 0) {
                  FUN_1003e970();
                }
                else {
                  uVar2 = FUN_100b1620(param_1,(byte *)param_1,(byte *)s_OpenLoadDemoDialog_100e57d0
                                      );
                  if (uVar2 == 0) {
                    FUN_1003e98a(this);
                  }
                  else {
                    uVar2 = FUN_100b1620(this_04,(byte *)param_1,
                                         (byte *)s_OpenCreateMultiplayerGameDialog_100e57e4);
                    if (uVar2 == 0) {
                      FUN_1003ea22(this);
                    }
                    else {
                      uVar2 = FUN_100b1620(this_05,(byte *)param_1,
                                           (byte *)s_OpenNewCareerNameDialog_100e5804);
                      if (uVar2 == 0) {
                        pcVar13 = s_Condition_Zero_100e581c;
                        puVar4 = (undefined4 *)FUN_10036350();
                        pbVar5 = (byte *)FUN_100365cd(puVar4);
                        uVar2 = FUN_100b1620(this_06,pbVar5,(byte *)pcVar13);
                        if (uVar2 == 0) {
                          FUN_1003eb8a(this);
                        }
                      }
                      else {
                        uVar2 = FUN_100b1620(param_1,(byte *)param_1,
                                             (byte *)s_OpenPlayOnLineDialog_100e582c);
                        if (uVar2 == 0) {
                          pvVar3 = operator_new(0x134);
                          if (pvVar3 == (void *)0x0) {
                            local_44 = (int *)0x0;
                          }
                          else {
                            local_44 = FUN_10094a70(pvVar3,s__CZero_PlayOnLine_100e585c,
                                                    s__CZero_PlayOnLineText_100e5844,
                                                    (undefined4 *)0x0);
                          }
                          (**(code **)(*local_44 + 0xa4))(this);
                          pvVar3 = (void *)FUN_100743aa(0x18);
                          if (pvVar3 == (void *)0x0) {
                            local_48 = (undefined4 *)0x0;
                          }
                          else {
                            local_48 = FUN_10072495(pvVar3,s_Command_100e588c,s_command_100e5884,
                                                    s_QuitToPlayOnLine_100e5870);
                          }
                          FUN_10094f87(local_44,local_48);
                          (**(code **)(*local_44 + 0x2f8))(0);
                        }
                        else {
                          pvVar3 = (void *)_strlen(s_OpenCareerMapDialog_100e5894);
                          iVar6 = FUN_100b17b0((byte *)param_1,s_OpenCareerMapDialog_100e58a8,pvVar3
                                              );
                          if (iVar6 == 0) {
                            pcVar13 = s_Condition_Zero_100e58bc;
                            puVar4 = (undefined4 *)FUN_10036350();
                            pbVar5 = (byte *)FUN_100365cd(puVar4);
                            uVar2 = FUN_100b1620(this_08,pbVar5,(byte *)pcVar13);
                            if (uVar2 == 0) {
                              FUN_100b1620(param_1,(byte *)param_1,
                                           (byte *)s_OpenCareerMapDialog_1_100e58cc);
                              FUN_1003edbf(this);
                            }
                          }
                          else {
                            uVar2 = FUN_100b1620(this_07,(byte *)param_1,
                                                 (byte *)s_OpenCareerBotDialog_100e58e4);
                            if (uVar2 == 0) {
                              pcVar13 = s_Condition_Zero_100e58f8;
                              puVar4 = (undefined4 *)FUN_10036350();
                              pbVar5 = (byte *)FUN_100365cd(puVar4);
                              uVar2 = FUN_100b1620(this_10,pbVar5,(byte *)pcVar13);
                              if (uVar2 == 0) {
                                FUN_1003ee57(this);
                              }
                            }
                            else {
                              uVar2 = FUN_100b1620(this_09,(byte *)param_1,
                                                   (byte *)s_OpenCreateCareerGameDialog_100e5908);
                              if (uVar2 == 0) {
                                pcVar13 = s_Condition_Zero_100e5924;
                                puVar4 = (undefined4 *)FUN_10036350();
                                pbVar5 = (byte *)FUN_100365cd(puVar4);
                                uVar2 = FUN_100b1620(this_11,pbVar5,(byte *)pcVar13);
                                if (uVar2 == 0) {
                                  FUN_1003eeed(this);
                                }
                              }
                              else {
                                uVar2 = FUN_100b1620(param_1,(byte *)param_1,
                                                     (byte *)s_OpenChangeGameDialog_100e5934);
                                if (uVar2 == 0) {
                                  FUN_1003f056(this);
                                }
                                else {
                                  uVar2 = FUN_100b1620(this_12,(byte *)param_1,&DAT_100e594c);
                                  if (uVar2 == 0) {
                                    FUN_1003e5f3(this);
                                  }
                                  else {
                                    uVar2 = FUN_100b1620(this_13,(byte *)param_1,
                                                         (byte *)s_QuitNoConfirm_100e5954);
                                    if (uVar2 == 0) {
                                      if ((DAT_100ef800 != (int *)0x0) &&
                                         (cVar1 = (**(code **)(*DAT_100ef800 + 4))(), cVar1 != '\0')
                                         ) {
                                        FUN_100113eb(DAT_100ef800,0,0);
                                      }
                                      (**(code **)(DAT_100f9e8c + 0x50))(s_quit_100e5964);
                                      (**(code **)(*(int *)this + 0x74))(0);
                                      uVar7 = (*(code *)**(undefined4 **)this)();
                                      piVar8 = (int *)FUN_10058c8e();
                                      (**(code **)(*piVar8 + 0xcc))(uVar7);
                                    }
                                    else {
                                      uVar2 = FUN_100b1620(this_14,(byte *)param_1,
                                                           (byte *)s_QuitToPlayOnLine_100e596c);
                                      if (uVar2 == 0) {
                                        if ((DAT_100ef800 != (int *)0x0) &&
                                           (cVar1 = (**(code **)(*DAT_100ef800 + 4))(),
                                           cVar1 != '\0')) {
                                          FUN_100113eb(DAT_100ef800,0,0);
                                        }
                                        (**(code **)(DAT_100f9e8c + 0x50))(s_quit_100e5980);
                                        (**(code **)(*(int *)this + 0x74))(0);
                                        uVar7 = (*(code *)**(undefined4 **)this)();
                                        piVar8 = (int *)FUN_10058c8e();
                                        (**(code **)(*piVar8 + 0xcc))(uVar7);
                                        pcVar13 = s_steaminstall_exe_100e5988;
                                        puVar12 = &DAT_100e599c;
                                        piVar8 = (int *)FUN_10058c98();
                                        (**(code **)(*piVar8 + 0xc))(puVar12,pcVar13);
                                      }
                                      else {
                                        uVar2 = FUN_100b1620(this_15,(byte *)param_1,
                                                             (byte *)s_ResumeGame_100e59a4);
                                        if (uVar2 == 0) {
                                          if (DAT_100f9e84 != (int *)0x0) {
                                            (**(code **)(*DAT_100f9e84 + 0x1c))();
                                          }
                                        }
                                        else {
                                          uVar2 = FUN_100b1620(this_16,(byte *)param_1,
                                                               (byte *)s_Surrender_100e59b0);
                                          if (uVar2 == 0) {
                                            pvVar3 = operator_new(0x134);
                                            if (pvVar3 == (void *)0x0) {
                                              local_58 = (int *)0x0;
                                            }
                                            else {
                                              local_58 = FUN_10094a70(pvVar3,
                                                  s__Career_Surrender_100e59dc,
                                                  s__GameUI_QuitConfirmationText_100e59bc,this);
                                            }
                                            (**(code **)(*local_58 + 0x1c4))(0);
                                            pvVar3 = (void *)FUN_100743aa(0x18);
                                            if (pvVar3 == (void *)0x0) {
                                              local_5c = (undefined4 *)0x0;
                                            }
                                            else {
                                              local_5c = FUN_10072495(pvVar3,s_Command_100e5a08,
                                                                      s_command_100e5a00,
                                                                      s_ReallySurrender_100e59f0);
                                            }
                                            FUN_10094f87(local_58,local_5c);
                                            (**(code **)(*local_58 + 0xa4))(this);
                                            (**(code **)(*local_58 + 0x130))
                                                      (s_TrackerScheme_100e5a10);
                                            (**(code **)(*local_58 + 0x2f8))(0);
                                          }
                                          else {
                                            uVar2 = FUN_100b1620(this_17,(byte *)param_1,
                                                                 (byte *)s_ReallySurrender_100e5a20)
                                            ;
                                            if (uVar2 == 0) {
                                              (**(code **)(DAT_100f9e8c + 0x50))
                                                        (s_disconnect_100e5a30);
                                              (**(code **)(*DAT_100ef800 + 0x34))(0);
                                            }
                                            else {
                                              uVar2 = FUN_100b1620(param_1,(byte *)param_1,
                                                                   (byte *)s_EndRound_100e5a3c);
                                              if (uVar2 == 0) {
                                                pvVar3 = operator_new(0x134);
                                                if (pvVar3 == (void *)0x0) {
                                                  local_60 = (int *)0x0;
                                                }
                                                else {
                                                  local_60 = FUN_10094a70(pvVar3,
                                                  s__Career_EndRound_100e5a60,
                                                  s__Career_EndRoundText_100e5a48,this);
                                                }
                                                (**(code **)(*local_60 + 0x1c4))(0);
                                                pvVar3 = (void *)FUN_100743aa(0x18);
                                                if (pvVar3 == (void *)0x0) {
                                                  local_64 = (undefined4 *)0x0;
                                                }
                                                else {
                                                  local_64 = FUN_10072495(pvVar3,s_Command_100e5a94,
                                                                          s_command_100e5a8c,
                                                                                                                                                    
                                                  s_engine_career_endround_100e5a74);
                                                }
                                                FUN_10094f87(local_60,local_64);
                                                (**(code **)(*local_60 + 0xa4))(this);
                                                (**(code **)(*local_60 + 0x130))
                                                          (s_TrackerScheme_100e5a9c);
                                                (**(code **)(*local_60 + 0x2f8))(0);
                                              }
                                              else {
                                                uVar2 = FUN_100b1620(this_18,(byte *)param_1,
                                                                     (byte *)s_Disconnect_100e5aac);
                                                if (uVar2 == 0) {
                                                  (**(code **)(DAT_100f9e8c + 0x50))
                                                            (s_disconnect_100e5ab8);
                                                }
                                                else {
                                                  uVar2 = FUN_100b1620(this_19,(byte *)param_1,
                                                                       (byte *)
                                                  s_ReleaseModalWindow_100e5ac4);
                                                  if (uVar2 == 0) {
                                                    uVar7 = 0;
                                                    piVar8 = (int *)FUN_10058c8e();
                                                    (**(code **)(*piVar8 + 0xcc))(uVar7);
                                                  }
                                                  else {
                                                    uVar2 = FUN_100b1620(this_20,(byte *)param_1,
                                                                         (byte *)
                                                  s_RestartCareer_100e5ad8);
                                                  if (uVar2 == 0) {
                                                    FUN_100113eb(DAT_100ef800,0,0);
                                                    uVar7 = 0;
                                                    piVar8 = (int *)FUN_10058c8e();
                                                    (**(code **)(*piVar8 + 0xcc))(uVar7);
                                                    (**(code **)(DAT_100f9e8c + 0x50))
                                                              (s_disconnect_100e5ae8);
                                                    FUN_1003eb8a(this);
                                                  }
                                                  else {
                                                    puVar9 = FUN_100ae970(param_1,s_engine_100e5af4)
                                                    ;
                                                    if (puVar9 == (uint *)0x0) {
                                                      FUN_10060943();
                                                    }
                                                    else {
                                                      puVar9 = FUN_100ae970(param_1,
                                                  s_engine_100e5afc);
                                                  sVar10 = _strlen(s_engine_100e5b04);
                                                  sVar11 = _strlen((char *)((int)puVar9 + sVar10));
                                                  if (sVar11 != 0) {
                                                    (*DAT_100f9ca8)((char *)((int)puVar9 + sVar10));
                                                  }
                                                  if (DAT_100f9e84 != (int *)0x0) {
                                                    (**(code **)(*DAT_100f9e84 + 0x1c))();
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

