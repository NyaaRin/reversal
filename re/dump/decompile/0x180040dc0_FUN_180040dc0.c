// 0x180040dc0  FUN_180040dc0
// size=90 thunk=false
// signature: undefined FUN_180040dc0()
// status: ok


undefined8 FUN_180040dc0(longlong param_1)

{
  longlong *plVar1;
  char *pcVar2;
  char *pcVar3;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    pcVar2 = (char *)(**(code **)(*plVar1 + 0x158))(plVar1,2);
    pcVar3 = "bridge error";
    if (pcVar2 != (char *)0x0) {
      pcVar3 = pcVar2;
    }
    (**(code **)(*plVar1 + 0x90))(plVar1,pcVar3);
  }
  return 0;
}


