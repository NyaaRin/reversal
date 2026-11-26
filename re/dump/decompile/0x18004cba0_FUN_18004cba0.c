// 0x18004cba0  FUN_18004cba0
// size=219 thunk=false
// signature: undefined FUN_18004cba0()
// status: ok


undefined8 FUN_18004cba0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float local_res10;
  float local_res14;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
    fVar4 = 0.0;
    if (cVar1 == '\0') {
      fVar5 = 0.0;
    }
    else {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
      fVar5 = (float)dVar3;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      fVar4 = (float)dVar3;
    }
    local_res10 = fVar4;
    local_res14 = fVar5;
    FUN_18027f6a0(&local_res10);
  }
  return 0;
}


