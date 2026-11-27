// 0x1800e9020  FUN_1800e9020
// size=256 thunk=false
// signature: undefined FUN_1800e9020()
// status: ok


undefined8 FUN_1800e9020(longlong param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  short sVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) {
    cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,1,3);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,2,3);
      if (cVar3 != '\0') {
        dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);
        dVar2 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);
        sVar4 = _fdclass((float)dVar1);
        if (sVar4 < 1) {
          sVar4 = _fdclass((float)dVar2);
          if (sVar4 < 1) {
            DAT_1803db648 = 0;
            DAT_1803db63c = 1;
            DAT_1803db640 = (float)dVar1;
            DAT_1803db644 = (float)dVar2;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}


