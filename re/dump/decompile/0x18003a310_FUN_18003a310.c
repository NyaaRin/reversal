// 0x18003a310  FUN_18003a310
// size=1406 thunk=false
// signature: undefined FUN_18003a310()
// status: ok


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_18003a310(char *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 *******pppppppuVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  size_t sVar13;
  HMODULE pHVar14;
  ulonglong uVar15;
  INT_PTR IVar16;
  char *pcVar17;
  char *pcVar18;
  FARPROC pFVar19;
  longlong *plVar20;
  undefined8 *******pppppppuVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  undefined8 *puVar27;
  ulonglong _Size;
  undefined8 *******local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  
  if (DAT_1803ff980 != '\0') {
    return 0;
  }
  cVar8 = FUN_18003a090();
  if (cVar8 == '\0') {
    return 0;
  }
  if (7 < DAT_1803ff950) {
    FUN_180014410("[LUAAPI] CallHook(%s) refused -- %d deep, a hook is calling itself\n",param_1);
    return 0;
  }
  plVar12 = (longlong *)FUN_180039770();
  if (plVar12 == (longlong *)0x0) {
    return 0;
  }
  lVar1 = plVar12[1];
  if (lVar1 == 0) {
    return 0;
  }
  if ((DAT_1803ff988 != 0) && (DAT_1803ff988 != lVar1)) {
    FUN_180039a50(0);
    return 0;
  }
  local_60 = (undefined8 *******)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  sVar13 = strlen(param_1);
  FUN_18001d080(&local_60,param_1,sVar13);
  uVar25 = local_48;
  uVar15 = local_50;
  pppppppuVar7 = local_60;
  plVar6 = DAT_1805c7c10;
  plVar22 = (longlong *)DAT_1805c7c10[1];
  cVar8 = *(char *)((longlong)plVar22 + 0x19);
  plVar26 = DAT_1805c7c10;
  while (cVar8 == '\0') {
    plVar20 = plVar22 + 4;
    pppppppuVar21 = &local_60;
    if (0xf < uVar25) {
      pppppppuVar21 = pppppppuVar7;
    }
    uVar2 = plVar22[6];
    if (0xf < (ulonglong)plVar22[7]) {
      plVar20 = (longlong *)*plVar20;
    }
    _Size = uVar2;
    if (uVar15 < uVar2) {
      _Size = uVar15;
    }
    iVar9 = memcmp(plVar20,pppppppuVar21,_Size);
    plVar20 = plVar22;
    if (iVar9 == 0) {
      if (uVar2 < uVar15) goto LAB_18003a482;
    }
    else if (iVar9 < 0) {
LAB_18003a482:
      plVar22 = plVar22 + 2;
      plVar20 = plVar26;
    }
    plVar22 = (longlong *)*plVar22;
    plVar26 = plVar20;
    cVar8 = *(char *)((longlong)plVar22 + 0x19);
  }
  if (*(char *)((longlong)plVar26 + 0x19) == '\0') {
    plVar22 = plVar26 + 4;
    uVar2 = plVar26[6];
    if (0xf < (ulonglong)plVar26[7]) {
      plVar22 = (longlong *)*plVar22;
    }
    pppppppuVar21 = &local_60;
    if (0xf < uVar25) {
      pppppppuVar21 = pppppppuVar7;
    }
    uVar25 = uVar15;
    if (uVar2 < uVar15) {
      uVar25 = uVar2;
    }
    iVar9 = memcmp(pppppppuVar21,plVar22,uVar25);
    if (iVar9 == 0) {
      if (uVar2 <= uVar15) goto LAB_18003a490;
    }
    else if (-1 < iVar9) goto LAB_18003a490;
  }
  plVar26 = plVar6;
LAB_18003a490:
  FUN_18020e450(&local_60);
  if (plVar26 != DAT_1805c7c10) {
    if (param_3 < 2) {
      iVar9 = 0;
    }
    else {
      iVar9 = param_3 + -1;
    }
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar14 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar14,"lua_gettop");
    }
    uVar15 = (*DAT_1803fcfa0)(lVar1);
    DAT_1803ff950 = DAT_1803ff950 + 1;
    puVar3 = (undefined8 *)plVar26[9];
    for (puVar27 = (undefined8 *)plVar26[8]; puVar27 != puVar3; puVar27 = puVar27 + 6) {
      if ((*(char *)(puVar27 + 5) == '\0') && (iVar11 = *(int *)(puVar27 + 4), iVar11 != -1)) {
        if (iVar11 < 0x40000000) {
          (**(code **)(*plVar12 + 0x128))(plVar12,iVar11);
        }
        else {
          lVar4 = plVar12[1];
          cVar8 = FUN_18002d6e0(lVar4);
          if (cVar8 != '\0') {
            (*DAT_1803faf38)(lVar4,0xffffd8ed);
            iVar10 = (*DAT_1803faff8)(lVar4,0xffffffff);
            pcVar5 = DAT_1803faf10;
            if (iVar10 == 5) {
              (*DAT_1803faf88)(lVar4,0xffffffff,iVar11 + -0x40000000);
              (*DAT_1803faee0)(lVar4,0xfffffffe);
              goto LAB_18003a597;
            }
            iVar11 = (*DAT_1803fb088)(lVar4);
            (*pcVar5)(lVar4,iVar11 + -1);
          }
          if ((lVar4 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
            (*DAT_1803fafd8)(lVar4);
          }
        }
LAB_18003a597:
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar14 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar14,"lua_type");
        }
        IVar16 = (*DAT_1803fe490)(lVar1,0xffffffff);
        if ((int)IVar16 == 6) {
          uVar25 = 2;
          if (1 < param_3) {
            do {
              if (DAT_180423ad0 == (FARPROC)0x0) {
                pHVar14 = GetModuleHandleA("lua_shared.dll");
                DAT_180423ad0 = GetProcAddress(pHVar14,"lua_pushvalue");
              }
              (*DAT_180423ad0)(lVar1,uVar25);
              uVar24 = (int)uVar25 + 1;
              uVar25 = (ulonglong)uVar24;
            } while ((int)uVar24 <= param_3);
          }
          DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
          iVar11 = FUN_180023180(lVar1,iVar9,1);
          pFVar19 = DAT_1803fe490;
          if (0 < DAT_1803ff8e8) {
            DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
          }
          if (iVar11 == 0) {
            *(undefined4 *)((longlong)puVar27 + 0x24) = 0;
            if (pFVar19 == (FARPROC)0x0) {
              pHVar14 = GetModuleHandleA("lua_shared.dll");
              pFVar19 = GetProcAddress(pHVar14,"lua_type");
              DAT_1803fe490 = pFVar19;
            }
            IVar16 = (*pFVar19)(lVar1,0xffffffff);
            if ((int)IVar16 != 0) {
              DAT_1803ff950 = DAT_1803ff950 + -1;
              return 1;
            }
          }
          else {
            if (DAT_1803fe490 == (FARPROC)0x0) {
              pHVar14 = GetModuleHandleA("lua_shared.dll");
              DAT_1803fe490 = GetProcAddress(pHVar14,"lua_type");
            }
            IVar16 = (*DAT_1803fe490)(lVar1,0xffffffff);
            if ((int)IVar16 == 4) {
              pcVar17 = (char *)(**(code **)(*plVar12 + 0xb8))(plVar12,0xffffffff,0);
            }
            else {
              pcVar17 = "(non-string error)";
            }
            if (DAT_1803ff978 != (code *)0x0) {
              puVar23 = puVar27;
              if (0xf < (ulonglong)puVar27[3]) {
                puVar23 = (undefined8 *)*puVar27;
              }
              pcVar18 = "?";
              if (pcVar17 != (char *)0x0) {
                pcVar18 = pcVar17;
              }
              (*DAT_1803ff978)(param_1,puVar23,pcVar18);
            }
            *(int *)((longlong)puVar27 + 0x24) = *(int *)((longlong)puVar27 + 0x24) + 1;
            iVar11 = *(int *)((longlong)puVar27 + 0x24);
            if (iVar11 < 5) {
              puVar23 = puVar27;
              if (0xf < (ulonglong)puVar27[3]) {
                puVar23 = (undefined8 *)*puVar27;
              }
              pcVar18 = "?";
              if (pcVar17 != (char *)0x0) {
                pcVar18 = pcVar17;
              }
              FUN_180014410("[LUAAPI] %s/%s error %d/%d: %s\n",param_1,puVar23,iVar11,5,pcVar18);
            }
            else {
              *(undefined1 *)(puVar27 + 5) = 1;
              puVar23 = puVar27;
              if (0xf < (ulonglong)puVar27[3]) {
                puVar23 = (undefined8 *)*puVar27;
              }
              pcVar18 = "?";
              if (pcVar17 != (char *)0x0) {
                pcVar18 = pcVar17;
              }
              FUN_180014410("[LUAAPI] %s/%s disabled after %d errors, last: %s\n",param_1,puVar23,
                            iVar11,pcVar18);
            }
          }
        }
        else {
          *(undefined1 *)(puVar27 + 5) = 1;
          puVar23 = puVar27;
          if (0xf < (ulonglong)puVar27[3]) {
            puVar23 = (undefined8 *)*puVar27;
          }
          FUN_180014410("[LUAAPI] %s/%s: callback is no longer a function -- disabled\n",param_1,
                        puVar23);
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar14 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar14,"lua_settop");
        }
        (*DAT_180425540)(lVar1,uVar15 & 0xffffffff);
      }
    }
    DAT_1803ff950 = DAT_1803ff950 + -1;
  }
  return 0;
}


