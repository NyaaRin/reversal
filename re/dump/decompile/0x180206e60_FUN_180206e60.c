// 0x180206e60  FUN_180206e60
// size=1402 thunk=false
// signature: undefined FUN_180206e60()
// status: ok


ulonglong FUN_180206e60(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

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
  longlong *plVar13;
  longlong *plVar14;
  HMODULE pHVar15;
  ulonglong uVar16;
  INT_PTR IVar17;
  char *pcVar18;
  size_t sVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong _Size;
  ulonglong uVar23;
  char *pcVar24;
  longlong *plVar25;
  byte bVar26;
  undefined8 ******local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  
  plVar11 = (longlong *)0x0;
  if (((DAT_1803ff980 != '\0') ||
      (local_70 = param_3, local_68 = param_4, local_40 = param_3, local_38 = param_4,
      plVar11 = (longlong *)FUN_18003a090("ESP_WeaponName"), (char)plVar11 == '\0')) ||
     (plVar12 = (longlong *)FUN_180039770(), plVar11 = plVar12, plVar12 == (longlong *)0x0))
  goto LAB_180206ef7;
  plVar13 = plVar12 + 1;
  lVar1 = *plVar13;
  plVar11 = plVar13;
  if (lVar1 == 0) goto LAB_180206ef7;
  local_58 = lVar1;
  if ((DAT_1803ff988 != 0) && (DAT_1803ff988 != lVar1)) {
    plVar11 = (longlong *)FUN_180039a50(0);
    goto LAB_180206ef7;
  }
  local_90 = (undefined8 *******)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_18001d080(&local_90,"ESP_WeaponName",0xe);
  uVar23 = local_78;
  uVar16 = local_80;
  ppppppuVar7 = local_90;
  plVar6 = DAT_1805c7c10;
  plVar11 = (longlong *)DAT_1805c7c10[1];
  cVar8 = *(char *)((longlong)plVar11 + 0x19);
  plVar25 = DAT_1805c7c10;
  while (cVar8 == '\0') {
    plVar14 = plVar11 + 4;
    pppppppuVar20 = &local_90;
    if (0xf < uVar23) {
      pppppppuVar20 = (undefined8 *******)ppppppuVar7;
    }
    uVar2 = plVar11[6];
    if (0xf < (ulonglong)plVar11[7]) {
      plVar14 = (longlong *)*plVar14;
    }
    _Size = uVar2;
    if (uVar16 < uVar2) {
      _Size = uVar16;
    }
    iVar9 = memcmp(plVar14,pppppppuVar20,_Size);
    if (iVar9 == 0) {
      if (uVar2 < uVar16) {
        cVar8 = -1;
      }
      else {
        if (uVar16 < uVar2) goto LAB_180206fb3;
        cVar8 = '\0';
        plVar25 = plVar11;
      }
    }
    else if (iVar9 < 0) {
      cVar8 = -1;
    }
    else {
LAB_180206fb3:
      cVar8 = '\x01';
      plVar25 = plVar11;
    }
    plVar14 = plVar11 + 2;
    if (-1 < cVar8) {
      plVar14 = plVar11;
    }
    plVar11 = (longlong *)*plVar14;
    cVar8 = *(char *)((longlong)plVar11 + 0x19);
  }
  if (*(char *)((longlong)plVar25 + 0x19) == '\0') {
    plVar11 = plVar25 + 4;
    uVar2 = plVar25[6];
    if (0xf < (ulonglong)plVar25[7]) {
      plVar11 = (longlong *)*plVar11;
    }
    pppppppuVar20 = &local_90;
    if (0xf < uVar23) {
      pppppppuVar20 = (undefined8 *******)ppppppuVar7;
    }
    uVar23 = uVar16;
    if (uVar2 < uVar16) {
      uVar23 = uVar2;
    }
    iVar9 = memcmp(pppppppuVar20,plVar11,uVar23);
    if (iVar9 == 0) {
      if (uVar16 < uVar2) goto LAB_180207016;
    }
    else if (iVar9 < 0) goto LAB_180207016;
  }
  else {
LAB_180207016:
    plVar25 = plVar6;
  }
  plVar11 = (longlong *)FUN_18020e450(&local_90);
  if (plVar25 != DAT_1805c7c10) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar15 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar15,"lua_gettop");
    }
    local_48 = plVar13;
    uVar16 = (*DAT_1803fcfa0)(lVar1);
    bVar26 = 0;
    puVar22 = (undefined8 *)plVar25[8];
    puVar3 = (undefined8 *)plVar25[9];
    local_50 = puVar3;
    do {
      if (puVar22 == puVar3) {
        return (ulonglong)bVar26;
      }
      if ((*(char *)(puVar22 + 5) == '\0') && (iVar9 = *(int *)(puVar22 + 4), iVar9 != -1)) {
        local_60 = puVar22;
        if (iVar9 < 0x40000000) {
          (**(code **)(*plVar12 + 0x128))(plVar12,iVar9);
        }
        else {
          lVar4 = *plVar13;
          cVar8 = FUN_18002d6e0(lVar4);
          if (cVar8 != '\0') {
            (*DAT_1803faf38)(lVar4,0xffffd8ed);
            iVar10 = (*DAT_1803faff8)(lVar4,0xffffffff);
            pcVar5 = DAT_1803faf10;
            if (iVar10 == 5) {
              (*DAT_1803faf88)(lVar4,0xffffffff,iVar9 + -0x40000000);
              (*DAT_1803faee0)(lVar4,0xfffffffe);
              goto LAB_18020712a;
            }
            iVar9 = (*DAT_1803fb088)(lVar4);
            (*pcVar5)(lVar4,iVar9 + -1);
          }
          if ((lVar4 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
            (*DAT_1803fafd8)(lVar4);
          }
        }
LAB_18020712a:
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar15 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar15,"lua_type");
        }
        IVar17 = (*DAT_1803fe490)(lVar1,0xffffffff);
        plVar11 = local_70;
        if ((int)IVar17 == 6) {
          if ((DAT_1803faed8 != (code *)0x0) && (DAT_1803fafa0 != (code *)0x0)) {
            (*DAT_1803faed8)(lVar1,(double)*(int *)*local_70);
            lVar4 = *plVar11;
            puVar21 = (undefined8 *)(lVar4 + 0x28);
            if (0xf < *(ulonglong *)(lVar4 + 0x40)) {
              puVar21 = (undefined8 *)*puVar21;
            }
            (*DAT_1803fafa0)(lVar1,puVar21);
            lVar4 = *plVar11;
            puVar21 = (undefined8 *)(lVar4 + 8);
            if (0xf < *(ulonglong *)(lVar4 + 0x20)) {
              puVar21 = (undefined8 *)*puVar21;
            }
            (*DAT_1803fafa0)(lVar1,puVar21);
          }
          DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
          iVar9 = FUN_180023180(lVar1,3,1);
          if (0 < DAT_1803ff8e8) {
            DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
          }
          if (iVar9 == 0) {
            *(undefined4 *)((longlong)puVar22 + 0x24) = 0;
            if (bVar26 == 0) {
              if (DAT_1803fe490 == (FARPROC)0x0) {
                pHVar15 = GetModuleHandleA("lua_shared.dll");
                DAT_1803fe490 = GetProcAddress(pHVar15,"lua_type");
              }
              IVar17 = (*DAT_1803fe490)(lVar1,0xffffffff);
              if (((int)IVar17 == 4) &&
                 (pcVar18 = (char *)(**(code **)(*plVar12 + 0xb8))(plVar12,0xffffffff,0),
                 pcVar18 != (char *)0x0)) {
                sVar19 = strlen(pcVar18);
                FUN_180212700(local_68,pcVar18,sVar19);
                bVar26 = 1;
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
              pcVar18 = (char *)(**(code **)(*plVar12 + 0xb8))(plVar12,0xffffffff,0);
            }
            else {
              pcVar18 = "(non-string error)";
            }
            if (DAT_1803ff978 != (code *)0x0) {
              puVar21 = puVar22;
              if (0xf < (ulonglong)puVar22[3]) {
                puVar21 = (undefined8 *)*puVar22;
              }
              pcVar24 = "?";
              if (pcVar18 != (char *)0x0) {
                pcVar24 = pcVar18;
              }
              (*DAT_1803ff978)("ESP_WeaponName",puVar21,pcVar24);
            }
            *(int *)((longlong)puVar22 + 0x24) = *(int *)((longlong)puVar22 + 0x24) + 1;
            if (4 < *(int *)((longlong)puVar22 + 0x24)) {
              *(undefined1 *)(puVar22 + 5) = 1;
            }
          }
        }
        else {
          *(undefined1 *)(puVar22 + 5) = 1;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar15 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar15,"lua_settop");
        }
        (*DAT_180425540)(lVar1,uVar16 & 0xffffffff);
      }
      puVar22 = puVar22 + 6;
    } while( true );
  }
LAB_180206ef7:
  return (ulonglong)plVar11 & 0xffffffffffffff00;
}


