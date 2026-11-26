// 0x1800560d0  FUN_1800560d0
// size=114 thunk=false
// signature: undefined FUN_1800560d0()
// status: ok


undefined8 FUN_1800560d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      *(int *)(DAT_1803fa608 + 4) = (int)dVar3;
    }
  }
  return 0;
}


