// 0x1801fd890  FUN_1801fd890
// size=1527 thunk=false
// signature: undefined FUN_1801fd890()
// status: ok


void FUN_1801fd890(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 ******ppppppuVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  HMODULE pHVar12;
  ulonglong uVar13;
  INT_PTR IVar14;
  ulonglong uVar15;
  char *pcVar16;
  longlong *plVar17;
  undefined8 *******pppppppuVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong _Size;
  char *pcVar22;
  longlong *plVar23;
  undefined8 ******local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 *local_60;
  
  if (DAT_1803ff980 != '\0') {
    return;
  }
  local_60 = param_3;
  cVar8 = FUN_18003a090("Net_Receive");
  if (cVar8 == '\0') {
    return;
  }
  plVar11 = (longlong *)FUN_180039770();
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  lVar1 = plVar11[1];
  if (lVar1 == 0) {
    return;
  }
  if ((DAT_1803ff988 != 0) && (DAT_1803ff988 != lVar1)) {
    FUN_180039a50(0);
    return;
  }
  local_80 = (undefined8 *******)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_18001d080(&local_80,"Net_Receive",0xb);
  uVar15 = local_68;
  uVar13 = local_70;
  ppppppuVar7 = local_80;
  plVar6 = DAT_1805c7c10;
  plVar19 = (longlong *)DAT_1805c7c10[1];
  cVar8 = *(char *)((longlong)plVar19 + 0x19);
  plVar23 = DAT_1805c7c10;
  while (cVar8 == '\0') {
    plVar17 = plVar19 + 4;
    pppppppuVar18 = &local_80;
    if (0xf < uVar15) {
      pppppppuVar18 = (undefined8 *******)ppppppuVar7;
    }
    uVar2 = plVar19[6];
    if (0xf < (ulonglong)plVar19[7]) {
      plVar17 = (longlong *)*plVar17;
    }
    _Size = uVar2;
    if (uVar13 < uVar2) {
      _Size = uVar13;
    }
    iVar9 = memcmp(plVar17,pppppppuVar18,_Size);
    plVar17 = plVar19;
    if (iVar9 == 0) {
      if (uVar2 < uVar13) goto LAB_1801fd9e7;
    }
    else if (iVar9 < 0) {
LAB_1801fd9e7:
      plVar19 = plVar19 + 2;
      plVar17 = plVar23;
    }
    plVar19 = (longlong *)*plVar19;
    plVar23 = plVar17;
    cVar8 = *(char *)((longlong)plVar19 + 0x19);
  }
  if (*(char *)((longlong)plVar23 + 0x19) == '\0') {
    plVar19 = plVar23 + 4;
    uVar2 = plVar23[6];
    if (0xf < (ulonglong)plVar23[7]) {
      plVar19 = (longlong *)*plVar19;
    }
    pppppppuVar18 = &local_80;
    if (0xf < uVar15) {
      pppppppuVar18 = (undefined8 *******)ppppppuVar7;
    }
    uVar15 = uVar13;
    if (uVar2 < uVar13) {
      uVar15 = uVar2;
    }
    iVar9 = memcmp(pppppppuVar18,plVar19,uVar15);
    if (iVar9 == 0) {
      if (uVar2 <= uVar13) goto LAB_1801fd9f5;
    }
    else if (-1 < iVar9) goto LAB_1801fd9f5;
  }
  plVar23 = plVar6;
LAB_1801fd9f5:
  FUN_18020e450(&local_80);
  if (plVar23 != DAT_1805c7c10) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar12 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar12,"lua_gettop");
    }
    uVar13 = (*DAT_1803fcfa0)(lVar1);
    puVar3 = (undefined8 *)plVar23[9];
    for (puVar21 = (undefined8 *)plVar23[8]; puVar21 != puVar3; puVar21 = puVar21 + 6) {
      if ((*(char *)(puVar21 + 5) == '\0') && (iVar9 = *(int *)(puVar21 + 4), iVar9 != -1)) {
        if (iVar9 < 0x40000000) {
          (**(code **)(*plVar11 + 0x128))(plVar11,iVar9);
        }
        else {
          lVar4 = plVar11[1];
          cVar8 = FUN_18002d6e0(lVar4);
          if (cVar8 != '\0') {
            (*DAT_1803faf38)(lVar4,0xffffd8ed);
            iVar10 = (*DAT_1803faff8)(lVar4,0xffffffff);
            pcVar5 = DAT_1803faf10;
            if (iVar10 == 5) {
              (*DAT_1803faf88)(lVar4,0xffffffff,iVar9 + -0x40000000);
              (*DAT_1803faee0)(lVar4,0xfffffffe);
              goto LAB_1801fdae6;
            }
            iVar9 = (*DAT_1803fb088)(lVar4);
            (*pcVar5)(lVar4,iVar9 + -1);
          }
          if ((lVar4 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
            (*DAT_1803fafd8)(lVar4);
          }
        }
LAB_1801fdae6:
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar12 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar12,"lua_type");
        }
        IVar14 = (*DAT_1803fe490)(lVar1,0xffffffff);
        puVar20 = local_60;
        if ((int)IVar14 == 6) {
          if ((DAT_1803fafa0 != (code *)0x0) && (DAT_1803faed8 != (code *)0x0)) {
            plVar19 = (longlong *)*local_60;
            if (0xf < (ulonglong)plVar19[3]) {
              plVar19 = (longlong *)*plVar19;
            }
            (*DAT_1803fafa0)(lVar1,plVar19);
            (*DAT_1803faed8)(lVar1,(double)*(int *)(puVar20 + 1));
            if (*(int *)((longlong)puVar20 + 0xc) == 0) {
              if (DAT_1803fafd8 != (code *)0x0) {
                (*DAT_1803fafd8)(lVar1);
                goto LAB_1801fdce0;
              }
            }
            else if (DAT_1803ff958 != (code *)0x0) {
              (*DAT_1803ff958)();
            }
            (*DAT_1803faed8)(lVar1);
          }
LAB_1801fdce0:
          DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
          iVar9 = FUN_180023180(lVar1,3,0);
          if (0 < DAT_1803ff8e8) {
            DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
          }
          if (iVar9 == 0) {
            *(undefined4 *)((longlong)puVar21 + 0x24) = 0;
          }
          else {
            if (DAT_1803fe490 == (FARPROC)0x0) {
              pHVar12 = GetModuleHandleA("lua_shared.dll");
              DAT_1803fe490 = GetProcAddress(pHVar12,"lua_type");
            }
            IVar14 = (*DAT_1803fe490)(lVar1,0xffffffff);
            if ((int)IVar14 == 4) {
              pcVar22 = (char *)(**(code **)(*plVar11 + 0xb8))(plVar11,0xffffffff,0);
            }
            else {
              pcVar22 = "(non-string error)";
            }
            if (DAT_1803ff978 != (code *)0x0) {
              puVar20 = puVar21;
              if (0xf < (ulonglong)puVar21[3]) {
                puVar20 = (undefined8 *)*puVar21;
              }
              pcVar16 = "?";
              if (pcVar22 != (char *)0x0) {
                pcVar16 = pcVar22;
              }
              (*DAT_1803ff978)("Net_Receive",puVar20,pcVar16);
            }
            *(int *)((longlong)puVar21 + 0x24) = *(int *)((longlong)puVar21 + 0x24) + 1;
            iVar9 = *(int *)((longlong)puVar21 + 0x24);
            if (iVar9 < 5) {
              puVar20 = puVar21;
              if (0xf < (ulonglong)puVar21[3]) {
                puVar20 = (undefined8 *)*puVar21;
              }
              pcVar16 = "?";
              if (pcVar22 != (char *)0x0) {
                pcVar16 = pcVar22;
              }
              FUN_180014410("[LUAAPI] %s/%s error %d/%d: %s\n","Net_Receive",puVar20,iVar9,5,pcVar16
                           );
            }
            else {
              *(undefined1 *)(puVar21 + 5) = 1;
              puVar20 = puVar21;
              if (0xf < (ulonglong)puVar21[3]) {
                puVar20 = (undefined8 *)*puVar21;
              }
              pcVar16 = "?";
              if (pcVar22 != (char *)0x0) {
                pcVar16 = pcVar22;
              }
              FUN_180014410("[LUAAPI] %s/%s disabled after %d errors, last: %s\n","Net_Receive",
                            puVar20,iVar9,pcVar16);
            }
          }
        }
        else {
          if (DAT_1803fe490 == (FARPROC)0x0) {
            pHVar12 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fe490 = GetProcAddress(pHVar12,"lua_type");
          }
          uVar15 = (*DAT_1803fe490)(lVar1,0xffffffff);
          pcVar22 = "?";
          switch((int)uVar15) {
          case 0:
            pcVar22 = "nil";
            break;
          case 1:
            pcVar22 = "boolean";
            break;
          case 3:
            pcVar22 = "number";
            break;
          case 4:
            pcVar22 = "string";
            break;
          case 5:
            pcVar22 = "table";
            break;
          case 7:
            pcVar22 = "userdata";
          }
          *(undefined1 *)(puVar21 + 5) = 1;
          puVar20 = puVar21;
          if (0xf < (ulonglong)puVar21[3]) {
            puVar20 = (undefined8 *)*puVar21;
          }
          FUN_180014410("[LUAAPI] %s/%s: callback is no longer a function (ref=%d, slot holds %s [type %d], state=%p, listeners=%d) -- disabled\n"
                        ,"Net_Receive",puVar20,*(undefined4 *)(puVar21 + 4),pcVar22,
                        uVar15 & 0xffffffff,lVar1,(int)(plVar23[9] - plVar23[8] >> 4) * -0x55555555)
          ;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar12 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar12,"lua_settop");
        }
        (*DAT_180425540)(lVar1,uVar13 & 0xffffffff);
      }
    }
  }
  return;
}


