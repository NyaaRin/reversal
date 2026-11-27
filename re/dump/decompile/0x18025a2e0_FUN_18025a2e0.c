// 0x18025a2e0  FUN_18025a2e0
// size=726 thunk=false
// signature: undefined FUN_18025a2e0()
// status: ok


void FUN_18025a2e0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  bool bVar16;
  bool bVar17;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 *local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  FUN_180253050(param_1,&local_98,1);
  puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0x110) * 0x30 + *(longlong *)(param_1 + 0xf0));
  puVar1 = puVar15 + 2;
  bVar16 = *puVar15 < *puVar1;
  puVar9 = puVar15;
  if (*puVar15 == *puVar1) {
    if (puVar15[3] <= puVar15[1]) {
      puVar9 = puVar1;
    }
    bVar16 = puVar15[1] < puVar15[3];
    bVar17 = puVar15[1] == puVar15[3];
  }
  else {
    if (!bVar16) {
      puVar9 = puVar1;
    }
    bVar17 = false;
  }
  uVar5 = *puVar9;
  uVar6 = puVar9[1];
  puVar9 = puVar15;
  if (bVar16 || bVar17) {
    puVar9 = puVar1;
  }
  local_68 = (undefined4)*puVar9;
  uStack_64 = *(undefined4 *)((longlong)puVar9 + 4);
  uStack_60 = (undefined4)puVar9[1];
  uStack_5c = *(undefined4 *)((longlong)puVar9 + 0xc);
  local_88 = &local_a8;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  local_a8 = local_98;
  plStack_a0 = plStack_90;
  local_78 = uVar5;
  uStack_70 = uVar6;
  local_58 = local_68;
  uStack_54 = uStack_64;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  FUN_180253fc0(param_1,&local_a8,&local_78,&local_58);
  puVar9 = puVar15 + 6;
  lVar7 = CONCAT44(uStack_5c,uStack_60);
  uVar14 = CONCAT44(uStack_64,local_68);
  puVar10 = puVar9;
  while (puVar10 < *(ulonglong **)(param_1 + 0xf8)) {
    uVar12 = *puVar10;
    uVar11 = puVar10[1];
    if (uVar5 == uVar14) {
      if (uVar12 == uVar14) {
        uVar11 = (uVar11 - lVar7) + uVar6;
      }
      *puVar10 = uVar12;
      puVar10[1] = uVar11;
      uVar12 = puVar10[3];
      if (puVar10[2] == uVar14) {
        uVar12 = (puVar10[3] - lVar7) + uVar6;
      }
      puVar10[2] = puVar10[2];
      puVar10[3] = uVar12;
      puVar10 = puVar10 + 6;
    }
    else {
      uVar12 = (uVar12 - uVar14) + uVar5;
      uVar13 = puVar10[3];
      if (uVar12 == uVar14) {
        uVar11 = uVar11 - lVar7;
      }
      puVar10[1] = uVar11;
      *puVar10 = uVar12;
      uVar12 = (puVar10[2] - uVar14) + uVar5;
      if (uVar12 == uVar14) {
        uVar13 = uVar13 - lVar7;
      }
      puVar10[2] = uVar12;
      puVar10[3] = uVar13;
      puVar10 = puVar10 + 6;
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
  local_78 = uVar5;
  uStack_70 = uVar6;
  FUN_180253e80(param_1,&local_88,&local_a8,&local_78,param_2);
  *puVar15 = (ulonglong)local_88;
  puVar15[1] = uStack_80;
  *puVar1 = (ulonglong)local_88;
  puVar15[3] = uStack_80;
  *(undefined1 *)((longlong)puVar15 + 0x22) = 1;
  for (; puVar9 < *(ulonglong **)(param_1 + 0xf8); puVar9 = puVar9 + 6) {
    uVar14 = puVar9[1];
    if (*puVar9 == uVar5) {
      uVar14 = (puVar9[1] - uVar6) + uStack_80;
    }
    *puVar9 = (longlong)local_88 + (*puVar9 - uVar5);
    puVar9[1] = uVar14;
    uVar14 = puVar9[3];
    if (puVar9[2] == uVar5) {
      uVar14 = (puVar9[3] - uVar6) + uStack_80;
    }
    puVar9[2] = (longlong)local_88 + (puVar9[2] - uVar5);
    puVar9[3] = uVar14;
  }
  local_88 = &local_a8;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  local_a8 = local_98;
  plStack_a0 = plStack_90;
  FUN_180253190(param_1,&local_a8);
  plVar8 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_90 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  return;
}


