// 0x180251430  FUN_180251430
// size=671 thunk=false
// signature: undefined FUN_180251430()
// status: ok


void FUN_180251430(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong *plStack_c0;
  undefined8 *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  ulonglong local_98 [2];
  undefined *local_88;
  undefined8 local_80;
  ulonglong local_78 [2];
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_d8 = 0;
  plStack_d0 = (longlong *)0x0;
  FUN_180253050(0,&local_d8,1);
  puVar10 = *(ulonglong **)(param_1 + 0xf0);
  while (puVar10 < *(ulonglong **)(param_1 + 0xf8)) {
    uVar9 = puVar10[2];
    uVar11 = *puVar10;
    bVar12 = uVar11 < uVar9;
    if (uVar11 == uVar9) {
      bVar12 = puVar10[1] < puVar10[3];
    }
    if (!bVar12) {
      uVar11 = uVar9;
    }
    local_b0 = &DAT_18033e92c;
    local_a8 = 1;
    local_68 = &local_c8;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
      UNLOCK();
    }
    local_c8 = local_d8;
    plStack_c0 = plStack_d0;
    local_60 = &local_c8;
    local_98[1] = 0;
    local_98[0] = uVar11;
    FUN_180254730(param_1 + 0x50,&local_e8,param_1,local_98,&local_b0);
    lVar5 = local_c8;
    local_88 = &DAT_18033e92c;
    local_80 = 1;
    local_58 = (undefined4)local_e8;
    uStack_54 = local_e8._4_4_;
    uStack_50 = (undefined4)uStack_e0;
    uStack_4c = uStack_e0._4_4_;
    local_78[1] = 0;
    local_f8[0] = 0;
    puVar4 = *(undefined1 **)(local_c8 + 8);
    local_78[0] = uVar11;
    if (puVar4 == *(undefined1 **)(local_c8 + 0x10)) {
      FUN_180262680(local_c8,puVar4,local_f8,local_78,&local_58,&local_88);
    }
    else {
      *puVar4 = 0;
      *(ulonglong *)(puVar4 + 8) = uVar11;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined4 *)(puVar4 + 0x18) = (undefined4)local_e8;
      *(undefined4 *)(puVar4 + 0x1c) = local_e8._4_4_;
      *(undefined4 *)(puVar4 + 0x20) = (undefined4)uStack_e0;
      *(undefined4 *)(puVar4 + 0x24) = uStack_e0._4_4_;
      *(undefined8 *)(puVar4 + 0x28) = 0;
      *(undefined8 *)(puVar4 + 0x30) = 0;
      *(undefined8 *)(puVar4 + 0x38) = 0;
      *(undefined8 *)(puVar4 + 0x40) = 0;
      local_b8 = (undefined8 *)puVar4;
      FUN_18001d080(puVar4 + 0x28,&DAT_18033e92c,1);
      *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x48;
    }
    FUN_18024f370(param_1);
    plVar6 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_c0)(plStack_c0);
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
    puVar10[1] = 0;
    puVar10[2] = uVar11;
    puVar10[3] = 0;
    *(undefined1 *)((longlong)puVar10 + 0x22) = 1;
    puVar10 = puVar10 + 6;
    for (puVar7 = puVar10; puVar7 < *(ulonglong **)(param_1 + 0xf8); puVar7 = puVar7 + 6) {
      uVar9 = *puVar7;
      *puVar7 = (local_e8 - uVar11) + uVar9;
      uVar8 = puVar7[1] + (longlong)uStack_e0;
      if (uVar9 != uVar11) {
        uVar8 = puVar7[1];
      }
      puVar7[1] = uVar8;
      uVar9 = puVar7[3];
      if (puVar7[2] == uVar11) {
        uVar9 = uVar9 + (longlong)uStack_e0;
      }
      puVar7[2] = puVar7[2] + (local_e8 - uVar11);
      puVar7[3] = uVar9;
    }
  }
  local_b8 = &local_e8;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
    UNLOCK();
  }
  local_e8 = local_d8;
  uStack_e0 = plStack_d0;
  FUN_180253190(param_1,&local_e8);
  plVar6 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d0 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
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


