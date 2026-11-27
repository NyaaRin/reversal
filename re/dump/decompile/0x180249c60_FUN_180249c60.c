// 0x180249c60  FUN_180249c60
// size=6906 thunk=false
// signature: undefined FUN_180249c60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180249c60(longlong param_1)

{
  void *pvVar1;
  float fVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char cVar6;
  char cVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  char *pcVar13;
  undefined8 uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong lVar17;
  int iVar18;
  undefined8 *puVar19;
  longlong lVar20;
  void *pvVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_e8 [32];
  ulonglong *local_c8;
  ulonglong uStack_c0;
  ulonglong *local_b8;
  ulonglong uStack_b0;
  ulonglong *local_a8;
  ulonglong local_a0;
  ulonglong *local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34 [12];
  
  local_34._4_8_ = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  cVar6 = FUN_1802822b0(0);
  if (cVar6 == '\0') {
    return;
  }
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar22 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar22 = *(longlong *)(lVar22 + 0xec0);
  cVar6 = *(char *)(lVar22 + 0x79);
  *(undefined2 *)(lVar22 + 0xd1) = 0x101;
  local_88 = lVar22;
  if (*(char *)(param_1 + 0x371) != '\0') {
    puVar19 = &local_48;
    local_48 = _DAT_180381570;
    uStack_40 = _UNK_180381578;
    local_38 = 0x204;
    do {
      cVar7 = FUN_18027bb30(*(undefined4 *)puVar19,1,0);
      if (cVar7 != '\0') {
        if (*(longlong *)(param_1 + 0x488) != *(longlong *)(param_1 + 0x480)) {
          return;
        }
        if (*(char *)(param_1 + 0x498) != '\0') {
          return;
        }
        if (*(char *)(param_1 + 0x371) != '\0') {
          *(undefined1 *)(param_1 + 0x373) = 1;
        }
        break;
      }
      puVar19 = (undefined8 *)((longlong)puVar19 + 4);
    } while (puVar19 != (undefined8 *)local_34);
  }
  cVar7 = FUN_18027e2e0(0x203,1,0);
  uVar14 = 0;
  if (cVar7 == '\0') {
    cVar7 = FUN_18027e2e0(0x2203,1,0);
    if (cVar7 == '\0') {
      cVar7 = FUN_18027e2e0(0x204,1,0);
      uVar14 = 0;
      if (cVar7 == '\0') {
        cVar7 = FUN_18027e2e0(0x2204,1,0);
        if (cVar7 == '\0') {
          uVar14 = 0x6201;
          if (cVar6 != '\0') {
            uVar14 = 0xa201;
          }
          cVar7 = FUN_18027e2e0(uVar14,0,0);
          if (cVar7 != '\0') {
            FUN_18024e1d0(param_1);
            goto LAB_18024b5b9;
          }
          uVar14 = 0x6202;
          if (cVar6 != '\0') {
            uVar14 = 0xa202;
          }
          cVar7 = FUN_18027e2e0(uVar14,0,0);
          if (cVar7 != '\0') {
            FUN_18024ddd0(param_1);
            goto LAB_18024b5b9;
          }
          cVar7 = FUN_18027e2e0(0x201,1,0);
          if (cVar7 == '\0') {
            cVar7 = FUN_18027e2e0(0x2201,1,0);
            if (cVar7 == '\0') {
              uVar14 = 0x1201;
              if (cVar6 != '\0') {
                uVar14 = 0x4201;
              }
              cVar7 = FUN_18027e2e0(uVar14,1,0);
              if (cVar7 == '\0') {
                uVar14 = 0x3201;
                if (cVar6 != '\0') {
                  uVar14 = 0x6201;
                }
                cVar7 = FUN_18027e2e0(uVar14,1,0);
                if (cVar7 == '\0') {
                  cVar7 = FUN_18027e2e0(0x202,1,0);
                  if (cVar7 == '\0') {
                    cVar7 = FUN_18027e2e0(0x2202,1,0);
                    if (cVar7 == '\0') {
                      uVar14 = 0x1202;
                      if (cVar6 != '\0') {
                        uVar14 = 0x4202;
                      }
                      cVar7 = FUN_18027e2e0(uVar14,1,0);
                      if (cVar7 == '\0') {
                        uVar14 = 0x3202;
                        if (cVar6 != '\0') {
                          uVar14 = 0x6202;
                        }
                        cVar6 = FUN_18027e2e0(uVar14,1,0);
                        if (cVar6 == '\0') {
                          cVar6 = FUN_18027e2e0(0x205,1,0);
                          if (cVar6 != '\0') {
                            FUN_18024fac0(param_1,(*(longlong *)(param_1 + 0x518) -
                                                  *(longlong *)(param_1 + 0x510)) + -2);
                            goto LAB_18024b5b9;
                          }
                          cVar6 = FUN_18027e2e0(0x2205,1,0);
                          if (cVar6 != '\0') {
                            FUN_18024fac0(param_1,(*(longlong *)(param_1 + 0x518) -
                                                  *(longlong *)(param_1 + 0x510)) + -2,1);
                            goto LAB_18024b5b9;
                          }
                          cVar6 = FUN_18027e2e0(0x206,1,0);
                          if (cVar6 != '\0') {
                            FUN_18024fc40(param_1,(*(longlong *)(param_1 + 0x518) -
                                                  *(longlong *)(param_1 + 0x510)) + -2);
                            goto LAB_18024b5b9;
                          }
                          cVar6 = FUN_18027e2e0(0x2206,1,0);
                          if (cVar6 != '\0') {
                            FUN_18024fc40(param_1,(*(longlong *)(param_1 + 0x518) -
                                                  *(longlong *)(param_1 + 0x510)) + -2,1);
                            goto LAB_18024b5b9;
                          }
                          cVar6 = FUN_18027e2e0(0x1203,0,0);
                          if (cVar6 == '\0') {
                            cVar6 = FUN_18027e2e0(0x1207,0,0);
                            if (cVar6 == '\0') {
                              cVar6 = FUN_18027e2e0(0x3203,0,0);
                              if (cVar6 == '\0') {
                                cVar6 = FUN_18027e2e0(0x3207,0,0);
                                if (cVar6 != '\0') {
                                  pvVar1 = *(void **)(param_1 + 0xf0);
                                  while (pvVar21 = pvVar1, pvVar21 < *(void **)(param_1 + 0xf8)) {
                                    pvVar1 = (void *)((longlong)pvVar21 + 0x30);
                                    if (*(char *)((longlong)pvVar21 + 0x20) == '\0') {
                                      memmove(pvVar21,pvVar1,
                                              (longlong)*(void **)(param_1 + 0xf8) -
                                              (longlong)pvVar1);
                                      *(longlong *)(param_1 + 0xf8) =
                                           *(longlong *)(param_1 + 0xf8) + -0x30;
                                      pvVar1 = pvVar21;
                                    }
                                  }
                                  goto LAB_18024a940;
                                }
                                cVar6 = FUN_18027e2e0(0x1204,0,0);
                                if (cVar6 != '\0') {
                                  lVar20 = *(longlong *)(param_1 + 0x50);
                                  puVar9 = (ulonglong *)
                                           ((*(longlong *)(param_1 + 0x58) - lVar20 >> 5) *
                                           -0x5555555555555555);
                                  puVar10 = (ulonglong *)((longlong)puVar9 - 1);
                                  if (puVar9 < puVar10 || (longlong)puVar9 - (longlong)puVar10 == 0)
                                  {
LAB_18024b750:
                    /* WARNING: Subroutine does not return */
                                    FUN_180262180();
                                  }
                                  lVar20 = *(longlong *)((longlong)puVar10 * 0x60 + 8 + lVar20) -
                                           *(longlong *)((longlong)puVar10 * 0x60 + lVar20);
                                  pvVar1 = *(void **)(param_1 + 0xf0);
                                  while (pvVar21 = pvVar1, pvVar21 < *(void **)(param_1 + 0xf8)) {
                                    pvVar1 = (void *)((longlong)pvVar21 + 0x30);
                                    if (*(char *)((longlong)pvVar21 + 0x20) == '\0') {
                                      memmove(pvVar21,pvVar1,
                                              (longlong)*(void **)(param_1 + 0xf8) -
                                              (longlong)pvVar1);
                                      *(longlong *)(param_1 + 0xf8) =
                                           *(longlong *)(param_1 + 0xf8) + -0x30;
                                      pvVar1 = pvVar21;
                                    }
                                  }
LAB_18024ab01:
                                  uStack_b0 = lVar20 >> 4;
                                  *(undefined8 *)(param_1 + 0x108) = 0;
                                  *(undefined8 *)(param_1 + 0x110) = 0;
                                  *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x21) = 1;
                                  lVar20 = *(longlong *)(param_1 + 0xf0);
                                  uVar23 = *(ulonglong *)(param_1 + 0x110);
                                  uVar11 = (*(longlong *)(param_1 + 0xf8) - lVar20 >> 4) *
                                           -0x5555555555555555;
                                  if (uVar11 < uVar23 || uVar11 - uVar23 == 0) goto LAB_18024b756;
                                  puVar9 = (ulonglong *)(lVar20 + uVar23 * 0x30);
                                  *puVar9 = (ulonglong)puVar10;
                                  puVar9[1] = uStack_b0;
                                  puVar9 = (ulonglong *)(lVar20 + 0x10 + uVar23 * 0x30);
                                  *puVar9 = (ulonglong)puVar10;
                                  puVar9[1] = uStack_b0;
                                  *(undefined1 *)(lVar20 + 0x22 + uVar23 * 0x30) = 1;
                                  local_b8 = puVar10;
                                  FUN_18024f370(param_1);
                                  *(undefined1 *)(param_1 + 0x7fa) = 0;
                                  goto LAB_18024b5b9;
                                }
                                cVar6 = FUN_18027e2e0(0x1208,0,0);
                                if (cVar6 != '\0') {
                                  lVar20 = *(longlong *)(param_1 + 0x50);
                                  puVar9 = (ulonglong *)
                                           ((*(longlong *)(param_1 + 0x58) - lVar20 >> 5) *
                                           -0x5555555555555555);
                                  puVar10 = (ulonglong *)((longlong)puVar9 - 1);
                                  if (puVar9 < puVar10 || (longlong)puVar9 - (longlong)puVar10 == 0)
                                  goto LAB_18024b750;
                                  lVar20 = *(longlong *)((longlong)puVar10 * 0x60 + 8 + lVar20) -
                                           *(longlong *)((longlong)puVar10 * 0x60 + lVar20);
                                  pvVar1 = *(void **)(param_1 + 0xf0);
                                  while (pvVar21 = pvVar1, pvVar21 < *(void **)(param_1 + 0xf8)) {
                                    pvVar1 = (void *)((longlong)pvVar21 + 0x30);
                                    if (*(char *)((longlong)pvVar21 + 0x20) == '\0') {
                                      memmove(pvVar21,pvVar1,
                                              (longlong)*(void **)(param_1 + 0xf8) -
                                              (longlong)pvVar1);
                                      *(longlong *)(param_1 + 0xf8) =
                                           *(longlong *)(param_1 + 0xf8) + -0x30;
                                      pvVar1 = pvVar21;
                                    }
                                  }
                                  goto LAB_18024ab01;
                                }
                                cVar6 = FUN_18027e2e0(0x3204,0,0);
                                if (cVar6 == '\0') {
                                  cVar6 = FUN_18027e2e0(0x3208,0,0);
                                  if (cVar6 != '\0') {
                                    lVar20 = *(longlong *)(param_1 + 0x50);
                                    puVar9 = (ulonglong *)
                                             ((*(longlong *)(param_1 + 0x58) - lVar20 >> 5) *
                                             -0x5555555555555555);
                                    puVar10 = (ulonglong *)((longlong)puVar9 - 1);
                                    if (puVar9 < puVar10 ||
                                        (longlong)puVar9 - (longlong)puVar10 == 0)
                                    goto LAB_18024b750;
                                    lVar24 = *(longlong *)((longlong)puVar10 * 0x60 + 8 + lVar20);
                                    lVar20 = *(longlong *)((longlong)puVar10 * 0x60 + lVar20);
                                    pvVar1 = *(void **)(param_1 + 0xf0);
                                    while (pvVar21 = pvVar1, pvVar21 < *(void **)(param_1 + 0xf8)) {
                                      pvVar1 = (void *)((longlong)pvVar21 + 0x30);
                                      if (*(char *)((longlong)pvVar21 + 0x20) == '\0') {
                                        memmove(pvVar21,pvVar1,
                                                (longlong)*(void **)(param_1 + 0xf8) -
                                                (longlong)pvVar1);
                                        *(longlong *)(param_1 + 0xf8) =
                                             *(longlong *)(param_1 + 0xf8) + -0x30;
                                        pvVar1 = pvVar21;
                                      }
                                    }
                                    *(undefined8 *)(param_1 + 0x108) = 0;
                                    *(undefined8 *)(param_1 + 0x110) = 0;
                                    *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x21) = 1;
                                    lVar17 = *(longlong *)(param_1 + 0xf0);
                                    uVar23 = *(ulonglong *)(param_1 + 0x110);
                                    uVar11 = (*(longlong *)(param_1 + 0xf8) - lVar17 >> 4) *
                                             -0x5555555555555555;
                                    if (uVar11 < uVar23 || uVar11 - uVar23 == 0) goto LAB_18024b756;
                                    uStack_b0 = lVar24 - lVar20 >> 4;
                                    puVar9 = (ulonglong *)(lVar17 + 0x10 + uVar23 * 0x30);
                                    *puVar9 = (ulonglong)puVar10;
                                    puVar9[1] = uStack_b0;
                                    *(undefined1 *)(lVar17 + 0x22 + uVar23 * 0x30) = 1;
                                    local_b8 = puVar10;
                                    FUN_18024f370(param_1);
                                    *(undefined1 *)(param_1 + 0x7fa) = 0;
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_18027e2e0(0x207,0,0);
                                  if (cVar6 != '\0') {
                                    FUN_180243ac0(param_1);
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_18027e2d0(0x2207,0);
                                  if (cVar6 != '\0') {
                                    FUN_180243ac0(param_1,1);
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_18027e2d0(0x208,0);
                                  if (cVar6 != '\0') {
                                    FUN_180243b30(param_1);
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_18027e2d0(0x2208,0);
                                  if (cVar6 != '\0') {
                                    FUN_180243b30(param_1,1);
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_18027e2d0(0x1222,0);
                                  if (cVar6 != '\0') {
                                    FUN_18024dbe0(param_1);
                                    goto LAB_18024b5b9;
                                  }
                                  puVar10 = (ulonglong *)(param_1 + 0xf0);
                                  cVar6 = FUN_180243910(puVar10);
                                  if ((cVar6 != '\0') &&
                                     (cVar6 = FUN_18027e2e0(0x1225,0,0), cVar6 != '\0')) {
                                    FUN_180259f30(param_1,0);
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_180243910(puVar10);
                                  if (((cVar6 != '\0') &&
                                      (cVar6 = FUN_18027e2e0(0x5225,0,0), cVar6 != '\0')) ||
                                     ((cVar6 = FUN_180243910(puVar10), cVar6 != '\0' &&
                                      (cVar6 = FUN_18027e2e0(0x522d,0,0), cVar6 != '\0')))) {
                                    FUN_180259f30(param_1,1);
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_180243910(puVar10);
                                  if ((cVar6 != '\0') &&
                                     (cVar6 = FUN_18027e2e0(0x3225,0,0), cVar6 != '\0')) {
                                    FUN_18025a180(param_1,0);
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_180243910(puVar10);
                                  if ((cVar6 != '\0') &&
                                     (cVar6 = FUN_18027e2e0(0x7225,0,0), cVar6 != '\0')) {
                                    FUN_18025a180(param_1,1);
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_18027e2e0(0x1239,0,0);
                                  if ((cVar6 != '\0') ||
                                     (cVar6 = FUN_18027e2e0(0x120a,0,0), cVar6 != '\0')) {
                                    FUN_18024e690(param_1);
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_18027e2e0(0x1224,0,0);
                                  if ((cVar6 != '\0') ||
                                     (cVar6 = FUN_18027e2e0(0x1209,0,0), cVar6 != '\0')) {
                                    FUN_18024e800(param_1);
                                    goto LAB_18024b5b9;
                                  }
                                  if (*(char *)(param_1 + 0x11) != '\0') goto LAB_18024b208;
                                  cVar6 = FUN_18027e2e0(0x1237,1,0);
                                  if (cVar6 != '\0') {
LAB_18024b1fb:
                                    FUN_18024ebd0(param_1);
                                    goto LAB_18024b5b9;
                                  }
                                  if (*(char *)(param_1 + 0x11) != '\0') goto LAB_18024b208;
                                  cVar6 = FUN_18027e2e0(0x1209,1,0);
                                  if (cVar6 != '\0') goto LAB_18024b1fb;
                                  if (*(char *)(param_1 + 0x11) != '\0') goto LAB_18024b208;
                                  cVar6 = FUN_18027e2e0(0x123b,1,0);
                                  if (cVar6 != '\0') {
                                    FUN_18024ed10(param_1);
                                    goto LAB_18024b5b9;
                                  }
                                  if (*(char *)(param_1 + 0x11) != '\0') goto LAB_18024b208;
                                  cVar6 = FUN_18027e2e0(0x323b,1,0);
                                  if (cVar6 != '\0') {
LAB_18024b1ee:
                                    FUN_18024ed50(param_1);
                                    goto LAB_18024b5b9;
                                  }
                                  if (*(char *)(param_1 + 0x11) != '\0') goto LAB_18024b208;
                                  cVar6 = FUN_18027e2e0(0x123a,1,0);
                                  if (cVar6 != '\0') goto LAB_18024b1ee;
                                  if (*(char *)(param_1 + 0x11) != '\0') goto LAB_18024b208;
                                  cVar6 = FUN_18027e2e0(0x20a,1,0);
                                  if (cVar6 != '\0') {
                                    FUN_180250f70(param_1,0);
                                    goto LAB_18024b5b9;
                                  }
                                  if (*(char *)(param_1 + 0x11) != '\0') goto LAB_18024b208;
                                  cVar6 = FUN_18027e2e0(0x420a,1,0);
                                  if (cVar6 != '\0') {
                                    FUN_180250f70(param_1,1);
                                    goto LAB_18024b5b9;
                                  }
                                  if (*(char *)(param_1 + 0x11) != '\0') goto LAB_18024b208;
                                  cVar6 = FUN_18027e2e0(0x20b,1,0);
                                  if (cVar6 != '\0') {
                                    FUN_180250d10(param_1,0);
                                    goto LAB_18024b5b9;
                                  }
                                  if (*(char *)(param_1 + 0x11) != '\0') goto LAB_18024b208;
                                  cVar6 = FUN_18027e2e0(0x420b,1,0);
                                  if (cVar6 != '\0') {
                                    FUN_180250d10(param_1,1);
                                    goto LAB_18024b5b9;
                                  }
                                  if (*(char *)(param_1 + 0x11) != '\0') goto LAB_18024b208;
                                  cVar6 = FUN_18027e2e0(0x322c,0,0);
                                  if (cVar6 != '\0') {
                                    FUN_1802511c0(param_1);
                                    goto LAB_18024b5b9;
                                  }
                                  if (*(char *)(param_1 + 0x11) == '\0') {
                                    cVar6 = FUN_18027e2e0(0x125b,1,0);
                                    if (cVar6 == '\0') {
                                      if (*(char *)(param_1 + 0x11) == '\0') {
                                        cVar6 = FUN_18027e2e0(0x125d,1,0);
                                        if (cVar6 != '\0') {
LAB_18024b46e:
                                          FUN_180251a30(param_1);
                                          goto LAB_18024b5b9;
                                        }
                                        if (*(char *)(param_1 + 0x11) == '\0') {
                                          cVar6 = FUN_18027e2e0(0x4203,0,0);
                                          if (cVar6 != '\0') {
                                            FUN_180252010(param_1);
                                            goto LAB_18024b5b9;
                                          }
                                          if (*(char *)(param_1 + 0x11) == '\0') {
                                            cVar6 = FUN_18027e2e0(0x4204,0,0);
                                            if (cVar6 != '\0') {
                                              FUN_1802524f0(param_1);
                                              goto LAB_18024b5b9;
                                            }
                                            if ((*(char *)(param_1 + 0x11) == '\0') &&
                                               (((*(longlong *)(param_1 + 0x40) != 0 &&
                                                 (cVar6 = FUN_18027e2e0(0x1258,0,0), cVar6 != '\0'))
                                                || ((*(char *)(param_1 + 0x11) == '\0' &&
                                                    ((*(longlong *)(param_1 + 0x40) != 0 &&
                                                     (cVar6 = FUN_18027e2e0(0x122d,0,0),
                                                     cVar6 != '\0')))))))) {
                                              FUN_180252aa0(param_1);
                                              goto LAB_18024b5b9;
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_18024b208;
                                    }
LAB_18024b4a9:
                                    FUN_180251d50(param_1);
                                    goto LAB_18024b5b9;
                                  }
LAB_18024b208:
                                  cVar6 = FUN_18027e2e0(0x1227,0,0);
                                  if (cVar6 != '\0') {
                                    if (*(char *)(param_1 + 0x371) != '\0') {
                                      *(undefined1 *)(param_1 + 0x373) = 1;
                                      *(undefined1 *)(param_1 + 0x7b3) = 1;
                                    }
                                    FUN_18025a7b0(param_1);
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_18027e2e0(0x3227,0,0);
                                  if (cVar6 != '\0') {
                                    FUN_18025a9e0(param_1);
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_18027e2e0(0x1228,1,0);
                                  if (cVar6 != '\0') {
                                    if (*(ulonglong *)(param_1 + 0x7c8) != 0) {
                                      local_b8 = (ulonglong *)(param_1 + 0x7b8);
                                      if (0xf < *(ulonglong *)(param_1 + 2000)) {
                                        local_b8 = (ulonglong *)*local_b8;
                                      }
                                      uStack_b0 = *(ulonglong *)(param_1 + 0x7c8);
                                      FUN_180259a60(param_1,&local_b8,
                                                    *(undefined1 *)(param_1 + 0x7f8),
                                                    *(undefined1 *)(param_1 + 0x7f9));
                                      *(undefined2 *)(param_1 + 0x7b1) = 1;
                                    }
                                    goto LAB_18024b5b9;
                                  }
                                  if ((*(char *)(param_1 + 0x11) == '\0') &&
                                     (cVar6 = FUN_18027e2e0(*(undefined4 *)(param_1 + 0x3a4),0,0),
                                     cVar6 != '\0')) {
                                    if (((ulonglong)
                                         (((longlong)(*(longlong *)(param_1 + 0xf8) - *puVar10) >> 4
                                          ) * -0x5555555555555555) < 2) &&
                                       (cVar6 = FUN_18025e280(param_1 + 0x370,puVar10),
                                       cVar6 != '\0')) {
                                      FUN_18024f370(param_1);
                                    }
                                    goto LAB_18024b5b9;
                                  }
                                  cVar6 = FUN_18027e2e0(0x209,0,0);
                                  if (cVar6 != '\0') {
                                    *(bool *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) == '\0';
                                    goto LAB_18024b5b9;
                                  }
                                  if (*(char *)(param_1 + 0x11) == '\0') {
                                    cVar6 = FUN_18027e2e0(0x20d,1,0);
                                    if (cVar6 != '\0') {
LAB_18024b4d0:
                                      FUN_18024fe90(param_1,10);
                                      goto LAB_18024b5b9;
                                    }
                                    if (*(char *)(param_1 + 0x11) == '\0') {
                                      cVar6 = FUN_18027e2e0(0x273,1,0);
                                      if (cVar6 != '\0') goto LAB_18024b4d0;
                                      if (*(char *)(param_1 + 0x11) == '\0') {
                                        cVar6 = FUN_18027e2e0(0x120d,1,0);
                                        if (cVar6 != '\0') {
LAB_18024b4c3:
                                          FUN_1802516d0(param_1);
                                          goto LAB_18024b5b9;
                                        }
                                        if (*(char *)(param_1 + 0x11) == '\0') {
                                          cVar6 = FUN_18027e2e0(0x1273,1,0);
                                          if (cVar6 != '\0') goto LAB_18024b4c3;
                                          if (*(char *)(param_1 + 0x11) == '\0') {
                                            cVar6 = FUN_18027e2e0(0x220d,1,0);
                                            if (cVar6 != '\0') {
LAB_18024b4b6:
                                              FUN_180251430(param_1);
                                              goto LAB_18024b5b9;
                                            }
                                            if (*(char *)(param_1 + 0x11) == '\0') {
                                              cVar6 = FUN_18027e2e0(0x2273,1,0);
                                              if (cVar6 != '\0') goto LAB_18024b4b6;
                                              if (*(char *)(param_1 + 0x11) == '\0') {
                                                cVar6 = FUN_18027e2e0(0x200,1,0);
                                                if (cVar6 != '\0') {
                                                  for (plVar12 = (longlong *)*puVar10;
                                                      plVar12 < *(longlong **)(param_1 + 0xf8);
                                                      plVar12 = plVar12 + 6) {
                                                    if ((*plVar12 != plVar12[2]) ||
                                                       (plVar12[1] != plVar12[3]))
                                                    goto LAB_18024b46e;
                                                  }
                                                  FUN_18024fe90(param_1,9);
                                                  goto LAB_18024b5b9;
                                                }
                                                if ((*(char *)(param_1 + 0x11) == '\0') &&
                                                   (cVar6 = FUN_18027e2e0(0x2200,1,0), cVar6 != '\0'
                                                   )) goto LAB_18024b4a9;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  if (((*(char *)(param_1 + 0x371) != '\0') ||
                                      ((*(char *)(param_1 + 0x7b0) != '\0' ||
                                       (1 < (ulonglong)
                                            (((longlong)(*(longlong *)(param_1 + 0xf8) - *puVar10)
                                             >> 4) * -0x5555555555555555))))) &&
                                     (cVar6 = FUN_18027e2e0(0x20e,0,0), cVar6 != '\0')) {
                                    if (*(char *)(param_1 + 0x371) == '\0') {
                                      if (*(char *)(param_1 + 0x7b0) == '\0') {
                                        uVar23 = *puVar10;
                                        if (1 < (ulonglong)
                                                (((longlong)(*(longlong *)(param_1 + 0xf8) - uVar23)
                                                 >> 4) * -0x5555555555555555)) {
                                          while (uVar23 < *(ulonglong *)(param_1 + 0xf8)) {
                                            if (*(char *)(uVar23 + 0x20) == '\0') {
                                              puVar9 = (ulonglong *)FUN_180260860(puVar10,&local_c8)
                                              ;
                                              uVar23 = *puVar9;
                                            }
                                            else {
                                              uVar23 = uVar23 + 0x30;
                                            }
                                          }
                                          *(undefined8 *)(param_1 + 0x108) = 0;
                                          *(undefined8 *)(param_1 + 0x110) = 0;
                                          *(undefined1 *)(*puVar10 + 0x21) = 1;
                                        }
                                      }
                                      else {
                                        *(undefined2 *)(param_1 + 0x7b0) = 0x100;
                                        *(undefined1 *)(param_1 + 0x7b2) = 0;
                                      }
                                    }
                                    else {
                                      *(undefined1 *)(param_1 + 0x373) = 1;
                                    }
                                  }
                                  goto LAB_18024b5b9;
                                }
                                lVar20 = *(longlong *)(param_1 + 0x50);
                                puVar9 = (ulonglong *)
                                         ((*(longlong *)(param_1 + 0x58) - lVar20 >> 5) *
                                         -0x5555555555555555);
                                puVar10 = (ulonglong *)((longlong)puVar9 - 1);
                                if (puVar9 < puVar10 || (longlong)puVar9 - (longlong)puVar10 == 0)
                                goto LAB_18024b750;
                                lVar24 = *(longlong *)((longlong)puVar10 * 0x60 + 8 + lVar20);
                                lVar20 = *(longlong *)((longlong)puVar10 * 0x60 + lVar20);
                                pvVar1 = *(void **)(param_1 + 0xf0);
                                while (pvVar21 = pvVar1, pvVar21 < *(void **)(param_1 + 0xf8)) {
                                  pvVar1 = (void *)((longlong)pvVar21 + 0x30);
                                  if (*(char *)((longlong)pvVar21 + 0x20) == '\0') {
                                    memmove(pvVar21,pvVar1,
                                            (longlong)*(void **)(param_1 + 0xf8) - (longlong)pvVar1)
                                    ;
                                    *(longlong *)(param_1 + 0xf8) =
                                         *(longlong *)(param_1 + 0xf8) + -0x30;
                                    pvVar1 = pvVar21;
                                  }
                                }
                                *(undefined8 *)(param_1 + 0x108) = 0;
                                *(undefined8 *)(param_1 + 0x110) = 0;
                                *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x21) = 1;
                                lVar17 = *(longlong *)(param_1 + 0xf0);
                                uVar23 = *(ulonglong *)(param_1 + 0x110);
                                uVar11 = (*(longlong *)(param_1 + 0xf8) - lVar17 >> 4) *
                                         -0x5555555555555555;
                                local_b8 = puVar10;
                                uStack_b0 = lVar24 - lVar20 >> 4;
                                if (uVar11 < uVar23 || uVar11 - uVar23 == 0) goto LAB_18024b756;
                              }
                              else {
                                pvVar1 = *(void **)(param_1 + 0xf0);
                                while (pvVar21 = pvVar1, pvVar21 < *(void **)(param_1 + 0xf8)) {
                                  pvVar1 = (void *)((longlong)pvVar21 + 0x30);
                                  if (*(char *)((longlong)pvVar21 + 0x20) == '\0') {
                                    memmove(pvVar21,pvVar1,
                                            (longlong)*(void **)(param_1 + 0xf8) - (longlong)pvVar1)
                                    ;
                                    *(longlong *)(param_1 + 0xf8) =
                                         *(longlong *)(param_1 + 0xf8) + -0x30;
                                    pvVar1 = pvVar21;
                                  }
                                }
LAB_18024a940:
                                *(undefined8 *)(param_1 + 0x108) = 0;
                                *(undefined8 *)(param_1 + 0x110) = 0;
                                *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x21) = 1;
                                lVar17 = *(longlong *)(param_1 + 0xf0);
                                uVar23 = *(ulonglong *)(param_1 + 0x110);
                                uVar11 = (*(longlong *)(param_1 + 0xf8) - lVar17 >> 4) *
                                         -0x5555555555555555;
                                if (uVar11 < uVar23 || uVar11 - uVar23 == 0) goto LAB_18024b756;
                                local_b8 = (ulonglong *)0x0;
                                uStack_b0 = 0;
                              }
                              puVar10 = (ulonglong *)(lVar17 + 0x10 + uVar23 * 0x30);
                              *puVar10 = (ulonglong)local_b8;
                              puVar10[1] = uStack_b0;
                              *(undefined1 *)(lVar17 + 0x22 + uVar23 * 0x30) = 1;
                              FUN_18024f370(param_1);
                              *(undefined1 *)(param_1 + 0x7fa) = 0;
                              goto LAB_18024b5b9;
                            }
                            pvVar1 = *(void **)(param_1 + 0xf0);
                            while (pvVar21 = pvVar1, pvVar21 < *(void **)(param_1 + 0xf8)) {
                              pvVar1 = (void *)((longlong)pvVar21 + 0x30);
                              if (*(char *)((longlong)pvVar21 + 0x20) == '\0') {
                                memmove(pvVar21,pvVar1,
                                        (longlong)*(void **)(param_1 + 0xf8) - (longlong)pvVar1);
                                *(longlong *)(param_1 + 0xf8) =
                                     *(longlong *)(param_1 + 0xf8) + -0x30;
                                pvVar1 = pvVar21;
                              }
                            }
                          }
                          else {
                            pvVar1 = *(void **)(param_1 + 0xf0);
                            while (pvVar21 = pvVar1, pvVar21 < *(void **)(param_1 + 0xf8)) {
                              pvVar1 = (void *)((longlong)pvVar21 + 0x30);
                              if (*(char *)((longlong)pvVar21 + 0x20) == '\0') {
                                memmove(pvVar21,pvVar1,
                                        (longlong)*(void **)(param_1 + 0xf8) - (longlong)pvVar1);
                                *(longlong *)(param_1 + 0xf8) =
                                     *(longlong *)(param_1 + 0xf8) + -0x30;
                                pvVar1 = pvVar21;
                              }
                            }
                          }
                          *(undefined8 *)(param_1 + 0x108) = 0;
                          *(undefined8 *)(param_1 + 0x110) = 0;
                          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x21) = 1;
                          lVar20 = *(longlong *)(param_1 + 0xf0);
                          uVar23 = *(ulonglong *)(param_1 + 0x110);
                          uVar11 = (*(longlong *)(param_1 + 0xf8) - lVar20 >> 4) *
                                   -0x5555555555555555;
                          if (uVar11 < uVar23 || uVar11 - uVar23 == 0) {
LAB_18024b756:
                    /* WARNING: Subroutine does not return */
                            FUN_180262180();
                          }
                          local_b8 = (ulonglong *)0x0;
                          uStack_b0 = 0;
                          puVar19 = (undefined8 *)(lVar20 + uVar23 * 0x30);
                          *puVar19 = 0;
                          puVar19[1] = 0;
                          puVar19 = (undefined8 *)(lVar20 + 0x10 + uVar23 * 0x30);
                          *puVar19 = 0;
                          puVar19[1] = 0;
                          *(undefined1 *)(lVar20 + 0x22 + uVar23 * 0x30) = 1;
                          FUN_18024f370(param_1);
                          *(undefined1 *)(param_1 + 0x7fa) = 0;
                          goto LAB_18024b5b9;
                        }
                        lVar24 = *(longlong *)(param_1 + 0xf8);
                        for (lVar20 = *(longlong *)(param_1 + 0xf0); lVar20 != lVar24;
                            lVar20 = lVar20 + 0x30) {
                          local_b8 = *(ulonglong **)(lVar20 + 0x10);
                          uStack_b0 = *(ulonglong *)(lVar20 + 0x18);
                          puVar10 = (ulonglong *)
                                    FUN_1802554b0((longlong *)(param_1 + 0x50),local_58,&local_b8,0)
                          ;
                          lVar22 = *(longlong *)(param_1 + 0x50);
                          local_78 = (ulonglong *)*puVar10;
                          puVar9 = (ulonglong *)
                                   ((*(longlong *)(param_1 + 0x58) - lVar22 >> 5) *
                                   -0x5555555555555555);
                          if (puVar9 < local_78 || (longlong)puVar9 - (longlong)local_78 == 0)
                          goto LAB_18024b750;
                          local_a8 = (ulonglong *)((longlong)local_78 * 0x60);
                          lVar17 = *(longlong *)((longlong)local_a8 + lVar22);
                          local_c8 = *(ulonglong **)((longlong)local_a8 + lVar22 + 8);
                          lVar25 = (longlong)local_c8 - lVar17;
                          for (uVar23 = puVar10[1]; uVar23 < (ulonglong)(lVar25 >> 4);
                              uVar23 = uVar23 + 1) {
                            cVar6 = FUN_18025f490(*(undefined2 *)(lVar17 + uVar23 * 0x10));
                            if (cVar6 == '\0') goto LAB_18024a69e;
                          }
                          uVar23 = (longlong)local_c8 - *(longlong *)((longlong)local_a8 + lVar22)
                                   >> 4;
LAB_18024a69e:
                          local_98 = local_78;
                          uStack_90 = uVar23;
                          FUN_180255880(param_1 + 0x50,&local_68,&local_98);
                          *(undefined8 *)(lVar20 + 0x10) = local_68;
                          *(undefined8 *)(lVar20 + 0x18) = uStack_60;
                          *(undefined1 *)(lVar20 + 0x22) = 1;
                          lVar22 = local_88;
                        }
                      }
                      else {
                        puVar4 = *(undefined8 **)(param_1 + 0xf8);
                        for (puVar19 = *(undefined8 **)(param_1 + 0xf0); puVar19 != puVar4;
                            puVar19 = puVar19 + 6) {
                          local_98 = (ulonglong *)puVar19[2];
                          uStack_90 = puVar19[3];
                          puVar10 = (ulonglong *)
                                    FUN_1802554b0((longlong *)(param_1 + 0x50),local_58,&local_98,0)
                          ;
                          lVar22 = *(longlong *)(param_1 + 0x50);
                          local_c8 = (ulonglong *)*puVar10;
                          puVar9 = (ulonglong *)
                                   ((*(longlong *)(param_1 + 0x58) - lVar22 >> 5) *
                                   -0x5555555555555555);
                          if (puVar9 < local_c8 || (longlong)puVar9 - (longlong)local_c8 == 0)
                          goto LAB_18024b750;
                          local_a8 = (ulonglong *)((longlong)local_c8 * 0x60);
                          lVar20 = *(longlong *)((longlong)local_a8 + lVar22);
                          local_78 = *(ulonglong **)((longlong)local_a8 + lVar22 + 8);
                          lVar24 = (longlong)local_78 - lVar20;
                          for (uVar23 = puVar10[1]; uVar23 < (ulonglong)(lVar24 >> 4);
                              uVar23 = uVar23 + 1) {
                            cVar6 = FUN_18025f490(*(undefined2 *)(lVar20 + uVar23 * 0x10));
                            if (cVar6 == '\0') goto LAB_18024a55e;
                          }
                          uVar23 = (longlong)local_78 - *(longlong *)((longlong)local_a8 + lVar22)
                                   >> 4;
LAB_18024a55e:
                          local_b8 = local_c8;
                          uStack_b0 = uVar23;
                          FUN_180255880(param_1 + 0x50,&local_68,&local_b8);
                          *puVar19 = local_68;
                          puVar19[1] = uStack_60;
                          puVar19[2] = local_68;
                          puVar19[3] = uStack_60;
                          *(undefined1 *)((longlong)puVar19 + 0x22) = 1;
                          lVar22 = local_88;
                        }
                      }
                    }
                    else {
                      lVar20 = *(longlong *)(param_1 + 0xf0);
                      lVar24 = *(longlong *)(param_1 + 0xf8);
                      if (lVar20 != lVar24) {
                        do {
                          lVar17 = *(longlong *)(param_1 + 0x50);
                          puVar10 = *(ulonglong **)(lVar20 + 0x10);
                          puVar9 = (ulonglong *)
                                   ((*(longlong *)(param_1 + 0x58) - lVar17 >> 5) *
                                   -0x5555555555555555);
                          if (puVar9 < puVar10 || (longlong)puVar9 - (longlong)puVar10 == 0)
                          goto LAB_18024b750;
                          uVar23 = *(ulonglong *)(lVar20 + 0x18);
                          if (uVar23 == *(longlong *)((longlong)puVar10 * 0x60 + 8 + lVar17) -
                                        *(longlong *)((longlong)puVar10 * 0x60 + lVar17) >> 4) {
                            if (puVar10 != (ulonglong *)((longlong)puVar9 - 1U)) {
                              do {
                                puVar10 = (ulonglong *)((longlong)puVar10 + 1);
                                if ((ulonglong *)((longlong)puVar9 - 1U) <= puVar10) break;
                                if (puVar9 < puVar10 || (longlong)puVar9 - (longlong)puVar10 == 0)
                                goto LAB_18024b750;
                              } while (*(char *)((longlong)puVar10 * 0x60 + 0x22 + lVar17) == '\x03'
                                      );
                              uStack_c0 = 0;
                              uVar23 = uStack_c0;
                            }
                          }
                          else {
                            uVar23 = uVar23 + 1;
                          }
                          uStack_c0 = uVar23;
                          local_c8 = puVar10;
                          *(ulonglong **)(lVar20 + 0x10) = local_c8;
                          *(ulonglong *)(lVar20 + 0x18) = uStack_c0;
                          *(undefined1 *)(lVar20 + 0x22) = 1;
                          lVar20 = lVar20 + 0x30;
                        } while (lVar20 != lVar24);
                        FUN_18024f370(param_1);
                        *(undefined1 *)(param_1 + 0x7fa) = 0;
                        goto LAB_18024b5b9;
                      }
                    }
                  }
                  else {
                    puVar10 = *(ulonglong **)(param_1 + 0xf0);
                    puVar9 = *(ulonglong **)(param_1 + 0xf8);
                    if (puVar10 != puVar9) {
                      do {
                        puVar16 = (ulonglong *)puVar10[2];
                        puVar8 = (ulonglong *)*puVar10;
                        bVar26 = puVar8 < puVar16;
                        bVar27 = puVar8 == puVar16;
                        if (bVar27) {
                          uVar23 = puVar10[3];
                          bVar26 = puVar10[1] < uVar23;
                          bVar27 = puVar10[1] == uVar23;
                          if (!bVar27) goto LAB_18024a311;
                          lVar20 = *(longlong *)(param_1 + 0x50);
                          puVar8 = (ulonglong *)
                                   ((*(longlong *)(param_1 + 0x58) - lVar20 >> 5) *
                                   -0x5555555555555555);
                          if (puVar8 < puVar16 || (longlong)puVar8 - (longlong)puVar16 == 0)
                          goto LAB_18024b750;
                          if (uVar23 == *(longlong *)((longlong)puVar16 * 0x60 + 8 + lVar20) -
                                        *(longlong *)((longlong)puVar16 * 0x60 + lVar20) >> 4) {
                            if (puVar16 != (ulonglong *)((longlong)puVar8 - 1U)) {
                              do {
                                puVar16 = (ulonglong *)((longlong)puVar16 + 1);
                                if ((ulonglong *)((longlong)puVar8 - 1U) <= puVar16) break;
                                if (puVar8 < puVar16 || (longlong)puVar8 - (longlong)puVar16 == 0)
                                goto LAB_18024b750;
                              } while (*(char *)((longlong)puVar16 * 0x60 + 0x22 + lVar20) == '\x03'
                                      );
                              uStack_c0 = 0;
                              uVar23 = uStack_c0;
                            }
                          }
                          else {
                            uVar23 = uVar23 + 1;
                          }
                          uStack_c0 = uVar23;
                          local_c8 = puVar16;
                          *puVar10 = (ulonglong)local_c8;
                          puVar10[1] = uStack_c0;
                          puVar10[2] = (ulonglong)local_c8;
                          puVar10[3] = uStack_c0;
                          *(undefined1 *)((longlong)puVar10 + 0x22) = 1;
                        }
                        else {
LAB_18024a311:
                          puVar15 = puVar10 + 2;
                          if (!bVar26 && !bVar27) {
                            puVar15 = puVar10;
                          }
                          bVar27 = puVar8 < puVar16;
                          bVar26 = false;
                          if (puVar8 == puVar16) {
                            bVar27 = puVar10[1] < puVar10[3];
                            bVar26 = puVar10[1] == puVar10[3];
                          }
                          uVar23 = puVar15[1];
                          puVar16 = puVar10 + 2;
                          if (!bVar27 && !bVar26) {
                            puVar16 = puVar10;
                          }
                          uVar11 = *puVar16;
                          uVar5 = puVar16[1];
                          puVar10[2] = *puVar15;
                          puVar10[3] = uVar23;
                          *puVar10 = uVar11;
                          puVar10[1] = uVar5;
                        }
                        *(undefined1 *)((longlong)puVar10 + 0x22) = 1;
                        puVar10 = puVar10 + 6;
                      } while (puVar10 != puVar9);
                      FUN_18024f370(param_1);
                      *(undefined1 *)(param_1 + 0x7fa) = 0;
                      goto LAB_18024b5b9;
                    }
                  }
                }
                else {
                  lVar24 = *(longlong *)(param_1 + 0xf8);
                  for (lVar20 = *(longlong *)(param_1 + 0xf0); lVar20 != lVar24;
                      lVar20 = lVar20 + 0x30) {
                    local_98 = *(ulonglong **)(lVar20 + 0x10);
                    uStack_90 = *(ulonglong *)(lVar20 + 0x18);
                    puVar9 = (ulonglong *)
                             FUN_180255300((longlong *)(param_1 + 0x50),&local_68,&local_98,0);
                    lVar22 = *(longlong *)(param_1 + 0x50);
                    puVar10 = (ulonglong *)*puVar9;
                    puVar16 = (ulonglong *)
                              ((*(longlong *)(param_1 + 0x58) - lVar22 >> 5) * -0x5555555555555555);
                    if (puVar16 < puVar10 || (longlong)puVar16 - (longlong)puVar10 == 0)
                    goto LAB_18024b750;
                    uVar23 = puVar9[1];
                    do {
                      if (uVar23 == 0) break;
                      uVar23 = uVar23 - 1;
                      cVar6 = FUN_18025f490(*(undefined2 *)
                                             (*(longlong *)((longlong)puVar10 * 0x60 + lVar22) +
                                             uVar23 * 0x10));
                    } while (cVar6 != '\0');
                    local_c8 = puVar10;
                    uStack_c0 = uVar23;
                    FUN_180255690(param_1 + 0x50,&local_a8,&local_c8);
                    *(ulonglong **)(lVar20 + 0x10) = local_a8;
                    *(ulonglong *)(lVar20 + 0x18) = local_a0;
                    *(undefined1 *)(lVar20 + 0x22) = 1;
                    lVar22 = local_88;
                  }
                }
              }
              else {
                puVar9 = *(ulonglong **)(param_1 + 0xf8);
                for (puVar10 = *(ulonglong **)(param_1 + 0xf0); puVar10 != puVar9;
                    puVar10 = puVar10 + 6) {
                  local_c8 = (ulonglong *)puVar10[2];
                  uStack_c0 = puVar10[3];
                  puVar8 = (ulonglong *)
                           FUN_180255300((longlong *)(param_1 + 0x50),&local_68,&local_c8,0);
                  lVar22 = *(longlong *)(param_1 + 0x50);
                  puVar16 = (ulonglong *)*puVar8;
                  puVar15 = (ulonglong *)
                            ((*(longlong *)(param_1 + 0x58) - lVar22 >> 5) * -0x5555555555555555);
                  if (puVar15 < puVar16 || (longlong)puVar15 - (longlong)puVar16 == 0)
                  goto LAB_18024b750;
                  uVar23 = puVar8[1];
                  do {
                    if (uVar23 == 0) break;
                    uVar23 = uVar23 - 1;
                    cVar6 = FUN_18025f490(*(undefined2 *)
                                           (*(longlong *)((longlong)puVar16 * 0x60 + lVar22) +
                                           uVar23 * 0x10));
                  } while (cVar6 != '\0');
                  local_a8 = puVar16;
                  local_a0 = uVar23;
                  FUN_180255690(param_1 + 0x50,&local_78,&local_a8);
                  puVar10[2] = (ulonglong)local_78;
                  puVar10[3] = uStack_70;
                  *puVar10 = (ulonglong)local_78;
                  puVar10[1] = uStack_70;
                  *(undefined1 *)((longlong)puVar10 + 0x22) = 1;
                  lVar22 = local_88;
                  local_98 = local_78;
                  uStack_90 = uStack_70;
                }
              }
            }
            else {
              lVar20 = *(longlong *)(param_1 + 0xf0);
              lVar24 = *(longlong *)(param_1 + 0xf8);
              if (lVar20 != lVar24) {
                do {
                  if (*(longlong *)(lVar20 + 0x18) == 0) {
                    local_a0 = 0;
                    local_a8 = *(ulonglong **)(lVar20 + 0x10);
                    FUN_180256690(param_1 + 0x50,&local_c8,&local_a8);
                  }
                  else {
                    uStack_c0 = *(longlong *)(lVar20 + 0x18) - 1;
                    local_c8 = *(ulonglong **)(lVar20 + 0x10);
                  }
                  *(ulonglong **)(lVar20 + 0x10) = local_c8;
                  *(ulonglong *)(lVar20 + 0x18) = uStack_c0;
                  *(undefined1 *)(lVar20 + 0x22) = 1;
                  lVar20 = lVar20 + 0x30;
                } while (lVar20 != lVar24);
                FUN_18024f370(param_1);
                *(undefined1 *)(param_1 + 0x7fa) = 0;
                goto LAB_18024b5b9;
              }
            }
          }
          else {
            puVar10 = *(ulonglong **)(param_1 + 0xf0);
            puVar9 = *(ulonglong **)(param_1 + 0xf8);
            if (puVar10 != puVar9) {
              do {
                puVar16 = (ulonglong *)puVar10[2];
                puVar8 = (ulonglong *)*puVar10;
                bVar26 = puVar8 < puVar16;
                if (puVar8 == puVar16) {
                  uVar23 = puVar10[3];
                  bVar26 = puVar10[1] < uVar23;
                  if (puVar10[1] != uVar23) goto LAB_180249ef6;
                  if (uVar23 == 0) {
                    local_a0 = 0;
                    local_a8 = puVar16;
                    FUN_180256690(param_1 + 0x50,&local_c8,&local_a8);
                  }
                  else {
                    uStack_c0 = uVar23 - 1;
                    local_c8 = puVar16;
                  }
                  puVar10[2] = (ulonglong)local_c8;
                  puVar10[3] = uStack_c0;
                  *puVar10 = (ulonglong)local_c8;
                  puVar10[1] = uStack_c0;
                  *(undefined1 *)((longlong)puVar10 + 0x22) = 1;
                  local_78 = local_c8;
                  uStack_70 = uStack_c0;
                }
                else {
LAB_180249ef6:
                  puVar15 = puVar10 + 2;
                  if (bVar26) {
                    puVar15 = puVar10;
                  }
                  bVar26 = puVar8 < puVar16;
                  if (puVar8 == puVar16) {
                    bVar26 = puVar10[1] < puVar10[3];
                  }
                  uVar23 = puVar15[1];
                  puVar16 = puVar10 + 2;
                  if (bVar26) {
                    puVar16 = puVar10;
                  }
                  uVar11 = *puVar16;
                  uVar5 = puVar16[1];
                  puVar10[2] = *puVar15;
                  puVar10[3] = uVar23;
                  *puVar10 = uVar11;
                  puVar10[1] = uVar5;
                }
                *(undefined1 *)((longlong)puVar10 + 0x22) = 1;
                puVar10 = puVar10 + 6;
              } while (puVar10 != puVar9);
              FUN_18024f370(param_1);
              *(undefined1 *)(param_1 + 0x7fa) = 0;
              goto LAB_18024b5b9;
            }
          }
          FUN_18024f370(param_1);
          *(undefined1 *)(param_1 + 0x7fa) = 0;
          goto LAB_18024b5b9;
        }
        uVar14 = 1;
      }
      FUN_18024fc40(param_1,1,uVar14);
      goto LAB_18024b5b9;
    }
    uVar14 = 1;
  }
  FUN_18024fac0(param_1,1,uVar14);
LAB_18024b5b9:
  if (*(int *)(lVar22 + 0xbd0) != 0) {
    pcVar13 = (char *)FUN_180267330(0x1000);
    if ((((*pcVar13 == '\0') || (cVar6 = FUN_18027deb0(0x1000,0), cVar6 == '\0')) ||
        ((pcVar13 = (char *)FUN_180267330(0x4000), *pcVar13 != '\0' &&
         (cVar6 = FUN_18027deb0(0x4000,0), cVar6 != '\0')))) &&
       ((*(char *)(param_1 + 0x11) == '\0' && (iVar18 = 0, 0 < *(int *)(lVar22 + 0xbd0))))) {
      do {
        uVar3 = *(ushort *)(*(longlong *)(lVar22 + 0xbd8) + (longlong)iVar18 * 2);
        if (((uVar3 & 0xffe0) != 0) || (uVar3 == 10)) {
          FUN_18024fe90(param_1);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(lVar22 + 0xbd0));
    }
    FUN_180260a20(lVar22 + 0xbd0,0);
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar22 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    cVar6 = *(char *)(lVar22 + 0x10);
    lVar20 = *(longlong *)(lVar22 + 0xec0);
    *(undefined2 *)(lVar20 + 0x2768) = 0x101;
    fVar2 = *(float *)(param_1 + 0x4bc);
    fVar28 = *(float *)(param_1 + 0x4b8) - DAT_180380bb0;
    *(float *)(lVar20 + 0x2774) = *(float *)(lVar20 + 0x1238);
    *(float *)(lVar20 + 0x2770) = fVar2 - *(float *)(lVar20 + 0x1238);
    *(float *)(lVar20 + 0x276c) = fVar28;
    if (cVar6 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar22 = *(longlong *)(lVar22 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar22 + 0x1520) + 0xce) = 1;
    *(undefined4 *)(lVar20 + 0x2778) = **(undefined4 **)(*(longlong *)(lVar22 + 0x1520) + 0x20);
  }
  return;
}


