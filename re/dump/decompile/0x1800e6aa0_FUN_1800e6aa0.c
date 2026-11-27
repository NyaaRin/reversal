// 0x1800e6aa0  FUN_1800e6aa0
// size=70 thunk=false
// signature: undefined FUN_1800e6aa0()
// status: ok


undefined8 FUN_1800e6aa0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
    dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    *(int *)(lVar1 + 0x20) = (int)dVar3;
  }
  return 0;
}


