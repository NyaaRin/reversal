// 0x1800e74f0  FUN_1800e74f0
// size=108 thunk=false
// signature: undefined FUN_1800e74f0()
// status: ok


undefined8 FUN_1800e74f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
    dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
    *(short *)(lVar1 + 0x30) = (short)(int)dVar3;
    dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
    *(short *)(lVar1 + 0x32) = (short)(int)dVar3;
  }
  return 0;
}


