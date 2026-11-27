// 0x18004c910  FUN_18004c910
// size=129 thunk=false
// signature: undefined FUN_18004c910()
// status: ok


undefined8 FUN_18004c910(longlong param_1)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      FUN_18027f740((float)dVar1);
      return 0;
    }
    FUN_18027f740(0);
  }
  return 0;
}


