// 0x180132d90  FUN_180132d90
// size=1120 thunk=false
// signature: undefined FUN_180132d90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180132d90(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  byte *****pppppbVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *****pppppbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined4 local_98;
  ulonglong *local_90;
  void **local_88;
  undefined8 *local_80;
  void *local_78;
  void *pvStack_70;
  longlong local_68;
  byte ****local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  uVar11 = 0;
  local_98 = 0;
  uVar3 = param_2[2];
  puVar10 = auStack_b8;
  uVar14 = uVar11;
  local_90 = param_3;
  local_80 = param_1;
  if (uVar3 != 0) {
    do {
      puVar5 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar5 = (undefined8 *)*param_2;
      }
      cVar1 = *(char *)((longlong)puVar5 + uVar14);
      iVar6 = (int)cVar1;
      if ((byte)(cVar1 - 0x30U) < 10) {
        iVar6 = iVar6 + -0x30;
LAB_180132e1b:
        if (iVar6 < 0) goto LAB_180133123;
        uVar15 = uVar14;
        if (uVar14 < uVar3) {
          do {
            puVar5 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar5 = (undefined8 *)*param_2;
            }
            cVar1 = *(char *)((longlong)puVar5 + uVar15);
            iVar6 = (int)cVar1;
            if ((byte)(cVar1 - 0x30U) < 10) {
              iVar6 = iVar6 + -0x30;
            }
            else if ((byte)(cVar1 + 0x9fU) < 6) {
              iVar6 = iVar6 + -0x57;
            }
            else {
              if (5 < (byte)(cVar1 + 0xbfU)) break;
              iVar6 = iVar6 + -0x37;
            }
            if ((iVar6 < 0) || (uVar15 = uVar15 + 1, uVar3 <= uVar15)) break;
          } while( true );
        }
        uVar11 = uVar15 - uVar14;
        if ((0x3f < uVar11) && ((uVar11 & 1) == 0)) {
          uVar11 = uVar11 >> 1;
          local_78 = (void *)0x0;
          pvStack_70 = (void *)0x0;
          local_68 = 0;
          if (uVar11 != 0) {
            FUN_180238590(&local_78);
            local_88 = &local_78;
            pvVar7 = (void *)((longlong)local_78 + uVar11);
            memset(local_78,0,uVar11);
            local_88 = (void **)0x0;
            pvStack_70 = pvVar7;
          }
          uVar11 = 0;
          uVar12 = uVar11;
          if (pvStack_70 != local_78) {
            do {
              puVar5 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar5 = (undefined8 *)*param_2;
              }
              cVar1 = *(char *)((longlong)puVar5 + uVar14 + uVar12 * 2);
              iVar6 = (int)cVar1;
              if ((byte)(cVar1 - 0x30U) < 10) {
                iVar6 = iVar6 + -0x30;
              }
              else if ((byte)(cVar1 + 0x9fU) < 6) {
                iVar6 = iVar6 + -0x57;
              }
              else if ((byte)(cVar1 + 0xbfU) < 6) {
                iVar6 = iVar6 + -0x37;
              }
              else {
                iVar6 = -1;
              }
              puVar5 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar5 = (undefined8 *)*param_2;
              }
              cVar1 = *(char *)((longlong)puVar5 + uVar12 * 2 + uVar14 + 1);
              iVar8 = (int)cVar1;
              if ((byte)(cVar1 - 0x30U) < 10) {
                iVar8 = iVar8 + -0x30;
              }
              else if ((byte)(cVar1 + 0x9fU) < 6) {
                iVar8 = iVar8 + -0x57;
              }
              else {
                iVar8 = iVar8 + -0x37;
                if (5 < (byte)(cVar1 + 0xbfU)) {
                  iVar8 = -1;
                }
              }
              if ((iVar6 < 0) || (iVar8 < 0)) {
                if (local_78 == (void *)0x0) goto LAB_18013312a;
                pvVar7 = local_78;
                if ((0xfff < (ulonglong)(local_68 - (longlong)local_78)) &&
                   (pvVar7 = *(void **)((longlong)local_78 + -8),
                   0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar7))))
                goto LAB_18013319f;
                free(pvVar7);
                goto LAB_18013312a;
              }
              *(byte *)((longlong)local_78 + uVar12) = (char)iVar6 << 4 | (byte)iVar8;
              uVar12 = uVar12 + 1;
            } while (uVar12 < (ulonglong)((longlong)pvStack_70 - (longlong)local_78));
          }
          uVar14 = local_90[1];
          for (uVar11 = *local_90; uVar11 != uVar14; uVar11 = uVar11 + 0x20) {
            FUN_180132610(local_60,local_78,(longlong)pvStack_70 - (longlong)local_78,uVar11);
            if (0x27 < local_50) {
              pppppbVar9 = local_60;
              if (0xf < local_48) {
                pppppbVar9 = (byte *****)local_60[0];
              }
              if (*(byte *)pppppbVar9 == 0x65) {
                pppppbVar9 = local_60;
                if (0xf < local_48) {
                  pppppbVar9 = (byte *****)local_60[0];
                }
                if (*(byte *)((longlong)pppppbVar9 + 1) == 0x79) {
                  iVar6 = 0;
                  pppppbVar9 = local_60;
                  if (0xf < local_48) {
                    pppppbVar9 = (byte *****)local_60[0];
                  }
                  pppppbVar13 = (byte *****)((longlong)pppppbVar9 + local_50);
                  for (; pppppbVar9 != pppppbVar13;
                      pppppbVar9 = (byte *****)((longlong)pppppbVar9 + 1)) {
                    bVar2 = *(byte *)pppppbVar9;
                    if (bVar2 == 0x2e) {
                      iVar6 = iVar6 + 1;
                    }
                    else if (((0x32 < (byte)(bVar2 - 0x2d)) ||
                             ((0x43ffffff01ff9U >> ((ulonglong)(bVar2 - 0x2d) & 0x3f) & 1) == 0)) &&
                            (0x19 < (byte)(bVar2 + 0x9f))) goto LAB_1801330b8;
                  }
                  if (1 < iVar6) {
                    FUN_18016d4c0(param_1,local_60);
                    local_98 = 1;
                    FUN_18020e450(local_60);
                    puVar10 = auStack_b8;
                    if (local_78 == (void *)0x0) goto LAB_1801331c6;
                    pvVar7 = local_78;
                    if ((0xfff < (ulonglong)(local_68 - (longlong)local_78)) &&
                       (pvVar7 = *(void **)((longlong)local_78 + -8),
                       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar7))))
                    goto LAB_18013319f;
                    free(pvVar7);
                    puVar10 = auStack_b8;
                    goto LAB_1801331c6;
                  }
                }
              }
            }
LAB_1801330b8:
            FUN_18020e450(local_60);
          }
          if (local_78 != (void *)0x0) {
            pvVar7 = local_78;
            if ((0xfff < (ulonglong)(local_68 - (longlong)local_78)) &&
               (pvVar7 = *(void **)((longlong)local_78 + -8),
               0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar7)))) {
LAB_18013319f:
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              puVar10 = auStack_b0;
              break;
            }
            free(pvVar7);
          }
        }
      }
      else {
        if ((byte)(cVar1 + 0x9fU) < 6) {
          iVar6 = iVar6 + -0x57;
          goto LAB_180132e1b;
        }
        if ((byte)(cVar1 + 0xbfU) < 6) {
          iVar6 = iVar6 + -0x37;
          goto LAB_180132e1b;
        }
LAB_180133123:
        uVar15 = uVar14 + 1;
      }
LAB_18013312a:
      uVar11 = 0;
      puVar10 = auStack_b8;
      uVar14 = uVar15;
    } while (uVar15 < uVar3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar11;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
LAB_1801331c6:
  *(undefined8 *)(puVar10 + -8) = 0x1801331d5;
  return param_1;
}


