// 0x1801ecdc0  FUN_1801ecdc0
// size=308 thunk=false
// signature: undefined FUN_1801ecdc0()
// status: ok


undefined8 * FUN_1801ecdc0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  plVar1 = param_1 + 2;
  param_1[1] = param_2[1];
  if (plVar1 != param_2 + 2) {
    lVar3 = *plVar1;
    cVar2 = *(char *)((longlong)*(longlong **)(lVar3 + 8) + 0x19);
    plVar5 = *(longlong **)(lVar3 + 8);
    while (cVar2 == '\0') {
      FUN_180214c40(plVar1,plVar1,plVar5[2]);
      plVar4 = (longlong *)*plVar5;
      free(plVar5);
      plVar5 = plVar4;
      cVar2 = *(char *)((longlong)plVar4 + 0x19);
    }
    *(longlong *)(lVar3 + 8) = lVar3;
    *(longlong *)lVar3 = lVar3;
    *(longlong *)(lVar3 + 0x10) = lVar3;
    param_1[3] = 0;
    uVar7 = FUN_1802333c0(plVar1,*(undefined8 *)(param_2[2] + 8),*plVar1);
    *(undefined8 *)(*plVar1 + 8) = uVar7;
    plVar5 = (longlong *)*plVar1;
    param_1[3] = param_2[3];
    plVar4 = (longlong *)plVar5[1];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar4 + 0x19);
      plVar6 = (longlong *)*plVar4;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*plVar6 + 0x19);
        plVar4 = plVar6;
        plVar6 = (longlong *)*plVar6;
      }
      *plVar5 = (longlong)plVar4;
      lVar3 = *(longlong *)(*plVar1 + 8);
      cVar2 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x19);
      while (cVar2 == '\0') {
        lVar3 = *(longlong *)(lVar3 + 0x10);
        cVar2 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x19);
      }
      *(longlong *)(*plVar1 + 0x10) = lVar3;
      return param_1;
    }
    *plVar5 = (longlong)plVar5;
    *(longlong *)(*plVar1 + 0x10) = *plVar1;
  }
  return param_1;
}


