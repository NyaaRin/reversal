// 0x1800ff190  FUN_1800ff190
// size=3199 thunk=false
// signature: undefined FUN_1800ff190()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ff190(void)

{
  int *piVar1;
  double dVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  char *pcVar11;
  size_t sVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *****pppppuVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 *puVar17;
  void *pvVar18;
  undefined8 *******pppppppuVar19;
  void *pvVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined8 *******pppppppuVar25;
  int iVar26;
  int iVar27;
  undefined8 ******ppppppuVar28;
  undefined1 auStackY_3348 [8];
  undefined1 auStackY_3340 [24];
  int local_3318;
  undefined1 local_330c;
  undefined1 local_32b8 [128];
  undefined4 local_3238;
  longlong local_3168;
  longlong lStack_3160;
  longlong local_3158;
  void *local_3150;
  void *pvStack_3148;
  longlong local_3140;
  undefined8 ******local_3138;
  undefined8 uStack_3130;
  undefined8 local_3128;
  ulonglong local_3120;
  undefined8 ******local_3118;
  undefined8 uStack_3110;
  undefined8 local_3108;
  ulonglong local_3100;
  undefined8 ****local_30f8;
  undefined8 uStack_30f0;
  undefined8 local_30e8;
  undefined8 local_30e0;
  undefined4 local_30d8;
  undefined1 local_30d0 [40];
  undefined8 ****local_30a8 [4];
  undefined8 ****local_3088 [512];
  undefined8 *****local_2088 [4];
  undefined8 *****local_2068 [1028];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1800ff1a6;
  puVar21 = auStackY_3348;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStackY_3348;
  if (DAT_18040a3d2 == '\0') {
    uVar24 = 0;
    do {
      (&DAT_180458320)[uVar24] = 0xffffffff;
      if (0x80 < (uint)uVar24) goto LAB_1800ffe67;
      (&DAT_180458530)[uVar24] = 0;
      (&DAT_180458290)[uVar24] = 0;
      (&DAT_1804585c0)[uVar24] = 0;
      uVar16 = (uint)uVar24 + 1;
      uVar24 = (ulonglong)uVar16;
    } while ((int)uVar16 < 0x81);
    DAT_18040a3d2 = '\x01';
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  dVar2 = *(double *)(*(longlong *)(lVar10 + 0xec0) + 0x10);
  puVar22 = auStackY_3348;
  if (dVar2 - _DAT_1803e8918 < DAT_180380d38) goto LAB_1800ffd9e;
  uVar24 = 0;
  _DAT_1803e8918 = dVar2;
  do {
    (&DAT_180458320)[uVar24] = 0xffffffff;
    if (0x80 < (uint)uVar24) {
LAB_1800ffe67:
                    /* WARNING: Subroutine does not return */
      FUN_1802d8348();
    }
    (&DAT_180458530)[uVar24] = 0;
    (&DAT_180458290)[uVar24] = 0;
    (&DAT_1804585c0)[uVar24] = 0;
    uVar16 = (uint)uVar24 + 1;
    uVar24 = (ulonglong)uVar16;
  } while ((int)uVar16 < 0x81);
  if ((((DAT_1803fa668 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 != '\0')) &&
      (DAT_1803fa360 != (longlong *)0x0)) && (DAT_1803fa608 != 0)) {
    local_3168 = 0;
    lStack_3160 = 0;
    local_3158 = 0;
    _eh_vector_constructor_iterator_
              (local_30a8,0x20,0x81,FUN_1800209f0,
               Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09);
    _eh_vector_constructor_iterator_(local_2088,0x40,0x81,FUN_1800209b0,FUN_180020a30);
    iVar9 = 0x80;
    if (*(int *)(DAT_1803fa608 + 0x1c) < 0x80) {
      iVar9 = *(int *)(DAT_1803fa608 + 0x1c);
    }
    for (iVar27 = 1; iVar27 <= iVar9; iVar27 = iVar27 + 1) {
      lVar10 = (**(code **)(*DAT_1803fa360 + 0x18))();
      if (lVar10 != 0) {
        memset(local_32b8,0,0x144);
        cVar6 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,iVar27,local_32b8);
        if (cVar6 != '\0') {
          pcVar11 = (char *)FUN_18001f960(lVar10);
          if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
            sVar12 = strlen(pcVar11);
            FUN_180212700(local_2088 + (longlong)iVar27 * 8,pcVar11,sVar12);
          }
          if (((DAT_1803fcf68 != (code *)0x0) &&
              (pcVar11 = (char *)(*DAT_1803fcf68)(iVar27,local_3238), pcVar11 != (char *)0x0)) &&
             (*pcVar11 != '\0')) {
            sVar12 = strlen(pcVar11);
            FUN_180212700(local_2068 + (longlong)iVar27 * 8,pcVar11,sVar12);
          }
          lVar10 = (longlong)iVar27;
          if (local_2088[lVar10 * 8 + 2] != (undefined8 *****)0x0) {
            ppppppuVar13 = local_2088 + lVar10 * 8;
            ppppppuVar28 = (undefined8 ******)(local_30a8 + lVar10 * 4);
            if (ppppppuVar28 != ppppppuVar13) {
              if ((undefined8 *****)0xf < local_2088[lVar10 * 8 + 3]) {
                ppppppuVar13 = (undefined8 ******)*ppppppuVar13;
              }
              FUN_180212700(ppppppuVar28,ppppppuVar13,local_2088[lVar10 * 8 + 2]);
            }
            for (iVar26 = 0; iVar26 < (int)(lStack_3160 - local_3168 >> 3) * -0x33333333;
                iVar26 = iVar26 + 1) {
              puVar23 = (undefined8 *)(local_3168 + (longlong)iVar26 * 0x28);
              if ((undefined8 ****)puVar23[2] == local_30a8[lVar10 * 4 + 2]) {
                uVar24 = 0;
                while( true ) {
                  if ((ulonglong)puVar23[2] <= uVar24) goto LAB_1800ff5dc;
                  puVar17 = puVar23;
                  if (0xf < (ulonglong)puVar23[3]) {
                    puVar17 = (undefined8 *)*puVar23;
                  }
                  ppppppuVar13 = ppppppuVar28;
                  if ((undefined8 ****)0xf < local_30a8[lVar10 * 4 + 3]) {
                    ppppppuVar13 = (undefined8 ******)*ppppppuVar28;
                  }
                  iVar7 = tolower((uint)*(byte *)((longlong)ppppppuVar13 + uVar24));
                  iVar8 = tolower((uint)*(byte *)((longlong)puVar17 + uVar24));
                  if (iVar8 != iVar7) break;
                  uVar24 = uVar24 + 1;
                }
              }
            }
            iVar26 = -1;
LAB_1800ff5dc:
            if (iVar26 < 0) {
              uStack_30f0 = 0;
              local_30e8 = 0;
              local_30e0 = 0xf;
              local_30f8 = (undefined8 *****)0x0;
              local_30d8 = 0;
              if ((undefined8 ******)&local_30f8 != ppppppuVar28) {
                if ((undefined8 ****)0xf < local_30a8[lVar10 * 4 + 3]) {
                  ppppppuVar28 = (undefined8 ******)*ppppppuVar28;
                }
                FUN_180212700(&local_30f8,ppppppuVar28,local_30a8[lVar10 * 4 + 2]);
              }
              lVar10 = lStack_3160;
              if (lStack_3160 == local_3158) {
                FUN_180225dd0(&local_3168,lStack_3160,&local_30f8);
              }
              else {
                FUN_18016d4c0(lStack_3160,&local_30f8);
                *(undefined4 *)(lVar10 + 0x20) = local_30d8;
                lStack_3160 = lStack_3160 + 0x28;
              }
              iVar26 = (int)(lStack_3160 - local_3168 >> 3) * -0x33333333 + -1;
              FUN_18020e450(&local_30f8);
            }
            piVar1 = (int *)(local_3168 + 0x20 + (longlong)iVar26 * 0x28);
            *piVar1 = *piVar1 + 1;
          }
        }
      }
    }
    local_3150 = (void *)0x0;
    pvStack_3148 = (void *)0x0;
    local_3140 = 0;
    iVar27 = _Mtx_lock(&DAT_1803e8920);
    if (iVar27 == 0) {
      if (DAT_1803e896c == 0x7fffffff) {
LAB_1800ffc3a:
        DAT_1803e896c = DAT_1803e896c + -1;
        std::_Throw_Cpp_error(6);
      }
      else {
        FUN_1802179b0(&local_3150,DAT_1803e9c08,
                      (DAT_1803e9c10 - DAT_1803e9c08 >> 4) * -0x3333333333333333);
        _Mtx_unlock(&DAT_1803e8920);
        local_3318 = 1;
        pvVar18 = local_3150;
        pvVar20 = pvStack_3148;
        if (0 < iVar9) {
          do {
            lVar10 = (longlong)local_3318;
            if (local_30a8[lVar10 * 4 + 2] != (undefined8 ****)0x0) {
              iVar27 = 0;
              if (0 < (int)((longlong)pvVar20 - (longlong)pvVar18 >> 4) * -0x33333333) {
                do {
                  puVar23 = (undefined8 *)((longlong)iVar27 * 0x50 + (longlong)pvVar18);
                  if ((undefined8 ****)puVar23[2] == local_30a8[lVar10 * 4 + 2]) {
                    uVar24 = 0;
                    if ((undefined8 ****)puVar23[2] == (undefined8 ****)0x0) {
LAB_1800ff8b4:
                      (&DAT_180458320)[lVar10] = iVar27;
                      if ((-1 < iVar27) &&
                         (iVar27 < (int)((longlong)pvVar20 - (longlong)pvVar18 >> 4) * -0x33333333))
                      {
                        lVar15 = (longlong)iVar27;
                        (&DAT_180458530)[lVar10] =
                             *(undefined1 *)((longlong)pvVar18 + lVar15 * 0x50 + 0x20);
                        (&DAT_180458290)[lVar10] =
                             *(undefined1 *)((longlong)pvVar18 + lVar15 * 0x50 + 0x21);
                        (&DAT_1804585c0)[lVar10] =
                             *(undefined1 *)((longlong)pvVar18 + lVar15 * 0x50 + 0x22);
                      }
                      goto LAB_1800ff974;
                    }
                    while( true ) {
                      puVar17 = puVar23;
                      if (0xf < (ulonglong)puVar23[3]) {
                        puVar17 = (undefined8 *)*puVar23;
                      }
                      pppppuVar14 = local_30a8 + lVar10 * 4;
                      if ((undefined8 ****)0xf < local_30a8[lVar10 * 4 + 3]) {
                        pppppuVar14 = (undefined8 *****)local_30a8[lVar10 * 4];
                      }
                      bVar3 = *(byte *)((longlong)pppppuVar14 + uVar24);
                      iVar26 = tolower((uint)*(byte *)((longlong)puVar17 + uVar24));
                      iVar7 = tolower((uint)bVar3);
                      pvVar18 = local_3150;
                      pvVar20 = pvStack_3148;
                      if (iVar26 != iVar7) break;
                      uVar24 = uVar24 + 1;
                      if ((ulonglong)puVar23[2] <= uVar24) goto LAB_1800ff8b4;
                    }
                  }
                  iVar27 = iVar27 + 1;
                } while (iVar27 < (int)((longlong)pvVar20 - (longlong)pvVar18 >> 4) * -0x33333333);
              }
              (&DAT_180458320)[lVar10] = 0xffffffff;
            }
LAB_1800ff974:
            local_3318 = local_3318 + 1;
          } while (local_3318 <= iVar9);
        }
        iVar27 = 1;
        FUN_180212c00(local_3168,lStack_3160,(lStack_3160 - local_3168 >> 3) * -0x3333333333333333,
                      local_330c);
        cVar6 = FUN_18003a090("ESP_PlayerName");
        if ((cVar6 != '\0') && (iVar26 = 1, 0 < iVar9)) {
          do {
            if (0x80 < iVar26) break;
            pppppppuVar25 = (undefined8 *******)(local_2068 + (longlong)iVar26 * 8);
            FUN_18016d4c0(local_30d0,pppppppuVar25);
            uStack_3130 = 0;
            local_3128 = 0;
            local_3120 = 0xf;
            local_3138 = (undefined8 *******)0x0;
            cVar6 = FUN_180203eb0();
            if ((cVar6 != '\0') && (pppppppuVar25 != &local_3138)) {
              pppppppuVar19 = &local_3138;
              if (0xf < local_3120) {
                pppppppuVar19 = (undefined8 *******)local_3138;
              }
              FUN_180212700(pppppppuVar25,pppppppuVar19,local_3128);
            }
            FUN_18020e450(&local_3138);
            FUN_18020e450(local_30d0);
            iVar26 = iVar26 + 1;
          } while (iVar26 <= iVar9);
        }
        cVar6 = FUN_18003a090("ESP_Usergroup");
        if ((cVar6 != '\0') && (0 < iVar9)) {
          do {
            if (0x80 < iVar27) break;
            pppppppuVar25 = (undefined8 *******)(local_2088 + (longlong)iVar27 * 8);
            FUN_18016d4c0(local_30d0,pppppppuVar25);
            uStack_3110 = 0;
            local_3108 = 0;
            local_3100 = 0xf;
            local_3118 = (undefined8 *******)0x0;
            cVar6 = FUN_180204460();
            if ((cVar6 != '\0') && (pppppppuVar25 != &local_3118)) {
              pppppppuVar19 = &local_3118;
              if (0xf < local_3100) {
                pppppppuVar19 = (undefined8 *******)local_3118;
              }
              FUN_180212700(pppppppuVar25,pppppppuVar19,local_3108);
            }
            FUN_18020e450(&local_3118);
            FUN_18020e450(local_30d0);
            iVar27 = iVar27 + 1;
          } while (iVar27 <= iVar9);
        }
        FUN_180020b70(local_2088);
        iVar9 = _Mtx_lock(&DAT_1803e8920);
        if (iVar9 != 0) goto LAB_1800ffdc1;
        if (DAT_1803e896c == 0x7fffffff) goto LAB_1800ffc3a;
      }
      lVar5 = DAT_1803edc78;
      lVar15 = DAT_1803edc70;
      lVar10 = DAT_1803edc68;
      DAT_1803edc68 = local_3168;
      local_3168 = lVar10;
      DAT_1803edc70 = lStack_3160;
      lStack_3160 = lVar15;
      DAT_1803edc78 = local_3158;
      local_3158 = lVar5;
      _Mtx_unlock(&DAT_1803e8920);
      pvVar20 = pvStack_3148;
      pvVar18 = local_3150;
      if (local_3150 != (void *)0x0) {
        for (; pvVar18 != pvVar20; pvVar18 = (void *)((longlong)pvVar18 + 0x50)) {
          FUN_18020e450(pvVar18);
        }
        pvVar18 = local_3150;
        puVar21 = auStackY_3348;
        if (0xfff < (ulonglong)((local_3140 - (longlong)local_3150 >> 4) << 4)) {
          pvVar18 = *(void **)((longlong)local_3150 + -8);
          pvVar20 = (void *)((longlong)local_3150 + (-8 - (longlong)pvVar18));
          puVar21 = auStackY_3348;
          if ((void *)0x1f < pvVar20) {
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            pvVar18 = pvVar20;
            puVar21 = auStackY_3340;
          }
        }
        *(undefined8 *)(puVar21 + -8) = 0x1800ffd3d;
        free(pvVar18);
        *(undefined8 *)(puVar21 + 0x1f8) = 0;
        *(undefined8 *)(puVar21 + 0x200) = 0;
        *(undefined8 *)(puVar21 + 0x208) = 0;
      }
      *(undefined8 *)(puVar21 + -8) = 0x1800ffd74;
      _eh_vector_destructor_iterator_(puVar21 + 0x12c0,0x40,0x81,FUN_180020a30);
      *(undefined8 *)(puVar21 + -8) = 0x1800ffd90;
      _eh_vector_destructor_iterator_
                (puVar21 + 0x2a0,0x20,0x81,Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09
                );
      *(undefined8 *)(puVar21 + -8) = 0x1800ffd9e;
      FUN_18020d0b0(puVar21 + 0x1e0);
      puVar22 = puVar21;
      goto LAB_1800ffd9e;
    }
LAB_1800ffdc1:
    std::_Throw_Cpp_error(5);
  }
  FUN_180020b70(0);
  iVar9 = _Mtx_lock(&DAT_1803e8920);
  if (iVar9 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (DAT_1803e896c == 0x7fffffff) {
    DAT_1803e896c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  lVar10 = DAT_1803edc70;
  lVar15 = DAT_1803edc68;
  if (DAT_1803edc68 != DAT_1803edc70) {
    do {
      FUN_18020e450(lVar15);
      lVar15 = lVar15 + 0x28;
    } while (lVar15 != lVar10);
    DAT_1803edc70 = DAT_1803edc68;
  }
  _Mtx_unlock(&DAT_1803e8920);
  puVar22 = auStackY_3348;
LAB_1800ffd9e:
  *(undefined8 *)(puVar22 + -8) = 0x1800ffdae;
  return;
}


