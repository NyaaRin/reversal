// 0x180253190  FUN_180253190
// size=346 thunk=false
// signature: undefined FUN_180253190()
// status: ok


undefined8 FUN_180253190(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_28;
  longlong lStack_20;
  
  if ((((longlong *)*param_2)[1] - *(longlong *)*param_2 >> 3) * -0x71c71c71c71c71c7 != 0) {
    plVar3 = (longlong *)(param_1 + 0xf0);
    FUN_180254360(plVar3,param_1 + 0x50);
    lVar5 = *param_2;
    if ((longlong *)(lVar5 + 0x40) != plVar3) {
      FUN_180261900((longlong *)(lVar5 + 0x40),*plVar3,
                    (*(longlong *)(param_1 + 0xf8) - *plVar3 >> 4) * -0x5555555555555555);
    }
    *(undefined8 *)(lVar5 + 0x58) = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)(param_1 + 0x110);
    if (param_2[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_28 = *param_2;
    lStack_20 = param_2[1];
    FUN_180256930(param_1 + 0x118,&local_28);
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
    return 1;
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return 0;
}


