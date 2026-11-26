// 0x180037890  FUN_180037890
// size=989 thunk=false
// signature: undefined FUN_180037890()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180037890(longlong param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  char *pcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  DWORD local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  if ((((param_1 != 0) &&
       (local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_a8, param_2 != (longlong *)0x0)) &&
      (DAT_1803fa608 != 0)) && (iVar6 = *(int *)(DAT_1803fa608 + 0x1c), 0 < iVar6)) {
    if (0x80 < iVar6) {
      iVar6 = 0x80;
    }
    local_84 = iVar6;
    local_80 = GetTickCount();
    local_70 = DAT_1803fcc58;
    plVar12 = DAT_1803fa360;
    lVar11 = DAT_1803fcc50;
    lVar10 = DAT_1803fcc58;
    if (DAT_1803fcc50 != DAT_1803fcc58) {
      do {
        if ((*(int *)(lVar11 + 0x88) != 0) &&
           ((*(int *)(lVar11 + 0x90) == 0 || (499 < local_80 - *(int *)(lVar11 + 0x90))))) {
          *(DWORD *)(lVar11 + 0x90) = local_80;
          bVar1 = false;
          local_88 = 1;
          local_78 = lVar11;
          if (iVar6 != 0) {
            do {
              iVar7 = local_88;
              lVar10 = local_70;
              if (bVar1) break;
              if ((plVar12 != (longlong *)0x0) &&
                 (lVar10 = (**(code **)(*plVar12 + 0x18))(plVar12,local_88), plVar12 = DAT_1803fa360
                 , lVar10 != 0)) {
                if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
                  iVar4 = (**(code **)*param_2)(param_2);
                }
                else {
                  iVar4 = (*DAT_1803fb088)();
                }
                cVar3 = FUN_180033790(param_1,param_2,*(undefined4 *)(lVar11 + 0x88),iVar7);
                if (cVar3 != '\0') {
                  local_60 = (undefined8 *)0x0;
                  puStack_58 = (undefined8 *)0x0;
                  local_50 = 0;
                  if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
                    uVar5 = (**(code **)*param_2)(param_2);
                  }
                  else {
                    uVar5 = (*DAT_1803fb088)();
                  }
                  FUN_180034850(param_1,uVar5,&local_60,0x20);
                  puVar2 = puStack_58;
                  for (puVar15 = local_60; puVar15 != puVar2; puVar15 = puVar15 + 4) {
                    puVar13 = puVar15;
                    if (0xf < (ulonglong)puVar15[3]) {
                      puVar13 = (undefined8 *)*puVar15;
                    }
                    (*DAT_1803fafa0)(param_1,puVar13);
                    (*DAT_1803faef0)(param_1,uVar5);
                    iVar6 = (*DAT_1803faff8)(param_1,0xffffffff);
                    if (iVar6 == 4) {
                      local_68 = 0;
                      lVar11 = (*DAT_1803fb008)(param_1,0xffffffff,&local_68);
                      if ((lVar11 != 0) && (local_68 != 0)) {
                        bVar1 = true;
                      }
                    }
                    if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                       (param_2[1] == 0)) {
                      (**(code **)(*param_2 + 0x10))(param_2,1);
                    }
                    else {
                      iVar7 = (*DAT_1803fb088)();
                      iVar6 = 0;
                      if (-1 < iVar7 + -1) {
                        iVar6 = iVar7 + -1;
                      }
                      (*DAT_1803faf10)(param_2[1],iVar6);
                    }
                    iVar7 = local_88;
                    if (bVar1 != false) break;
                  }
                  FUN_18020d5c0(&local_60);
                  iVar6 = local_84;
                }
                while( true ) {
                  if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
                    iVar8 = (**(code **)*param_2)(param_2);
                  }
                  else {
                    iVar8 = (*DAT_1803fb088)();
                  }
                  plVar12 = DAT_1803fa360;
                  lVar11 = local_78;
                  if (iVar8 <= iVar4) break;
                  if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                     (param_2[1] == 0)) {
                    (**(code **)(*param_2 + 0x10))(param_2,1);
                  }
                  else {
                    iVar9 = (*DAT_1803fb088)();
                    iVar8 = 0;
                    if (-1 < iVar9 + -1) {
                      iVar8 = iVar9 + -1;
                    }
                    (*DAT_1803faf10)(param_2[1],iVar8);
                  }
                }
              }
              local_88 = iVar7 + 1;
              lVar10 = local_70;
            } while (local_88 <= iVar6);
          }
          if (bVar1 != (bool)*(char *)(lVar11 + 0x8c)) {
            *(bool *)(lVar11 + 0x8c) = bVar1;
            pcVar16 = "empty";
            if (bVar1 != false) {
              pcVar16 = "HAS DATA";
            }
            pcVar14 = "@nwvars";
            if (*(int *)(lVar11 + 0x88) == 2) {
              pcVar14 = "@nw2vars";
            }
            FUN_180014410("[TRAMP] NW pseudo-store \'%s\' -> %s\n",pcVar14,pcVar16);
            plVar12 = DAT_1803fa360;
          }
        }
        lVar11 = lVar11 + 0x98;
      } while (lVar11 != lVar10);
    }
  }
  return;
}


