// 0x1802532f0  FUN_1802532f0
// size=459 thunk=false
// signature: undefined FUN_1802532f0()
// status: ok


void FUN_1802532f0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_78 = &local_88;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_48 = param_2;
  FUN_1802534c0(0,&local_88);
  puVar8 = *(ulonglong **)(param_1 + 0xf0);
  while (puVar8 < *(ulonglong **)(param_1 + 0xf8)) {
    puVar7 = puVar8 + 2;
    bVar11 = *puVar8 < *puVar7;
    if (*puVar8 == *puVar7) {
      bVar11 = puVar8[1] < puVar8[3];
    }
    puVar6 = puVar8;
    if (!bVar11) {
      puVar6 = puVar7;
    }
    local_58 = (undefined4)*puVar6;
    uStack_54 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_50 = (undefined4)puVar6[1];
    uStack_4c = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_78 = &local_88;
    if (param_2[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_88 = *param_2;
    uStack_80 = param_2[1];
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    FUN_180253e80(param_1,&local_68,&local_88,&local_38,param_3);
    *(undefined4 *)puVar8 = local_68;
    *(undefined4 *)((longlong)puVar8 + 4) = uStack_64;
    *(undefined4 *)(puVar8 + 1) = uStack_60;
    *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_5c;
    *(undefined4 *)puVar7 = local_68;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_64;
    *(undefined4 *)(puVar8 + 3) = uStack_60;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_5c;
    *(undefined1 *)((longlong)puVar8 + 0x22) = 1;
    uVar5 = CONCAT44(uStack_54,local_58);
    puVar8 = puVar8 + 6;
    for (puVar7 = puVar8; puVar7 < *(ulonglong **)(param_1 + 0xf8); puVar7 = puVar7 + 6) {
      uVar9 = puVar7[1];
      if (*puVar7 == uVar5) {
        uVar9 = (puVar7[1] - CONCAT44(uStack_4c,uStack_50)) + CONCAT44(uStack_5c,uStack_60);
      }
      lVar10 = CONCAT44(uStack_64,local_68) - uVar5;
      *puVar7 = lVar10 + *puVar7;
      puVar7[1] = uVar9;
      uVar9 = puVar7[3];
      if (puVar7[2] == uVar5) {
        uVar9 = (puVar7[3] - CONCAT44(uStack_4c,uStack_50)) + CONCAT44(uStack_5c,uStack_60);
      }
      puVar7[2] = puVar7[2] + lVar10;
      puVar7[3] = uVar9;
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}


