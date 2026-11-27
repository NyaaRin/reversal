// 0x180141c00  FUN_180141c00
// size=1568 thunk=false
// signature: undefined FUN_180141c00()
// status: ok


undefined4 FUN_180141c00(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  pcVar2 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar2 = *(char **)param_1;
  }
  iVar1 = _stricmp(pcVar2,"name");
  if (iVar1 != 0) {
    pcVar2 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pcVar2 = *(char **)param_1;
    }
    iVar1 = _stricmp(pcVar2,"nick");
    if (iVar1 != 0) {
      pcVar2 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar2 = *(char **)param_1;
      }
      iVar1 = _stricmp(pcVar2,"rpname");
      if (iVar1 == 0) {
LAB_1801421e7:
        param_2 = param_2 + 4;
      }
      else {
        pcVar2 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
          pcVar2 = *(char **)param_1;
        }
        iVar1 = _stricmp(pcVar2,"rp_name");
        if (iVar1 == 0) goto LAB_1801421e7;
        pcVar2 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
          pcVar2 = *(char **)param_1;
        }
        iVar1 = _stricmp(pcVar2,"rp");
        if (iVar1 == 0) goto LAB_1801421e7;
        pcVar2 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
          pcVar2 = *(char **)param_1;
        }
        iVar1 = _stricmp(pcVar2,"job");
        if (iVar1 == 0) {
          param_2 = param_2 + 8;
          goto LAB_180141ce1;
        }
        pcVar2 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
          pcVar2 = *(char **)param_1;
        }
        iVar1 = _stricmp(pcVar2,"group");
        if (iVar1 == 0) {
LAB_1801421de:
          param_2 = param_2 + 0xc;
        }
        else {
          pcVar2 = param_1;
          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
            pcVar2 = *(char **)param_1;
          }
          iVar1 = _stricmp(pcVar2,"usergroup");
          if (iVar1 == 0) goto LAB_1801421de;
          pcVar2 = param_1;
          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
            pcVar2 = *(char **)param_1;
          }
          iVar1 = _stricmp(pcVar2,"rank");
          if (iVar1 == 0) goto LAB_1801421de;
          pcVar2 = param_1;
          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
            pcVar2 = *(char **)param_1;
          }
          iVar1 = _stricmp(pcVar2,"team");
          if (iVar1 == 0) {
            param_2 = param_2 + 0x10;
            goto LAB_180141ce1;
          }
          pcVar2 = param_1;
          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
            pcVar2 = *(char **)param_1;
          }
          iVar1 = _stricmp(pcVar2,"steamid");
          if (iVar1 == 0) {
LAB_1801421d2:
            param_2 = param_2 + 0x14;
          }
          else {
            pcVar2 = param_1;
            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
              pcVar2 = *(char **)param_1;
            }
            iVar1 = _stricmp(pcVar2,"steam");
            if (iVar1 == 0) goto LAB_1801421d2;
            pcVar2 = param_1;
            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
              pcVar2 = *(char **)param_1;
            }
            iVar1 = _stricmp(pcVar2,"distance");
            if (iVar1 == 0) {
LAB_1801421c6:
              param_2 = param_2 + 0x18;
            }
            else {
              pcVar2 = param_1;
              if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                pcVar2 = *(char **)param_1;
              }
              iVar1 = _stricmp(pcVar2,"dist");
              if (iVar1 == 0) goto LAB_1801421c6;
              pcVar2 = param_1;
              if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                pcVar2 = *(char **)param_1;
              }
              iVar1 = _stricmp(pcVar2,"weapon");
              if (iVar1 == 0) {
LAB_1801421ba:
                param_2 = param_2 + 0x30;
              }
              else {
                pcVar2 = param_1;
                if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                  pcVar2 = *(char **)param_1;
                }
                iVar1 = _stricmp(pcVar2,"wep");
                if (iVar1 == 0) goto LAB_1801421ba;
                pcVar2 = param_1;
                if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                  pcVar2 = *(char **)param_1;
                }
                iVar1 = _stricmp(pcVar2,"kills");
                if (iVar1 == 0) {
                  uVar3 = FUN_180013ba0(local_28,*(undefined4 *)(param_2 + 0x3d));
                  FUN_18020e8a0(param_3,uVar3);
                  FUN_18020e450(local_28);
                  return 1;
                }
                pcVar2 = param_1;
                if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                  pcVar2 = *(char **)param_1;
                }
                iVar1 = _stricmp(pcVar2,"myname");
                if (iVar1 == 0) {
LAB_1801421ae:
                  param_2 = param_2 + 0x1c;
                }
                else {
                  pcVar2 = param_1;
                  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                    pcVar2 = *(char **)param_1;
                  }
                  iVar1 = _stricmp(pcVar2,"me");
                  if (iVar1 == 0) goto LAB_1801421ae;
                  pcVar2 = param_1;
                  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                    pcVar2 = *(char **)param_1;
                  }
                  iVar1 = _stricmp(pcVar2,"myrpname");
                  if (iVar1 == 0) {
LAB_1801421a2:
                    param_2 = param_2 + 0x20;
                  }
                  else {
                    pcVar2 = param_1;
                    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                      pcVar2 = *(char **)param_1;
                    }
                    iVar1 = _stricmp(pcVar2,"myrp");
                    if (iVar1 == 0) goto LAB_1801421a2;
                    pcVar2 = param_1;
                    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                      pcVar2 = *(char **)param_1;
                    }
                    iVar1 = _stricmp(pcVar2,"myjob");
                    if (iVar1 == 0) {
                      param_2 = param_2 + 0x24;
                    }
                    else {
                      pcVar2 = param_1;
                      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                        pcVar2 = *(char **)param_1;
                      }
                      iVar1 = _stricmp(pcVar2,"mygroup");
                      if (iVar1 != 0) {
                        pcVar2 = param_1;
                        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                          pcVar2 = *(char **)param_1;
                        }
                        iVar1 = _stricmp(pcVar2,"myusergroup");
                        if (iVar1 != 0) {
                          pcVar2 = param_1;
                          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                            pcVar2 = *(char **)param_1;
                          }
                          iVar1 = _stricmp(pcVar2,"myteam");
                          if (iVar1 == 0) {
                            param_2 = param_2 + 0x2c;
                          }
                          else {
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"myhp");
                            if (iVar1 == 0) {
LAB_18014215d:
                              uVar3 = FUN_180013ba0(local_28,*(undefined4 *)(param_2 + 0x3c));
                              FUN_18020e8a0(param_3,uVar3);
                              FUN_18020e450(local_28);
                              return 1;
                            }
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"hp");
                            if (iVar1 == 0) goto LAB_18014215d;
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"health");
                            if (iVar1 == 0) goto LAB_18014215d;
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"myarmor");
                            if (iVar1 == 0) {
LAB_180142124:
                              uVar3 = FUN_180013ba0(local_28,*(undefined4 *)
                                                              ((longlong)param_2 + 0x1e4));
                              FUN_18020e8a0(param_3,uVar3);
                              FUN_18020e450(local_28);
                              return 1;
                            }
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"armor");
                            if (iVar1 == 0) goto LAB_180142124;
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"armour");
                            if (iVar1 == 0) goto LAB_180142124;
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"map");
                            if (iVar1 == 0) {
                              param_2 = param_2 + 0x34;
                            }
                            else {
                              pcVar2 = param_1;
                              if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                                pcVar2 = *(char **)param_1;
                              }
                              iVar1 = _stricmp(pcVar2,"time");
                              if (iVar1 != 0) {
                                if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                                  param_1 = *(char **)param_1;
                                }
                                iVar1 = _stricmp(param_1,"clock");
                                if (iVar1 != 0) {
                                  return 0;
                                }
                              }
                              param_2 = param_2 + 0x38;
                            }
                          }
                          goto LAB_180141ce1;
                        }
                      }
                      param_2 = param_2 + 0x28;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_180141ce1:
      if (param_3 == param_2) {
        return 1;
      }
      uVar3 = param_2[2];
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      goto LAB_180142206;
    }
  }
  if (param_3 == param_2) {
    return 1;
  }
  uVar3 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
LAB_180142206:
  FUN_180212700(param_3,param_2,uVar3);
  return 1;
}


