// 0x1802023d0  FUN_1802023d0
// size=1191 thunk=false
// signature: undefined FUN_1802023d0()
// status: ok


ulonglong FUN_1802023d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *puVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  HMODULE pHVar14;
  ulonglong uVar15;
  INT_PTR IVar16;
  char *pcVar17;
  char *pcVar18;
  FARPROC pFVar19;
  longlong *plVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  ulonglong _Size;
  ulonglong uVar25;
  undefined8 ******local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 *local_60;
  
  plVar12 = (longlong *)0x0;
  if ((((DAT_1803ff980 != '\0') ||
       (local_60 = param_3, plVar12 = (longlong *)FUN_18003a090("Net_ShouldSend"),
       (char)plVar12 == '\0')) ||
      (plVar13 = (longlong *)FUN_180039770(), plVar12 = plVar13, plVar13 == (longlong *)0x0)) ||
     (lVar1 = plVar13[1], lVar1 == 0)) goto LAB_180202431;
  if ((DAT_1803ff988 != 0) && (DAT_1803ff988 != lVar1)) {
    plVar12 = (longlong *)FUN_180039a50(0);
    goto LAB_180202431;
  }
  local_80 = (undefined8 *******)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_18001d080(&local_80,"Net_ShouldSend",0xe);
  uVar15 = local_68;
  uVar25 = local_70;
  ppppppuVar7 = local_80;
  plVar6 = DAT_1805c7c10;
  plVar12 = (longlong *)DAT_1805c7c10[1];
  cVar9 = *(char *)((longlong)plVar12 + 0x19);
  plVar23 = DAT_1805c7c10;
  while (cVar9 == '\0') {
    plVar20 = plVar12 + 4;
    pppppppuVar21 = &local_80;
    if (0xf < uVar15) {
      pppppppuVar21 = (undefined8 *******)ppppppuVar7;
    }
    uVar2 = plVar12[6];
    if (0xf < (ulonglong)plVar12[7]) {
      plVar20 = (longlong *)*plVar20;
    }
    _Size = uVar2;
    if (uVar25 < uVar2) {
      _Size = uVar25;
    }
    iVar10 = memcmp(plVar20,pppppppuVar21,_Size);
    plVar20 = plVar12;
    if (iVar10 == 0) {
      if (uVar2 < uVar25) goto LAB_180202514;
    }
    else if (iVar10 < 0) {
LAB_180202514:
      plVar12 = plVar12 + 2;
      plVar20 = plVar23;
    }
    plVar12 = (longlong *)*plVar12;
    plVar23 = plVar20;
    cVar9 = *(char *)((longlong)plVar12 + 0x19);
  }
  if (*(char *)((longlong)plVar23 + 0x19) == '\0') {
    plVar12 = plVar23 + 4;
    uVar2 = plVar23[6];
    if (0xf < (ulonglong)plVar23[7]) {
      plVar12 = (longlong *)*plVar12;
    }
    pppppppuVar21 = &local_80;
    if (0xf < uVar15) {
      pppppppuVar21 = (undefined8 *******)ppppppuVar7;
    }
    uVar15 = uVar25;
    if (uVar2 < uVar25) {
      uVar15 = uVar2;
    }
    iVar10 = memcmp(pppppppuVar21,plVar12,uVar15);
    if (iVar10 == 0) {
      if (uVar25 < uVar2) goto LAB_18020251f;
    }
    else if (iVar10 < 0) goto LAB_18020251f;
  }
  else {
LAB_18020251f:
    plVar23 = plVar6;
  }
  plVar12 = (longlong *)FUN_18020e450(&local_80);
  if (plVar23 != DAT_1805c7c10) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar14 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar14,"lua_gettop");
    }
    uVar15 = (*DAT_1803fcfa0)(lVar1);
    puVar8 = local_60;
    uVar25 = 0;
    puVar24 = (undefined8 *)plVar23[8];
    puVar3 = (undefined8 *)plVar23[9];
    do {
      if (puVar24 == puVar3) {
        return uVar25;
      }
      if ((*(char *)(puVar24 + 5) == '\0') && (iVar10 = *(int *)(puVar24 + 4), iVar10 != -1)) {
        if (iVar10 < 0x40000000) {
          (**(code **)(*plVar13 + 0x128))(plVar13,iVar10);
        }
        else {
          lVar4 = plVar13[1];
          cVar9 = FUN_18002d6e0(lVar4);
          if (cVar9 != '\0') {
            (*DAT_1803faf38)(lVar4,0xffffd8ed);
            iVar11 = (*DAT_1803faff8)(lVar4,0xffffffff);
            pcVar5 = DAT_1803faf10;
            if (iVar11 == 5) {
              (*DAT_1803faf88)(lVar4,0xffffffff,iVar10 + -0x40000000);
              (*DAT_1803faee0)(lVar4,0xfffffffe);
              goto LAB_180202617;
            }
            iVar10 = (*DAT_1803fb088)(lVar4);
            (*pcVar5)(lVar4,iVar10 + -1);
          }
          if ((lVar4 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
            (*DAT_1803fafd8)(lVar4);
          }
        }
LAB_180202617:
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar14 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar14,"lua_type");
        }
        IVar16 = (*DAT_1803fe490)(lVar1,0xffffffff);
        if ((int)IVar16 == 6) {
          if (DAT_1803fafa0 != (code *)0x0) {
            plVar12 = (longlong *)*puVar8;
            if (0xf < (ulonglong)plVar12[3]) {
              plVar12 = (longlong *)*plVar12;
            }
            (*DAT_1803fafa0)(lVar1,plVar12);
          }
          DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
          iVar10 = FUN_180023180(lVar1,1,1);
          pFVar19 = DAT_1803fe490;
          if (0 < DAT_1803ff8e8) {
            DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
          }
          if (iVar10 == 0) {
            *(undefined4 *)((longlong)puVar24 + 0x24) = 0;
            if (pFVar19 == (FARPROC)0x0) {
              pHVar14 = GetModuleHandleA("lua_shared.dll");
              pFVar19 = GetProcAddress(pHVar14,"lua_type");
              DAT_1803fe490 = pFVar19;
            }
            IVar16 = (*pFVar19)(lVar1,0xffffffff);
            if (((int)IVar16 == 1) &&
               (cVar9 = (**(code **)(*plVar13 + 200))(plVar13,0xffffffff), cVar9 == '\0')) {
              uVar25 = 1;
            }
          }
          else {
            if (DAT_1803fe490 == (FARPROC)0x0) {
              pHVar14 = GetModuleHandleA("lua_shared.dll");
              DAT_1803fe490 = GetProcAddress(pHVar14,"lua_type");
            }
            IVar16 = (*DAT_1803fe490)(lVar1,0xffffffff);
            if ((int)IVar16 == 4) {
              pcVar17 = (char *)(**(code **)(*plVar13 + 0xb8))(plVar13,0xffffffff,0);
            }
            else {
              pcVar17 = "(non-string error)";
            }
            if (DAT_1803ff978 != (code *)0x0) {
              puVar22 = puVar24;
              if (0xf < (ulonglong)puVar24[3]) {
                puVar22 = (undefined8 *)*puVar24;
              }
              pcVar18 = "?";
              if (pcVar17 != (char *)0x0) {
                pcVar18 = pcVar17;
              }
              (*DAT_1803ff978)("Net_ShouldSend",puVar22,pcVar18);
            }
            *(int *)((longlong)puVar24 + 0x24) = *(int *)((longlong)puVar24 + 0x24) + 1;
            if (4 < *(int *)((longlong)puVar24 + 0x24)) {
              *(undefined1 *)(puVar24 + 5) = 1;
              puVar22 = puVar24;
              if (0xf < (ulonglong)puVar24[3]) {
                puVar22 = (undefined8 *)*puVar24;
              }
              pcVar18 = "?";
              if (pcVar17 != (char *)0x0) {
                pcVar18 = pcVar17;
              }
              FUN_180014410("[LUAAPI] %s/%s disabled after %d errors, last: %s\n","Net_ShouldSend",
                            puVar22,*(int *)((longlong)puVar24 + 0x24),pcVar18);
            }
          }
        }
        else {
          *(undefined1 *)(puVar24 + 5) = 1;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar14 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar14,"lua_settop");
        }
        (*DAT_180425540)(lVar1,uVar15 & 0xffffffff);
      }
      puVar24 = puVar24 + 6;
    } while( true );
  }
LAB_180202431:
  return (ulonglong)plVar12 & 0xffffffffffffff00;
}


