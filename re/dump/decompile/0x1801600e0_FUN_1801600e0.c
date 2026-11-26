// 0x1801600e0  FUN_1801600e0
// size=3059 thunk=false
// signature: undefined FUN_1801600e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801600e0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  char *pcVar4;
  code *pcVar5;
  undefined1 *puVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  void *pvVar12;
  void *pvVar13;
  char *pcVar14;
  ulonglong uVar15;
  uint uVar16;
  void *pvVar17;
  ulonglong uVar18;
  void *pvVar19;
  char *_Str1;
  char *pcVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  char *pcVar24;
  char *pcVar25;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  longlong local_108 [2];
  undefined4 local_f8;
  longlong local_e8 [3];
  void *local_d0;
  longlong lStack_c8;
  longlong local_c0;
  void *local_b8;
  void *pvStack_b0;
  longlong local_a8;
  void *local_a0;
  void *pvStack_98;
  longlong local_90;
  void *local_88;
  void *pvStack_80;
  void *local_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  ulonglong local_58;
  
  puVar22 = auStack_128;
  puVar21 = auStack_128;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  puVar6 = auStack_128;
  if (DAT_1803e9a50 != DAT_1803e9a58) {
    local_e8[0] = 0;
    local_e8[1] = 0;
    pvVar12 = (void *)0x0;
    local_e8[2] = 0;
    local_b8 = (void *)0x0;
    pvStack_b0 = (void *)0x0;
    local_a8 = 0;
    puVar6 = auStack_128;
    if ((DAT_1803f9248 != (longlong *)0x0) &&
       (lVar9 = (**(code **)(*DAT_1803f9248 + 0x10))
                          (DAT_1803f9248,"models/m_anm.mdl",&DAT_1803589f0,&DAT_1803589e8),
       puVar6 = auStack_128, lVar9 != 0)) {
      if (local_e8[0] != local_e8[1]) {
        local_e8[1] = local_e8[0];
      }
      (**(code **)(*DAT_1803f9248 + 0x20))(DAT_1803f9248,lVar9,0,0);
      pvVar17 = pvVar12;
      do {
        FUN_180218360(local_e8,(longlong)pvVar17 + 0x40000);
        iVar8 = (**(code **)*DAT_1803f9248)
                          (DAT_1803f9248,local_e8[0] + (longlong)pvVar17,0x40000,lVar9);
        if (0 < iVar8) {
          pvVar17 = (void *)((longlong)pvVar17 + (longlong)iVar8);
        }
        pvVar13 = pvVar17;
      } while ((0x3ffff < iVar8) && (pvVar13 = pvVar12, pvVar17 < (void *)0x10000001));
      (**(code **)(*DAT_1803f9248 + 0x18))(DAT_1803f9248,lVar9);
      FUN_180218360(local_e8,pvVar13);
      puVar6 = auStack_128;
      if (pvVar13 == (void *)0x0) goto LAB_1801608be;
      local_d0 = (void *)0x0;
      lStack_c8 = 0;
      local_c0 = 0;
      cVar7 = FUN_18015f290(local_e8,&local_d0);
      puVar6 = auStack_128;
      if (cVar7 != '\0') {
        if (((((0x15f < (ulonglong)(local_e8[1] - local_e8[0])) &&
              (iVar8 = *(int *)(local_e8[0] + 0x15c), 0 < iVar8)) &&
             ((ulonglong)(longlong)iVar8 < (ulonglong)(local_e8[1] - local_e8[0]))) &&
            ((DAT_1803f9248 != (longlong *)0x0 &&
             (pcVar14 = (char *)(local_e8[0] + iVar8), pcVar14 != (char *)0x0)))) &&
           ((*pcVar14 != '\0' &&
            (lVar9 = (**(code **)(*DAT_1803f9248 + 0x10))
                               (DAT_1803f9248,pcVar14,&DAT_1803589f0,&DAT_1803589e8), lVar9 != 0))))
        {
          if (local_b8 != pvStack_b0) {
            pvStack_b0 = local_b8;
          }
          (**(code **)(*DAT_1803f9248 + 0x20))(DAT_1803f9248,lVar9,0,0);
          pvVar17 = pvVar12;
          do {
            FUN_180218360(&local_b8,(longlong)pvVar17 + 0x40000);
            iVar8 = (**(code **)*DAT_1803f9248)
                              (DAT_1803f9248,(longlong)local_b8 + (longlong)pvVar17,0x40000,lVar9);
            if (0 < iVar8) {
              pvVar17 = (void *)((longlong)pvVar17 + (longlong)iVar8);
            }
            pvVar13 = pvVar17;
          } while ((0x3ffff < iVar8) && (pvVar13 = pvVar12, pvVar17 < (void *)0x10000001));
          (**(code **)(*DAT_1803f9248 + 0x18))(DAT_1803f9248,lVar9);
          FUN_180218360(&local_b8,pvVar13);
        }
        local_f8 = 0xffffffff;
        lVar9 = lStack_c8 - (longlong)local_d0 >> 3;
        uVar18 = lVar9 * -0x2c8590b21642c859;
        local_88 = (void *)0x0;
        pvStack_80 = (void *)0x0;
        local_78 = (void *)0x0;
        uVar23 = 0;
        if (uVar18 != 0) {
          if (0x3fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_18020cc40();
          }
          uVar15 = lVar9 * 0x4de9bd37a6f4de9c;
          pvVar17 = pvVar12;
          puVar22 = auStack_128;
          if (uVar15 != 0) {
            if (uVar15 < 0x1000) {
              pvVar17 = (void *)FUN_1802d8350(uVar15);
              puVar22 = auStack_128;
            }
            else {
              if (uVar15 + 0x27 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_180012fe0();
              }
              lVar10 = FUN_1802d8350();
              lVar9 = lVar10;
              if (lVar10 == 0) {
                lVar9 = 5;
                pcVar5 = (code *)swi(0x29);
                lVar10 = (*pcVar5)();
                puVar21 = auStack_120;
              }
              pvVar17 = (void *)(lVar10 + 0x27U & 0xffffffffffffffe0);
              *(longlong *)((longlong)pvVar17 - 8) = lVar9;
              puVar22 = puVar21;
            }
          }
          local_88 = pvVar17;
          pvStack_80 = pvVar17;
          local_78 = (void *)((longlong)pvVar17 + uVar15);
          *(void ***)(puVar22 + 0x38) = &local_88;
          *(undefined4 *)(puVar22 + 0x34) = 0;
          pvVar13 = pvVar12;
          do {
            pbVar3 = puVar22 + 0x30 + (longlong)pvVar13;
            pvVar13 = (void *)((longlong)pvVar13 + 1);
            if (*pbVar3 != (puVar22 + 0x33)[(longlong)pvVar13]) {
              uVar16 = -(uint)(*pbVar3 < (byte)(puVar22 + 0x33)[(longlong)pvVar13]) | 1;
              break;
            }
            uVar16 = uVar23;
          } while (pvVar13 != (void *)0x4);
          if (uVar16 == 0) {
            *(undefined8 *)(puVar22 + -8) = 0x18016045f;
            memset(pvVar17,0,uVar15);
            pvVar17 = (void *)((longlong)pvVar17 + uVar15);
          }
          else {
            *(undefined8 *)(puVar22 + -8) = 0x180160475;
            memset(pvVar17,-1,uVar15);
            do {
              pvVar17 = (void *)((longlong)pvVar17 + 4);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          pvStack_80 = pvVar17;
          *(undefined8 *)(puVar22 + 0x38) = 0;
        }
        lVar9 = DAT_1803e9a50;
        pvVar17 = pvVar12;
        pvVar13 = pvVar12;
        if ((lStack_c8 - (longlong)local_d0 >> 3) * -0x2c8590b21642c859 != 0) {
          do {
            if ((DAT_1803e9a58 - lVar9 >> 3) * -0x2c8590b21642c859 != 0) {
              pvVar19 = pvVar12;
              do {
                *(undefined8 *)(puVar22 + -8) = 0x1801604f0;
                iVar8 = _stricmp((char *)((longlong)local_d0 + (longlong)pvVar17 * 0xb8 + 0x78),
                                 (char *)(lVar9 + 0x78 + (longlong)pvVar19 * 0xb8));
                if (iVar8 == 0) {
                  *(int *)((longlong)local_88 + (longlong)pvVar17 * 4) = (int)pvVar19;
                  pvVar13 = (void *)(ulonglong)((int)pvVar13 + 1);
                  lVar9 = DAT_1803e9a50;
                  break;
                }
                pvVar19 = (void *)((longlong)pvVar19 + 1);
                lVar9 = DAT_1803e9a50;
              } while (pvVar19 < (void *)((DAT_1803e9a58 - DAT_1803e9a50 >> 3) * -0x2c8590b21642c859
                                         ));
            }
            uVar23 = (uint)pvVar13;
            pvVar17 = (void *)((longlong)pvVar17 + 1);
          } while (pvVar17 < (void *)((lStack_c8 - (longlong)local_d0 >> 3) * -0x2c8590b21642c859));
        }
        pcVar14 = *(char **)(puVar22 + 0x40);
        piVar1 = (int *)(pcVar14 + 0xb4);
        if (0 < *piVar1) {
          piVar2 = (int *)(pcVar14 + 0xb8);
          pvVar17 = pvVar12;
          do {
            pcVar24 = pcVar14 + (longlong)*piVar2 + (longlong)(int)pvVar17 * 100;
            if (((pcVar24 < pcVar14) ||
                (uVar18 = *(longlong *)(puVar22 + 0x48) - (longlong)pcVar14, uVar18 < 100)) ||
               (uVar18 - 100 < (ulonglong)((longlong)pcVar24 - (longlong)pcVar14))) break;
            pcVar25 = pcVar24 + *(int *)(pcVar24 + 4);
            if (((pcVar14 <= pcVar25) &&
                ((ulonglong)((longlong)pcVar25 - (longlong)pcVar14) <= uVar18 - 1)) &&
               ((1 < *(int *)(pcVar24 + 0x10) && ((pcVar24[0xc] & 4U) == 0)))) {
              *(undefined8 *)(puVar22 + -8) = 0x1801605d9;
              iVar8 = _stricmp(pcVar25,"@idle_all_01");
              if (iVar8 == 0) {
                if (pcVar24 != (char *)0x0) goto LAB_18016072e;
                pcVar14 = *(char **)(puVar22 + 0x40);
                break;
              }
              pcVar14 = *(char **)(puVar22 + 0x40);
            }
            uVar16 = (int)pvVar17 + 1;
            pvVar17 = (void *)(ulonglong)uVar16;
          } while ((int)uVar16 < *piVar1);
        }
        piVar1 = (int *)(pcVar14 + 0xb4);
        if (0 < *piVar1) {
          piVar2 = (int *)(pcVar14 + 0xb8);
          do {
            pcVar24 = pcVar14 + (longlong)*piVar2 + (longlong)(int)pvVar12 * 100;
            if (((pcVar24 < pcVar14) ||
                (uVar18 = *(longlong *)(puVar22 + 0x48) - (longlong)pcVar14, uVar18 < 100)) ||
               (uVar18 - 100 < (ulonglong)((longlong)pcVar24 - (longlong)pcVar14))) break;
            pcVar25 = pcVar24 + *(int *)(pcVar24 + 4);
            if ((((pcVar14 <= pcVar25) &&
                 ((ulonglong)((longlong)pcVar25 - (longlong)pcVar14) <= uVar18 - 1)) &&
                (1 < *(int *)(pcVar24 + 0x10))) &&
               ((((pcVar24[0xc] & 4U) == 0 && (pcVar25 != (char *)0x0)) && (*pcVar25 != '\0')))) {
              do {
                *(undefined8 *)(puVar22 + -8) = 0x1801606a6;
                iVar8 = _strnicmp(pcVar25,"idle_all",8);
                if (iVar8 == 0) {
                  if (pcVar24 != (char *)0x0) goto LAB_18016072e;
                  goto LAB_1801606c2;
                }
                pcVar25 = pcVar25 + 1;
              } while (*pcVar25 != '\0');
              pcVar14 = *(char **)(puVar22 + 0x40);
            }
            uVar16 = (int)pvVar12 + 1;
            pvVar12 = (void *)(ulonglong)uVar16;
          } while ((int)uVar16 < *piVar1);
        }
        goto LAB_1801606c2;
      }
      goto LAB_1801606d8;
    }
    goto LAB_1801608be;
  }
  goto LAB_180160ca7;
LAB_18016072e:
  if (9 < (int)uVar23) {
    *(void ***)(puVar22 + 0x20) = &local_88;
    *(undefined8 *)(puVar22 + -8) = 0x180160752;
    cVar7 = FUN_18015f500(puVar22 + 0x40,&local_b8,pcVar24,&local_d0);
    if (cVar7 == '\0') goto LAB_1801606c2;
    *(longlong *)(puVar22 + 0x20) = (lStack_c8 - (longlong)local_d0 >> 3) * -0x2c8590b21642c859;
    *(undefined8 *)(puVar22 + -8) = 0x18016079e;
    FUN_180014410("[MP] idle baked from m_anm.mdl: %d frames @%.0f fps, %d/%zu bones mapped\n",
                  DAT_180423a6c,(double)DAT_1803e9328,uVar23);
    *(undefined8 *)(puVar22 + -8) = 0x1801607a8;
    FUN_18021e060(&local_88);
    if (local_d0 != (void *)0x0) {
      pvVar12 = local_d0;
      if (((ulonglong)((local_c0 - (longlong)local_d0 >> 3) * 8) < 0x1000) ||
         (pvVar12 = *(void **)((longlong)local_d0 + -8),
         (ulonglong)((longlong)local_d0 + (-8 - (longlong)pvVar12)) < 0x20)) {
        *(undefined8 *)(puVar22 + -8) = 0x1801607f7;
        free(pvVar12);
        local_d0 = (void *)0x0;
        lStack_c8 = 0;
        local_c0 = 0;
        goto LAB_180160803;
      }
      goto LAB_1801608a0;
    }
LAB_180160803:
    if (local_b8 != (void *)0x0) {
      pvVar12 = local_b8;
      if (((ulonglong)(local_a8 - (longlong)local_b8) < 0x1000) ||
         (pvVar12 = *(void **)((longlong)local_b8 + -8),
         (ulonglong)((longlong)local_b8 + (-8 - (longlong)pvVar12)) < 0x20)) {
        *(undefined8 *)(puVar22 + -8) = 0x18016083f;
        free(pvVar12);
        local_b8 = (void *)0x0;
        pvStack_b0 = (void *)0x0;
        local_a8 = 0;
        goto LAB_18016084b;
      }
      goto LAB_1801608ee;
    }
LAB_18016084b:
    pvVar12 = *(void **)(puVar22 + 0x40);
    if (pvVar12 != (void *)0x0) {
      pvVar17 = pvVar12;
      if (((ulonglong)(local_e8[2] - (longlong)pvVar12) < 0x1000) ||
         (pvVar17 = *(void **)((longlong)pvVar12 + -8),
         (ulonglong)((longlong)pvVar12 + (-8 - (longlong)pvVar17)) < 0x20)) {
        *(undefined8 *)(puVar22 + -8) = 0x18016088c;
        free(pvVar17);
        *(undefined8 *)(puVar22 + 0x40) = 0;
        *(undefined8 *)(puVar22 + 0x48) = 0;
        uVar11 = 1;
        goto LAB_180160ca9;
      }
      goto LAB_180160c8c;
    }
LAB_180160c4e:
    uVar11 = 1;
    goto LAB_180160ca9;
  }
LAB_1801606c2:
  *(undefined8 *)(puVar22 + -8) = 0x1801606cb;
  FUN_18021e060(&local_88);
  puVar6 = puVar22;
LAB_1801606d8:
  puVar22 = puVar6;
  puVar6 = puVar22;
  if (local_d0 != (void *)0x0) {
    pvVar12 = local_d0;
    if ((0xfff < (ulonglong)((local_c0 - (longlong)local_d0 >> 3) * 8)) &&
       (pvVar12 = *(void **)((longlong)local_d0 + -8),
       0x1f < (ulonglong)((longlong)local_d0 + (-8 - (longlong)pvVar12)))) {
LAB_1801608a0:
      pvVar12 = (void *)0x5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)();
      puVar22 = puVar22 + 8;
    }
    *(undefined8 *)(puVar22 + -8) = 0x1801608b2;
    free(pvVar12);
    local_d0 = (void *)0x0;
    lStack_c8 = 0;
    local_c0 = 0;
    puVar6 = puVar22;
  }
LAB_1801608be:
  puVar22 = puVar6;
  if (local_b8 != (void *)0x0) {
    pvVar12 = local_b8;
    if ((0xfff < (ulonglong)(local_a8 - (longlong)local_b8)) &&
       (pvVar12 = *(void **)((longlong)local_b8 + -8),
       0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pvVar12)))) {
LAB_1801608ee:
      pcVar5 = (code *)swi(0x29);
      pvVar12 = (void *)(*pcVar5)(5);
      puVar22 = puVar22 + 8;
    }
    *(undefined8 *)(puVar22 + -8) = 0x1801608fd;
    free(pvVar12);
    local_b8 = (void *)0x0;
    pvStack_b0 = (void *)0x0;
    local_a8 = 0;
  }
  pcVar14 = (char *)0x0;
  pvVar12 = *(void **)(puVar22 + 0x40);
  if (pvVar12 == (void *)0x0) {
LAB_180160953:
    lVar9 = *param_2;
    pcVar24 = pcVar14;
    pcVar25 = pcVar14;
    if (0 < *(int *)(lVar9 + 0xb4)) {
      do {
        uVar18 = (longlong)(int)pcVar24 * 100 + (longlong)*(int *)(lVar9 + 0xb8);
        pcVar4 = (char *)*param_2;
        pcVar20 = pcVar4 + uVar18;
        pcVar25 = pcVar14;
        if (((pcVar20 < pcVar4) || (uVar15 = param_2[1] - (longlong)pcVar4, uVar15 < 100)) ||
           (uVar15 - 100 < uVar18)) break;
        _Str1 = pcVar20 + *(int *)(pcVar20 + 4);
        if (((pcVar4 <= _Str1) && ((ulonglong)((longlong)_Str1 - (longlong)pcVar4) <= uVar15 - 1))
           && ((1 < *(int *)(pcVar20 + 0x10) &&
               (((pcVar20[0xc] & 4U) == 0 && (_Str1 != (char *)0x0)))))) {
          cVar7 = *_Str1;
          while (cVar7 != '\0') {
            *(undefined8 *)(puVar22 + -8) = 0x1801609f6;
            iVar8 = _strnicmp(_Str1,"idle",4);
            pcVar25 = pcVar20;
            if (iVar8 == 0) goto LAB_180160a14;
            _Str1 = _Str1 + 1;
            cVar7 = *_Str1;
          }
        }
        uVar23 = (int)pcVar24 + 1;
        pcVar24 = (char *)(ulonglong)uVar23;
        pcVar25 = pcVar14;
      } while ((int)uVar23 < *(int *)(lVar9 + 0xb4));
    }
LAB_180160a14:
    puVar6 = puVar22;
    if (pcVar25 != (char *)0x0) {
      local_a0 = (void *)0x0;
      pvStack_98 = (void *)0x0;
      local_90 = 0;
      lVar9 = *param_2;
      if (((((0x15f < (ulonglong)(param_2[1] - lVar9)) &&
            (iVar8 = *(int *)(lVar9 + 0x15c), 0 < iVar8)) &&
           ((ulonglong)(longlong)iVar8 < (ulonglong)(param_2[1] - lVar9))) &&
          ((DAT_1803f9248 != (longlong *)0x0 &&
           (pcVar24 = (char *)(lVar9 + iVar8), pcVar24 != (char *)0x0)))) && (*pcVar24 != '\0')) {
        pcVar5 = *(code **)(*DAT_1803f9248 + 0x10);
        *(undefined8 *)(puVar22 + -8) = 0x180160a9e;
        lVar9 = (*pcVar5)(DAT_1803f9248,pcVar24,&DAT_1803589f0,&DAT_1803589e8);
        if (lVar9 != 0) {
          if (local_a0 != pvStack_98) {
            pvStack_98 = local_a0;
          }
          pcVar5 = *(code **)(*DAT_1803f9248 + 0x20);
          *(undefined8 *)(puVar22 + -8) = 0x180160acf;
          (*pcVar5)(DAT_1803f9248,lVar9,0,0);
          pcVar24 = pcVar14;
          do {
            *(undefined8 *)(puVar22 + -8) = 0x180160af0;
            FUN_180218360(&local_a0,pcVar24 + 0x40000);
            pcVar5 = *(code **)*DAT_1803f9248;
            *(undefined8 *)(puVar22 + -8) = 0x180160b0d;
            iVar8 = (*pcVar5)(DAT_1803f9248,(char *)((longlong)local_a0 + (longlong)pcVar24),0x40000
                              ,lVar9);
            if (0 < iVar8) {
              pcVar24 = pcVar24 + iVar8;
            }
            pcVar20 = pcVar24;
          } while ((0x3ffff < iVar8) && (pcVar20 = pcVar14, pcVar24 < (char *)0x10000001));
          pcVar5 = *(code **)(*DAT_1803f9248 + 0x18);
          *(undefined8 *)(puVar22 + -8) = 0x180160b3a;
          (*pcVar5)(DAT_1803f9248,lVar9);
          *(undefined8 *)(puVar22 + -8) = 0x180160b46;
          FUN_180218360(&local_a0,pcVar20);
        }
      }
      local_70 = 0;
      lStack_68 = 0;
      local_60 = 0;
      *(undefined8 *)(puVar22 + -8) = 0x180160b7c;
      FUN_18020de70(&local_70,(DAT_1803e9a58 - DAT_1803e9a50 >> 3) * -0x2c8590b21642c859);
      if (lStack_68 - local_70 >> 2 != 0) {
        do {
          *(int *)(local_70 + (longlong)pcVar14 * 4) = (int)pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (pcVar14 < (char *)(lStack_68 - local_70 >> 2));
      }
      *(longlong **)(puVar22 + 0x20) = &local_70;
      *(undefined8 *)(puVar22 + -8) = 0x180160bd9;
      cVar7 = FUN_18015f500(param_2,&local_a0,pcVar25,&DAT_1803e9a50);
      if (cVar7 != '\0') {
        *(undefined8 *)(puVar22 + -8) = 0x180160bff;
        FUN_180014410("[MP] idle baked from the model itself: %d frames @%.0f fps\n",DAT_180423a6c,
                      (double)DAT_1803e9328);
        *(undefined8 *)(puVar22 + -8) = 0x180160c09;
        FUN_18021e060(&local_70);
        if (local_a0 != (void *)0x0) {
          pvVar12 = local_a0;
          if ((0xfff < (ulonglong)(local_90 - (longlong)local_a0)) &&
             (pvVar12 = *(void **)((longlong)local_a0 + -8),
             0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)pvVar12)))) goto LAB_180160c8c;
          *(undefined8 *)(puVar22 + -8) = 0x180160c42;
          free(pvVar12);
        }
        goto LAB_180160c4e;
      }
      *(undefined8 *)(puVar22 + -8) = 0x180160c5b;
      FUN_18021e060(&local_70);
      if (local_a0 != (void *)0x0) {
        pvVar12 = local_a0;
        if ((0xfff < (ulonglong)(local_90 - (longlong)local_a0)) &&
           (pvVar12 = *(void **)((longlong)local_a0 + -8),
           0x1f < (ulonglong)
                  ((longlong)local_a0 + (-8 - (longlong)*(void **)((longlong)local_a0 + -8)))))
        goto LAB_180160c8c;
        goto LAB_180160c96;
      }
    }
  }
  else {
    pvVar17 = pvVar12;
    if (((ulonglong)(local_e8[2] - (longlong)pvVar12) < 0x1000) ||
       (pvVar17 = *(void **)((longlong)pvVar12 + -8),
       (ulonglong)((longlong)pvVar12 + (-8 - (longlong)pvVar17)) < 0x20)) {
      *(undefined8 *)(puVar22 + -8) = 0x180160946;
      free(pvVar17);
      *(undefined8 *)(puVar22 + 0x40) = 0;
      *(undefined8 *)(puVar22 + 0x48) = 0;
      local_e8[2] = 0;
      goto LAB_180160953;
    }
LAB_180160c8c:
    pcVar5 = (code *)swi(0x29);
    pvVar12 = (void *)(*pcVar5)(5);
    puVar22 = puVar22 + 8;
LAB_180160c96:
    *(undefined8 *)(puVar22 + -8) = 0x180160c9b;
    free(pvVar12);
    puVar6 = puVar22;
  }
LAB_180160ca7:
  puVar22 = puVar6;
  uVar11 = 0;
LAB_180160ca9:
  *(undefined8 *)(puVar22 + -8) = 0x180160cb5;
  return uVar11;
}


