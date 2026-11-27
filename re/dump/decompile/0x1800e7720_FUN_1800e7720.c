// 0x1800e7720  FUN_1800e7720
// size=135 thunk=false
// signature: undefined FUN_1800e7720()
// status: ok


undefined8 FUN_1800e7720(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      DAT_1803db4a4 = (uint)(longlong)dVar3;
      if (0x17 < DAT_1803db4a4) {
        DAT_1803db4a4 = 0x17;
      }
      return 0;
    }
    DAT_1803db4a4 = 1;
  }
  return 0;
}


