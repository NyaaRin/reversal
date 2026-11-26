// 0x1802013c0  FUN_1802013c0
// size=1155 thunk=false
// signature: undefined FUN_1802013c0()
// status: ok


ulonglong FUN_1802013c0(void)

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
  longlong *plVar12;
  HMODULE pHVar13;
  ulonglong uVar14;
  INT_PTR IVar15;
  char *pcVar16;
  char *pcVar17;
  FARPROC pFVar18;
  longlong *plVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  ulonglong _Size;
  ulonglong uVar24;
  undefined8 ******local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong local_58;
  
  plVar11 = (longlong *)0x0;
  if ((((DAT_1803ff980 != '\0') ||
       (plVar11 = (longlong *)FUN_18003a090("CL_Move"), (char)plVar11 == '\0')) ||
      (plVar12 = (longlong *)FUN_180039770(), plVar11 = plVar12, plVar12 == (longlong *)0x0)) ||
     (lVar1 = plVar12[1], lVar1 == 0)) goto LAB_18020141c;
  if ((DAT_1803ff988 != 0) && (DAT_1803ff988 != lVar1)) {
    plVar11 = (longlong *)FUN_180039a50(0);
    goto LAB_18020141c;
  }
  local_70 = (undefined8 *******)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_18001d080(&local_70,"CL_Move",7);
  uVar14 = local_58;
  uVar24 = local_60;
  ppppppuVar7 = local_70;
  plVar6 = DAT_1805c7c10;
  plVar11 = (longlong *)DAT_1805c7c10[1];
  cVar8 = *(char *)((longlong)plVar11 + 0x19);
  plVar22 = DAT_1805c7c10;
  while (cVar8 == '\0') {
    plVar19 = plVar11 + 4;
    pppppppuVar20 = &local_70;
    if (0xf < uVar14) {
      pppppppuVar20 = (undefined8 *******)ppppppuVar7;
    }
    uVar2 = plVar11[6];
    if (0xf < (ulonglong)plVar11[7]) {
      plVar19 = (longlong *)*plVar19;
    }
    _Size = uVar2;
    if (uVar24 < uVar2) {
      _Size = uVar24;
    }
    iVar9 = memcmp(plVar19,pppppppuVar20,_Size);
    plVar19 = plVar11;
    if (iVar9 == 0) {
      if (uVar2 < uVar24) goto LAB_180201501;
    }
    else if (iVar9 < 0) {
LAB_180201501:
      plVar11 = plVar11 + 2;
      plVar19 = plVar22;
    }
    plVar11 = (longlong *)*plVar11;
    plVar22 = plVar19;
    cVar8 = *(char *)((longlong)plVar11 + 0x19);
  }
  if (*(char *)((longlong)plVar22 + 0x19) == '\0') {
    plVar11 = plVar22 + 4;
    uVar2 = plVar22[6];
    if (0xf < (ulonglong)plVar22[7]) {
      plVar11 = (longlong *)*plVar11;
    }
    pppppppuVar20 = &local_70;
    if (0xf < uVar14) {
      pppppppuVar20 = (undefined8 *******)ppppppuVar7;
    }
    uVar14 = uVar24;
    if (uVar2 < uVar24) {
      uVar14 = uVar2;
    }
    iVar9 = memcmp(pppppppuVar20,plVar11,uVar14);
    if (iVar9 == 0) {
      if (uVar24 < uVar2) goto LAB_18020150c;
    }
    else if (iVar9 < 0) goto LAB_18020150c;
  }
  else {
LAB_18020150c:
    plVar22 = plVar6;
  }
  plVar11 = (longlong *)FUN_18020e450(&local_70);
  if (plVar22 != DAT_1805c7c10) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar13 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar13,"lua_gettop");
    }
    uVar14 = (*DAT_1803fcfa0)(lVar1);
    uVar24 = 0;
    puVar23 = (undefined8 *)plVar22[8];
    puVar3 = (undefined8 *)plVar22[9];
    do {
      if (puVar23 == puVar3) {
        return uVar24;
      }
      if ((*(char *)(puVar23 + 5) == '\0') && (iVar9 = *(int *)(puVar23 + 4), iVar9 != -1)) {
        if (iVar9 < 0x40000000) {
          (**(code **)(*plVar12 + 0x128))(plVar12,iVar9);
        }
        else {
          lVar4 = plVar12[1];
          cVar8 = FUN_18002d6e0(lVar4);
          if (cVar8 != '\0') {
            (*DAT_1803faf38)(lVar4,0xffffd8ed);
            iVar10 = (*DAT_1803faff8)(lVar4,0xffffffff);
            pcVar5 = DAT_1803faf10;
            if (iVar10 == 5) {
              (*DAT_1803faf88)(lVar4,0xffffffff,iVar9 + -0x40000000);
              (*DAT_1803faee0)(lVar4,0xfffffffe);
              goto LAB_180201607;
            }
            iVar9 = (*DAT_1803fb088)(lVar4);
            (*pcVar5)(lVar4,iVar9 + -1);
          }
          if ((lVar4 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
            (*DAT_1803fafd8)(lVar4);
          }
        }
LAB_180201607:
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar13 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar13,"lua_type");
        }
        IVar15 = (*DAT_1803fe490)(lVar1,0xffffffff);
        if ((int)IVar15 == 6) {
          DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
          iVar9 = FUN_180023180(lVar1,0,1);
          pFVar18 = DAT_1803fe490;
          if (0 < DAT_1803ff8e8) {
            DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
          }
          if (iVar9 == 0) {
            *(undefined4 *)((longlong)puVar23 + 0x24) = 0;
            if (pFVar18 == (FARPROC)0x0) {
              pHVar13 = GetModuleHandleA("lua_shared.dll");
              pFVar18 = GetProcAddress(pHVar13,"lua_type");
              DAT_1803fe490 = pFVar18;
            }
            IVar15 = (*pFVar18)(lVar1,0xffffffff);
            if (((int)IVar15 == 1) &&
               (cVar8 = (**(code **)(*plVar12 + 200))(plVar12,0xffffffff), cVar8 == '\0')) {
              uVar24 = 1;
            }
          }
          else {
            if (DAT_1803fe490 == (FARPROC)0x0) {
              pHVar13 = GetModuleHandleA("lua_shared.dll");
              DAT_1803fe490 = GetProcAddress(pHVar13,"lua_type");
            }
            IVar15 = (*DAT_1803fe490)(lVar1,0xffffffff);
            if ((int)IVar15 == 4) {
              pcVar16 = (char *)(**(code **)(*plVar12 + 0xb8))(plVar12,0xffffffff,0);
            }
            else {
              pcVar16 = "(non-string error)";
            }
            if (DAT_1803ff978 != (code *)0x0) {
              puVar21 = puVar23;
              if (0xf < (ulonglong)puVar23[3]) {
                puVar21 = (undefined8 *)*puVar23;
              }
              pcVar17 = "?";
              if (pcVar16 != (char *)0x0) {
                pcVar17 = pcVar16;
              }
              (*DAT_1803ff978)("CL_Move",puVar21,pcVar17);
            }
            *(int *)((longlong)puVar23 + 0x24) = *(int *)((longlong)puVar23 + 0x24) + 1;
            if (4 < *(int *)((longlong)puVar23 + 0x24)) {
              *(undefined1 *)(puVar23 + 5) = 1;
              puVar21 = puVar23;
              if (0xf < (ulonglong)puVar23[3]) {
                puVar21 = (undefined8 *)*puVar23;
              }
              pcVar17 = "?";
              if (pcVar16 != (char *)0x0) {
                pcVar17 = pcVar16;
              }
              FUN_180014410("[LUAAPI] %s/%s disabled after %d errors, last: %s\n","CL_Move",puVar21,
                            *(int *)((longlong)puVar23 + 0x24),pcVar17);
            }
          }
        }
        else {
          *(undefined1 *)(puVar23 + 5) = 1;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar13 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar13,"lua_settop");
        }
        (*DAT_180425540)(lVar1,uVar14 & 0xffffffff);
      }
      puVar23 = puVar23 + 6;
    } while( true );
  }
LAB_18020141c:
  return (ulonglong)plVar11 & 0xffffffffffffff00;
}


