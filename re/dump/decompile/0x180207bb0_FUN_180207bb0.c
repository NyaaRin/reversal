// 0x180207bb0  FUN_180207bb0
// size=1198 thunk=false
// signature: undefined FUN_180207bb0()
// status: ok


ulonglong FUN_180207bb0(char *param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 ******ppppppuVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  size_t sVar14;
  HMODULE pHVar15;
  ulonglong uVar16;
  INT_PTR IVar17;
  char *pcVar18;
  char *pcVar19;
  FARPROC pFVar20;
  longlong *plVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  ulonglong _Size;
  ulonglong uVar26;
  undefined8 ******local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong local_58;
  char *local_50;
  int *local_48;
  
  plVar12 = (longlong *)0x0;
  if ((((DAT_1803ff980 != '\0') ||
       (local_50 = param_1, local_48 = param_3, plVar12 = (longlong *)FUN_18003a090(),
       (char)plVar12 == '\0')) ||
      (plVar13 = (longlong *)FUN_180039770(), plVar12 = plVar13, plVar13 == (longlong *)0x0)) ||
     (lVar1 = plVar13[1], lVar1 == 0)) goto LAB_180207c15;
  if ((DAT_1803ff988 != 0) && (DAT_1803ff988 != lVar1)) {
    plVar12 = (longlong *)FUN_180039a50(0);
    goto LAB_180207c15;
  }
  local_70 = (undefined8 *******)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  sVar14 = strlen(param_1);
  FUN_18001d080(&local_70,param_1,sVar14);
  uVar16 = local_58;
  uVar26 = local_60;
  ppppppuVar7 = local_70;
  plVar6 = DAT_1805c7c10;
  plVar12 = (longlong *)DAT_1805c7c10[1];
  cVar9 = *(char *)((longlong)plVar12 + 0x19);
  plVar24 = DAT_1805c7c10;
  while (cVar9 == '\0') {
    plVar21 = plVar12 + 4;
    pppppppuVar22 = &local_70;
    if (0xf < uVar16) {
      pppppppuVar22 = (undefined8 *******)ppppppuVar7;
    }
    uVar2 = plVar12[6];
    if (0xf < (ulonglong)plVar12[7]) {
      plVar21 = (longlong *)*plVar21;
    }
    _Size = uVar2;
    if (uVar26 < uVar2) {
      _Size = uVar26;
    }
    iVar10 = memcmp(plVar21,pppppppuVar22,_Size);
    plVar21 = plVar12;
    if (iVar10 == 0) {
      if (uVar2 < uVar26) goto LAB_180207d01;
    }
    else if (iVar10 < 0) {
LAB_180207d01:
      plVar12 = plVar12 + 2;
      plVar21 = plVar24;
    }
    plVar12 = (longlong *)*plVar12;
    plVar24 = plVar21;
    cVar9 = *(char *)((longlong)plVar12 + 0x19);
  }
  if (*(char *)((longlong)plVar24 + 0x19) == '\0') {
    plVar12 = plVar24 + 4;
    uVar2 = plVar24[6];
    if (0xf < (ulonglong)plVar24[7]) {
      plVar12 = (longlong *)*plVar12;
    }
    pppppppuVar22 = &local_70;
    if (0xf < uVar16) {
      pppppppuVar22 = (undefined8 *******)ppppppuVar7;
    }
    uVar16 = uVar26;
    if (uVar2 < uVar26) {
      uVar16 = uVar2;
    }
    iVar10 = memcmp(pppppppuVar22,plVar12,uVar16);
    if (iVar10 == 0) {
      if (uVar26 < uVar2) goto LAB_180207d0c;
    }
    else if (iVar10 < 0) goto LAB_180207d0c;
  }
  else {
LAB_180207d0c:
    plVar24 = plVar6;
  }
  plVar12 = (longlong *)FUN_18020e450(&local_70);
  if (plVar24 != DAT_1805c7c10) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar15 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar15,"lua_gettop");
    }
    uVar16 = (*DAT_1803fcfa0)(lVar1);
    pcVar8 = local_50;
    uVar26 = 0;
    puVar25 = (undefined8 *)plVar24[8];
    puVar3 = (undefined8 *)plVar24[9];
    do {
      if (puVar25 == puVar3) {
        return uVar26;
      }
      if ((*(char *)(puVar25 + 5) == '\0') && (iVar10 = *(int *)(puVar25 + 4), iVar10 != -1)) {
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
              goto LAB_180207e07;
            }
            iVar10 = (*DAT_1803fb088)(lVar4);
            (*pcVar5)(lVar4,iVar10 + -1);
          }
          if ((lVar4 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
            (*DAT_1803fafd8)(lVar4);
          }
        }
