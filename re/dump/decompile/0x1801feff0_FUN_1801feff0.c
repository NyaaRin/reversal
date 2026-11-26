// 0x1801feff0  FUN_1801feff0
// size=1433 thunk=false
// signature: undefined FUN_1801feff0()
// status: ok


void FUN_1801feff0(char *param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 ******ppppppuVar7;
  int *piVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  size_t sVar13;
  HMODULE pHVar14;
  ulonglong uVar15;
  INT_PTR IVar16;
  ulonglong uVar17;
  char *pcVar18;
  longlong *plVar19;
  undefined8 *******pppppppuVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulonglong _Size;
  char *pcVar24;
  longlong *plVar25;
  undefined8 ******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  int *local_48;
  
  if (DAT_1803ff980 != '\0') {
    return;
  }
  local_48 = param_3;
  cVar9 = FUN_18003a090();
  if (cVar9 == '\0') {
    return;
  }
  plVar12 = (longlong *)FUN_180039770();
  if (plVar12 == (longlong *)0x0) {
    return;
  }
  lVar1 = plVar12[1];
  if (lVar1 == 0) {
    return;
  }
  if ((DAT_1803ff988 != 0) && (DAT_1803ff988 != lVar1)) {
    FUN_180039a50(0);
    return;
  }
  local_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  sVar13 = strlen(param_1);
  FUN_18001d080(&local_68,param_1,sVar13);
  uVar17 = local_50;
  uVar15 = local_58;
  ppppppuVar7 = local_68;
  plVar6 = DAT_1805c7c10;
  plVar21 = (longlong *)DAT_1805c7c10[1];
  cVar9 = *(char *)((longlong)plVar21 + 0x19);
  plVar25 = DAT_1805c7c10;
  while (cVar9 == '\0') {
    plVar19 = plVar21 + 4;
    pppppppuVar20 = &local_68;
    if (0xf < uVar17) {
      pppppppuVar20 = (undefined8 *******)ppppppuVar7;
    }
    uVar2 = plVar21[6];
    if (0xf < (ulonglong)plVar21[7]) {
      plVar19 = (longlong *)*plVar19;
    }
    _Size = uVar2;
    if (uVar15 < uVar2) {
      _Size = uVar15;
    }
    iVar10 = memcmp(plVar19,pppppppuVar20,_Size);
    plVar19 = plVar21;
    if (iVar10 == 0) {
      if (uVar2 < uVar15) goto LAB_1801ff142;
    }
    else if (iVar10 < 0) {
LAB_1801ff142:
      plVar21 = plVar21 + 2;
      plVar19 = plVar25;
    }
    plVar21 = (longlong *)*plVar21;
    plVar25 = plVar19;
    cVar9 = *(char *)((longlong)plVar21 + 0x19);
  }
  if (*(char *)((longlong)plVar25 + 0x19) == '\0') {
    plVar21 = plVar25 + 4;
    uVar2 = plVar25[6];
    if (0xf < (ulonglong)plVar25[7]) {
      plVar21 = (longlong *)*plVar21;
    }
    pppppppuVar20 = &local_68;
    if (0xf < uVar17) {
      pppppppuVar20 = (undefined8 *******)ppppppuVar7;
    }
    uVar17 = uVar15;
    if (uVar2 < uVar15) {
      uVar17 = uVar2;
    }
    iVar10 = memcmp(pppppppuVar20,plVar21,uVar17);
    if (iVar10 == 0) {
      if (uVar2 <= uVar15) goto LAB_1801ff150;
    }
    else if (-1 < iVar10) goto LAB_1801ff150;
  }
  plVar25 = plVar6;
LAB_1801ff150:
  FUN_18020e450(&local_68);
  if (plVar25 != DAT_1805c7c10) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar14 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar14,"lua_gettop");
    }
    uVar15 = (*DAT_1803fcfa0)(lVar1);
    piVar8 = local_48;
    puVar3 = (undefined8 *)plVar25[9];
    for (puVar23 = (undefined8 *)plVar25[8]; puVar23 != puVar3; puVar23 = puVar23 + 6) {
      if ((*(char *)(puVar23 + 5) == '\0') && (iVar10 = *(int *)(puVar23 + 4), iVar10 != -1)) {
        if (iVar10 < 0x40000000) {
          (**(code **)(*plVar12 + 0x128))(plVar12,iVar10);
        }
        else {
          lVar4 = plVar12[1];
          cVar9 = FUN_18002d6e0(lVar4);
          if (cVar9 != '\0') {
            (*DAT_1803faf38)(lVar4,0xffffd8ed);
            iVar11 = (*DAT_1803faff8)(lVar4,0xffffffff);
            pcVar5 = DAT_1803faf10;
            if (iVar11 == 5) {
              (*DAT_1803faf88)(lVar4,0xffffffff,iVar10 + -0x40000000);
              (*DAT_1803faee0)(lVar4,0xfffffffe);
              goto LAB_1801ff240;
            }
            iVar10 = (*DAT_1803fb088)(lVar4);
            (*pcVar5)(lVar4,iVar10 + -1);
          }
          if ((lVar4 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
            (*DAT_1803fafd8)(lVar4);
          }
        }
LAB_1801ff240:
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar14 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar14,"lua_type");
        }
        IVar16 = (*DAT_1803fe490)(lVar1,0xffffffff);
        if ((int)IVar16 == 6) {
          if (DAT_1803faed8 != (code *)0x0) {
            (*DAT_1803faed8)(lVar1,(double)*piVar8);
          }
          DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
          iVar10 = FUN_180023180(lVar1,1,0);
          if (0 < DAT_1803ff8e8) {
            DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
          }
          if (iVar10 == 0) {
            *(undefined4 *)((longlong)puVar23 + 0x24) = 0;
          }
          else {
            if (DAT_1803fe490 == (FARPROC)0x0) {
              pHVar14 = GetModuleHandleA("lua_shared.dll");
              DAT_1803fe490 = GetProcAddress(pHVar14,"lua_type");
            }
            IVar16 = (*DAT_1803fe490)(lVar1,0xffffffff);
            if ((int)IVar16 == 4) {
              pcVar24 = (char *)(**(code **)(*plVar12 + 0xb8))(plVar12,0xffffffff,0);
            }
            else {
              pcVar24 = "(non-string error)";
            }
            if (DAT_1803ff978 != (code *)0x0) {
              puVar22 = puVar23;
              if (0xf < (ulonglong)puVar23[3]) {
                puVar22 = (undefined8 *)*puVar23;
              }
              pcVar18 = "?";
              if (pcVar24 != (char *)0x0) {
                pcVar18 = pcVar24;
              }
              (*DAT_1803ff978)(param_1,puVar22,pcVar18);
            }
            *(int *)((longlong)puVar23 + 0x24) = *(int *)((longlong)puVar23 + 0x24) + 1;
            iVar10 = *(int *)((longlong)puVar23 + 0x24);
            if (iVar10 < 5) {
              puVar22 = puVar23;
              if (0xf < (ulonglong)puVar23[3]) {
                puVar22 = (undefined8 *)*puVar23;
              }
              pcVar18 = "?";
              if (pcVar24 != (char *)0x0) {
                pcVar18 = pcVar24;
              }
              FUN_180014410("[LUAAPI] %s/%s error %d/%d: %s\n",param_1,puVar22,iVar10,5,pcVar18);
            }
            else {
              *(undefined1 *)(puVar23 + 5) = 1;
              puVar22 = puVar23;
              if (0xf < (ulonglong)puVar23[3]) {
                puVar22 = (undefined8 *)*puVar23;
              }
              pcVar18 = "?";
              if (pcVar24 != (char *)0x0) {
                pcVar18 = pcVar24;
              }
              FUN_180014410("[LUAAPI] %s/%s disabled after %d errors, last: %s\n",param_1,puVar22,
                            iVar10,pcVar18);
            }
          }
        }
        else {
          if (DAT_1803fe490 == (FARPROC)0x0) {
            pHVar14 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fe490 = GetProcAddress(pHVar14,"lua_type");
          }
          uVar17 = (*DAT_1803fe490)(lVar1,0xffffffff);
          pcVar24 = "?";
          switch((int)uVar17) {
          case 0:
            pcVar24 = "nil";
            break;
          case 1:
            pcVar24 = "boolean";
            break;
          case 3:
            pcVar24 = "number";
            break;
          case 4:
            pcVar24 = "string";
            break;
          case 5:
            pcVar24 = "table";
            break;
          case 7:
            pcVar24 = "userdata";
          }
          *(undefined1 *)(puVar23 + 5) = 1;
          puVar22 = puVar23;
          if (0xf < (ulonglong)puVar23[3]) {
            puVar22 = (undefined8 *)*puVar23;
          }
          FUN_180014410("[LUAAPI] %s/%s: callback is no longer a function (ref=%d, slot holds %s [type %d], state=%p, listeners=%d) -- disabled\n"
                        ,param_1,puVar22,*(undefined4 *)(puVar23 + 4),pcVar24,uVar17 & 0xffffffff,
                        lVar1,(int)(plVar25[9] - plVar25[8] >> 4) * -0x55555555);
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar14 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar14,"lua_settop");
        }
        (*DAT_180425540)(lVar1,uVar15 & 0xffffffff);
      }
    }
  }
  return;
}


