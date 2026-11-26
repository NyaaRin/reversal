// 0x180200dc0  FUN_180200dc0
// size=1497 thunk=false
// signature: undefined FUN_180200dc0()
// status: ok


void FUN_180200dc0(char *param_1,undefined8 param_2,undefined8 *param_3)

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
  size_t sVar12;
  HMODULE pHVar13;
  ulonglong uVar14;
  INT_PTR IVar15;
  ulonglong uVar16;
  char *pcVar17;
  longlong *plVar18;
  undefined8 *******pppppppuVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulonglong _Size;
  char *pcVar24;
  longlong *plVar25;
  undefined8 ******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 *local_48;
  
  if (DAT_1803ff980 != '\0') {
    return;
  }
  local_48 = param_3;
  cVar8 = FUN_18003a090();
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
  local_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  sVar12 = strlen(param_1);
  FUN_18001d080(&local_68,param_1,sVar12);
  uVar16 = local_50;
  uVar14 = local_58;
  ppppppuVar7 = local_68;
  plVar6 = DAT_1805c7c10;
  plVar20 = (longlong *)DAT_1805c7c10[1];
  cVar8 = *(char *)((longlong)plVar20 + 0x19);
  plVar25 = DAT_1805c7c10;
  while (cVar8 == '\0') {
    plVar18 = plVar20 + 4;
    pppppppuVar19 = &local_68;
    if (0xf < uVar16) {
      pppppppuVar19 = (undefined8 *******)ppppppuVar7;
    }
    uVar2 = plVar20[6];
    if (0xf < (ulonglong)plVar20[7]) {
      plVar18 = (longlong *)*plVar18;
    }
    _Size = uVar2;
    if (uVar14 < uVar2) {
      _Size = uVar14;
    }
    iVar9 = memcmp(plVar18,pppppppuVar19,_Size);
    plVar18 = plVar20;
    if (iVar9 == 0) {
      if (uVar2 < uVar14) goto LAB_180200f12;
    }
    else if (iVar9 < 0) {
LAB_180200f12:
      plVar20 = plVar20 + 2;
      plVar18 = plVar25;
    }
    plVar20 = (longlong *)*plVar20;
    plVar25 = plVar18;
    cVar8 = *(char *)((longlong)plVar20 + 0x19);
  }
  if (*(char *)((longlong)plVar25 + 0x19) == '\0') {
    plVar20 = plVar25 + 4;
    uVar2 = plVar25[6];
    if (0xf < (ulonglong)plVar25[7]) {
      plVar20 = (longlong *)*plVar20;
    }
    pppppppuVar19 = &local_68;
    if (0xf < uVar16) {
      pppppppuVar19 = (undefined8 *******)ppppppuVar7;
    }
    uVar16 = uVar14;
    if (uVar2 < uVar14) {
      uVar16 = uVar2;
    }
    iVar9 = memcmp(pppppppuVar19,plVar20,uVar16);
    if (iVar9 == 0) {
      if (uVar2 <= uVar14) goto LAB_180200f20;
    }
    else if (-1 < iVar9) goto LAB_180200f20;
  }
  plVar25 = plVar6;
LAB_180200f20:
  FUN_18020e450(&local_68);
  if (plVar25 != DAT_1805c7c10) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar13 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar13,"lua_gettop");
    }
    uVar14 = (*DAT_1803fcfa0)(lVar1);
    puVar3 = (undefined8 *)plVar25[9];
    for (puVar23 = (undefined8 *)plVar25[8]; puVar23 != puVar3; puVar23 = puVar23 + 6) {
      if ((*(char *)(puVar23 + 5) == '\0') && (iVar9 = *(int *)(puVar23 + 4), iVar9 != -1)) {
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
              goto LAB_18020101b;
            }
            iVar9 = (*DAT_1803fb088)(lVar4);
            (*pcVar5)(lVar4,iVar9 + -1);
          }
          if ((lVar4 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
            (*DAT_1803fafd8)(lVar4);
          }
        }
