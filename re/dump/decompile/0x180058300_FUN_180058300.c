// 0x180058300  FUN_180058300
// size=148 thunk=false
// signature: undefined FUN_180058300()
// status: ok


undefined8 FUN_180058300(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,6);
      if (cVar1 != '\0') {
        uVar3 = FUN_1800583a0(param_1,plVar2,1);
        return uVar3;
      }
    }
    uVar3 = FUN_1800583a0(param_1,plVar2,0);
    return uVar3;
  }
  return 0;
}


