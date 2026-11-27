// 0x1802034f0  FUN_1802034f0
// size=1459 thunk=false
// signature: undefined FUN_1802034f0()
// status: ok


ulonglong FUN_1802034f0(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 *param_4,
                       undefined1 *param_5,undefined8 *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 ******ppppppuVar7;
  undefined1 *puVar8;
  int *piVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  HMODULE pHVar15;
  ulonglong uVar16;
  INT_PTR IVar17;
  char *pcVar18;
  char *pcVar19;
  longlong *plVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  ulonglong _Size;
  ulonglong uVar25;
  byte bVar26;
  undefined8 uVar27;
  undefined8 ******local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined1 *local_60;
  int *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  local_60 = param_5;
  local_48 = param_6;
  *param_5 = 0;
  plVar13 = (longlong *)0x0;
  if ((((DAT_1803ff980 != '\0') ||
       (local_58 = param_3, local_50 = param_4,
       plVar13 = (longlong *)FUN_18003a090("Pre_AnimUpdate"), (char)plVar13 == '\0')) ||
      (plVar14 = (longlong *)FUN_180039770(), plVar13 = plVar14, plVar14 == (longlong *)0x0)) ||
     (lVar1 = plVar14[1], lVar1 == 0)) goto LAB_18020357c;
  if ((DAT_1803ff988 != 0) && (DAT_1803ff988 != lVar1)) {
    plVar13 = (longlong *)FUN_180039a50(0);
    goto LAB_18020357c;
  }
  local_80 = (undefined8 *******)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_18001d080(&local_80,"Pre_AnimUpdate",0xe);
  uVar25 = local_68;
  uVar16 = local_70;
  ppppppuVar7 = local_80;
  plVar6 = DAT_1805c7c10;
  plVar13 = (longlong *)DAT_1805c7c10[1];
  cVar10 = *(char *)((longlong)plVar13 + 0x19);
  plVar23 = DAT_1805c7c10;
  while (cVar10 == '\0') {
    plVar20 = plVar13 + 4;
    pppppppuVar21 = &local_80;
    if (0xf < uVar25) {
      pppppppuVar21 = (undefined8 *******)ppppppuVar7;
    }
    uVar2 = plVar13[6];
    if (0xf < (ulonglong)plVar13[7]) {
      plVar20 = (longlong *)*plVar20;
    }
    _Size = uVar2;
    if (uVar16 < uVar2) {
      _Size = uVar16;
    }
    iVar11 = memcmp(plVar20,pppppppuVar21,_Size);
    plVar20 = plVar13;
    if (iVar11 == 0) {
      if (uVar2 < uVar16) goto LAB_180203676;
    }
    else if (iVar11 < 0) {
LAB_180203676:
      plVar13 = plVar13 + 2;
      plVar20 = plVar23;
    }
    plVar13 = (longlong *)*plVar13;
    plVar23 = plVar20;
    cVar10 = *(char *)((longlong)plVar13 + 0x19);
  }
  if (*(char *)((longlong)plVar23 + 0x19) == '\0') {
    plVar13 = plVar23 + 4;
    uVar2 = plVar23[6];
    if (0xf < (ulonglong)plVar23[7]) {
      plVar13 = (longlong *)*plVar13;
    }
    pppppppuVar21 = &local_80;
    if (0xf < uVar25) {
      pppppppuVar21 = (undefined8 *******)ppppppuVar7;
    }
    uVar25 = uVar16;
    if (uVar2 < uVar16) {
      uVar25 = uVar2;
    }
    iVar11 = memcmp(pppppppuVar21,plVar13,uVar25);
    if (iVar11 == 0) {
      if (uVar16 < uVar2) goto LAB_180203681;
    }
    else if (iVar11 < 0) goto LAB_180203681;
  }
  else {
LAB_180203681:
    plVar23 = plVar6;
  }
  plVar13 = (longlong *)FUN_18020e450(&local_80);
  if (plVar23 != DAT_1805c7c10) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar15 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar15,"lua_gettop");
    }
    uVar16 = (*DAT_1803fcfa0)(lVar1);
    puVar8 = local_60;
    bVar26 = 0;
    puVar24 = (undefined8 *)plVar23[8];
    puVar3 = (undefined8 *)plVar23[9];
    do {
      if (puVar24 == puVar3) {
        return (ulonglong)bVar26;
      }
      if ((*(char *)(puVar24 + 5) == '\0') && (iVar11 = *(int *)(puVar24 + 4), iVar11 != -1)) {
        if (iVar11 < 0x40000000) {
          (**(code **)(*plVar14 + 0x128))(plVar14,iVar11);
        }
        else {
          lVar4 = plVar14[1];
          cVar10 = FUN_18002d6e0(lVar4);
          if (cVar10 != '\0') {
            (*DAT_1803faf38)(lVar4,0xffffd8ed);
            iVar12 = (*DAT_1803faff8)(lVar4,0xffffffff);
            pcVar5 = DAT_1803faf10;
            if (iVar12 == 5) {
              (*DAT_1803faf88)(lVar4,0xffffffff,iVar11 + -0x40000000);
              (*DAT_1803faee0)(lVar4,0xfffffffe);
              goto LAB_180203772;
            }
            iVar11 = (*DAT_1803fb088)(lVar4);
            (*pcVar5)(lVar4,iVar11 + -1);
          }
          if ((lVar4 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
            (*DAT_1803fafd8)(lVar4);
          }
        }
LAB_180203772:
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar15 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar15,"lua_type");
        }
        IVar17 = (*DAT_1803fe490)(lVar1,0xffffffff);
        piVar9 = local_58;
        if ((int)IVar17 == 6) {
          if (DAT_1803faed8 != (code *)0x0) {
            (*DAT_1803faed8)(lVar1,(double)*local_58);
            (*DAT_1803faed8)(lVar1,(double)(float)piVar9[1]);
            (*DAT_1803faed8)(lVar1,(double)(float)piVar9[2]);
          }
          DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
          iVar11 = FUN_180023180(lVar1,3,2);
          if (0 < DAT_1803ff8e8) {
            DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
          }
          if (iVar11 == 0) {
            *(undefined4 *)((longlong)puVar24 + 0x24) = 0;
            if (bVar26 == 0) {
              if (DAT_1803fe490 == (FARPROC)0x0) {
                pHVar15 = GetModuleHandleA("lua_shared.dll");
                DAT_1803fe490 = GetProcAddress(pHVar15,"lua_type");
              }
              IVar17 = (*DAT_1803fe490)(lVar1,0xfffffffe);
              if (((int)IVar17 == 3) &&
                 (uVar27 = (**(code **)(*plVar14 + 0xc0))(plVar14,0xfffffffe),
                 ((uint)((ulonglong)uVar27 >> 0x34) & 0x7ff) != 0x7ff)) {
                *local_50 = uVar27;
                bVar26 = 1;
                if (DAT_1803fe490 == (FARPROC)0x0) {
                  pHVar15 = GetModuleHandleA("lua_shared.dll");
                  DAT_1803fe490 = GetProcAddress(pHVar15,"lua_type");
                }
                IVar17 = (*DAT_1803fe490)(lVar1,0xffffffff);
                if (((int)IVar17 == 3) &&
                   (uVar27 = (**(code **)(*plVar14 + 0xc0))(plVar14,0xffffffff),
                   ((uint)((ulonglong)uVar27 >> 0x34) & 0x7ff) != 0x7ff)) {
                  *local_48 = uVar27;
                  *puVar8 = 1;
                }
              }
            }
          }
          else {
            if (DAT_1803fe490 == (FARPROC)0x0) {
              pHVar15 = GetModuleHandleA("lua_shared.dll");
              DAT_1803fe490 = GetProcAddress(pHVar15,"lua_type");
            }
            IVar17 = (*DAT_1803fe490)(lVar1,0xffffffff);
            if ((int)IVar17 == 4) {
              pcVar18 = (char *)(**(code **)(*plVar14 + 0xb8))(plVar14,0xffffffff,0);
            }
            else {
              pcVar18 = "(non-string error)";
            }
            if (DAT_1803ff978 != (code *)0x0) {
              puVar22 = puVar24;
              if (0xf < (ulonglong)puVar24[3]) {
                puVar22 = (undefined8 *)*puVar24;
              }
              pcVar19 = "?";
              if (pcVar18 != (char *)0x0) {
                pcVar19 = pcVar18;
              }
              (*DAT_1803ff978)("Pre_AnimUpdate",puVar22,pcVar19);
            }
            *(int *)((longlong)puVar24 + 0x24) = *(int *)((longlong)puVar24 + 0x24) + 1;
            if (4 < *(int *)((longlong)puVar24 + 0x24)) {
              *(undefined1 *)(puVar24 + 5) = 1;
              puVar22 = puVar24;
              if (0xf < (ulonglong)puVar24[3]) {
                puVar22 = (undefined8 *)*puVar24;
              }
              pcVar19 = "?";
              if (pcVar18 != (char *)0x0) {
                pcVar19 = pcVar18;
              }
              FUN_180014410("[LUAAPI] %s/%s disabled after %d errors, last: %s\n","Pre_AnimUpdate",
                            puVar22,*(int *)((longlong)puVar24 + 0x24),pcVar19);
            }
          }
        }
        else {
          *(undefined1 *)(puVar24 + 5) = 1;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar15 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar15,"lua_settop");
        }
        (*DAT_180425540)(lVar1,uVar16 & 0xffffffff);
      }
      puVar24 = puVar24 + 6;
    } while( true );
  }
LAB_18020357c:
  return (ulonglong)plVar13 & 0xffffffffffffff00;
}


