// 0x180040e20  FUN_180040e20
// size=114 thunk=false
// signature: undefined FUN_180040e20()
// status: ok


undefined8 FUN_180040e20(longlong param_1)

{
  longlong *plVar1;
  char *pcVar2;
  char *pcVar3;
  double dVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,2);
    pcVar2 = (char *)(**(code **)(*plVar1 + 0x158))(plVar1,3);
    pcVar3 = "bad argument";
    if (pcVar2 != (char *)0x0) {
      pcVar3 = pcVar2;
    }
    (**(code **)(*plVar1 + 0xa0))(plVar1,(int)dVar4,pcVar3);
  }
  return 0;
}


