// 0x1800318f0  FUN_1800318f0
// size=4175 thunk=false
// signature: undefined FUN_1800318f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1800318f0(undefined4 param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  char cVar18;
  undefined1 auStack_b8 [32];
  int local_98;
  char *local_90;
  undefined4 local_88;
  uint local_78;
  int local_74;
  undefined4 local_70;
  DWORD local_6c;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  char local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  local_74 = param_2;
  local_70 = param_1;
  local_60 = param_3;
  cVar4 = FUN_18002e100();
  if (cVar4 == '\0') goto LAB_180032919;
  if (DAT_1803fa678 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    plVar15 = plVar14;
  }
  else {
    lVar12 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    plVar14 = (longlong *)0x0;
    if (lVar12 != 0) {
      plVar14 = *(longlong **)(lVar12 + 8);
    }
    if (DAT_1803fa678 == (longlong *)0x0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    }
  }
  iVar16 = 0;
  if ((plVar14 == (longlong *)0x0) || (plVar15 == (longlong *)0x0)) goto LAB_180032919;
  local_58 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(local_58 + 0x3930) & 1) == 0) {
    *(uint *)(local_58 + 0x3930) = *(uint *)(local_58 + 0x3930) | 1;
    FUN_1802d8910(&LAB_180308ed0);
  }
  if ((DAT_1803fb088 == (code *)0x0) || (plVar15[1] == 0)) {
    iVar5 = (**(code **)*plVar15)(plVar15);
  }
  else {
    iVar5 = (*DAT_1803fb088)();
  }
  if (DAT_1803db330 == -1) {
    if ((DAT_1803faef0 != (code *)0x0) && (DAT_1803fafa0 != (code *)0x0)) {
      DVar6 = GetTickCount();
      uVar17 = 5000;
      if (DAT_1803fac79 != '\0') {
        uVar17 = 500;
      }
      cVar4 = '\0';
      local_68 = (undefined1 *)(CONCAT44(local_68._4_4_,param_1) & 0xffffffffffffff00);
      local_78 = uVar17;
      local_6c = DVar6;
      if ((((DAT_1803faff8 != (code *)0x0) && (DAT_1803fb088 != (code *)0x0)) &&
          (DAT_1803faf10 != (code *)0x0)) && (uVar17 < DVar6 - _DAT_180425ab8)) {
        _DAT_180425ab8 = DVar6;
        uVar7 = (*DAT_1803fb088)(plVar14);
        (*DAT_1803fafa0)(plVar14,&DAT_180340e30);
        (*DAT_1803faef0)(plVar14,0xffffd8ee);
        iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
        if (iVar8 == 5) {
          (*DAT_1803fafa0)(plVar14,"Receivers");
          (*DAT_1803faef0)(plVar14,0xfffffffe);
          iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
          if (iVar8 == 5) {
            uVar9 = (*DAT_1803fb088)();
            local_50[0] = '\0';
            uVar17 = local_78;
            iVar8 = iVar16;
            puVar1 = PTR_s_darkrp_darkrpvardisconnect_18033dfd8;
            while (local_78 = uVar17, puVar1 != (undefined *)0x0) {
              DVar6 = local_6c;
              if (DAT_1803db330 != -1) goto LAB_180031c33;
              (*DAT_1803fafa0)(plVar14,(&PTR_s_darkrp_darkrpvardisconnect_18033dfd8)[iVar8]);
              (*DAT_1803faef0)(plVar14,uVar9);
              iVar10 = (*DAT_1803faff8)(plVar14,0xffffffff);
              if (iVar10 == 6) {
                local_88 = 0;
                local_90 = local_50;
                local_98 = local_74;
                DAT_1803db330 = FUN_180031720(plVar15,plVar14);
                if (DAT_1803db330 != -1) {
                  FUN_180014410("[TRAMP] Late-init DarkRPVars (from net.Receivers.%s) ref=%d\n",
                                (&PTR_s_darkrp_darkrpvardisconnect_18033dfd8)[iVar8],DAT_1803db330);
                }
              }
              (*DAT_1803faf10)(plVar14,uVar9);
              iVar8 = iVar8 + 1;
              DVar6 = local_6c;
              uVar17 = local_78;
              puVar1 = (&PTR_s_darkrp_darkrpvardisconnect_18033dfd8)[iVar8];
            }
            if ((DAT_1803db330 == -1) && (local_50[0] != '\0')) {
              uVar2 = (ulonglong)local_68 >> 8;
              local_68 = (undefined1 *)CONCAT71((int7)uVar2,1);
              if (DAT_180425858 < 3) {
                DAT_180425858 = DAT_180425858 + 1;
                FUN_180014410(&DAT_180341860,local_70,local_74);
                uVar17 = local_78;
              }
            }
          }
        }
LAB_180031c33:
        (*DAT_1803faf10)(plVar14,uVar7);
        cVar4 = (char)local_68;
      }
      if (DAT_1803db330 == -1) {
        (*DAT_1803fafa0)(plVar14,"DarkRP");
        (*DAT_1803faef0)(plVar14,0xffffd8ee);
        iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
        if (iVar8 == 5) {
          (*DAT_1803fafa0)(plVar14,"ClientsideDarkRPVars");
          (*DAT_1803faef0)(plVar14,0xfffffffe);
          iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
          if (iVar8 == 5) {
            DAT_1803db330 = FUN_18002d7a0(plVar15);
            FUN_180014410("[TRAMP] Late-init DarkRPVars (from _G.DarkRP) ref=%d\n",DAT_1803db330);
          }
          else if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                  (plVar15[1] == 0)) {
            (**(code **)(*plVar15 + 0x10))(plVar15,1);
          }
          else {
            iVar10 = (*DAT_1803fb088)();
            iVar8 = iVar16;
            if (-1 < iVar10 + -1) {
              iVar8 = iVar10 + -1;
            }
            (*DAT_1803faf10)(plVar15[1],iVar8);
          }
        }
        if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar15[1] == 0))
        {
          (**(code **)(*plVar15 + 0x10))(plVar15,1);
        }
        else {
          iVar10 = (*DAT_1803fb088)();
          iVar8 = iVar16;
          if (-1 < iVar10 + -1) {
            iVar8 = iVar10 + -1;
          }
          (*DAT_1803faf10)(plVar15[1],iVar8);
        }
        if (DAT_1803db330 != -1) goto LAB_180032379;
        if ((DAT_1803fb040 != (code *)0x0) && (5000 < DVar6 - _DAT_1803fe420)) {
          _DAT_1803fe420 = DVar6;
          if ((DAT_1803faf38 == (code *)0x0) || (plVar15[1] == 0)) {
            FUN_180023e60(plVar15,2);
          }
          else {
            (*DAT_1803faf38)(plVar15[1],0xffffd8f0);
          }
          (*DAT_1803fafa0)(plVar14,"Player");
          (*DAT_1803faef0)(plVar14,0xfffffffe);
          iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
          if (iVar8 == 5) {
            (*DAT_1803fafa0)(plVar14,"getDarkRPVar");
            (*DAT_1803faef0)(plVar14,0xfffffffe);
            if ((DAT_1803faff8 == (code *)0x0) || (plVar15[1] == 0)) {
              cVar18 = (**(code **)(*plVar15 + 0x138))(plVar15,0xffffffff,6);
            }
            else {
              iVar8 = (*DAT_1803faff8)(plVar15[1],0xffffffff);
              cVar18 = iVar8 == 6;
            }
            if (cVar18 != '\0') {
              (*DAT_1803fb040)(plVar14,0xffffffff);
              iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
              if (iVar8 == 5) {
                (*DAT_1803fafa0)(plVar14,"DarkRP");
                (*DAT_1803faef0)(plVar14,0xfffffffe);
                iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
                if (iVar8 == 5) {
                  (*DAT_1803fafa0)(plVar14,"ClientsideDarkRPVars");
                  (*DAT_1803faef0)(plVar14,0xfffffffe);
                  iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
                  if (iVar8 == 5) {
                    DAT_1803db330 = FUN_18002d7a0(plVar15);
                    FUN_180014410("[TRAMP] Late-init DarkRPVars (from fenv) ref=%d\n",DAT_1803db330)
                    ;
                  }
                  else {
                    if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                       (plVar15[1] == 0)) {
                      (**(code **)(*plVar15 + 0x10))(plVar15,1);
                    }
                    else {
                      iVar10 = (*DAT_1803fb088)();
                      iVar8 = iVar16;
                      if (-1 < iVar10 + -1) {
                        iVar8 = iVar10 + -1;
                      }
                      (*DAT_1803faf10)(plVar15[1],iVar8);
                    }
                    if ((DAT_1803fac78 == '\0') &&
                       (DAT_1803fac78 = '\x01', DAT_1803fb048 != (code *)0x0)) {
                      FUN_180014410("[TRAMP] Method2: DarkRP keys dump:\n");
                      if ((DAT_1803fafd8 == (code *)0x0) || (plVar15[1] == 0)) {
                        (**(code **)(*plVar15 + 0xe0))(plVar15);
                      }
                      else {
                        (*DAT_1803fafd8)();
                      }
                      iVar10 = (*DAT_1803fb048)(plVar14,0xfffffffe);
                      for (iVar8 = iVar16; (iVar10 != 0 && (iVar8 < 0x32)); iVar8 = iVar8 + 1) {
                        iVar10 = (*DAT_1803faff8)(plVar14,0xfffffffe);
                        if (iVar10 == 4) {
                          uVar13 = (*DAT_1803fb008)(plVar14,0xfffffffe,0);
                          (*DAT_1803faff8)(plVar14,0xffffffff);
                          FUN_180014410("[TRAMP]   DarkRP.%s (type=%d)\n",uVar13);
                        }
                        if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                           (plVar15[1] == 0)) {
                          (**(code **)(*plVar15 + 0x10))(plVar15,1);
                        }
                        else {
                          iVar11 = (*DAT_1803fb088)();
                          iVar10 = iVar16;
                          if (-1 < iVar11 + -1) {
                            iVar10 = iVar11 + -1;
                          }
                          (*DAT_1803faf10)(plVar15[1],iVar10);
                        }
                        iVar10 = (*DAT_1803fb048)(plVar14,0xfffffffe);
                      }
                      FUN_180014410("[TRAMP] === DarkRP keys: %d ===\n",iVar8);
                      DVar6 = local_6c;
                    }
                  }
                }
              }
            }
          }
          while( true ) {
            if ((DAT_1803fb088 == (code *)0x0) || (plVar15[1] == 0)) {
              iVar8 = (**(code **)*plVar15)(plVar15);
            }
            else {
              iVar8 = (*DAT_1803fb088)();
            }
            if (iVar8 <= iVar5) break;
            if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
               (plVar15[1] == 0)) {
              (**(code **)(*plVar15 + 0x10))(plVar15,1);
            }
            else {
              iVar10 = (*DAT_1803fb088)();
              iVar8 = iVar16;
              if (-1 < iVar10 + -1) {
                iVar8 = iVar10 + -1;
              }
              (*DAT_1803faf10)(plVar15[1],iVar8);
            }
          }
          if (DAT_1803db330 != -1) goto LAB_180032379;
        }
        (*DAT_1803fafa0)(plVar14,"ClientsideDarkRPVars");
        (*DAT_1803faef0)(plVar14,0xffffd8ee);
        iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
        if (iVar8 == 5) {
          DAT_1803db330 = FUN_18002d7a0(plVar15);
          FUN_180014410("[TRAMP] Late-init DarkRPVars (from _G directly) ref=%d\n",DAT_1803db330);
        }
        else if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                (plVar15[1] == 0)) {
          (**(code **)(*plVar15 + 0x10))(plVar15,1);
        }
        else {
          iVar10 = (*DAT_1803fb088)();
          iVar8 = iVar16;
          if (-1 < iVar10 + -1) {
            iVar8 = iVar10 + -1;
          }
          (*DAT_1803faf10)(plVar15[1],iVar8);
        }
        if (DAT_1803db330 != -1) goto LAB_180032379;
        if (uVar17 < DVar6 - _DAT_1803fea20) {
          _DAT_1803fea20 = DVar6;
          if (DAT_1803fb088 == (code *)0x0) {
            uVar7 = (**(code **)*plVar15)(plVar15);
          }
          else {
            uVar7 = (*DAT_1803fb088)(plVar14);
          }
          if ((DAT_1803faf38 == (code *)0x0) || (plVar15[1] == 0)) {
            FUN_180023e60(plVar15,2);
          }
          else {
            (*DAT_1803faf38)(plVar15[1],0xffffd8f0);
          }
          (*DAT_1803fafa0)(plVar14,"Player");
          (*DAT_1803faef0)(plVar14,0xfffffffe);
          iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
          if (iVar8 == 5) {
            (*DAT_1803fafa0)(plVar14,"getDarkRPVar");
            (*DAT_1803faef0)(plVar14,0xfffffffe);
            iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
            if (iVar8 == 6) {
              local_50[0] = '\0';
              local_88 = 0;
              local_90 = local_50;
              local_98 = local_74;
              DAT_1803db330 = FUN_180031720(plVar15,plVar14);
              if (DAT_1803db330 == -1) {
                if (local_50[0] != '\0') {
                  cVar4 = '\x01';
                }
              }
              else {
                FUN_180014410("[TRAMP] Late-init DarkRPVars (from getDarkRPVar upvalues) ref=%d\n",
                              DAT_1803db330);
              }
            }
          }
          if (DAT_1803faf10 == (code *)0x0) {
            while( true ) {
              if ((DAT_1803fb088 == (code *)0x0) || (plVar15[1] == 0)) {
                iVar8 = (**(code **)*plVar15)(plVar15);
              }
              else {
                iVar8 = (*DAT_1803fb088)();
              }
              if (iVar8 <= iVar5) break;
              if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                 (plVar15[1] == 0)) {
                (**(code **)(*plVar15 + 0x10))(plVar15,1);
              }
              else {
                iVar10 = (*DAT_1803fb088)();
                iVar8 = iVar16;
                if (-1 < iVar10 + -1) {
                  iVar8 = iVar10 + -1;
                }
                (*DAT_1803faf10)(plVar15[1],iVar8);
              }
            }
          }
          else {
            (*DAT_1803faf10)(plVar14,uVar7);
          }
          if (DAT_1803db330 != -1) goto LAB_180032379;
        }
        if (cVar4 == '\0') goto LAB_180032379;
        DAT_1803fac79 = '\x01';
      }
      else {
LAB_180032379:
        DAT_1803fac79 = '\0';
      }
      param_2 = local_74;
      param_1 = local_70;
      if (DAT_1803db330 != -1) goto LAB_1800323ee;
    }
  }
  else {
LAB_1800323ee:
    iVar8 = DAT_1803db330;
    if ((DAT_1803faef0 != (code *)0x0) && (DAT_1803faed8 != (code *)0x0)) {
      if (DAT_1803db330 < 0x40000000) {
        (**(code **)(*plVar15 + 0x128))(plVar15,DAT_1803db330);
        iVar8 = DAT_1803db330;
      }
      else {
        lVar12 = plVar15[1];
        cVar4 = FUN_18002d6e0(lVar12);
        if (cVar4 != '\0') {
          (*DAT_1803faf38)(lVar12,0xffffd8ed);
          iVar10 = (*DAT_1803faff8)(lVar12,0xffffffff);
          pcVar3 = DAT_1803faf10;
          if (iVar10 == 5) {
            (*DAT_1803faf88)(lVar12,0xffffffff,iVar8 + -0x40000000);
            (*DAT_1803faee0)(lVar12,0xfffffffe);
            iVar8 = DAT_1803db330;
            goto LAB_1800324b3;
          }
          iVar8 = (*DAT_1803fb088)(lVar12);
          (*pcVar3)(lVar12,iVar8 + -1);
          iVar8 = DAT_1803db330;
        }
        if ((lVar12 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
          (*DAT_1803fafd8)(lVar12);
          iVar8 = DAT_1803db330;
        }
      }
LAB_1800324b3:
      if ((DAT_1803faff8 == (code *)0x0) ||
         (iVar10 = (*DAT_1803faff8)(plVar14,0xffffffff), iVar8 = DAT_1803db330, iVar10 != 5)) {
        if (iVar8 != -1) {
          FUN_180014410(&DAT_180341768,iVar8,"ref is no longer a table");
          FUN_18002d8c0(plVar15,DAT_1803db330);
          DAT_1803db330 = -1;
          DAT_1803faf00 = 0;
          DAT_1803fac78 = '\0';
        }
        while( true ) {
          if ((DAT_1803fb088 == (code *)0x0) || (plVar15[1] == 0)) {
            iVar8 = (**(code **)*plVar15)(plVar15);
          }
          else {
            iVar8 = (*DAT_1803fb088)();
          }
          if (iVar8 <= iVar5) break;
          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
             (plVar15[1] == 0)) {
            (**(code **)(*plVar15 + 0x10))(plVar15,1);
          }
          else {
            iVar10 = (*DAT_1803fb088)();
            iVar8 = iVar16;
            if (-1 < iVar10 + -1) {
              iVar8 = iVar10 + -1;
            }
            (*DAT_1803faf10)(plVar15[1],iVar8);
          }
        }
      }
      else {
        (*DAT_1803faed8)(plVar14,(double)param_2);
        (*DAT_1803faef0)(plVar14,0xfffffffe);
        iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
        if (iVar8 == 5) {
LAB_1800326fd:
          uVar13 = local_60;
          DAT_1803faf00 = 0;
          (*DAT_1803fafa0)(plVar14,local_60);
          (*DAT_1803faef0)(plVar14,0xfffffffe);
          iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
          if (iVar8 == 4) {
            local_68 = (undefined1 *)FUN_18002d0b0(plVar14);
          }
          else {
            local_68 = &DAT_18033e5ea;
            if (DAT_1803fed84 < 5) {
              DAT_1803fed84 = DAT_1803fed84 + 1;
              FUN_180014410("[TRAMP] SafeGetDarkRPVar: DarkRPVars[%d][%s] is type=%d (not string)\n"
                            ,param_2,uVar13,iVar8);
            }
          }
          while( true ) {
            if ((DAT_1803fb088 == (code *)0x0) || (plVar15[1] == 0)) {
              iVar8 = (**(code **)*plVar15)(plVar15);
            }
            else {
              iVar8 = (*DAT_1803fb088)();
            }
            if (iVar8 <= iVar5) break;
            if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
               (plVar15[1] == 0)) {
              (**(code **)(*plVar15 + 0x10))(plVar15,1);
            }
            else {
              iVar10 = (*DAT_1803fb088)();
              iVar8 = iVar16;
              if (-1 < iVar10 + -1) {
                iVar8 = iVar10 + -1;
              }
              (*DAT_1803faf10)(plVar15[1],iVar8);
            }
          }
          return local_68;
        }
        if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar15[1] == 0))
        {
          (**(code **)(*plVar15 + 0x10))(plVar15,1);
        }
        else {
          iVar10 = (*DAT_1803fb088)();
          iVar8 = iVar16;
          if (-1 < iVar10 + -1) {
            iVar8 = iVar10 + -1;
          }
          (*DAT_1803faf10)(plVar15[1],iVar8);
        }
        cVar4 = FUN_18002eb00(plVar14,plVar15,param_1);
        if (cVar4 == '\0') {
          while( true ) {
            if ((DAT_1803fb088 == (code *)0x0) || (plVar15[1] == 0)) {
              iVar8 = (**(code **)*plVar15)(plVar15);
            }
            else {
              iVar8 = (*DAT_1803fb088)();
            }
            if (iVar8 <= iVar5) break;
            if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
               (plVar15[1] == 0)) {
              (**(code **)(*plVar15 + 0x10))(plVar15,1);
            }
            else {
              iVar10 = (*DAT_1803fb088)();
              iVar8 = iVar16;
              if (-1 < iVar10 + -1) {
                iVar8 = iVar10 + -1;
              }
              (*DAT_1803faf10)(plVar15[1],iVar8);
            }
          }
        }
        else {
          (*DAT_1803faef0)(plVar14,0xfffffffe);
          iVar8 = (*DAT_1803faff8)(plVar14,0xffffffff);
          if (iVar8 == 5) goto LAB_1800326fd;
          if (DAT_1803f9214 < 5) {
            DAT_1803f9214 = DAT_1803f9214 + 1;
            FUN_180014410("[TRAMP] SafeGetDarkRPVar: DarkRPVars[%d] is not a table (type=%d) ref=%d\n"
                          ,param_2,iVar8,DAT_1803db330);
          }
          DAT_1803faf00 = DAT_1803faf00 + 1;
          if ((0xff < DAT_1803faf00) && (DAT_1803db330 != -1)) {
            FUN_180014410(&DAT_180341768,DAT_1803db330,"no row for any player");
            FUN_18002d8c0(plVar15,DAT_1803db330);
            DAT_1803db330 = -1;
            DAT_1803faf00 = 0;
            DAT_1803fac78 = '\0';
          }
          while( true ) {
            if ((DAT_1803fb088 == (code *)0x0) || (plVar15[1] == 0)) {
              iVar8 = (**(code **)*plVar15)(plVar15);
            }
            else {
              iVar8 = (*DAT_1803fb088)();
            }
            if (iVar8 <= iVar5) break;
            if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
               (plVar15[1] == 0)) {
              (**(code **)(*plVar15 + 0x10))(plVar15,1);
            }
            else {
              iVar10 = (*DAT_1803fb088)();
              iVar8 = iVar16;
              if (-1 < iVar10 + -1) {
                iVar8 = iVar10 + -1;
              }
              (*DAT_1803faf10)(plVar15[1],iVar8);
            }
          }
        }
      }
      goto LAB_180032919;
    }
  }
  if (DAT_1803fe654 < 3) {
    DAT_1803fe654 = DAT_1803fe654 + 1;
    FUN_180014410("[TRAMP] SafeGetDarkRPVar: skipped (ref=%d rawget=%p pushnum=%p)\n",DAT_1803db330,
                  DAT_1803faef0,DAT_1803faed8);
  }
  while( true ) {
    if ((DAT_1803fb088 == (code *)0x0) || (plVar15[1] == 0)) {
      iVar8 = (**(code **)*plVar15)(plVar15);
    }
    else {
      iVar8 = (*DAT_1803fb088)();
    }
    if (iVar8 <= iVar5) break;
    if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar15[1] == 0)) {
      (**(code **)(*plVar15 + 0x10))(plVar15,1);
    }
    else {
      iVar10 = (*DAT_1803fb088)();
      iVar8 = iVar16;
      if (-1 < iVar10 + -1) {
        iVar8 = iVar10 + -1;
      }
      (*DAT_1803faf10)(plVar15[1],iVar8);
    }
  }
LAB_180032919:
  return &DAT_18033e5ea;
}


