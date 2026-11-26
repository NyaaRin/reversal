// 0x1800689f0  FUN_1800689f0
// size=1185 thunk=false
// signature: undefined FUN_1800689f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800689f0(void)

{
  longlong lVar1;
  longlong lVar2;
  size_t _Size;
  double dVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  HMODULE pHVar10;
  ulonglong uVar11;
  INT_PTR IVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 ****ppppuVar15;
  undefined8 *puVar16;
  char *pcVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 ***local_80 [2];
  size_t local_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  if ((((DAT_1803eb3c8 != DAT_1803eb3d0) && (DAT_1803ff980 == '\0')) &&
      (plVar9 = (longlong *)FUN_180039770(), plVar9 != (longlong *)0x0)) &&
     (lVar1 = plVar9[1], lVar1 != 0)) {
    if (DAT_1803fa608 == (float *)0x0) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = (double)*DAT_1803fa608;
    }
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar10 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar10,"lua_gettop");
    }
    uVar11 = (*DAT_1803fcfa0)(lVar1);
    uVar19 = 0;
    puVar16 = DAT_1803eb3c8;
    puVar18 = DAT_1803eb3d0;
    if ((longlong)DAT_1803eb3d0 - (longlong)DAT_1803eb3c8 >> 6 != 0) {
      do {
        if ((*(char *)(puVar16 + uVar19 * 8 + 7) == '\0') &&
           ((double)puVar16[uVar19 * 8 + 4] <= dVar3)) {
          iVar8 = *(int *)((longlong)puVar16 + uVar19 * 0x40 + 0x34);
          FUN_18016d4c0(local_80);
          DAT_1803eb3c8[uVar19 * 8 + 4] = dVar3 + (double)DAT_1803eb3c8[uVar19 * 8 + 5];
          if ((0 < *(int *)(DAT_1803eb3c8 + uVar19 * 8 + 6)) &&
             (iVar7 = *(int *)(DAT_1803eb3c8 + uVar19 * 8 + 6) + -1,
             *(int *)(DAT_1803eb3c8 + uVar19 * 8 + 6) = iVar7, iVar7 == 0)) {
            *(undefined1 *)(DAT_1803eb3c8 + uVar19 * 8 + 7) = 1;
          }
          if (iVar8 < 0x40000000) {
            (**(code **)(*plVar9 + 0x128))(plVar9,iVar8);
          }
          else {
            lVar2 = plVar9[1];
            cVar6 = FUN_18002d6e0(lVar2);
            if (cVar6 != '\0') {
              (*DAT_1803faf38)(lVar2,0xffffd8ed);
              iVar7 = (*DAT_1803faff8)(lVar2,0xffffffff);
              pcVar5 = DAT_1803faf10;
              if (iVar7 == 5) {
                (*DAT_1803faf88)(lVar2,0xffffffff,iVar8 + -0x40000000);
                (*DAT_1803faee0)(lVar2,0xfffffffe);
                goto LAB_180068bdf;
              }
              iVar8 = (*DAT_1803fb088)(lVar2);
              (*pcVar5)(lVar2,iVar8 + -1);
            }
            if ((lVar2 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
              (*DAT_1803fafd8)(lVar2);
            }
          }
LAB_180068bdf:
          if (DAT_1803fe490 == (FARPROC)0x0) {
            pHVar10 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fe490 = GetProcAddress(pHVar10,"lua_type");
          }
          IVar12 = (*DAT_1803fe490)(lVar1,0xffffffff);
          if ((int)IVar12 == 6) {
            DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
            iVar8 = FUN_180023180(lVar1,0,0);
            if (iVar8 != 0) {
              if (DAT_1803fe490 == (FARPROC)0x0) {
                pHVar10 = GetModuleHandleA("lua_shared.dll");
                DAT_1803fe490 = GetProcAddress(pHVar10,"lua_type");
              }
              IVar12 = (*DAT_1803fe490)(lVar1,0xffffffff);
              if ((int)IVar12 == 4) {
                pcVar13 = (char *)(**(code **)(*plVar9 + 0xb8))(plVar9,0xffffffff,0);
              }
              else {
                pcVar13 = "(non-string error)";
              }
              ppppuVar15 = local_80;
              if (0xf < local_68) {
                ppppuVar15 = (undefined8 ****)local_80[0];
              }
              pcVar17 = "?";
              if (pcVar13 != (char *)0x0) {
                pcVar17 = pcVar13;
              }
              FUN_180014410("[LUATIMER] \'%s\' errored, removed: %s\n",ppppuVar15,pcVar17);
              puVar18 = DAT_1803eb3d0;
              for (puVar16 = DAT_1803eb3c8; puVar16 != puVar18; puVar16 = puVar16 + 8) {
                ppppuVar15 = local_80;
                if (0xf < local_68) {
                  ppppuVar15 = (undefined8 ****)local_80[0];
                }
                _Size = puVar16[2];
                puVar14 = puVar16;
                if (0xf < (ulonglong)puVar16[3]) {
                  puVar14 = (undefined8 *)*puVar16;
                }
                if ((_Size == local_70) &&
                   ((_Size == 0 || (iVar8 = memcmp(puVar14,ppppuVar15,_Size), iVar8 == 0)))) {
                  *(undefined1 *)(puVar16 + 7) = 1;
                }
              }
              if (DAT_1803ff978 != (code *)0x0) {
                ppppuVar15 = local_80;
                if (0xf < local_68) {
                  ppppuVar15 = (undefined8 ****)local_80[0];
                }
                (*DAT_1803ff978)("timer",ppppuVar15,pcVar17);
              }
            }
            if (0 < DAT_1803ff8e8) {
              DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
            }
          }
          if (DAT_180425540 == (FARPROC)0x0) {
            pHVar10 = GetModuleHandleA("lua_shared.dll");
            DAT_180425540 = GetProcAddress(pHVar10,"lua_settop");
          }
          (*DAT_180425540)(lVar1,uVar11 & 0xffffffff);
          FUN_18020e450(local_80);
          puVar16 = DAT_1803eb3c8;
          puVar18 = DAT_1803eb3d0;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < (ulonglong)((longlong)puVar18 - (longlong)puVar16 >> 6));
    }
    if (puVar16 != puVar18) {
      do {
        puVar14 = puVar16 + 8;
        if (*(char *)(puVar16 + 7) != '\0') {
          FUN_18002d8c0(plVar9,*(undefined4 *)((longlong)puVar16 + 0x34));
          puVar4 = DAT_1803eb3d0;
          puVar18 = puVar16;
          for (; puVar14 != puVar4; puVar14 = puVar14 + 8) {
            FUN_18020e8a0(puVar18,puVar14);
            puVar18[4] = puVar14[4];
            puVar18[5] = puVar14[5];
            *(undefined4 *)(puVar18 + 6) = *(undefined4 *)(puVar14 + 6);
            *(undefined4 *)((longlong)puVar18 + 0x34) = *(undefined4 *)((longlong)puVar14 + 0x34);
            *(undefined1 *)(puVar18 + 7) = *(undefined1 *)(puVar14 + 7);
            puVar18 = puVar18 + 8;
          }
          local_88 = DAT_1803eb3d0 + -8;
          FUN_18020e450();
          puVar18 = DAT_1803eb3d0 + -8;
          puVar14 = puVar16;
          DAT_1803eb3d0 = puVar18;
        }
        puVar16 = puVar14;
      } while (puVar14 != puVar18);
    }
  }
  return;
}


