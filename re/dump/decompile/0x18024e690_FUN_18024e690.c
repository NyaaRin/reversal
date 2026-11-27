// 0x18024e690  FUN_18024e690
// size=365 thunk=false
// signature: undefined FUN_18024e690()
// status: ok


void FUN_18024e690(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  bool bVar14;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  undefined8 *local_18;
  
  FUN_18024e800();
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_180253050(param_1,&local_28,1);
  local_18 = &local_38;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  local_38 = local_28;
  plStack_30 = plStack_20;
  FUN_1802534c0(param_1,&local_38);
  uVar5 = *(ulonglong *)(param_1 + 0x110);
  uVar11 = (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4) *
           -0x5555555555555555;
  if (uVar11 < uVar5 || uVar11 - uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  puVar13 = (ulonglong *)(uVar5 * 0x30 + *(longlong *)(param_1 + 0xf0));
  puVar1 = puVar13 + 2;
  bVar14 = *puVar13 < *puVar1;
  puVar12 = puVar13;
  if (*puVar13 == *puVar1) {
    if (puVar13[3] <= puVar13[1]) {
      puVar12 = puVar1;
    }
    bVar14 = puVar13[1] < puVar13[3];
  }
  else if (!bVar14) {
    puVar12 = puVar1;
  }
  uVar5 = *puVar12;
  uVar6 = *(undefined4 *)((longlong)puVar12 + 4);
  uVar11 = puVar12[1];
  uVar7 = *(undefined4 *)((longlong)puVar12 + 0xc);
  puVar12 = puVar13;
  if (!bVar14) {
    puVar12 = puVar1;
  }
  uVar8 = puVar12[1];
  *puVar13 = *puVar12;
  puVar13[1] = uVar8;
  *(int *)puVar1 = (int)uVar5;
  *(undefined4 *)((longlong)puVar13 + 0x14) = uVar6;
  *(int *)(puVar13 + 3) = (int)uVar11;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x22) = 1;
  local_18 = &local_38;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  local_38 = local_28;
  plStack_30 = plStack_20;
  FUN_180253190(param_1,&local_38);
  plVar10 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  return;
}


