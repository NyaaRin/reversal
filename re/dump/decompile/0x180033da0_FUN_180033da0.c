// 0x180033da0  FUN_180033da0
// size=1460 thunk=false
// signature: undefined FUN_180033da0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ******* FUN_180033da0(undefined4 param_1,undefined8 param_2,undefined8 *******param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *******pppppppuVar8;
  longlong *plVar9;
  undefined8 *******pppppppuVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 ******local_78;
  undefined8 ******local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  local_98 = param_1;
  local_88 = param_2;
  local_78 = param_3;
  cVar2 = FUN_18002e100();
  if ((cVar2 != '\0') && (DAT_1803faef0 != (code *)0x0)) {
    if (DAT_1803fa678 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      plVar12 = plVar9;
    }
    else {
      lVar11 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      plVar12 = (longlong *)0x0;
      if (lVar11 != 0) {
        plVar12 = *(longlong **)(lVar11 + 8);
      }
      if (DAT_1803fa678 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      }
    }
    iVar13 = 0;
    if ((plVar12 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
      local_90 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(uint *)(local_90 + 0x2128) & 1) == 0) {
        *(uint *)(local_90 + 0x2128) = *(uint *)(local_90 + 0x2128) | 1;
        FUN_1802d8910(&LAB_180308ef0);
      }
      if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
        iVar3 = (**(code **)*plVar9)(plVar9);
      }
      else {
        iVar3 = (*DAT_1803fb088)();
      }
      cVar2 = FUN_180032950(plVar12,plVar9);
      if (cVar2 == '\0') {
        while( true ) {
          if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
            iVar4 = (**(code **)*plVar9)(plVar9);
          }
          else {
            iVar4 = (*DAT_1803fb088)();
          }
          if (iVar4 <= iVar3) break;
          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar9[1] == 0)
             ) {
            (**(code **)(*plVar9 + 0x10))(plVar9,1);
          }
          else {
            iVar5 = (*DAT_1803fb088)();
            iVar4 = iVar13;
            if (-1 < iVar5 + -1) {
              iVar4 = iVar5 + -1;
            }
            (*DAT_1803faf10)(plVar9[1],iVar4);
          }
        }
      }
      else {
        local_80 = DAT_1803fcc58;
        lVar11 = DAT_1803fcc58;
        lVar14 = DAT_1803fcc50;
        if (DAT_1803fcc50 != DAT_1803fcc58) {
          do {
            if (*(int *)(lVar14 + 0x88) == 0) {
              cVar2 = *(int *)(lVar14 + 0x7c) != -1;
            }
            else {
              cVar2 = *(char *)(lVar14 + 0x8c);
            }
            if (cVar2 != '\0') {
              if ((*(int *)(lVar14 + 0x88) == 1) && (DAT_1803faf30 != (code *)0x0)) {
                uStack_68 = 0;
                local_60 = 0;
                local_58 = 0xf;
                local_70 = (undefined8 *******)0x0;
                cVar2 = (*DAT_1803faf30)(param_1,param_2,&local_70);
                lVar1 = local_90;
                if ((cVar2 != '\0') && (local_60 != 0)) {
                  pppppppuVar10 = (undefined8 *******)(local_90 + 0x1028);
                  if (pppppppuVar10 != &local_70) {
                    pppppppuVar8 = &local_70;
                    if (0xf < local_58) {
                      pppppppuVar8 = (undefined8 *******)local_70;
                    }
                    FUN_180212700(pppppppuVar10,pppppppuVar8);
                  }
                  do {
                    plVar12 = plVar9 + 1;
                    while( true ) {
                      if ((DAT_1803fb088 == (code *)0x0) || (*plVar12 == 0)) {
                        iVar4 = (**(code **)*plVar9)(plVar9);
                      }
                      else {
                        iVar4 = (*DAT_1803fb088)();
                      }
                      if (iVar4 <= iVar3) {
                        if (0xf < *(ulonglong *)(lVar1 + 0x1040)) {
                          pppppppuVar10 = (undefined8 *******)*pppppppuVar10;
                        }
                        FUN_18020e450(&local_70);
                        return pppppppuVar10;
                      }
                      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                         (*plVar12 == 0)) break;
                      iVar5 = (*DAT_1803fb088)();
                      iVar4 = iVar13;
                      if (-1 < iVar5 + -1) {
                        iVar4 = iVar5 + -1;
                      }
                      (*DAT_1803faf10)(*plVar12,iVar4);
                    }
                    (**(code **)(*plVar9 + 0x10))(plVar9,1);
                  } while( true );
                }
                FUN_18020e450(&local_70);
              }
              else {
                if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
                  iVar4 = (**(code **)*plVar9)(plVar9);
                }
                else {
                  iVar4 = (*DAT_1803fb088)();
                }
                cVar2 = FUN_180033aa0(plVar12,plVar9,lVar14,param_1);
                if (cVar2 != '\0') {
                  (*DAT_1803fafa0)(plVar12,local_88);
                  (*DAT_1803faef0)(plVar12,0xfffffffe);
                  iVar5 = (*DAT_1803faff8)(plVar12,0xffffffff);
                  lVar1 = local_90;
                  if (iVar5 == 4) {
                    lVar11 = local_90 + 0x1028;
                    FUN_180212700(lVar11,&DAT_18033e5ea,0);
                    if (((DAT_1803faff8 != (code *)0x0) && (DAT_1803fb008 != (code *)0x0)) &&
                       (iVar5 = (*DAT_1803faff8)(plVar12,0xffffffff), iVar5 == 4)) {
                      local_50 = 0;
                      lVar7 = (*DAT_1803fb008)(plVar12,0xffffffff,&local_50);
                      if (lVar7 != 0) {
                        FUN_180212700(lVar11,lVar7,local_50);
                      }
                    }
                    lVar11 = local_80;
                    param_1 = local_98;
                    if (*(longlong *)(lVar1 + 0x1038) != 0) {
                      do {
                        while( true ) {
                          if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
                            iVar4 = (**(code **)*plVar9)(plVar9);
                          }
                          else {
                            iVar4 = (*DAT_1803fb088)();
                          }
                          if (iVar4 <= iVar3) {
                            if (*(ulonglong *)(local_90 + 0x1040) < 0x10) {
                              return (undefined8 *******)(local_90 + 0x1028);
                            }
                            return *(undefined8 ********)(local_90 + 0x1028);
                          }
                          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                             (plVar9[1] == 0)) break;
                          iVar5 = (*DAT_1803fb088)();
                          iVar4 = iVar13;
                          if (-1 < iVar5 + -1) {
                            iVar4 = iVar5 + -1;
                          }
                          (*DAT_1803faf10)(plVar9[1],iVar4);
                        }
                        (**(code **)(*plVar9 + 0x10))(plVar9,1);
                      } while( true );
                    }
                  }
                }
                while( true ) {
                  if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
                    iVar5 = (**(code **)*plVar9)(plVar9);
                  }
                  else {
                    iVar5 = (*DAT_1803fb088)();
                  }
                  param_2 = local_88;
                  if (iVar5 <= iVar4) break;
                  if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                     (plVar9[1] == 0)) {
                    (**(code **)(*plVar9 + 0x10))(plVar9,1);
                  }
                  else {
                    iVar6 = (*DAT_1803fb088)();
                    iVar5 = iVar13;
                    if (-1 < iVar6 + -1) {
                      iVar5 = iVar6 + -1;
                    }
                    (*DAT_1803faf10)(plVar9[1],iVar5);
                  }
                }
              }
            }
            lVar14 = lVar14 + 0x98;
          } while (lVar14 != lVar11);
        }
        while( true ) {
          if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
            iVar4 = (**(code **)*plVar9)(plVar9);
          }
          else {
            iVar4 = (*DAT_1803fb088)();
          }
          if (iVar4 <= iVar3) break;
          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar9[1] == 0)
             ) {
            (**(code **)(*plVar9 + 0x10))(plVar9,1);
          }
          else {
            iVar5 = (*DAT_1803fb088)();
            iVar4 = iVar13;
            if (-1 < iVar5 + -1) {
              iVar4 = iVar5 + -1;
            }
            (*DAT_1803faf10)(plVar9[1],iVar4);
          }
        }
      }
    }
  }
  return (undefined8 *******)local_78;
}


