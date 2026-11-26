// 0x180034360  FUN_180034360
// size=1256 thunk=false
// signature: undefined FUN_180034360()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180034360(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  char ******_Str;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  undefined4 uVar12;
  double dVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  char *local_90;
  char *****local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  local_98 = param_2;
  cVar2 = FUN_18002e100();
  if ((cVar2 != '\0') && (DAT_1803faef0 != (code *)0x0)) {
    if (DAT_1803fa678 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      plVar11 = plVar9;
    }
    else {
      lVar8 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      plVar11 = (longlong *)0x0;
      if (lVar8 != 0) {
        plVar11 = *(longlong **)(lVar8 + 8);
      }
      if (DAT_1803fa678 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      }
    }
    iVar10 = 0;
    if ((plVar11 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
      if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
        iVar4 = (**(code **)*plVar9)(plVar9);
      }
      else {
        iVar4 = (*DAT_1803fb088)();
      }
      cVar2 = FUN_180032950(plVar11,plVar9);
      lVar1 = DAT_1803fcc58;
      lVar8 = DAT_1803fcc50;
      if (cVar2 == '\0') {
        while( true ) {
          if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
            iVar5 = (**(code **)*plVar9)(plVar9);
          }
          else {
            iVar5 = (*DAT_1803fb088)();
          }
          if (iVar5 <= iVar4) break;
          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar9[1] == 0)
             ) {
            (**(code **)(*plVar9 + 0x10))(plVar9,1);
          }
          else {
            iVar6 = (*DAT_1803fb088)();
            iVar5 = iVar10;
            if (-1 < iVar6 + -1) {
              iVar5 = iVar6 + -1;
            }
            (*DAT_1803faf10)(plVar9[1],iVar5);
          }
        }
      }
      else {
        for (; lVar8 != lVar1; lVar8 = lVar8 + 0x98) {
          if (*(int *)(lVar8 + 0x88) == 0) {
            cVar2 = *(int *)(lVar8 + 0x7c) != -1;
          }
          else {
            cVar2 = *(char *)(lVar8 + 0x8c);
          }
          if (cVar2 != '\0') {
            if ((*(int *)(lVar8 + 0x88) == 1) && (DAT_1803faf30 != (code *)0x0)) {
              uStack_80 = 0;
              local_78 = 0;
              local_70 = 0xf;
              local_88 = (char *****)0x0;
              cVar2 = (*DAT_1803faf30)(param_1,param_2,&local_88);
              if ((cVar2 != '\0') && (local_78 != 0)) {
                local_90 = (char *)0x0;
                _Str = &local_88;
                if (0xf < local_70) {
                  _Str = (char ******)local_88;
                }
                dVar13 = strtod((char *)_Str,&local_90);
                if (((local_90 != (char *)0x0) && (*local_90 == '\0')) &&
                   (sVar3 = _dclass(), sVar3 < 1)) {
                  do {
                    plVar11 = plVar9 + 1;
                    while( true ) {
                      if ((DAT_1803fb088 == (code *)0x0) || (*plVar11 == 0)) {
                        iVar5 = (**(code **)*plVar9)(plVar9);
                      }
                      else {
                        iVar5 = (*DAT_1803fb088)();
                      }
                      if (iVar5 <= iVar4) {
                        FUN_18020e450(&local_88);
                        return SUB84(dVar13,0);
                      }
                      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                         (*plVar11 == 0)) break;
                      iVar6 = (*DAT_1803fb088)();
                      iVar5 = iVar10;
                      if (-1 < iVar6 + -1) {
                        iVar5 = iVar6 + -1;
                      }
                      (*DAT_1803faf10)(*plVar11,iVar5);
                    }
                    (**(code **)(*plVar9 + 0x10))(plVar9,1);
                  } while( true );
                }
              }
              FUN_18020e450(&local_88);
            }
            else {
              if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
                iVar5 = (**(code **)*plVar9)(plVar9);
              }
              else {
                iVar5 = (*DAT_1803fb088)();
              }
              cVar2 = FUN_180033aa0(plVar11,plVar9,lVar8,param_1);
              if (cVar2 != '\0') {
                (*DAT_1803fafa0)(plVar11,local_98);
                (*DAT_1803faef0)(plVar11,0xfffffffe);
                iVar6 = (*DAT_1803faff8)(plVar11,0xffffffff);
                if (iVar6 == 3) {
                  uVar12 = (*DAT_1803fafc0)(plVar11,0xffffffff);
                  while( true ) {
                    if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
                      iVar5 = (**(code **)*plVar9)(plVar9);
                    }
                    else {
                      iVar5 = (*DAT_1803fb088)();
                    }
                    if (iVar5 <= iVar4) break;
                    if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                       (plVar9[1] == 0)) {
                      (**(code **)(*plVar9 + 0x10))(plVar9,1);
                    }
                    else {
                      iVar6 = (*DAT_1803fb088)();
                      iVar5 = iVar10;
                      if (-1 < iVar6 + -1) {
                        iVar5 = iVar6 + -1;
                      }
                      (*DAT_1803faf10)(plVar9[1],iVar5);
                    }
                  }
                  return uVar12;
                }
              }
              while( true ) {
                if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
                  iVar6 = (**(code **)*plVar9)(plVar9);
                }
                else {
                  iVar6 = (*DAT_1803fb088)();
                }
                param_2 = local_98;
                if (iVar6 <= iVar5) break;
                if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                   (plVar9[1] == 0)) {
                  (**(code **)(*plVar9 + 0x10))(plVar9,1);
                }
                else {
                  iVar7 = (*DAT_1803fb088)();
                  iVar6 = iVar10;
                  if (-1 < iVar7 + -1) {
                    iVar6 = iVar7 + -1;
                  }
                  (*DAT_1803faf10)(plVar9[1],iVar6);
                }
              }
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
          if (iVar5 <= iVar4) break;
          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar9[1] == 0)
             ) {
            (**(code **)(*plVar9 + 0x10))(plVar9,1);
          }
          else {
            iVar6 = (*DAT_1803fb088)();
            iVar5 = iVar10;
            if (-1 < iVar6 + -1) {
              iVar5 = iVar6 + -1;
            }
            (*DAT_1803faf10)(plVar9[1],iVar5);
          }
        }
      }
    }
  }
  return param_3;
}


