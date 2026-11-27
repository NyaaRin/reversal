// 0x180252aa0  FUN_180252aa0
// size=1441 thunk=false
// signature: undefined FUN_180252aa0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180252aa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 ***pppuVar5;
  bool bVar6;
  longlong *plVar7;
  undefined8 ***pppuVar8;
  undefined8 uVar9;
  char cVar10;
  undefined8 *****pppppuVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  undefined8 **ppuVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  longlong lVar20;
  undefined8 **ppuVar21;
  undefined8 **ppuVar22;
  bool bVar23;
  undefined1 auStack_1e8 [32];
  undefined8 ****local_1c8;
  undefined8 ****local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [4];
  uint local_1a4;
  ulonglong *local_1a0;
  ulonglong *local_198;
  undefined8 *local_190;
  uint local_188;
  ulonglong local_180;
  undefined8 ***local_178;
  longlong *plStack_170;
  ulonglong *local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 ***local_148;
  longlong *plStack_140;
  undefined8 ***local_138;
  longlong *plStack_130;
  longlong local_128;
  ulonglong *local_120;
  undefined8 **local_118;
  undefined8 *local_108;
  ulonglong local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 ****local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 ****local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 ****local_a8 [2];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 ***local_88;
  undefined8 ***local_80;
  undefined8 ***local_78;
  undefined8 ****local_70 [2];
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_1e8;
  local_1a4 = 0;
  local_188 = 0;
  local_178 = (undefined8 ****)0x0;
  plStack_170 = (longlong *)0x0;
  local_128 = param_1;
  FUN_180253050(0,&local_178,1);
  FUN_18016d4c0(local_70,*(longlong *)(param_1 + 0x40) + 0x28);
  puVar12 = *(ulonglong **)(param_1 + 0xf0);
  do {
    local_168 = puVar12;
    if (*(ulonglong **)(param_1 + 0xf8) <= puVar12) {
      local_118 = (undefined8 **)&local_158;
      if (plStack_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
        UNLOCK();
      }
      local_158 = (undefined8 ****)local_178;
      uStack_150 = plStack_170;
      FUN_180253190(param_1,&local_158);
      FUN_18020e450(local_70);
      plVar7 = plStack_170;
      if (plStack_170 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_170 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_170)(plStack_170);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      return;
    }
    puVar19 = puVar12 + 2;
    ppuVar17 = (undefined8 **)*puVar19;
    ppuVar21 = (undefined8 **)*puVar12;
    puVar15 = puVar12 + 3;
    puVar18 = puVar12 + 1;
    bVar23 = ppuVar21 < ppuVar17;
    if (ppuVar21 == ppuVar17) {
      bVar6 = *puVar15 < *puVar18;
      bVar23 = *puVar18 < *puVar15;
    }
    else {
      bVar6 = !bVar23;
    }
    ppuVar22 = ppuVar21;
    if (!bVar23) {
      ppuVar22 = ppuVar17;
    }
    puVar13 = puVar12;
    if (!bVar6) {
      puVar13 = puVar19;
      ppuVar21 = ppuVar17;
    }
    uVar16 = puVar13[1];
    local_1a0 = puVar15;
    local_198 = puVar18;
    local_190 = ppuVar21;
    local_180 = uVar16;
    local_120 = puVar19;
    if (ppuVar22 <= ppuVar21) {
      do {
        if ((((*puVar12 == *puVar19) && (*puVar18 == *puVar15)) || (ppuVar22 != ppuVar21)) ||
           (uVar16 != 0)) {
          lVar4 = *(longlong *)((longlong)ppuVar22 * 0x60 + *(longlong *)(param_1 + 0x50));
          lVar20 = *(longlong *)((longlong)ppuVar22 * 0x60 + 8 + *(longlong *)(param_1 + 0x50)) -
                   lVar4;
          uVar16 = local_180;
          if (lVar20 != 0) {
            ppuVar17 = (undefined8 **)0x0;
            uVar16 = 0;
            ppuVar21 = (undefined8 **)(lVar20 >> 4);
            if (ppuVar21 != (undefined8 **)0x0) {
              do {
                cVar10 = FUN_18025f490(*(undefined2 *)(lVar4 + (longlong)ppuVar17 * 0x10));
                if (cVar10 == '\0') goto LAB_180252c23;
                ppuVar17 = (undefined8 **)((longlong)ppuVar17 + 1);
              } while (ppuVar17 < ppuVar21);
            }
            puVar13 = puVar12;
            if (ppuVar17 < ppuVar21) {
LAB_180252c23:
              do {
                puVar13 = local_168;
                param_1 = local_128;
                if (local_60 <= uVar16) break;
                pppppuVar11 = local_70;
                if (0xf < local_58) {
                  pppppuVar11 = (undefined8 *****)local_70[0];
                }
                if ((*(short *)(lVar4 + (uVar16 + (longlong)ppuVar17) * 0x10) !=
                     (short)*(char *)((longlong)pppppuVar11 + uVar16)) ||
                   (uVar16 = uVar16 + 1, ppuVar21 <= (undefined8 **)(uVar16 + (longlong)ppuVar17)))
                break;
              } while( true );
            }
            if (uVar16 == local_60) {
              uVar16 = uVar16 + (longlong)ppuVar17;
              if ((uVar16 < (longlong)ppuVar21 - 1U) && (*(short *)(lVar4 + uVar16 * 0x10) == 0x20))
              {
                uVar16 = uVar16 + 1;
              }
              local_88 = &local_138;
              if (plStack_170 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
                UNLOCK();
              }
              local_138 = local_178;
              plStack_130 = plStack_170;
              local_108 = ppuVar22;
              local_100 = uVar16;
              local_f8 = ppuVar22;
              local_f0 = ppuVar17;
              FUN_180253fc0(param_1,&local_138,&local_f8,&local_108);
              for (puVar12 = puVar13; puVar12 < *(ulonglong **)(param_1 + 0xf8);
                  puVar12 = puVar12 + 6) {
                uVar14 = puVar12[1];
                if ((undefined8 **)*puVar12 == ppuVar22) {
                  uVar14 = (uVar14 - uVar16) + (longlong)ppuVar17;
                }
                puVar12[1] = uVar14;
                uVar14 = puVar12[3];
                if ((undefined8 **)puVar12[2] == ppuVar22) {
                  uVar14 = (puVar12[3] - uVar16) + (longlong)ppuVar17;
                }
                puVar12[3] = uVar14;
              }
              uVar16 = local_180;
              puVar15 = local_1a0;
              puVar12 = puVar13;
              puVar18 = local_198;
              ppuVar21 = (undefined8 **)local_190;
              puVar19 = puVar13 + 2;
            }
            else {
              if (local_60 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_1800130a0();
              }
              local_1b8 = 1;
              local_1c0 = (undefined8 ****)&DAT_18033f56c;
              local_1c8 = (undefined8 ****)local_60;
              FUN_18020e930(local_a8);
              uVar9 = local_98;
              local_1a4 = local_1a4 | 1;
              pppppuVar11 = local_a8;
              if (0xf < local_90) {
                pppppuVar11 = (undefined8 *****)local_a8[0];
              }
              local_e0 = local_98;
              local_80 = &local_148;
              if (plStack_170 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
                UNLOCK();
              }
              local_148 = local_178;
              plStack_140 = plStack_170;
              local_78 = &local_148;
              local_1c8 = &local_e8;
              local_188 = local_1a4;
              local_e8 = pppppuVar11;
              local_d8 = ppuVar22;
              local_d0 = ppuVar17;
              FUN_180254730(param_1 + 0x50,&local_158,param_1,&local_d8);
              pppuVar8 = local_148;
              local_c0 = uVar9;
              local_138 = local_158;
              plStack_130 = uStack_150;
              local_1a8[0] = 0;
              pppuVar5 = (undefined8 ***)local_148[1];
              local_c8 = pppppuVar11;
              local_b8 = ppuVar22;
              local_b0 = ppuVar17;
              if (pppuVar5 == (undefined8 ***)local_148[2]) {
                local_1c0 = &local_c8;
                local_1c8 = &local_138;
                FUN_180262680(local_148,pppuVar5,local_1a8,&local_b8);
              }
              else {
                *(undefined1 *)pppuVar5 = 0;
                pppuVar5[1] = ppuVar22;
                pppuVar5[2] = ppuVar17;
                *(undefined4 *)(pppuVar5 + 3) = (undefined4)local_158;
                *(undefined4 *)((longlong)pppuVar5 + 0x1c) = local_158._4_4_;
                *(undefined4 *)(pppuVar5 + 4) = (undefined4)uStack_150;
                *(undefined4 *)((longlong)pppuVar5 + 0x24) = uStack_150._4_4_;
                pppuVar5[5] = (undefined8 **)0x0;
                pppuVar5[6] = (undefined8 **)0x0;
                pppuVar5[7] = (undefined8 **)0x0;
                pppuVar5[8] = (undefined8 **)0x0;
                local_118 = pppuVar5;
                FUN_18001d080(pppuVar5 + 5,pppppuVar11,uVar9);
                pppuVar8[1] = pppuVar8[1] + 9;
              }
              FUN_18024f370(param_1);
              plVar7 = plStack_140;
              if (plStack_140 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_140 + 1;
                lVar4 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*plStack_140)(plStack_140);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar7 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar7 + 8))(plVar7);
                  }
                }
              }
              local_1a4 = local_1a4 & 0xfffffffe;
              local_188 = local_1a4;
              FUN_18020e450(local_a8);
              for (; uVar16 = local_180, puVar15 = local_1a0, puVar12 = local_168,
                  puVar18 = local_198, ppuVar21 = (undefined8 **)local_190, puVar19 = local_120,
                  puVar13 < *(ulonglong **)(param_1 + 0xf8); puVar13 = puVar13 + 6) {
                uVar16 = puVar13[1];
                if ((undefined8 **)*puVar13 == ppuVar22) {
                  uVar16 = (puVar13[1] - (longlong)ppuVar17) + (longlong)uStack_150;
                }
                *puVar13 = (longlong)local_158 + ((longlong)*puVar13 - (longlong)ppuVar22);
                puVar13[1] = uVar16;
                uVar16 = puVar13[3];
                if ((undefined8 **)puVar13[2] == ppuVar22) {
                  uVar16 = (puVar13[3] - (longlong)ppuVar17) + (longlong)uStack_150;
                }
                puVar13[2] = (longlong)local_158 + ((longlong)puVar13[2] - (longlong)ppuVar22);
                puVar13[3] = uVar16;
              }
            }
          }
        }
        ppuVar22 = (undefined8 **)((longlong)ppuVar22 + 1);
      } while (ppuVar22 <= ppuVar21);
    }
    puVar12 = puVar12 + 6;
  } while( true );
}


