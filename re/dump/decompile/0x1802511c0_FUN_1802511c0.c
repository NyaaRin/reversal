// 0x1802511c0  FUN_1802511c0
// size=623 thunk=false
// signature: undefined FUN_1802511c0()
// status: ok


void FUN_1802511c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 *local_88;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  FUN_180253050(0,&local_98,1);
  puVar11 = *(ulonglong **)(param_1 + 0xf0);
  lVar14 = 0;
  do {
    if (*(ulonglong **)(param_1 + 0xf8) <= puVar11) {
      local_88 = &local_a8;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
        UNLOCK();
      }
      local_a8 = local_98;
      plStack_a0 = plStack_90;
      FUN_180253190(param_1,&local_a8);
      plVar6 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_90 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_90)(plStack_90);
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
      return;
    }
    puVar8 = puVar11 + 2;
    uVar9 = *puVar8;
    uVar13 = *puVar11;
    bVar16 = uVar13 < uVar9;
    if (uVar13 == uVar9) {
      bVar5 = puVar11[3] < puVar11[1];
      bVar16 = puVar11[1] < puVar11[3];
    }
    else {
      bVar5 = !bVar16;
    }
    uVar12 = uVar13;
    if (!bVar16) {
      uVar12 = uVar9;
    }
    puVar7 = puVar11;
    if (!bVar5) {
      puVar7 = puVar8;
      uVar13 = uVar9;
    }
    lVar15 = lVar14;
    if (puVar7[1] != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
      uVar9 = (*(longlong *)(param_1 + 0x58) - lVar4 >> 5) * -0x5555555555555555;
      if (uVar9 < uVar13 || uVar9 - uVar13 == 0) {
LAB_18025142a:
                    /* WARNING: Subroutine does not return */
        FUN_180262180();
      }
      if (uVar13 == uVar9 - 1) {
        lVar15 = *(longlong *)(uVar13 * 0x60 + 8 + lVar4) - *(longlong *)(uVar13 * 0x60 + lVar4) >>
                 4;
      }
      else {
        do {
          uVar13 = uVar13 + 1;
          if (uVar9 - 1 <= uVar13) break;
          if (uVar9 < uVar13 || uVar9 - uVar13 == 0) goto LAB_18025142a;
        } while (*(char *)(uVar13 * 0x60 + 0x22 + lVar4) == '\x03');
      }
    }
    local_88 = &local_a8;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    local_a8 = local_98;
    plStack_a0 = plStack_90;
    local_68[1] = 0;
    local_78 = uVar13;
    local_70 = lVar15;
    local_68[0] = uVar12;
    FUN_180253fc0(param_1,&local_a8,local_68,&local_78);
    uStack_50 = 0;
    *puVar11 = uVar12;
    puVar11[1] = 0;
    local_58._0_4_ = (undefined4)uVar12;
    local_58._4_4_ = (undefined4)(uVar12 >> 0x20);
    *(undefined4 *)puVar8 = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar11 + 0x14) = local_58._4_4_;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x22) = 1;
    puVar11 = puVar11 + 6;
    puVar8 = puVar11;
    while (local_58 = uVar12, puVar8 < *(ulonglong **)(param_1 + 0xf8)) {
      uVar9 = *puVar8;
      uVar10 = puVar8[1];
      if (uVar12 == uVar13) {
        if (uVar9 == uVar13) {
          uVar10 = uVar10 - lVar15;
        }
        *puVar8 = uVar9;
        puVar8[1] = uVar10;
        uVar9 = puVar8[3];
        if (puVar8[2] == uVar13) {
          uVar9 = puVar8[3] - lVar15;
        }
        puVar8[2] = puVar8[2];
        puVar8[3] = uVar9;
        puVar8 = puVar8 + 6;
      }
      else {
        uVar9 = uVar9 + (uVar12 - uVar13);
        *puVar8 = uVar9;
        if (uVar9 == uVar13) {
          uVar10 = uVar10 - lVar15;
        }
        puVar8[1] = uVar10;
        uVar10 = puVar8[3];
        uVar9 = (puVar8[2] - uVar13) + uVar12;
        if (uVar9 == uVar13) {
          uVar10 = uVar10 - lVar15;
        }
        puVar8[2] = uVar9;
        puVar8[3] = uVar10;
        puVar8 = puVar8 + 6;
      }
    }
  } while( true );
}


