// 0x180050e90  FUN_180050e90
// size=118 thunk=false
// signature: undefined FUN_180050e90()
// status: ok


undefined8 FUN_180050e90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  float fVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 == '\0') {
      fVar4 = 0.0;
    }
    else {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      fVar4 = (float)dVar3;
    }
    FUN_1802a4950(0,fVar4);
  }
  return 0;
}


