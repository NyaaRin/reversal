// 0x1800e9200  FUN_1800e9200
// size=114 thunk=false
// signature: undefined FUN_1800e9200()
// status: ok


undefined8 FUN_1800e9200(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      FUN_1800e7a20("freecam","speed",(int)dVar3);
    }
  }
  return 0;
}


