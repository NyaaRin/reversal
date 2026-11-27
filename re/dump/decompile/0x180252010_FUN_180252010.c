// 0x180252010  FUN_180252010
// size=1235 thunk=false
// signature: undefined FUN_180252010()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_180252010(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 ******ppppppuVar10;
  ulonglong uVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *******pppppppuVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_1c8 [32];
  undefined8 *******local_1a8;
  undefined8 *******local_1a0;
  undefined1 local_198 [16];
  undefined8 ******local_188;
  longlong *plStack_180;
  undefined8 ****local_178;
  undefined8 *****local_168;
  longlong *plStack_160;
  undefined8 *****local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 ******local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 ******local_128;
  longlong lStack_120;
  undefined8 ****local_118;
  undefined8 ****local_110;
  undefined8 ******local_108;
  longlong lStack_100;
  undefined8 ******local_f8;
  undefined8 local_f0;
  undefined8 ******local_e8;
  undefined8 local_e0;
  undefined8 *******local_d8;
  undefined8 local_d0;
  undefined8 ****local_c8;
  undefined8 local_c0;
  undefined8 *******local_b8;
  undefined8 local_b0;
  undefined8 ****local_a8;
  undefined8 local_a0;
  undefined8 ******local_98;
  undefined8 ******local_90;
  undefined8 ******local_88;
  undefined8 *******local_80 [2];
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_1c8;
  puVar4 = *(ulonglong **)(param_1 + 0xf0);
  uVar5 = puVar4[2];
  uVar11 = *puVar4;
  bVar21 = uVar11 < uVar5;
  if (uVar11 == uVar5) {
    bVar21 = puVar4[1] < puVar4[3];
  }
  if (!bVar21) {
    uVar11 = uVar5;
  }
  if (uVar11 != 0) {
    local_168 = (undefined8 *****)0x0;
    plStack_160 = (longlong *)0x0;
    FUN_180253050(param_1,&local_168,CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
    ppppppuVar17 = (undefined8 ******)*(undefined8 ******)(param_1 + 0xf0);
    while (ppppppuVar17 < *(undefined8 ******)(param_1 + 0xf8)) {
      pppppuVar9 = ppppppuVar17 + 2;
      ppppppuVar10 = (undefined8 ******)*pppppuVar9;
      local_138 = (undefined8 ******)*ppppppuVar17;
      bVar22 = local_138 < ppppppuVar10;
      bVar21 = false;
      if (local_138 == ppppppuVar10) {
        ppppuVar13 = ppppppuVar17[1];
        bVar22 = ppppuVar13 < ppppppuVar17[3];
        bVar21 = (undefined8 *****)ppppuVar13 == ppppppuVar17[3];
      }
      pppppuVar8 = ppppppuVar17;
      if (!bVar22) {
        pppppuVar8 = pppppuVar9;
      }
      local_178 = pppppuVar8[1];
      ppppppuVar18 = local_138;
      if (!bVar22) {
        ppppppuVar18 = ppppppuVar10;
      }
      pppppuVar8 = ppppppuVar17;
      if (bVar22 || bVar21) {
        pppppuVar8 = pppppuVar9;
        local_138 = ppppppuVar10;
      }
      local_118 = pppppuVar8[1];
      ppppppuVar10 = local_138;
      if (local_118 == (undefined8 ****)0x0) {
LAB_180252171:
        lVar20 = 0;
      }
      else {
        lVar20 = *(longlong *)(param_1 + 0x50);
        ppppppuVar12 = (undefined8 ******)
                       ((*(longlong *)(param_1 + 0x58) - lVar20 >> 5) * -0x5555555555555555);
        if (ppppppuVar12 < local_138 || (longlong)ppppppuVar12 - (longlong)local_138 == 0) {
LAB_1802524de:
                    /* WARNING: Subroutine does not return */
          FUN_180262180();
        }
        if (local_138 != (undefined8 ******)((longlong)ppppppuVar12 - 1U)) {
          do {
            ppppppuVar10 = (undefined8 ******)((longlong)ppppppuVar10 + 1);
            if ((undefined8 ******)((longlong)ppppppuVar12 - 1U) <= ppppppuVar10) break;
            if (ppppppuVar12 < ppppppuVar10 || (longlong)ppppppuVar12 - (longlong)ppppppuVar10 == 0)
            goto LAB_1802524de;
          } while (*(char *)((longlong)ppppppuVar10 * 0x60 + 0x22 + lVar20) == '\x03');
          goto LAB_180252171;
        }
        lVar20 = *(longlong *)((longlong)local_138 * 0x60 + 8 + lVar20) -
                 *(longlong *)((longlong)local_138 * 0x60 + lVar20) >> 4;
      }
      local_f0 = 0;
      local_188 = ppppppuVar10;
      plStack_180 = (longlong *)lVar20;
      local_108 = ppppppuVar10;
      lStack_100 = lVar20;
      local_f8 = ppppppuVar18;
      FUN_180254e90(param_1 + 0x50,local_80,&local_f8,&local_188);
      local_98 = &local_188;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
        UNLOCK();
      }
      local_188 = (undefined8 ******)local_168;
      plStack_180 = plStack_160;
      local_e0 = 0;
      local_128 = ppppppuVar10;
      lStack_120 = lVar20;
      local_e8 = ppppppuVar18;
      FUN_180253fc0(param_1,&local_188,&local_e8,&local_128);
      uVar7 = local_70;
      ppppppuVar12 = local_138;
      local_128 = ppppppuVar17 + 6;
      for (pppppuVar9 = local_128; pppppuVar9 < *(undefined8 ******)(param_1 + 0xf8);
          pppppuVar9 = pppppuVar9 + 6) {
        ppppppuVar15 = (undefined8 ******)*pppppuVar9;
        ppppuVar13 = pppppuVar9[1];
        if (ppppppuVar18 == ppppppuVar10) {
          ppppuVar16 = (undefined8 ****)((longlong)ppppuVar13 - lVar20);
          if (ppppppuVar15 != ppppppuVar10) {
            ppppuVar16 = ppppuVar13;
          }
        }
        else {
          ppppppuVar15 = (undefined8 ******)
                         (((longlong)ppppppuVar15 - (longlong)ppppppuVar10) + (longlong)ppppppuVar18
                         );
          ppppuVar16 = ppppuVar13;
          if (ppppppuVar15 == ppppppuVar10) {
            ppppuVar16 = (undefined8 ****)((longlong)ppppuVar13 - lVar20);
          }
        }
        *pppppuVar9 = ppppppuVar15;
        pppppuVar9[1] = ppppuVar16;
        ppppppuVar15 = (undefined8 ******)pppppuVar9[2];
        ppppuVar13 = pppppuVar9[3];
        if (ppppppuVar18 != ppppppuVar10) {
          ppppppuVar15 = (undefined8 ******)
                         (((longlong)ppppppuVar15 - (longlong)ppppppuVar10) + (longlong)ppppppuVar18
                         );
        }
        if (ppppppuVar15 == ppppppuVar10) {
          ppppuVar13 = (undefined8 ****)((longlong)ppppuVar13 - lVar20);
        }
        pppppuVar9[2] = ppppppuVar15;
        pppppuVar9[3] = ppppuVar13;
      }
      ppppuVar13 = (undefined8 ****)((longlong)ppppppuVar18 - 1);
      pppppppuVar19 = local_80;
      if (0xf < local_68) {
        pppppppuVar19 = local_80[0];
      }
      local_d0 = local_70;
      local_90 = &local_188;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
        UNLOCK();
      }
      local_188 = (undefined8 ******)local_168;
      plStack_180 = plStack_160;
      local_88 = &local_188;
      local_c0 = 0;
      local_1a8 = &local_d8;
      local_158 = ppppppuVar17 + 1;
      local_d8 = pppppppuVar19;
      local_c8 = ppppuVar13;
      FUN_180254730(param_1 + 0x50,&local_148,param_1,&local_c8);
      ppppppuVar10 = local_188;
      local_b0 = uVar7;
      uStack_130 = (undefined4)uStack_140;
      uStack_12c = uStack_140._4_4_;
      local_a0 = 0;
      local_198[0] = 0;
      ppppuVar16 = local_188[1];
      local_b8 = pppppppuVar19;
      local_a8 = ppppuVar13;
      if ((undefined8 *****)ppppuVar16 == local_188[2]) {
        local_1a0 = &local_b8;
        local_1a8 = &local_138;
        FUN_180262680(local_188,ppppuVar16,local_198,&local_a8);
      }
      else {
        *(undefined1 *)ppppuVar16 = 0;
        ppppuVar16[1] = ppppuVar13;
        ppppuVar16[2] = (undefined8 ***)0x0;
        *(undefined4 *)(ppppuVar16 + 3) = (undefined4)local_148;
        *(undefined4 *)((longlong)ppppuVar16 + 0x1c) = local_148._4_4_;
        *(undefined4 *)(ppppuVar16 + 4) = (undefined4)uStack_140;
        *(undefined4 *)((longlong)ppppuVar16 + 0x24) = uStack_140._4_4_;
        ppppuVar16[5] = (undefined8 ***)0x0;
        ppppuVar16[6] = (undefined8 ***)0x0;
        ppppuVar16[7] = (undefined8 ***)0x0;
        ppppuVar16[8] = (undefined8 ***)0x0;
        local_110 = ppppuVar16;
        FUN_18001d080(ppppuVar16 + 5,pppppppuVar19,uVar7);
        ppppppuVar10[1] = ppppppuVar10[1] + 9;
      }
      FUN_18024f370(param_1);
      plVar6 = plStack_180;
      ppppppuVar10 = local_128;
      if (plStack_180 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_180 + 1;
        lVar20 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*plStack_180)(plStack_180);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          ppppppuVar10 = local_128;
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6);
            ppppppuVar10 = local_128;
          }
        }
      }
      for (; ppppppuVar18 = local_128, ppppppuVar10 < *(undefined8 ******)(param_1 + 0xf8);
          ppppppuVar10 = ppppppuVar10 + 6) {
        ppppuVar16 = *ppppppuVar10;
        *ppppppuVar10 =
             (undefined8 *****)(((longlong)local_148 - (longlong)ppppuVar13) + (longlong)ppppuVar16)
        ;
        ppppuVar14 = (undefined8 ****)((longlong)ppppppuVar10[1] + (longlong)uStack_140);
        if (ppppuVar16 != ppppuVar13) {
          ppppuVar14 = ppppppuVar10[1];
        }
        ppppppuVar10[1] = (undefined8 *****)ppppuVar14;
        ppppuVar16 = ppppppuVar10[3];
        if (ppppppuVar10[2] == (undefined8 *****)ppppuVar13) {
          ppppuVar16 = (undefined8 ****)((longlong)ppppuVar16 + (longlong)uStack_140);
        }
        ppppppuVar10[2] =
             (undefined8 *****)
             ((longlong)ppppppuVar10[2] + ((longlong)local_148 - (longlong)ppppuVar13));
        ppppppuVar10[3] = (undefined8 *****)ppppuVar16;
      }
      *ppppppuVar17 = (undefined8 *****)ppppuVar13;
      *local_158 = local_178;
      ppppppuVar17[2] = (undefined8 *****)((longlong)ppppppuVar12 - 1);
      ppppppuVar17[3] = (undefined8 *****)local_118;
      *(undefined1 *)((longlong)ppppppuVar17 + 0x22) = 1;
      FUN_18020e450(local_80);
      ppppppuVar17 = ppppppuVar18;
    }
    local_110 = (undefined8 ****)&local_148;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
      UNLOCK();
    }
    local_148 = local_168;
    uStack_140 = plStack_160;
    FUN_180253190(param_1,&local_148);
    plVar6 = plStack_160;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar20 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*plStack_160)(plStack_160);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
  }
  return;
}


