// 0x1800e6d60  FUN_1800e6d60
// size=108 thunk=false
// signature: undefined FUN_1800e6d60()
// status: ok


undefined8 FUN_1800e6d60(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  double dVar4;
  
  plVar3 = (longlong *)FUN_180039770();
  piVar1 = DAT_1803ff960;
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != (int *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 != '\0') {
      dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      *piVar1 = (int)dVar4;
    }
  }
  return 0;
}


