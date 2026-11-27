// 0x180250f70  FUN_180250f70
// size=585 thunk=false
// signature: undefined FUN_180250f70()
// status: ok


void FUN_180250f70(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  bool bVar12;
  bool bVar13;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined1 local_48 [32];
  
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  FUN_180253050(0,&local_b8,0);
  puVar11 = *(ulonglong **)(param_1 + 0xf0);
  do {
    if (*(ulonglong **)(param_1 + 0xf8) <= puVar11) {
      local_98 = &local_c8;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
        UNLOCK();
      }
      local_c8 = local_b8;
      plStack_c0 = plStack_b0;
      FUN_180253190(param_1,&local_c8);
      plVar6 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_b0)(plStack_b0);
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
    uVar4 = puVar11[2];
    uVar9 = *puVar11;
    bVar12 = uVar9 < uVar4;
    if (uVar9 == uVar4) {
      bVar12 = puVar11[1] < puVar11[3];
    }
    puVar7 = puVar11 + 2;
    if (bVar12) {
      puVar7 = puVar11;
    }
    uVar8 = *puVar7;
    uVar10 = puVar7[1];
    bVar12 = uVar9 < uVar4;
    bVar13 = uVar9 == uVar4;
    local_88 = uVar8;
    uStack_80 = uVar10;
    if (bVar13) {
      bVar12 = puVar11[1] < puVar11[3];
      bVar13 = puVar11[1] == puVar11[3];
      if (!bVar13) goto LAB_180251017;
      local_a8 = (undefined4)puVar11[2];
      uStack_a4 = *(undefined4 *)((longlong)puVar11 + 0x14);
      uStack_a0 = (undefined4)puVar11[3];
      uStack_9c = *(undefined4 *)((longlong)puVar11 + 0x1c);
      puVar7 = (ulonglong *)FUN_1802554b0(param_1 + 0x50,local_48,&local_a8,param_2);
    }
    else {
LAB_180251017:
      puVar7 = puVar11 + 2;
      if (!bVar12 && !bVar13) {
        puVar7 = puVar11;
      }
      local_78 = *puVar7;
      uStack_70 = puVar7[1];
      puVar7 = &local_78;
    }
    local_a8 = (undefined4)*puVar7;
    uStack_a4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_a0 = (undefined4)puVar7[1];
    uStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
    local_98 = &local_c8;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
      UNLOCK();
    }
    local_c8 = local_b8;
    plStack_c0 = plStack_b0;
    local_68 = local_a8;
    uStack_64 = uStack_a4;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    local_58 = uVar8;
    uStack_50 = uVar10;
    FUN_180253fc0(param_1,&local_c8,&local_58,&local_68);
    *puVar11 = uVar8;
    puVar11[1] = uVar10;
    puVar11[2] = uVar8;
    puVar11[3] = uVar10;
    *(undefined1 *)((longlong)puVar11 + 0x22) = 1;
    puVar11 = puVar11 + 6;
    lVar5 = CONCAT44(uStack_9c,uStack_a0);
    uVar4 = CONCAT44(uStack_a4,local_a8);
    puVar7 = puVar11;
    while (puVar7 < *(ulonglong **)(param_1 + 0xf8)) {
      uVar9 = *puVar7;
      uVar8 = puVar7[1];
      if (local_88 == uVar4) {
        if (uVar9 == uVar4) {
          uVar8 = (uVar8 - lVar5) + uStack_80;
        }
        *puVar7 = uVar9;
        puVar7[1] = uVar8;
        uVar9 = puVar7[3];
        if (puVar7[2] == uVar4) {
          uVar9 = (puVar7[3] - lVar5) + uStack_80;
        }
        puVar7[2] = puVar7[2];
        puVar7[3] = uVar9;
        puVar7 = puVar7 + 6;
      }
      else {
        uVar9 = (uVar9 - uVar4) + local_88;
        uVar10 = puVar7[3];
        if (uVar9 == uVar4) {
          uVar8 = uVar8 - lVar5;
        }
        puVar7[1] = uVar8;
        *puVar7 = uVar9;
        uVar9 = (puVar7[2] - uVar4) + local_88;
        if (uVar9 == uVar4) {
          uVar10 = uVar10 - lVar5;
        }
        puVar7[2] = uVar9;
        puVar7[3] = uVar10;
        puVar7 = puVar7 + 6;
      }
    }
  } while( true );
}


