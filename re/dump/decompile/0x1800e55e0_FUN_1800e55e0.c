// 0x1800e55e0  FUN_1800e55e0
// size=222 thunk=false
// signature: undefined FUN_1800e55e0()
// status: ok


undefined8 FUN_1800e55e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  float local_18;
  float local_14;
  float local_10;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();
      if (lVar2 != 0) {
        FUN_18001c430(lVar2,&local_18);
        (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_18);
        (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_14);
        (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_10);
        return 3;
      }
    }
    (**(code **)(*plVar1 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