LAB_18020101b:
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar13 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar13,"lua_type");
        }
        IVar15 = (*DAT_1803fe490)(lVar1,0xffffffff);
        puVar22 = local_48;
        if ((int)IVar15 == 6) {
          if ((DAT_1803fafa0 != (code *)0x0) && (DAT_1803faed8 != (code *)0x0)) {
            puVar21 = &DAT_18033e5ea;
            if ((undefined1 *)*local_48 != (undefined1 *)0x0) {
              puVar21 = (undefined1 *)*local_48;
            }
            (*DAT_1803fafa0)(lVar1,puVar21);
            (*DAT_1803faed8)(lVar1,(double)*(int *)(puVar22 + 1));
            (*DAT_1803faed8)(lVar1,(double)*(int *)((longlong)puVar22 + 0xc));
          }
          DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
          iVar9 = FUN_180023180(lVar1,3,0);
          if (0 < DAT_1803ff8e8) {
            DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
          }
          if (iVar9 == 0) {
            *(undefined4 *)((longlong)puVar23 + 0x24) = 0;
          }
          else {
            if (DAT_1803fe490 == (FARPROC)0x0) {
              pHVar13 = GetModuleHandleA("lua_shared.dll");
              DAT_1803fe490 = GetProcAddress(pHVar13,"lua_type");
            }
            IVar15 = (*DAT_1803fe490)(lVar1,0xffffffff);
            if ((int)IVar15 == 4) {
              pcVar24 = (char *)(**(code **)(*plVar11 + 0xb8))(plVar11,0xffffffff,0);
            }
            else {
              pcVar24 = "(non-string error)";
            }
            if (DAT_1803ff978 != (code *)0x0) {
              puVar22 = puVar23;
              if (0xf < (ulonglong)puVar23[3]) {
                puVar22 = (undefined8 *)*puVar23;
              }
              pcVar17 = "?";
              if (pcVar24 != (char *)0x0) {
                pcVar17 = pcVar24;
              }
              (*DAT_1803ff978)(param_1,puVar22,pcVar17);
            }
            *(int *)((longlong)puVar23 + 0x24) = *(int *)((longlong)puVar23 + 0x24) + 1;
            iVar9 = *(int *)((longlong)puVar23 + 0x24);
            if (iVar9 < 5) {
              puVar22 = puVar23;
              if (0xf < (ulonglong)puVar23[3]) {
                puVar22 = (undefined8 *)*puVar23;
              }
              pcVar17 = "?";
              if (pcVar24 != (char *)0x0) {
                pcVar17 = pcVar24;
              }
              FUN_180014410("[LUAAPI] %s/%s error %d/%d: %s\n",param_1,puVar22,iVar9,5,pcVar17);
            }
            else {
              *(undefined1 *)(puVar23 + 5) = 1;
              puVar22 = puVar23;
              if (0xf < (ulonglong)puVar23[3]) {
                puVar22 = (undefined8 *)*puVar23;
              }
              pcVar17 = "?";
              if (pcVar24 != (char *)0x0) {
                pcVar17 = pcVar24;
              }
              FUN_180014410("[LUAAPI] %s/%s disabled after %d errors, last: %s\n",param_1,puVar22,
                            iVar9,pcVar17);
            }
          }
        }
        else {
          if (DAT_1803fe490 == (FARPROC)0x0) {
            pHVar13 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fe490 = GetProcAddress(pHVar13,"lua_type");
          }
          uVar16 = (*DAT_1803fe490)(lVar1,0xffffffff);
          pcVar24 = "?";
          switch((int)uVar16) {
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
                        ,param_1,puVar22,*(undefined4 *)(puVar23 + 4),pcVar24,uVar16 & 0xffffffff,
                        lVar1,(int)(plVar25[9] - plVar25[8] >> 4) * -0x55555555);
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar13 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar13,"lua_settop");
        }
        (*DAT_180425540)(lVar1,uVar14 & 0xffffffff);
      }
    }
  }
  return;
}


