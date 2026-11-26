// 0x1800e61a0  FUN_1800e61a0
// size=166 thunk=false
// signature: undefined FUN_1800e61a0()
// status: ok


undefined8 FUN_1800e61a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
      lVar4 = *plVar1;
    }
    else {
      lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();
      lVar4 = *plVar1;
      if (lVar2 != 0) {
        piVar3 = (int *)FUN_18001dfb0(lVar2);
        (**(code **)(lVar4 + 0xf0))(plVar1,(double)*piVar3);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


