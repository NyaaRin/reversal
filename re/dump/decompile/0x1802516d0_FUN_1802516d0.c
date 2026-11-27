// 0x1802516d0  FUN_1802516d0
// size=863 thunk=false
// signature: undefined FUN_1802516d0()
// status: ok


void FUN_1802516d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined8 *local_d8;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  ulonglong uStack_60;
  
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  FUN_180253050(0,&local_f8,1);
  puVar10 = *(ulonglong **)(param_1 + 0xf0);
  do {
    if (*(ulonglong **)(param_1 + 0xf8) <= puVar10) {
      local_d8 = &local_108;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
        UNLOCK();
      }
      local_108 = local_f8;
      uStack_100 = plStack_f0;
      FUN_180253190(param_1,&local_108);
      plVar6 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_f0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
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
    puVar8 = puVar10 + 2;
    uVar9 = *puVar8;
    uVar11 = *puVar10;
    bVar13 = uVar11 < uVar9;
    bVar14 = false;
    if (uVar11 == uVar9) {
      bVar13 = puVar10[1] < puVar10[3];
      bVar14 = puVar10[1] == puVar10[3];
    }
    puVar7 = puVar10;
    if (bVar13 || bVar14) {
      puVar7 = puVar8;
      uVar11 = uVar9;
    }
    if (puVar7[1] == 0) {
LAB_1802517d1:
      uVar9 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x50);
      uVar9 = (*(longlong *)(param_1 + 0x58) - lVar4 >> 5) * -0x5555555555555555;
      if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
LAB_180251a2a:
                    /* WARNING: Subroutine does not return */
        FUN_180262180();
      }
      if (uVar11 != uVar9 - 1) {
        do {
          uVar11 = uVar11 + 1;
          if (uVar9 - 1 <= uVar11) break;
          if (uVar9 < uVar11 || uVar9 - uVar11 == 0) goto LAB_180251a2a;
        } while (*(char *)(uVar11 * 0x60 + 0x22 + lVar4) == '\x03');
        goto LAB_1802517d1;
      }
      uVar9 = *(longlong *)(uVar11 * 0x60 + 8 + lVar4) - *(longlong *)(uVar11 * 0x60 + lVar4) >> 4;
    }
    local_a8 = &DAT_18033e92c;
    local_a0 = 1;
    local_78 = &local_e8;
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
      UNLOCK();
    }
    local_e8 = local_f8;
    plStack_e0 = plStack_f0;
    local_70 = &local_e8;
    local_c8 = uVar11;
    uStack_c0 = uVar9;
    local_b8 = uVar11;
    uStack_b0 = uVar9;
    FUN_180254730(param_1 + 0x50,&local_108,param_1,&local_c8,&local_a8);
    lVar4 = local_e8;
    local_98 = &DAT_18033e92c;
    local_90 = 1;
    local_118[0] = 0;
    puVar5 = *(undefined1 **)(local_e8 + 8);
    local_68 = uVar11;
    uStack_60 = uVar9;
    if (puVar5 == *(undefined1 **)(local_e8 + 0x10)) {
      FUN_180262680(local_e8,puVar5,local_118,&local_68,&local_c8,&local_98);
    }
    else {
      *puVar5 = 0;
      *(ulonglong *)(puVar5 + 8) = uVar11;
      *(ulonglong *)(puVar5 + 0x10) = uVar9;
      *(undefined4 *)(puVar5 + 0x18) = (undefined4)local_108;
      *(undefined4 *)(puVar5 + 0x1c) = local_108._4_4_;
      *(undefined4 *)(puVar5 + 0x20) = (undefined4)uStack_100;
      *(undefined4 *)(puVar5 + 0x24) = uStack_100._4_4_;
      *(undefined8 *)(puVar5 + 0x28) = 0;
      *(undefined8 *)(puVar5 + 0x30) = 0;
      *(undefined8 *)(puVar5 + 0x38) = 0;
      *(undefined8 *)(puVar5 + 0x40) = 0;
      local_d8 = (undefined8 *)puVar5;
      FUN_18001d080(puVar5 + 0x28,&DAT_18033e92c,1);
      *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 0x48;
    }
    FUN_18024f370(param_1);
    plVar6 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_e0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
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
    *puVar10 = uVar11;
    puVar10[1] = uVar9;
    local_88._0_4_ = (undefined4)uVar11;
    local_88._4_4_ = (undefined4)(uVar11 >> 0x20);
    uStack_80._0_4_ = (undefined4)uVar9;
    uStack_80._4_4_ = (undefined4)(uVar9 >> 0x20);
    *(undefined4 *)puVar8 = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar10 + 0x14) = local_88._4_4_;
    *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_80._4_4_;
    *(undefined1 *)((longlong)puVar10 + 0x22) = 1;
    puVar10 = puVar10 + 6;
    for (puVar8 = puVar10; local_88 = uVar11, uStack_80 = uVar9,
        puVar8 < *(ulonglong **)(param_1 + 0xf8); puVar8 = puVar8 + 6) {
      uVar12 = puVar8[1];
      if (*puVar8 == uVar11) {
        uVar12 = (puVar8[1] - uVar9) + (longlong)uStack_100;
      }
      *puVar8 = (local_108 - uVar11) + *puVar8;
      puVar8[1] = uVar12;
      uVar12 = puVar8[3];
      if (puVar8[2] == uVar11) {
        uVar12 = (puVar8[3] - uVar9) + (longlong)uStack_100;
      }
      puVar8[2] = puVar8[2] + (local_108 - uVar11);
      puVar8[3] = uVar12;
    }
  } while( true );
}


