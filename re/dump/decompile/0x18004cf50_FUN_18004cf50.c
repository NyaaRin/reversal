// 0x18004cf50  FUN_18004cf50
// size=119 thunk=false
// signature: undefined FUN_18004cf50()
// status: ok


undefined8 FUN_18004cf50(longlong param_1)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 == '\0') {
      fVar4 = 0.0;
    }
    else {
      dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      fVar4 = (float)dVar1;
    }
    FUN_18027f8a0(fVar4);
    DAT_1803ff7a8 = DAT_1803ff7a8 + 1;
  }
  return 0;
}


