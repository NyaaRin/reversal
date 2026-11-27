// 0x1802524f0  FUN_1802524f0
// size=1449 thunk=false
// signature: undefined FUN_1802524f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802524f0(longlong param_1)

{
  undefined8 ****ppppuVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 *****pppppuVar15;
  longlong lVar16;
  undefined8 **ppuVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_1c8 [32];
  undefined8 *****local_1a8;
  undefined8 *****local_1a0;
  undefined1 local_198 [16];
  undefined8 ****local_188;
  longlong *plStack_180;
  undefined8 **local_178;
  undefined8 ***local_168;
  longlong *plStack_160;
  undefined8 ***local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 ****local_138;
  undefined8 *puStack_130;
  undefined8 ****local_128;
  longlong lStack_120;
  undefined8 ****local_118;
  undefined8 *puStack_110;
  undefined8 **local_108;
  undefined8 **local_100;
  undefined8 *****local_f8;
  undefined8 ***local_f0;
  undefined8 ****local_e8;
  undefined8 *puStack_e0;
  undefined8 ****local_d8;
  longlong lStack_d0;
  undefined8 ****local_c8;
  undefined8 local_c0;
  undefined8 ****local_b8;
  undefined8 local_b0;
  undefined8 *****local_a8;
  undefined8 ***local_a0;
  undefined8 ****local_98;
  undefined8 ****local_90;
  undefined8 ****local_88;
  undefined8 *****local_80 [2];
  undefined8 ***local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_1c8;
  lVar16 = (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4) * 0x10 +
           *(longlong *)(param_1 + 0xf0);
  uVar5 = *(ulonglong *)(lVar16 + -0x20);
  uVar9 = *(ulonglong *)(lVar16 + -0x30);
  bVar18 = uVar9 < uVar5;
  if (uVar9 == uVar5) {
    bVar18 = *(ulonglong *)(lVar16 + -0x28) < *(ulonglong *)(lVar16 + -0x18);
  }
  if (!bVar18) {
    uVar9 = uVar5;
  }
  if (uVar9 != (*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 5) *
               -0x5555555555555555 - 1U) {
    local_168 = (undefined8 ****)0x0;
    plStack_160 = (longlong *)0x0;
    FUN_180253050(param_1,&local_168,CONCAT71((int7)((ulonglong)lVar16 >> 8),1));
    ppppuVar14 = *(undefined8 *****)(param_1 + 0xf0);
    while (ppppuVar14 < *(undefined8 *****)(param_1 + 0xf8)) {
      ppppuVar1 = ppppuVar14 + 2;
      pppppuVar12 = (undefined8 *****)*ppppuVar1;
      local_138 = (undefined8 ****)*ppppuVar14;
      ppppuVar8 = ppppuVar14 + 1;
      bVar19 = local_138 < pppppuVar12;
      bVar18 = false;
      if ((undefined8 *****)local_138 == pppppuVar12) {
        bVar19 = *ppppuVar8 < ppppuVar14[3];
        bVar18 = *ppppuVar8 == ppppuVar14[3];
      }
      ppppuVar7 = ppppuVar14;
      if (!bVar19) {
        ppppuVar7 = ppppuVar1;
      }
      local_178 = ppppuVar7[1];
      pppppuVar15 = (undefined8 *****)local_138;
      if (!bVar19) {
        pppppuVar15 = pppppuVar12;
      }
      ppppuVar7 = ppppuVar14;
      if (bVar19 || bVar18) {
        ppppuVar7 = ppppuVar1;
        local_138 = pppppuVar12;
      }
      local_108 = ppppuVar7[1];
      pppppuVar12 = (undefined8 *****)local_138;
      if ((undefined8 ***)local_108 == (undefined8 ***)0x0) {
LAB_180252681:
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)(param_1 + 0x50);
        pppppuVar13 = (undefined8 *****)
                      ((*(longlong *)(param_1 + 0x58) - lVar16 >> 5) * -0x5555555555555555);
        if (pppppuVar13 < local_138 || (longlong)pppppuVar13 - (longlong)local_138 == 0) {
LAB_180252a8f:
                    /* WARNING: Subroutine does not return */
          FUN_180262180();
        }
        if ((undefined8 *****)local_138 != (undefined8 *****)((longlong)pppppuVar13 - 1U)) {
          do {
            pppppuVar12 = (undefined8 *****)((longlong)pppppuVar12 + 1);
            if ((undefined8 *****)((longlong)pppppuVar13 - 1U) <= pppppuVar12) break;
            if (pppppuVar13 < pppppuVar12 || (longlong)pppppuVar13 - (longlong)pppppuVar12 == 0)
            goto LAB_180252a8f;
          } while (*(char *)((longlong)pppppuVar12 * 0x60 + 0x22 + lVar16) == '\x03');
          goto LAB_180252681;
        }
        lVar16 = *(longlong *)((longlong)local_138 * 0x60 + 8 + lVar16) -
                 *(longlong *)((longlong)local_138 * 0x60 + lVar16) >> 4;
      }
      local_c0 = 0;
      local_188 = pppppuVar12;
      plStack_180 = (longlong *)lVar16;
      local_d8 = pppppuVar12;
      lStack_d0 = lVar16;
      local_c8 = pppppuVar15;
      FUN_180254e90(param_1 + 0x50,local_80,&local_c8,&local_188);
      local_98 = &local_188;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
        UNLOCK();
      }
      local_188 = (undefined8 ****)local_168;
      plStack_180 = plStack_160;
      local_b0 = 0;
      local_128 = pppppuVar12;
      lStack_120 = lVar16;
      local_b8 = pppppuVar15;
      FUN_180253fc0(param_1,&local_188,&local_b8,&local_128);
      ppppuVar1 = local_138;
      local_128 = ppppuVar14 + 6;
      for (ppppuVar7 = local_128; ppppuVar7 < *(undefined8 *****)(param_1 + 0xf8);
          ppppuVar7 = ppppuVar7 + 6) {
        pppppuVar13 = (undefined8 *****)*ppppuVar7;
        pppuVar11 = ppppuVar7[1];
        if (pppppuVar15 == pppppuVar12) {
          pppuVar10 = (undefined8 ***)((longlong)pppuVar11 - lVar16);
          if (pppppuVar13 != pppppuVar12) {
            pppuVar10 = pppuVar11;
          }
        }
        else {
          pppppuVar13 = (undefined8 *****)
                        (((longlong)pppppuVar13 - (longlong)pppppuVar12) + (longlong)pppppuVar15);
          pppuVar10 = pppuVar11;
          if (pppppuVar13 == pppppuVar12) {
            pppuVar10 = (undefined8 ***)((longlong)pppuVar11 - lVar16);
          }
        }
        *ppppuVar7 = pppppuVar13;
        ppppuVar7[1] = pppuVar10;
        pppppuVar13 = (undefined8 *****)ppppuVar7[2];
        pppuVar11 = ppppuVar7[3];
        if (pppppuVar15 != pppppuVar12) {
          pppppuVar13 = (undefined8 *****)
                        (((longlong)pppppuVar13 - (longlong)pppppuVar12) + (longlong)pppppuVar15);
        }
        if (pppppuVar13 == pppppuVar12) {
          pppuVar11 = (undefined8 ***)((longlong)pppuVar11 - lVar16);
        }
        ppppuVar7[2] = pppppuVar13;
        ppppuVar7[3] = pppuVar11;
      }
      lVar16 = *(longlong *)(param_1 + 0x50);
      pppppuVar12 = (undefined8 *****)
                    ((*(longlong *)(param_1 + 0x58) - lVar16 >> 5) * -0x5555555555555555);
      local_158 = ppppuVar8;
      if (pppppuVar12 < pppppuVar15 || (longlong)pppppuVar12 - (longlong)pppppuVar15 == 0) {
LAB_180252a95:
                    /* WARNING: Subroutine does not return */
        FUN_180262180();
      }
      pppppuVar13 = pppppuVar15;
      if (pppppuVar15 == (undefined8 *****)((longlong)pppppuVar12 - 1U)) {
        ppuVar17 = (undefined8 **)
                   (*(longlong *)((longlong)pppppuVar15 * 0x60 + 8 + lVar16) -
                    *(longlong *)((longlong)pppppuVar15 * 0x60 + lVar16) >> 4);
      }
      else {
        do {
          pppppuVar13 = (undefined8 *****)((longlong)pppppuVar13 + 1);
          if ((undefined8 *****)((longlong)pppppuVar12 - 1U) <= pppppuVar13) break;
          if (pppppuVar12 < pppppuVar13 || (longlong)pppppuVar12 - (longlong)pppppuVar13 == 0)
          goto LAB_180252a95;
        } while (*(char *)((longlong)pppppuVar13 * 0x60 + 0x22 + lVar16) == '\x03');
        ppuVar17 = (undefined8 **)0x0;
      }
      local_f8 = local_80;
      if (0xf < local_68) {
        local_f8 = local_80[0];
      }
      local_138 = (undefined8 ****)local_70;
      local_f0 = local_70;
      local_90 = &local_188;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
        UNLOCK();
      }
      local_188 = (undefined8 ****)local_168;
      plStack_180 = plStack_160;
      local_88 = &local_188;
      local_1a8 = &local_f8;
      local_118 = pppppuVar13;
      puStack_110 = ppuVar17;
      local_e8 = pppppuVar13;
      puStack_e0 = ppuVar17;
      FUN_180254730(param_1 + 0x50,&local_148,param_1,&local_e8);
      ppppuVar8 = local_188;
      local_a8 = local_f8;
      local_a0 = local_138;
      local_198[0] = 0;
      pppuVar11 = local_188[1];
      local_138 = pppppuVar13;
      puStack_130 = ppuVar17;
      if (pppuVar11 == local_188[2]) {
        local_1a0 = &local_a8;
        local_1a8 = &local_e8;
        FUN_180262680(local_188,pppuVar11,local_198,&local_138);
      }
      else {
        *(undefined1 *)pppuVar11 = 0;
        pppuVar11[1] = pppppuVar13;
        pppuVar11[2] = ppuVar17;
        *(undefined4 *)(pppuVar11 + 3) = (undefined4)local_148;
        *(undefined4 *)((longlong)pppuVar11 + 0x1c) = local_148._4_4_;
        *(undefined4 *)(pppuVar11 + 4) = (undefined4)uStack_140;
        *(undefined4 *)((longlong)pppuVar11 + 0x24) = uStack_140._4_4_;
        pppuVar11[5] = (undefined8 **)0x0;
        pppuVar11[6] = (undefined8 **)0x0;
        pppuVar11[7] = (undefined8 **)0x0;
        pppuVar11[8] = (undefined8 **)0x0;
        local_100 = pppuVar11;
        FUN_18001d080(pppuVar11 + 5,local_f8);
        ppppuVar8[1] = ppppuVar8[1] + 9;
      }
      FUN_18024f370(param_1);
      plVar6 = plStack_180;
      ppppuVar8 = local_128;
      if (plStack_180 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_180 + 1;
        lVar16 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plStack_180)(plStack_180);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          ppppuVar8 = local_128;
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6);
            ppppuVar8 = local_128;
          }
        }
      }
      for (; ppppuVar8 < *(undefined8 *****)(param_1 + 0xf8); ppppuVar8 = ppppuVar8 + 6) {
        pppuVar11 = ppppuVar8[1];
        if ((undefined8 *****)*ppppuVar8 == pppppuVar13) {
          pppuVar11 = (undefined8 ***)
                      (((longlong)uStack_140 - (longlong)ppuVar17) + (longlong)ppppuVar8[1]);
        }
        *ppppuVar8 = (undefined8 ***)
                     (((longlong)local_148 - (longlong)pppppuVar13) + (longlong)*ppppuVar8);
        ppppuVar8[1] = pppuVar11;
        pppuVar11 = ppppuVar8[3];
        if ((undefined8 *****)ppppuVar8[2] == pppppuVar13) {
          pppuVar11 = (undefined8 ***)
                      (((longlong)uStack_140 - (longlong)ppuVar17) + (longlong)ppppuVar8[3]);
        }
        ppppuVar8[2] = (undefined8 ***)
                       ((longlong)ppppuVar8[2] + ((longlong)local_148 - (longlong)pppppuVar13));
        ppppuVar8[3] = pppuVar11;
      }
      *ppppuVar14 = (undefined8 ***)((longlong)pppppuVar15 + 1);
      *local_158 = local_178;
      ppppuVar14[2] = (undefined8 ***)((longlong)ppppuVar1 + 1);
      ppppuVar14[3] = (undefined8 ***)local_108;
      *(undefined1 *)((longlong)ppppuVar14 + 0x22) = 1;
      FUN_18020e450(local_80);
      ppppuVar14 = local_128;
    }
    local_100 = (undefined8 **)&local_148;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
      UNLOCK();
    }
    local_148 = (undefined8 ****)local_168;
    uStack_140 = plStack_160;
    FUN_180253190(param_1,&local_148);
    plVar6 = plStack_160;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_160 + 1;
      lVar16 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plStack_160)(plStack_160);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
  }
  return;
}


