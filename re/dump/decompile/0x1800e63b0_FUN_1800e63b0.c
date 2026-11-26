// 0x1800e63b0  FUN_1800e63b0
// size=91 thunk=false
// signature: undefined FUN_1800e63b0()
// status: ok


undefined8 FUN_1800e63b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2)) {
    dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();
      if (lVar2 != 0) {
        FUN_18001d810(lVar2);
      }
    }
  }
  return 0;
}


