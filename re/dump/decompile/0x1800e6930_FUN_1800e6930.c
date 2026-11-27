// 0x1800e6930  FUN_1800e6930
// size=75 thunk=false
// signature: undefined FUN_1800e6930()
// status: ok


undefined8 FUN_1800e6930(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
    dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    *(float *)(lVar1 + 0x18) = (float)dVar3;
  }
  return 0;
}


