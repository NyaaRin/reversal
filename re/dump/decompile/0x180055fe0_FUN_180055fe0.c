// 0x180055fe0  FUN_180055fe0
// size=118 thunk=false
// signature: undefined FUN_180055fe0()
// status: ok


undefined8 FUN_180055fe0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != (float *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      *DAT_1803fa608 = (float)dVar3;
    }
  }
  return 0;
}


