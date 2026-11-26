// 0x1802534c0  FUN_1802534c0
// size=507 thunk=false
// signature: undefined FUN_1802534c0()
// status: ok


void FUN_1802534c0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  ulonglong uStack_30;
  
  local_58 = param_2;
  for (puVar10 = *(ulonglong **)(param_1 + 0xf0); puVar10 < *(ulonglong **)(param_1 + 0xf8);
      puVar10 = puVar10 + 6) {
    uVar4 = puVar10[2];
    uVar11 = *puVar10;
    bVar12 = uVar11 < uVar4;
    if ((uVar11 != uVar4) || (bVar12 = puVar10[1] < puVar10[3], puVar10[1] != puVar10[3])) {
      puVar7 = puVar10 + 2;
      if (bVar12) {
        puVar7 = puVar10;
      }
      uVar8 = *puVar7;
      uVar9 = puVar7[1];
      bVar13 = uVar11 < uVar4;
      bVar12 = false;
      if (uVar11 == uVar4) {
        bVar13 = puVar10[1] < puVar10[3];
        bVar12 = puVar10[1] == puVar10[3];
      }
      puVar7 = puVar10 + 2;
      if (!bVar13 && !bVar12) {
        puVar7 = puVar10;
      }
      local_68 = (undefined4)*puVar7;
      uStack_64 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_60 = (undefined4)puVar7[1];
      uStack_5c = *(undefined4 *)((longlong)puVar7 + 0xc);
      local_50 = &local_88;
      if (param_2[1] != 0) {
        LOCK();
        piVar1 = (int *)(param_2[1] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_88 = *param_2;
      uStack_80 = param_2[1];
      local_78 = uVar8;
      uStack_70 = uVar9;
      local_48 = local_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      local_38 = uVar8;
      uStack_30 = uVar9;
      FUN_180253fc0(param_1,&local_88,&local_38,&local_48);
      *puVar10 = uVar8;
      puVar10[1] = uVar9;
      puVar10[2] = uVar8;
      puVar10[3] = uVar9;
      *(undefined1 *)((longlong)puVar10 + 0x22) = 1;
      puVar7 = puVar10 + 6;
      lVar6 = CONCAT44(uStack_5c,uStack_60);
      uVar4 = CONCAT44(uStack_64,local_68);
      while (puVar7 < *(ulonglong **)(param_1 + 0xf8)) {
        uVar11 = *puVar7;
        uVar8 = puVar7[1];
        if (local_78 == uVar4) {
          if (uVar11 == uVar4) {
            uVar8 = (uVar8 - lVar6) + uStack_70;
          }
          *puVar7 = uVar11;
          puVar7[1] = uVar8;
          uVar11 = puVar7[3];
          if (puVar7[2] == uVar4) {
            uVar11 = (puVar7[3] - lVar6) + uStack_70;
          }
          puVar7[2] = puVar7[2];
          puVar7[3] = uVar11;
          puVar7 = puVar7 + 6;
        }
        else {
          uVar11 = (uVar11 - uVar4) + local_78;
          *puVar7 = uVar11;
          uVar9 = puVar7[3];
          if (uVar11 == uVar4) {
            uVar8 = uVar8 - lVar6;
          }
          puVar7[1] = uVar8;
          uVar11 = puVar7[2] + (local_78 - uVar4);
          if (uVar11 == uVar4) {
            uVar9 = uVar9 - lVar6;
          }
          puVar7[2] = uVar11;
          puVar7[3] = uVar9;
          puVar7 = puVar7 + 6;
        }
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}


