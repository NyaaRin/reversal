// 0x180251a30  FUN_180251a30
// size=793 thunk=false
// signature: undefined FUN_180251a30()
// status: ok


void FUN_180251a30(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  ulonglong local_d8;
  longlong local_c8;
  longlong *plStack_c0;
  undefined8 *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  ulonglong local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  FUN_180253050(0,&local_e8,1);
  for (puVar13 = *(ulonglong **)(param_1 + 0xf0); puVar13 < *(ulonglong **)(param_1 + 0xf8);
      puVar13 = puVar13 + 6) {
    uVar12 = puVar13[2];
    uVar5 = *puVar13;
    puVar1 = puVar13 + 1;
    bVar15 = uVar5 < uVar12;
    if (uVar5 == uVar12) {
      uVar14 = puVar13[3];
      bVar7 = uVar14 < *puVar1;
      bVar15 = *puVar1 < uVar14;
    }
    else {
      bVar7 = !bVar15;
    }
    uVar14 = uVar5;
    if (!bVar15) {
      uVar14 = uVar12;
    }
    puVar10 = puVar13;
    if (!bVar7) {
      puVar10 = puVar13 + 2;
      uVar5 = uVar12;
    }
    uVar12 = puVar10[1];
    local_d8 = uVar12;
    for (; uVar14 <= uVar5; uVar14 = uVar14 + 1) {
      if (((((*puVar13 == puVar13[2]) && (*puVar1 == puVar13[3])) || (uVar14 != uVar5)) ||
          (bVar15 = uVar12 != 0, uVar12 = 0, bVar15)) &&
         (uVar12 = local_d8,
         *(longlong *)(uVar14 * 0x60 + 8 + *(longlong *)(param_1 + 0x50)) !=
         *(longlong *)(uVar14 * 0x60 + *(longlong *)(param_1 + 0x50)))) {
        local_b0 = &DAT_18037cb38;
        local_a8 = 1;
        local_68 = &local_c8;
        if (plStack_e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
          UNLOCK();
        }
        local_60 = &local_c8;
        local_90 = 0;
        local_c8 = local_e8;
        plStack_c0 = plStack_e0;
        local_98 = uVar14;
        FUN_180254730(param_1 + 0x50,&local_f8,param_1,&local_98,&local_b0);
        lVar8 = local_c8;
        local_88 = &DAT_18037cb38;
        local_80 = 1;
        local_58 = (undefined4)local_f8;
        uStack_54 = local_f8._4_4_;
        uStack_50 = (undefined4)uStack_f0;
        uStack_4c = uStack_f0._4_4_;
        local_70 = 0;
        local_108[0] = 0;
        puVar6 = *(undefined1 **)(local_c8 + 8);
        local_78 = uVar14;
        if (puVar6 == *(undefined1 **)(local_c8 + 0x10)) {
          FUN_180262680(local_c8,puVar6,local_108,&local_78,&local_58,&local_88);
        }
        else {
          *puVar6 = 0;
          *(ulonglong *)(puVar6 + 8) = uVar14;
          *(undefined8 *)(puVar6 + 0x10) = 0;
          *(undefined4 *)(puVar6 + 0x18) = (undefined4)local_f8;
          *(undefined4 *)(puVar6 + 0x1c) = local_f8._4_4_;
          *(undefined4 *)(puVar6 + 0x20) = (undefined4)uStack_f0;
          *(undefined4 *)(puVar6 + 0x24) = uStack_f0._4_4_;
          *(undefined8 *)(puVar6 + 0x28) = 0;
          *(undefined8 *)(puVar6 + 0x30) = 0;
          *(undefined8 *)(puVar6 + 0x38) = 0;
          *(undefined8 *)(puVar6 + 0x40) = 0;
          local_b8 = (undefined8 *)puVar6;
          FUN_18001d080(puVar6 + 0x28,&DAT_18037cb38,1);
          *(longlong *)(lVar8 + 8) = *(longlong *)(lVar8 + 8) + 0x48;
        }
        FUN_18024f370(param_1);
        plVar9 = plStack_c0;
        puVar10 = puVar13;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_c0 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_c0)(plStack_c0);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
          }
        }
        for (; uVar12 = local_d8, puVar10 < *(ulonglong **)(param_1 + 0xf8); puVar10 = puVar10 + 6)
        {
          uVar12 = *puVar10;
          *puVar10 = (local_f8 - uVar14) + uVar12;
          uVar11 = puVar10[1] + (longlong)uStack_f0;
          if (uVar12 != uVar14) {
            uVar11 = puVar10[1];
          }
          puVar10[1] = uVar11;
          uVar12 = puVar10[3];
          if (puVar10[2] == uVar14) {
            uVar12 = uVar12 + (longlong)uStack_f0;
          }
          puVar10[2] = puVar10[2] + (local_f8 - uVar14);
          puVar10[3] = uVar12;
        }
      }
    }
  }
  local_b8 = &local_f8;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
    UNLOCK();
  }
  local_f8 = local_e8;
  uStack_f0 = plStack_e0;
  FUN_180253190(param_1,&local_f8);
  plVar9 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_e0 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  return;
}