LAB_180207e07:
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar15 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar15,"lua_type");
        }
        IVar17 = (*DAT_1803fe490)(lVar1,0xffffffff);
        if ((int)IVar17 == 6) {
          if (DAT_1803faed8 != (code *)0x0) {
            (*DAT_1803faed8)(lVar1,(double)*local_48);
          }
          DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
          iVar10 = FUN_180023180(lVar1,1,1);
          pFVar20 = DAT_1803fe490;
          if (0 < DAT_1803ff8e8) {
            DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
          }
          if (iVar10 == 0) {
            *(undefined4 *)((longlong)puVar25 + 0x24) = 0;
            if (pFVar20 == (FARPROC)0x0) {
              pHVar15 = GetModuleHandleA("lua_shared.dll");
              pFVar20 = GetProcAddress(pHVar15,"lua_type");
              DAT_1803fe490 = pFVar20;
            }
            IVar17 = (*pFVar20)(lVar1,0xffffffff);
            if (((int)IVar17 == 1) &&
               (cVar9 = (**(code **)(*plVar13 + 200))(plVar13,0xffffffff), cVar9 == '\0')) {
              uVar26 = 1;
            }
          }
          else {
            if (DAT_1803fe490 == (FARPROC)0x0) {
              pHVar15 = GetModuleHandleA("lua_shared.dll");
              DAT_1803fe490 = GetProcAddress(pHVar15,"lua_type");
            }
            IVar17 = (*DAT_1803fe490)(lVar1,0xffffffff);
            if ((int)IVar17 == 4) {
              pcVar18 = (char *)(**(code **)(*plVar13 + 0xb8))(plVar13,0xffffffff,0);
            }
            else {
              pcVar18 = "(non-string error)";
            }
            if (DAT_1803ff978 != (code *)0x0) {
              puVar23 = puVar25;
              if (0xf < (ulonglong)puVar25[3]) {
                puVar23 = (undefined8 *)*puVar25;
              }
              pcVar19 = "?";
              if (pcVar18 != (char *)0x0) {
                pcVar19 = pcVar18;
              }
              (*DAT_1803ff978)(pcVar8,puVar23,pcVar19);
            }
            *(int *)((longlong)puVar25 + 0x24) = *(int *)((longlong)puVar25 + 0x24) + 1;
            if (4 < *(int *)((longlong)puVar25 + 0x24)) {
              *(undefined1 *)(puVar25 + 5) = 1;
              puVar23 = puVar25;
              if (0xf < (ulonglong)puVar25[3]) {
                puVar23 = (undefined8 *)*puVar25;
              }
              pcVar19 = "?";
              if (pcVar18 != (char *)0x0) {
                pcVar19 = pcVar18;
              }
              FUN_180014410("[LUAAPI] %s/%s disabled after %d errors, last: %s\n",pcVar8,puVar23,
                            *(int *)((longlong)puVar25 + 0x24),pcVar19);
            }
          }
        }
        else {
          *(undefined1 *)(puVar25 + 5) = 1;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar15 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar15,"lua_settop");
        }
        (*DAT_180425540)(lVar1,uVar16 & 0xffffffff);
      }
      puVar25 = puVar25 + 6;
    } while( true );
  }
LAB_180207c15:
  return (ulonglong)plVar12 & 0xffffffffffffff00;
}


