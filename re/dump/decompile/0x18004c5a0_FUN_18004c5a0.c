// 0x18004c5a0  FUN_18004c5a0
// size=199 thunk=false
// signature: undefined FUN_18004c5a0()
// status: ok


undefined8 FUN_18004c5a0(longlong param_1)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    fVar5 = DAT_180381384;
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      fVar5 = (float)dVar1;
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 == '\0') {
      fVar4 = 0.0;
    }
    else {
      dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      fVar4 = (float)dVar1;
    }
    FUN_18027f5b0(fVar4,fVar5);
  }
  return 0;
}


