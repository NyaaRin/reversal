// 0x1800e9f90  FUN_1800e9f90
// size=107 thunk=false
// signature: undefined FUN_1800e9f90()
// status: ok


undefined8 FUN_1800e9f90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,1);
    if (cVar1 == '\0') {
      cVar1 = '\x01';
    }
    else {
      cVar1 = (**(code **)(*plVar2 + 200))(plVar2,1);
    }
    DAT_1803e9474 = (uint)(cVar1 != '\0');
  }
  return 0;
}


